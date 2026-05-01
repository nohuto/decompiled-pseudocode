/*
 * XREFs of wil::details::ScopeExitFn__lambda_74cba1598c74e9964b4ff60781bad054___::_ScopeExitFn__lambda_74cba1598c74e9964b4ff60781bad054___ @ 0x18042FBDC
 * Callers:
 *     __lambda_074356edb2a7ba011f5805cd99c0b22b_::operator()_::_1_::dtor$1 @ 0x1800E4F24 (__lambda_074356edb2a7ba011f5805cd99c0b22b_--operator()_--_1_--dtor$1.c)
 *     _CSingleViewShellExperience::WaitForWindowReadyForPresentation_::_1_::dtor$1 @ 0x1800E4F64 (_CSingleViewShellExperience--WaitForWindowReadyForPresentation_--_1_--dtor$1.c)
 * Callees:
 *     ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1800125EC (-Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_74cba1598c74e9964b4ff60781bad054___::_ScopeExitFn__lambda_74cba1598c74e9964b4ff60781bad054___(
        __int64 a1)
{
  const unsigned __int16 *StringRawBuffer; // rbx
  const unsigned __int16 *v3; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 8) + 16LL), 0LL);
    v3 = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 8) + 8LL), 0LL);
    SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(
      *(SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation **)a1,
      v3,
      StringRawBuffer);
  }
}
