/*
 * XREFs of ?SetIntegerProperty@COverlayRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C017B940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::COverlayRenderTargetMarshaler::SetIntegerProperty(
        DirectComposition::COverlayRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // edx
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d

  v5 = 0;
  v6 = a3 - 1;
  if ( !v6 )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *((_DWORD *)this + 10) = a4;
    *a5 = 1;
    return v5;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    *((_DWORD *)this + 11) = a4;
    goto LABEL_9;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    *((_DWORD *)this + 14) = a4;
    goto LABEL_9;
  }
  if ( v8 == 1 )
  {
    *((_DWORD *)this + 15) = a4;
LABEL_9:
    *((_DWORD *)this + 4) |= 0x20u;
    *a5 = 1;
    return v5;
  }
  return (unsigned int)-1073741811;
}
