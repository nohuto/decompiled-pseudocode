/*
 * XREFs of ?SetIntegerProperty@CProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0172CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C006A550 (-SetIntegerProperty@CPropertyChangeResourceMarshaler@DirectComposition@@MEAAJPEAVCApplicationCha.c)
 */

__int64 __fastcall DirectComposition::CProjectedShadowCasterMarshaler::SetIntegerProperty(
        DirectComposition::CProjectedShadowCasterMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  *a5 = 0;
  if ( a3 != 2 )
  {
    if ( a3 != 5 )
      return DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
    *((_DWORD *)this + 4) |= 0x1000u;
    *((_DWORD *)this + 23) = a4;
    goto LABEL_7;
  }
  if ( *((_BYTE *)this + 72) != (a4 != 0) )
  {
    *((_DWORD *)this + 4) |= 0x200u;
    *((_BYTE *)this + 72) = a4 != 0;
LABEL_7:
    *a5 = 1;
  }
  return 0LL;
}
