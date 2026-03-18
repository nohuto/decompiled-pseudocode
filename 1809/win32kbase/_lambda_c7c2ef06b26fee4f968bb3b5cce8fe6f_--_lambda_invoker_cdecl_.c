/*
 * XREFs of _lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_::_lambda_invoker_cdecl_ @ 0x1C0094860
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C003D37C (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     ?SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C007C090 (-SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_::_lambda_invoker_cdecl_(__int64 a1, struct CInpPushLock *a2)
{
  CDeviceIdentity *v2; // rcx
  struct DEVICEINFO *i; // rbx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  CInpLockSharedIfNeeded::CInpLockSharedIfNeeded((CInpLockSharedIfNeeded *)&v4, a2);
  for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    CDeviceIdentity::SendNewIdentityCreated(v2, *((struct RawInputManagerDeviceObject **)i + 4));
  if ( !v5 )
  {
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
  }
}
