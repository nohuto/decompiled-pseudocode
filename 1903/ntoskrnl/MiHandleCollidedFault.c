/*
 * XREFs of MiHandleCollidedFault @ 0x140100C88
 * Callers:
 *     MiResolveTransitionFault @ 0x1400D23E0 (MiResolveTransitionFault.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140054F90 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140091A00 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiObtainProtoReference @ 0x1400A6590 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x1400A7374 (MiAddLockedPageCharge.c)
 *     MiIssueFlowThroughFault @ 0x140100DF4 (MiIssueFlowThroughFault.c)
 *     MiWaitForCollidedFaultComplete @ 0x140100F44 (MiWaitForCollidedFaultComplete.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011CE00 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiHandleCollidedFault(__int64 a1, int a2, ULONG_PTR a3, ULONG_PTR a4, __int64 a5, _DWORD *a6)
{
  int v8; // ebp
  __int64 v9; // rax
  _DWORD *v10; // rbx
  __int64 result; // rax
  int v12; // r9d
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // al
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  int v21; // [rsp+50h] [rbp+8h] BYREF

  v8 = a1;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    v13 = -1073741663;
LABEL_22:
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a3 )
      MiUnlockProtoPoolPage(a3, 0x11u);
    *a6 = 0;
    return v13;
  }
  v9 = *(_QWORD *)(a1 + 16);
  if ( (v9 & 1) != 0 )
  {
    v20 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_BYTE *)v20 == 5 && (*(_DWORD *)(v20 + 56) & 4) != 0 )
    {
      v13 = -1073741801;
      goto LABEL_22;
    }
  }
  if ( (*(_BYTE *)(a1 + 69) & 8) != 0 )
  {
    v13 = -1073740748;
    goto LABEL_22;
  }
  v10 = a6;
  result = MiIssueFlowThroughFault(a1, a2, a3, (unsigned int)*(_QWORD *)a4 - 32, a4, a5, (__int64)a6);
  if ( *v10 != 1 )
  {
    if ( (*(_QWORD *)(a4 + 40) & 0x200000000000000LL) != 0 )
      MiObtainProtoReference(a3, 1);
    v21 = 0;
    LOBYTE(v12) = 2;
    v13 = MiWaitForCollidedFaultComplete(v8, a4, a3, v12, (__int64)&v21);
    if ( v21 == 1 )
      return v13;
    if ( a3 )
    {
      MiLockNestedPageAtDpcInline(a3);
      MiRemoveLockedPageChargeAndDecRef(a3, v14, v15, v16);
      _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( v13 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( a3 )
        MiUnlockProtoPoolPage(a3, 0x11u);
      return v13;
    }
    MiAddLockedPageCharge(a4, 3);
    v17 = *(_BYTE *)(a4 + 34);
    *(_QWORD *)(a4 + 24) ^= (*(_QWORD *)(a4 + 24) ^ (*(_QWORD *)(a4 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_BYTE *)(a4 + 34) = v17 & 0xF8 | 6;
    MiRemoveLockedPageChargeAndDecRef(a4, 0x3FFFFFFFFFFFFFFFLL, v18, v19);
    return 0LL;
  }
  return result;
}
