/*
 * XREFs of ?GetFrameStatisticsInternal@CDWMSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1800BD7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18005A24C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::GetFrameStatisticsInternal(CDWMSwapChain *this, struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  signed int v2; // eax
  __int64 v3; // rcx
  int v4; // ebx
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, struct DXGI_FRAME_STATISTICS_DWM *))(**((_QWORD **)this + 53) + 160LL))(
         *((_QWORD *)this + 53),
         a2);
  v6 = v2;
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, &dword_1802C0198, 2u, v2, 0x2D0u, 0LL);
  TranslateDXGIorD3DErrorInContext(v4, 0, &v6);
  return v6;
}
