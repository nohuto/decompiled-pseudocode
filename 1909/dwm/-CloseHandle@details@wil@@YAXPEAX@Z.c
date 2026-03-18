/*
 * XREFs of ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x140006C7C
 * Callers:
 *     BlackScreenDiagnostics::GetDwmFrontBufferBitsColor @ 0x140006F1C (BlackScreenDiagnostics--GetDwmFrontBufferBitsColor.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1400083A4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::CloseHandle(wil::details *this, void *a2)
{
  void *v2; // rdx
  unsigned int v3; // r8d
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !CloseHandle(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, v2, v3, v4);
    __debugbreak();
  }
}
