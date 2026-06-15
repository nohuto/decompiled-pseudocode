/*
 * XREFs of ?AcquireReference@CCaptureNotifier@@QEAA?AV?$shared_ptr@VCCaptureReference@@@std@@K_N0@Z @ 0x1800FB5F8
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180021D80 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180042C04 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180057130 (--2@YAPEAX_K@Z.c)
 *     ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z @ 0x1800FB834 (-UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z.c)
 */

// Hidden C++ exception states: #wind=4
volatile signed __int32 **__fastcall CCaptureNotifier::AcquireReference(
        _Mtx_t a1,
        volatile signed __int32 **a2,
        unsigned int a3,
        char a4,
        char a5)
{
  volatile signed __int32 **v7; // rdi
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *v10; // rbx
  char v11; // r15
  volatile signed __int32 *v12; // r14
  int v13; // eax
  __int64 v14; // r9
  std::_Ref_count_base *v15; // rcx
  int v16; // eax
  const char *v17; // r9
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  v9 = (volatile signed __int32 *)operator new(0x20uLL);
  v10 = v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 2) = 1;
    *((_DWORD *)v9 + 3) = 1;
    *(_QWORD *)v9 = &std::_Ref_count_obj<CCaptureReference>::`vftable';
    *((_QWORD *)v9 + 2) = a1;
    *((_DWORD *)v9 + 6) = a3;
    *((_BYTE *)v9 + 28) = a4;
    v11 = a5;
    *((_BYTE *)v9 + 29) = a5;
  }
  else
  {
    v10 = 0LL;
    v11 = a5;
  }
  v12 = v10 + 4;
  v13 = _Mtx_lock(a1);
  try
  {
    if ( v13 )
      std::_Throw_C_error(v13);
    LOBYTE(v14) = a4;
    CCaptureNotifier::UpdateAudioCaptureStatus(a1, 0LL, a3, v14, v11);
    if ( v10 )
    {
      _InterlockedIncrement(v10 + 2);
      v12 = v10 + 4;
    }
    *v7 = v12;
    v15 = (std::_Ref_count_base *)v7[1];
    v7[1] = v10;
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
    v16 = _Mtx_unlock(a1);
    if ( v16 )
      std::_Throw_C_error(v16);
    if ( v10 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v10);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x1B3,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      v17);
    return a2;
  }
  return v7;
}
