/*
 * XREFs of wil::details::lambda_call__lambda_69c6a245683e8b3826955f0b0e934ed8___::_lambda_call__lambda_69c6a245683e8b3826955f0b0e934ed8___ @ 0x18012737C
 * Callers:
 *     _PhoneCallAudio::OnPhoneCallStarted_::_1_::dtor$1 @ 0x1801284D2 (_PhoneCallAudio--OnPhoneCallStarted_--_1_--dtor$1.c)
 * Callees:
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x18012B95C (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_69c6a245683e8b3826955f0b0e934ed8___::_lambda_call__lambda_69c6a245683e8b3826955f0b0e934ed8___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    DynamicAudioEndpointManager::RemoveRule(
      g_DynamicAudioEndpointManager,
      *(struct IAudioProcess **)(*(_QWORD *)a1 + 136LL),
      *(_QWORD *)(*(_QWORD *)a1 + 144LL));
    result = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 144LL) = 0LL;
  }
  return result;
}
