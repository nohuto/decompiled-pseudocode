/*
 * XREFs of CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140805610
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x140695BDC (CmpProcessLightWeightUOW.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpMarkValueDataDirty @ 0x1405AF578 (CmpMarkValueDataDirty.c)
 *     CmpInitializeValueNameString @ 0x1405B046C (CmpInitializeValueNameString.c)
 *     CmpRemoveValueFromList @ 0x1405B04E8 (CmpRemoveValueFromList.c)
 *     CmpFindNameInList @ 0x1405D162C (CmpFindNameInList.c)
 *     HvpMarkCellDirty @ 0x1405FBC04 (HvpMarkCellDirty.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x140694A38 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmpLightWeightCreateSetValueData @ 0x1406967C8 (CmpLightWeightCreateSetValueData.c)
 */

__int64 __fastcall CmpLightWeightPrepareDeleteValueKeyUoW(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 v3; // rax
  ULONG_PTR v4; // rsi
  int v5; // ebx
  _DWORD *TransientPoolWithTag; // rax
  _DWORD *v7; // rdi
  ULONG_PTR v8; // r12
  _WORD *PoolWithTag; // rax
  void *v10; // r15
  unsigned int v11; // r12d
  __int64 v12; // r13
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp+48h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+50h] BYREF
  int v17; // [rsp+A0h] [rbp+58h] BYREF
  int v18; // [rsp+A4h] [rbp+5Ch]
  int v19; // [rsp+A8h] [rbp+60h] BYREF
  int v20; // [rsp+ACh] [rbp+64h]

  v1 = *(_DWORD **)(a1 + 104);
  v20 = 0;
  v18 = 0;
  v3 = *(_QWORD *)(a1 + 48);
  v19 = -1;
  v17 = -1;
  BugCheckParameter3 = (ULONG_PTR)v1;
  v4 = *(_QWORD *)(v3 + 24);
  if ( !v1 )
  {
    v5 = CmpLightWeightCreateSetValueData(a1, &BugCheckParameter3);
    if ( v5 < 0 )
      return (unsigned int)v5;
    v1 = (_DWORD *)BugCheckParameter3;
    CmpLightWeightUpdateSharedSetValueData(BugCheckParameter3, *(_QWORD *)(a1 + 48));
    --*v1;
  }
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x10uLL, 0x77554D43u);
  v7 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    *(_QWORD *)TransientPoolWithTag = 0LL;
    *((_QWORD *)TransientPoolWithTag + 1) = 0LL;
    *TransientPoolWithTag = -1;
    TransientPoolWithTag[1] = -1;
    v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v4 + 8))(v4, *(unsigned int *)(a1 + 88), &v19);
    if ( v8 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x8000uLL, 0x62534D43u);
      v10 = PoolWithTag;
      if ( PoolWithTag
        && (CmpInitializeValueNameString(v8, (__int64)v14, PoolWithTag),
            CmpFindNameInList(v4, (_DWORD)v1 + 4, (int)v14, 0, (__int64)&v16, (__int64)&BugCheckParameter3)) )
      {
        v11 = BugCheckParameter3;
        v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v4 + 8))(v4, (unsigned int)BugCheckParameter3, &v17);
        if ( CmpMarkValueDataDirty(v4, v12) && HvpMarkCellDirty(v4, v11, 0) )
        {
          v5 = CmpRemoveValueFromList(v4, v16, v1 + 1);
          if ( v5 >= 0 )
          {
            v7[1] = v11;
            v5 = 0;
            *(_QWORD *)(a1 + 112) = v7;
            v7 = 0LL;
          }
        }
        else
        {
          v5 = -1073741443;
        }
        if ( v12 )
          (*(void (__fastcall **)(ULONG_PTR, int *))(v4 + 16))(v4, &v17);
      }
      else
      {
        v5 = -1073741670;
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(v4 + 16))(v4, &v19);
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
    }
    else
    {
      v5 = -1073741670;
    }
    if ( v7 )
      CmpFreeTransientPoolWithTag(v7, 0x77554D43u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
