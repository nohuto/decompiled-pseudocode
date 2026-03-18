/*
 * XREFs of ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C003D37C
 * Callers:
 *     ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C003CDF0 (-EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C004AB20 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     _lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_::_lambda_invoker_cdecl_ @ 0x1C0094860 (_lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

CInpLockSharedIfNeeded *__fastcall CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
        CInpLockSharedIfNeeded *this,
        struct CInpPushLock *a2)
{
  bool v3; // al

  *(_QWORD *)this = &CBaseInput::_sLock;
  v3 = qword_1C01D0C68 == (_QWORD)KeGetCurrentThread();
  *((_BYTE *)this + 8) = v3;
  if ( !v3 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  }
  return this;
}
