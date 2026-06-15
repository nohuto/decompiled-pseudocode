/*
 * XREFs of wil::details::lambda_call__lambda_07c301b2241b013fe505e322440b218b___::_lambda_call__lambda_07c301b2241b013fe505e322440b218b___ @ 0x1800D5978
 * Callers:
 *     _CAudioSessionManager::CreateAudioSession_::_1_::dtor$9 @ 0x1800701A0 (_CAudioSessionManager--CreateAudioSession_--_1_--dtor$9.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_07c301b2241b013fe505e322440b218b___::_lambda_call__lambda_07c301b2241b013fe505e322440b218b___(
        __int64 a1)
{
  _QWORD *v1; // rax
  struct ISessionInternalEvents *v2; // rdx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = *(_QWORD **)a1;
    v2 = g_PolicyEventsHandler;
    *(_BYTE *)(a1 + 8) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, struct ISessionInternalEvents *))(*(_QWORD *)*v1 + 232LL))(*v1, v2);
  }
  return result;
}
