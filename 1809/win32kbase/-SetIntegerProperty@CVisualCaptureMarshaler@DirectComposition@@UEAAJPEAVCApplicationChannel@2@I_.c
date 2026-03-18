/*
 * XREFs of ?SetIntegerProperty@CVisualCaptureMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0003E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualCaptureMarshaler::SetIntegerProperty(
        DirectComposition::CVisualCaptureMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // r10d
  int v6; // r8d
  bool v7; // dl
  bool v9; // dl

  v5 = 0;
  v6 = a3 - 3;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      if ( *((_DWORD *)this + 21) == a4 )
      {
        v7 = 0;
      }
      else
      {
        *((_DWORD *)this + 21) = a4;
        v7 = 1;
      }
      *a5 = v7;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    if ( *((_DWORD *)this + 20) == a4 )
    {
      v9 = 0;
    }
    else
    {
      *((_DWORD *)this + 20) = a4;
      v9 = 1;
    }
    *a5 = v9;
  }
  return v5;
}
