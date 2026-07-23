/*
 * XREFs of MiHandleCollidedFault @ 0x140003C24
 * Callers:
 *     MiResolveTransitionFault @ 0x14003AC00 (MiResolveTransitionFault.c)
 * Callees:
 *     MiIssueFlowThroughFault @ 0x140003D9C (MiIssueFlowThroughFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140003F00 (MiWaitForCollidedFaultComplete.c)
 *     MiObtainProtoReference @ 0x14002DD34 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x14002DFAC (MiAddLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030B20 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockNestedPageAtDpcInline @ 0x140120FD4 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiHandleCollidedFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  int v8; // ebp
  __int64 v9; // rax
  _DWORD *v10; // rbx
  __int64 result; // rax
  int v12; // r9d
  __int64 v13; // rdx
  unsigned int v14; // ebx
  char v15; // al
  unsigned __int64 v16; // rax
  int v17; // [rsp+50h] [rbp+8h] BYREF

  v8 = a1;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    v14 = -1073741663;
LABEL_22:
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
    {
      LOBYTE(a2) = 17;
      MiUnlockProtoPoolPage(a3, a2);
    }
    *a6 = 0;
    return v14;
  }
  v9 = *(_QWORD *)(a1 + 16);
  if ( (v9 & 1) != 0 )
  {
    v16 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v16 == 5 && (*(_DWORD *)(v16 + 56) & 4) != 0 )
      goto LABEL_21;
  }
  if ( (*(_BYTE *)(a1 + 69) & 8) != 0 )
  {
    v14 = -1073740748;
    goto LABEL_22;
  }
  if ( (*(_BYTE *)(a4 + 34) & 8) != 0 )
  {
LABEL_21:
    v14 = -1073741801;
    goto LABEL_22;
  }
  v10 = a6;
  result = MiIssueFlowThroughFault(a1, a2, a3, (unsigned int)*(_QWORD *)a4 - 32, a4, a5, (__int64)a6);
  if ( *v10 == 1 )
    return result;
  if ( (*(_QWORD *)(a4 + 40) & 0x200000000000000LL) != 0 )
    MiObtainProtoReference(a3, 1LL);
  v17 = 0;
  LOBYTE(v12) = 2;
  v14 = MiWaitForCollidedFaultComplete(v8, a4, a3, v12, (__int64)&v17);
  if ( v17 != 1 )
  {
    if ( a3 )
    {
      MiLockNestedPageAtDpcInline(a3);
      MiRemoveLockedPageChargeAndDecRef(a3);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( !v14 )
    {
      MiAddLockedPageCharge(a4, 3LL);
      v15 = *(_BYTE *)(a4 + 34);
      *(_QWORD *)(a4 + 24) ^= (*(_QWORD *)(a4 + 24) ^ (*(_QWORD *)(a4 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_BYTE *)(a4 + 34) = v15 & 0xF8 | 6;
      MiRemoveLockedPageChargeAndDecRef(a4);
      return 0LL;
    }
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
    {
      LOBYTE(v13) = 17;
      MiUnlockProtoPoolPage(a3, v13);
    }
  }
  return v14;
}
