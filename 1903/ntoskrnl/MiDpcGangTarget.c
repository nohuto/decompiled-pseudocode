/*
 * XREFs of MiDpcGangTarget @ 0x1402E85C0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiDoGangAssignment @ 0x1402E845C (MiDoGangAssignment.c)
 *     MiGetGangAssignment @ 0x1402E8760 (MiGetGangAssignment.c)
 */

__int64 __fastcall MiDpcGangTarget(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 CoreProcessorSet; // r8
  int GangAssignment; // ebp
  signed __int32 v10; // eax
  unsigned int v11; // esi
  __int64 result; // rax
  signed __int32 v13; // eax
  unsigned int v14; // ebx
  int i; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v16[40]; // [rsp+28h] [rbp-40h] BYREF
  int v17; // [rsp+78h] [rbp+10h] BYREF

  memset(v16, 0, 0x20uLL);
  if ( KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0] != *(_DWORD *)(a2 + 116) )
    goto LABEL_8;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->Group != *(_WORD *)(a2 + 128) )
    goto LABEL_8;
  CoreProcessorSet = CurrentPrcb->CoreProcessorSet;
  if ( (CoreProcessorSet & *(_QWORD *)(a2 + 120)) == 0
    || (_m_prefetchw((const void *)(a2 + 120)),
        (_InterlockedAnd64((volatile signed __int64 *)(a2 + 120), ~CoreProcessorSet) & CurrentPrcb->CoreProcessorSet) == 0) )
  {
    CurrentPrcb = 0LL;
  }
  if ( CurrentPrcb )
    GangAssignment = MiGetGangAssignment(a2, v16);
  else
LABEL_8:
    GangAssignment = 0;
  if ( (*(_DWORD *)(a2 + 108) & 2) != 0 )
  {
    v10 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v11 = ~v10 & 0x80000000;
    if ( (v10 & 0x7FFFFFFF) != 0 )
    {
      v17 = 0;
      while ( (*(_DWORD *)a4 & 0x80000000) != v11 )
        KeYieldProcessorEx(&v17);
    }
    else
    {
      *(_DWORD *)a4 = v11 | *(_DWORD *)(a4 + 4);
    }
  }
  if ( GangAssignment )
    MiDoGangAssignment(a2, (__int64)v16);
  result = *(unsigned int *)(a2 + 108);
  if ( (result & 2) != 0 )
  {
    v13 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v14 = ~v13 & 0x80000000;
    if ( (v13 & 0x7FFFFFFF) != 0 )
    {
      for ( i = 0; ; KeYieldProcessorEx(&i) )
      {
        result = *(_DWORD *)a4 & 0x80000000;
        if ( (_DWORD)result == v14 )
          break;
      }
    }
    else
    {
      result = v14 | *(_DWORD *)(a4 + 4);
      *(_DWORD *)a4 = result;
    }
  }
  _InterlockedDecrement(a3);
  return result;
}
