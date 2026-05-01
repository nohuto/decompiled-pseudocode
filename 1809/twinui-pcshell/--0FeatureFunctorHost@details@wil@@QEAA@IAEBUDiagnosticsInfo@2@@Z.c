/*
 * XREFs of ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x18008C9F4
 * Callers:
 *     wil::details::RunFeatureDispatch__lambda_d6345a2b433034ec221583a2ac3cef15__&___ptr64_ @ 0x180137EE0 (wil--details--RunFeatureDispatch__lambda_d6345a2b433034ec221583a2ac3cef15__-___ptr64_.c)
 *     ??0AssistantLightWNFListener@Lighting@TwinUI@@QEAA@XZ @ 0x1803996F0 (--0AssistantLightWNFListener@Lighting@TwinUI@@QEAA@XZ.c)
 *     ??0AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18039A3A8 (--0AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 *     ??1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ @ 0x18039A5F4 (--1AssistantLightManager@Lighting@TwinUI@@QEAA@XZ.c)
 * Callees:
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1800568F0 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 */

wil::details::FeatureFunctorHost *__fastcall wil::details::FeatureFunctorHost::FeatureFunctorHost(
        wil::details::FeatureFunctorHost *this,
        BOOL a2,
        const struct DiagnosticsInfo *a3)
{
  wil::details::FeatureFunctorHost *result; // rax

  *(_QWORD *)this = &wil::details::FeatureFunctorHost::`vftable';
  wil::ThreadErrorContext::ThreadErrorContext((wil::details::FeatureFunctorHost *)((char *)this + 8), a2);
  *((_QWORD *)this + 3) = a3;
  result = this;
  *((_DWORD *)this + 8) = a2;
  return result;
}
