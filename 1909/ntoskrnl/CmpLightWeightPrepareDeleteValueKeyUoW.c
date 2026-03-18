/*
 * XREFs of CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14083D328
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1406E3990 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14008D0A0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400CFDB0 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpMarkValueDataDirty @ 0x140633D4C (CmpMarkValueDataDirty.c)
 *     CmpFindNameInList @ 0x140634354 (CmpFindNameInList.c)
 *     CmpInitializeValueNameString @ 0x14063630C (CmpInitializeValueNameString.c)
 *     CmpRemoveValueFromList @ 0x1406DDCEC (CmpRemoveValueFromList.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x1406E3F14 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406E3F60 (CmpLightWeightCreateSetValueData.c)
 *     HvMarkCellDirty @ 0x140839B58 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpLightWeightPrepareDeleteValueKeyUoW(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4)
{
  _DWORD *v4; // rbx
  __int64 v6; // rax
  ULONG_PTR v7; // rdi
  int v8; // ebx
  _DWORD *TransientPoolWithTag; // rax
  _DWORD *v10; // rsi
  __int64 v11; // r12
  PVOID PoolWithTag; // rax
  void *v13; // r15
  unsigned int v14; // r12d
  __int64 v15; // r13
  _QWORD v17[3]; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v18; // [rsp+90h] [rbp+48h] BYREF
  unsigned int v19; // [rsp+98h] [rbp+50h] BYREF
  int v20; // [rsp+A0h] [rbp+58h] BYREF
  int v21; // [rsp+A4h] [rbp+5Ch]
  int v22; // [rsp+A8h] [rbp+60h] BYREF
  int v23; // [rsp+ACh] [rbp+64h]

  v4 = *(_DWORD **)(a1 + 104);
  v23 = 0;
  v21 = 0;
  v17[0] = 0LL;
  v17[1] = 0LL;
  v6 = *(_QWORD *)(a1 + 48);
  v22 = -1;
  v20 = -1;
  v18 = v4;
  v7 = *(_QWORD *)(v6 + 32);
  if ( !v4 )
  {
    v8 = CmpLightWeightCreateSetValueData(a1, &v18, a3, a4);
    if ( v8 < 0 )
      return (unsigned int)v8;
    v4 = v18;
    CmpLightWeightUpdateSharedSetValueData((__int64)v18, *(_QWORD *)(a1 + 48));
    --*v4;
  }
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x10uLL, 0x77554D43u, a4);
  v10 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    *((_QWORD *)TransientPoolWithTag + 1) = 0LL;
    *TransientPoolWithTag = -1;
    TransientPoolWithTag[1] = -1;
    v11 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, *(unsigned int *)(a1 + 88), &v22);
    if ( v11 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
      v13 = PoolWithTag;
      if ( PoolWithTag
        && (CmpInitializeValueNameString(v11, (__int64)v17, (__int64)PoolWithTag),
            CmpFindNameInList(v7, v4 + 1, (unsigned __int16 *)v17, 0, &v19, &v18)) )
      {
        v14 = (unsigned int)v18;
        v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v7 + 8))(v7, (unsigned int)v18, &v20);
        if ( CmpMarkValueDataDirty(v7, v15) && HvMarkCellDirty(v7, v14, 0) )
        {
          v8 = CmpRemoveValueFromList(v7, v19, v4 + 1);
          if ( v8 >= 0 )
          {
            v10[1] = v14;
            v8 = 0;
            *(_QWORD *)(a1 + 112) = v10;
            v10 = 0LL;
          }
        }
        else
        {
          v8 = -1073741443;
        }
        if ( v15 )
          (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v20);
      }
      else
      {
        v8 = -1073741670;
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(v7 + 16))(v7, &v22);
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
    }
    else
    {
      v8 = -1073741670;
    }
    if ( v10 )
      CmpFreeTransientPoolWithTag(v10, 0x77554D43u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
