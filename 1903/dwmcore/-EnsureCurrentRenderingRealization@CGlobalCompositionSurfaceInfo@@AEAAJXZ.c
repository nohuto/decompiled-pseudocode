/*
 * XREFs of ?EnsureCurrentRenderingRealization@CGlobalCompositionSurfaceInfo@@AEAAJXZ @ 0x18003BD9C
 * Callers:
 *     ?GetRenderingRealizationNoRef@CGlobalCompositionSurfaceInfo@@UEAAPEAVCBitmapRealization@@XZ @ 0x18003BD60 (-GetRenderingRealizationNoRef@CGlobalCompositionSurfaceInfo@@UEAAPEAVCBitmapRealization@@XZ.c)
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z @ 0x18025CF30 (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z.c)
 * Callees:
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18003C534 (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::EnsureCurrentRenderingRealization(
        CGlobalCompositionSurfaceInfo *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // ecx
  int CompositionSurfaceRenderingRealization; // eax
  int updated; // eax
  int v7; // r9d
  unsigned int v8; // [rsp+20h] [rbp-F8h]
  _DWORD v9[8]; // [rsp+30h] [rbp-E8h] BYREF
  HGDIOBJ ho; // [rsp+50h] [rbp-C8h]

  v2 = 0;
  memset_0(v9, 0, 0xC8uLL);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)g_pComposition + 69) + 104LL))(*((_QWORD *)g_pComposition
                                                                                                 + 69)) )
  {
    v2 = -2003292412;
    v8 = 382;
LABEL_12:
    v7 = v2;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v7, v8, 0LL);
    goto LABEL_7;
  }
  CompositionSurfaceRenderingRealization = NtQueryCompositionSurfaceRenderingRealization(*((_QWORD *)this + 4), v9);
  if ( CompositionSurfaceRenderingRealization < 0 )
  {
    v2 = CompositionSurfaceRenderingRealization | 0x10000000;
    v8 = 389;
    goto LABEL_12;
  }
  if ( v9[0] == 200 && v9[1] == *((_DWORD *)this + 10) && v9[2] == *((_DWORD *)this + 11) )
  {
    updated = CGlobalCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(this, (const struct CSM_SURFACE_UPDATE *)v9);
    v2 = updated;
    if ( updated < 0 )
    {
      v7 = updated;
      v8 = 397;
      goto LABEL_14;
    }
  }
LABEL_7:
  if ( (unsigned __int64)ho >= 2 )
    DeleteObject(ho);
  return v2;
}
