/*
 * XREFs of ??_GCCaptureReference@@QEAAPEAXI@Z @ 0x1800FB558
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VCCaptureReference@@@std@@EEAAXXZ @ 0x1800FB9B0 (-_Destroy@-$_Ref_count_obj@VCCaptureReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z @ 0x1800FB834 (-UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z.c)
 */

// Hidden C++ exception states: #wind=2
CCaptureReference *__fastcall CCaptureReference::`scalar deleting destructor'(CCaptureReference *this)
{
  char v2; // si
  char v3; // bp
  unsigned int v4; // r14d
  struct _Mtx_internal_imp_t *v5; // rdi
  int v6; // eax
  __int64 v7; // r9
  int v8; // eax
  char v10; // [rsp+20h] [rbp-28h]

  v2 = *((_BYTE *)this + 13);
  v3 = *((_BYTE *)this + 12);
  v4 = *((_DWORD *)this + 2);
  v5 = *(struct _Mtx_internal_imp_t **)this;
  v6 = _Mtx_lock(*(_Mtx_t *)this);
  if ( v6 )
    std::_Throw_C_error(v6);
  v10 = v2;
  LOBYTE(v7) = v3;
  CCaptureNotifier::UpdateAudioCaptureStatus(v5, 1LL, v4, v7, v10);
  v8 = _Mtx_unlock(v5);
  if ( v8 )
    std::_Throw_C_error(v8);
  return this;
}
