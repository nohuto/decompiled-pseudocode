/*
 * XREFs of MiCheckHoldFaultForHotPatch @ 0x1402B945C
 * Callers:
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockFaultWorkingSet @ 0x1402BF8B4 (MiUnlockFaultWorkingSet.c)
 */

__int64 __fastcall MiCheckHoldFaultForHotPatch(__int64 a1, unsigned __int64 *a2)
{
  __int64 v3; // r12
  unsigned int v4; // r14d
  _QWORD *v5; // rsi
  _QWORD *v6; // rax
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  LONG *SharedVm; // rbx
  _QWORD v12[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v14; // [rsp+42h] [rbp-1Eh]
  int v15; // [rsp+44h] [rbp-1Ch]
  _QWORD v16[3]; // [rsp+48h] [rbp-18h] BYREF

  v3 = a2[7];
  if ( (a2[1] & 2) == 0 || *a2 > 0x7FFFFFFEFFFFLL )
    return 0LL;
  v4 = 0;
  v5 = (_QWORD *)(a1 + 24);
  while ( 1 )
  {
    v6 = (_QWORD *)*v5;
    if ( (_QWORD *)*v5 == v5 )
      break;
    v7 = *a2;
    do
    {
      v8 = v6;
      if ( v7 >= v6[2] && v7 <= v6[3] )
        break;
      v6 = (_QWORD *)*v6;
    }
    while ( v6 != v5 );
    if ( v6 == v5 )
      break;
    Object = 0;
    v15 = 0;
    v16[1] = v16;
    v16[0] = v16;
    v14 = 6;
    v9 = (_QWORD *)v8[5];
    if ( (_QWORD *)*v9 != v8 + 4 )
      __fastfail(3u);
    v12[1] = v8[5];
    v12[0] = v8 + 4;
    *v9 = v12;
    v8[5] = v12;
    MiUnlockFaultWorkingSet(a2 + 7);
    v4 = 1;
    KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
    SharedVm = MiGetSharedVm(v3);
    ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    *((_BYTE *)a2 + 69) |= 1u;
  }
  return v4;
}
