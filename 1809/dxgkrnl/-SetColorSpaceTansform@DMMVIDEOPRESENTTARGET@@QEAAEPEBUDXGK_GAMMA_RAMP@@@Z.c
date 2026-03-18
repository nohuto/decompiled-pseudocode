/*
 * XREFs of ?SetColorSpaceTansform@DMMVIDEOPRESENTTARGET@@QEAAEPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C004DD68
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00D1EA8 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ?DmmSetMonitorColorSpaceTransform@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@AEAE@Z @ 0x1C027CDB4 (-DmmSetMonitorColorSpaceTransform@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@AEAE@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     memcmp @ 0x1C0022D50 (memcmp.c)
 */

unsigned __int8 __fastcall DMMVIDEOPRESENTTARGET::SetColorSpaceTansform(DMMVIDEOPRESENTTARGET *this, const void **a2)
{
  const void **v2; // rbx
  const struct DXGK_GAMMA_RAMP *v3; // rsi

  v2 = (const void **)*((_QWORD *)this + 67);
  v3 = 0LL;
  if ( a2 )
  {
    if ( v2 )
    {
      if ( a2 == v2 || !memcmp(a2[4], v2[4], (size_t)a2[3]) )
        return 0;
      ReferenceCounted::Release((ReferenceCounted *)v2);
    }
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    v3 = (const struct DXGK_GAMMA_RAMP *)a2;
    goto LABEL_9;
  }
  if ( v2 )
  {
    ReferenceCounted::Release(*((ReferenceCounted **)this + 67));
LABEL_9:
    *((_QWORD *)this + 67) = v3;
    return 1;
  }
  return 0;
}
