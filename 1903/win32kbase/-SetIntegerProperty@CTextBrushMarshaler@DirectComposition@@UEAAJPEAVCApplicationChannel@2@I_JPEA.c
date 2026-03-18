/*
 * XREFs of ?SetIntegerProperty@CTextBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C01B8290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CTextBrushMarshaler::SetIntegerProperty(
        DirectComposition::CTextBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  int v5; // r8d
  int v6; // r8d

  v5 = a3 - 4;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        *a5 = 0;
        return 3221225485LL;
      }
      *((_DWORD *)this + 29) = a4;
      *a5 = 1;
      *((_DWORD *)this + 4) |= 0x800u;
    }
    else
    {
      *((_DWORD *)this + 28) = a4;
      *a5 = 1;
      *((_DWORD *)this + 4) |= 0x400u;
    }
  }
  else
  {
    *((_DWORD *)this + 27) = a4;
    *a5 = 1;
    *((_DWORD *)this + 4) |= 0x200u;
  }
  return 0LL;
}
