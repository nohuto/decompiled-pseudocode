/*
 * XREFs of MiCheckHoldFaultForHotPatch @ 0x1402CF738
 * Callers:
 *     MiUserFault @ 0x1400CADF0 (MiUserFault.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiUnlockFaultWorkingSet @ 0x1402D8F78 (MiUnlockFaultWorkingSet.c)
 */

__int64 __fastcall MiCheckHoldFaultForHotPatch(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // r12
  unsigned int v5; // r14d
  _QWORD *v6; // rsi
  _QWORD *v7; // rax
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  LONG *SharedVm; // rbx
  _QWORD v13[6]; // [rsp+30h] [rbp-30h] BYREF

  memset(v13, 0, 0x28uLL);
  v4 = a2[7];
  if ( (a2[1] & 2) == 0 || *a2 > 0x7FFFFFFEFFFFLL )
    return 0LL;
  v5 = 0;
  v6 = (_QWORD *)(a1 + 24);
  while ( 1 )
  {
    v7 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 == v6 )
      break;
    v8 = *a2;
    do
    {
      v9 = v7;
      if ( v8 >= v7[2] && v8 <= v7[3] )
        break;
      v7 = (_QWORD *)*v7;
    }
    while ( v7 != v6 );
    if ( v7 == v6 )
      break;
    LOWORD(v13[2]) = 0;
    HIDWORD(v13[2]) = 0;
    v13[4] = &v13[3];
    v13[3] = &v13[3];
    BYTE2(v13[2]) = 6;
    v10 = (_QWORD *)v9[5];
    if ( (_QWORD *)*v10 != v9 + 4 )
      __fastfail(3u);
    v13[1] = v9[5];
    v13[0] = v9 + 4;
    *v10 = v13;
    v9[5] = v13;
    MiUnlockFaultWorkingSet(a2 + 7);
    v5 = 1;
    KeWaitForSingleObject(&v13[2], WrKernel, 0, 0, 0LL);
    SharedVm = MiGetSharedVm(v4);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    *((_BYTE *)a2 + 69) |= 1u;
  }
  return v5;
}
