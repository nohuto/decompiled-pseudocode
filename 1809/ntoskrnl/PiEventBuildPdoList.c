/*
 * XREFs of PiEventBuildPdoList @ 0x1406EECC8
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     IopEnumerateRelations @ 0x1406EF354 (IopEnumerateRelations.c)
 *     PnpAllocateCriticalMemory @ 0x1406EFE04 (PnpAllocateCriticalMemory.c)
 *     PnpFinalizeVetoedRemove @ 0x1408341FC (PnpFinalizeVetoedRemove.c)
 */

__int64 __fastcall PiEventBuildPdoList(
        unsigned int **a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        __int64 *a5,
        _BYTE *a6,
        __int64 a7)
{
  _BYTE *v8; // r15
  _BYTE *v10; // r12
  int v12; // r13d
  unsigned int v13; // ebx
  __int64 v14; // r8
  __int64 CriticalMemory; // r14
  __int64 v16; // rcx
  _DWORD *v17; // r8
  int v18; // eax
  __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  v8 = a6;
  v10 = (_BYTE *)a7;
  v12 = (int)a1;
  v13 = 0;
  v14 = 8LL * **a1;
  *a6 = 0;
  *v10 = 0;
  CriticalMemory = PnpAllocateCriticalMemory(a2, 512LL, v14, 1315991120LL);
  if ( CriticalMemory )
  {
    *a4 = 0;
    a7 = 1LL;
    while ( 1 )
    {
      do
      {
        if ( !(unsigned __int8)IopEnumerateRelations(v12, (unsigned int)&a7, (unsigned int)&v22, (unsigned int)&a6, 0LL) )
          goto LABEL_14;
      }
      while ( !(_DWORD)a6 && a2 != 4 && a2 );
      v16 = v22;
      if ( v22 )
        v17 = *(_DWORD **)(*(_QWORD *)(v22 + 312) + 40LL);
      else
        v17 = 0LL;
      if ( a2 == 2 )
        goto LABEL_12;
      if ( a2 )
        break;
LABEL_21:
      if ( (v17[99] & 0x1000) != 0 )
      {
        v21 = 1LL;
        goto LABEL_25;
      }
      if ( v17[75] == 785 )
      {
        v21 = 5LL;
LABEL_25:
        PnpFinalizeVetoedRemove(a3, v21, v17 + 10);
        v13 = -2147483608;
        goto LABEL_14;
      }
LABEL_13:
      v19 = (unsigned int)*a4;
      *(_QWORD *)(CriticalMemory + 8 * v19) = v16;
      *a4 = v19 + 1;
    }
    v18 = v17[142];
    if ( v18 == 1 )
    {
      *v8 = 1;
    }
    else if ( v18 )
    {
      *v10 = 1;
    }
LABEL_12:
    if ( (a2 & 0xFFFFFFFB) != 0 )
      goto LABEL_13;
    goto LABEL_21;
  }
  v13 = -1073741670;
LABEL_14:
  result = v13;
  *a5 = CriticalMemory;
  return result;
}
