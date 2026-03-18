/*
 * XREFs of ?GetPresentStatistics@CHwCompSwapChainTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS@@@Z @ 0x18023E670
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::GetPresentStatistics(
        CHwCompSwapChainTarget *this,
        struct DXGI_FRAME_STATISTICS *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  signed int v4; // eax
  __int64 v5; // rcx

  v2 = *((_QWORD *)this + 1);
  v3 = -2003304307;
  if ( v2 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, struct DXGI_FRAME_STATISTICS *))(*(_QWORD *)v2 + 128LL))(v2, a2);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x14Cu, 0LL);
  }
  return v3;
}
