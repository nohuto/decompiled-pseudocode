/*
 * XREFs of ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000A8C4
 * Callers:
 *     ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00D93E0 (-AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C027E0F0 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000A924 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 */

__int64 __fastcall DMMVIDEOSIGNALMODE::Initialize(
        DMMVIDEOSIGNALMODE *this,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v8; // rax

  v4 = DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(a2);
  v6 = v4;
  if ( v4 < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v8 + 24) = a2;
    *(_QWORD *)(v8 + 32) = v6;
    WdLogEvent5_WdError(v8);
    return (unsigned int)v6;
  }
  else
  {
    result = 0LL;
    *(_OWORD *)this = *(_OWORD *)&a2->VideoStandard;
    *((_OWORD *)this + 1) = *(_OWORD *)&a2->ActiveSize.cy;
    *((_OWORD *)this + 2) = *(_OWORD *)&a2->HSyncFreq.Denominator;
    *((_QWORD *)this + 6) = *(_QWORD *)&a2->AdditionalSignalInfo;
  }
  return result;
}
