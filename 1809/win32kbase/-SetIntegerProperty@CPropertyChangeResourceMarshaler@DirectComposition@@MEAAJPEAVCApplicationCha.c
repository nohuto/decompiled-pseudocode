/*
 * XREFs of ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C006A550
 * Callers:
 *     ?SetIntegerProperty@CDropShadowMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0004C50 (-SetIntegerProperty@CDropShadowMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPE.c)
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C006A240 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@.c)
 *     ?SetIntegerProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0081730 (-SetIntegerProperty@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_.c)
 *     ?SetIntegerProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C016D050 (-SetIntegerProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JP.c)
 *     ?SetIntegerProperty@CProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0172CB0 (-SetIntegerProperty@CProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 *     ?SetIntegerProperty@CProjectedShadowReceiverMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01731C0 (-SetIntegerProperty@CProjectedShadowReceiverMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 *     ?SetIntegerProperty@CPathGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01776A0 (-SetIntegerProperty@CPathGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_J.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(
        DirectComposition::CPropertyChangeResourceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  *a5 = 0;
  if ( a3 != 0xFFFF )
    return 3221225485LL;
  if ( *((_DWORD *)this + 12) != a4 )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    *((_DWORD *)this + 12) = a4;
    *a5 = 1;
  }
  return result;
}
