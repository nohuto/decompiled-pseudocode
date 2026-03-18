/*
 * XREFs of DestroyKL @ 0x1C0063B44
 * Callers:
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C0060914 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     ?DestroyKLIfSupported@@YAXPEAUtagKL@@@Z @ 0x1C0063B30 (-DestroyKLIfSupported@@YAXPEAUtagKL@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     HMFreeObject @ 0x1C002DB60 (HMFreeObject.c)
 *     HMAssignmentUnlock @ 0x1C002FD40 (HMAssignmentUnlock.c)
 *     DestroyKF @ 0x1C0063BD0 (DestroyKF.c)
 */

__int64 __fastcall DestroyKL(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  void *v4; // rax
  __int64 v5; // rcx
  __int64 i; // rdi
  __int64 *v8; // rcx
  void *v9; // rax

  *(_QWORD *)(a1[3] + 16LL) = a1[2];
  *(_QWORD *)(a1[2] + 24LL) = a1[3];
  if ( HMAssignmentUnlock(a1 + 6) )
  {
    v4 = (void *)HMAssignmentUnlock(a1 + 7);
    if ( v4 )
      DestroyKF(v4);
  }
  if ( a1[12] )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 22); i = (unsigned int)(i + 1) )
    {
      v8 = (__int64 *)(a1[12] + 8 * i);
      if ( !*v8 )
        break;
      v9 = (void *)HMAssignmentUnlock(v8);
      if ( v9 )
        DestroyKF(v9);
    }
    Win32FreePool(a1[12]);
  }
  v5 = a1[10];
  if ( v5 )
    Win32FreePool(v5);
  if ( a1 == (_QWORD *)gpKL )
    gpKL = 0LL;
  return HMFreeObject(a1, v2, v3);
}
