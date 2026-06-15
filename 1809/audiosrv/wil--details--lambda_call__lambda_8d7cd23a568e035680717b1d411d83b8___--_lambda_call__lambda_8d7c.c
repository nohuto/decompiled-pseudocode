/*
 * XREFs of wil::details::lambda_call__lambda_8d7cd23a568e035680717b1d411d83b8___::_lambda_call__lambda_8d7cd23a568e035680717b1d411d83b8___ @ 0x18011AE20
 * Callers:
 *     _PhoneCallAudio::DoSetPhoneCallAudioActiveEndpoint_::_1_::dtor$1 @ 0x18011B443 (_PhoneCallAudio--DoSetPhoneCallAudioActiveEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x18011F1FC (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_8d7cd23a568e035680717b1d411d83b8___::_lambda_call__lambda_8d7cd23a568e035680717b1d411d83b8___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    DynamicAudioEndpointManager::RemoveRule(
      g_DynamicAudioEndpointManager,
      *(struct IAudioProcess **)(*(_QWORD *)a1 + 136LL),
      *(_QWORD *)(*(_QWORD *)a1 + 152LL));
    result = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 152LL) = 0LL;
  }
  return result;
}
