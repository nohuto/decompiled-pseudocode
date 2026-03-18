/*
 * XREFs of ?GetCurrentDXGIResource@CDirectFlipInfo@@IEAAJU_LUID@@PEAPEAUIDXGIResource@@@Z @ 0x180179178
 * Callers:
 *     ?Activate@CDirectFlipInfo@@UEAAJXZ @ 0x180178910 (-Activate@CDirectFlipInfo@@UEAAJXZ.c)
 * Callees:
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x18009AF04 (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x1800A1078 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirectFlipInfo::GetCurrentDXGIResource(
        CCompositionSurfaceInfo **this,
        struct _LUID a2,
        struct IDXGIResource **a3)
{
  DWORD LowPart; // ebx
  CBitmapRealization *RenderingRealizationNoRef; // rax
  __int64 HighPart; // rcx
  struct _LUID AdapterLuid; // rax
  _QWORD *v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  struct _LUID v13; // [rsp+40h] [rbp+8h] BYREF
  struct _LUID v14; // [rsp+48h] [rbp+10h]

  v14 = a2;
  *a3 = 0LL;
  LowPart = a2.LowPart;
  RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(this[4]);
  if ( RenderingRealizationNoRef
    && (AdapterLuid = CBitmapRealization::GetAdapterLuid(RenderingRealizationNoRef, &v13),
        *(_DWORD *)AdapterLuid.LowPart == LowPart)
    && (HighPart = (unsigned int)v14.HighPart, *(_DWORD *)(*(_QWORD *)&AdapterLuid + 4LL) == v14.HighPart) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD *, struct IDXGIResource **, _QWORD))(*v8 + 56LL))(v8, a3, 0LL);
    v11 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1A3u);
  }
  else
  {
    v11 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(HighPart, 0LL, 0, -2147467259, 0x1A7u);
  }
  return v11;
}
