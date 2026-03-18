/*
 * XREFs of DestroyKL @ 0x1C012A5F4
 * Callers:
 *     ?DestroyKLIfSupported@@YAXPEAUtagKL@@@Z @ 0x1C00B0C80 (-DestroyKLIfSupported@@YAXPEAUtagKL@@@Z.c)
 *     CleanupKeyboardLayouts @ 0x1C012A510 (CleanupKeyboardLayouts.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     HMAssignmentUnlock @ 0x1C0037430 (HMAssignmentUnlock.c)
 *     HMFreeObject @ 0x1C005F1D0 (HMFreeObject.c)
 *     DestroyKF @ 0x1C012A5BC (DestroyKF.c)
 */

__int64 __fastcall DestroyKL(_QWORD *a1)
{
  _QWORD *v2; // rax
  __int64 i; // rdi
  __int64 *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx

  *(_QWORD *)(a1[3] + 16LL) = a1[2];
  *(_QWORD *)(a1[2] + 24LL) = a1[3];
  if ( HMAssignmentUnlock(a1 + 6) )
  {
    v2 = (_QWORD *)HMAssignmentUnlock(a1 + 7);
    if ( v2 )
      DestroyKF(v2);
  }
  if ( a1[12] )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 22); i = (unsigned int)(i + 1) )
    {
      v4 = (__int64 *)(a1[12] + 8 * i);
      if ( !*v4 )
        break;
      v5 = (_QWORD *)HMAssignmentUnlock(v4);
      if ( v5 )
        DestroyKF(v5);
    }
    Win32FreePool(a1[12]);
  }
  v6 = a1[10];
  if ( v6 )
    Win32FreePool(v6);
  if ( a1 == (_QWORD *)gpKL )
    gpKL = 0LL;
  return HMFreeObject(a1);
}
