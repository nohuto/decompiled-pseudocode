/*
 * XREFs of ?GetPresentStatistics@CHwCompSwapChainTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x180200A10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::GetPresentStatistics(
        CHwCompSwapChainTarget *this,
        struct DXGI_FRAME_STATISTICS *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx

  v2 = *((_QWORD *)this + 1);
  v3 = -2003304307;
  if ( v2 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, struct DXGI_FRAME_STATISTICS *))(*(_QWORD *)v2 + 128LL))(v2, a2);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x14Fu);
  }
  return v3;
}
