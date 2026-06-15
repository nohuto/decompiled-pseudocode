/*
 * XREFs of wil::details::lambda_call__lambda_2ee1cb8ac5ad2a83c54e31e39de95e98___::_lambda_call__lambda_2ee1cb8ac5ad2a83c54e31e39de95e98___ @ 0x180064794
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002A450 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$8 @ 0x18006CBB0 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_2ee1cb8ac5ad2a83c54e31e39de95e98___::_lambda_call__lambda_2ee1cb8ac5ad2a83c54e31e39de95e98___(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    *((_BYTE *)a1 + 16) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)**a1 + 232LL))(**a1, a1[1]);
  }
  return result;
}
