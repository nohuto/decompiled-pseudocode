/*
 * XREFs of ?SetBufferProperty@CVisualSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C017D9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualSurfaceMarshaler::SetBufferProperty(
        DirectComposition::CVisualSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        float *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // eax
  bool v8; // zf
  double v9; // xmm1_8

  v6 = -1073741811;
  *a6 = 0;
  if ( a3 == 1 )
  {
    v6 = a5 != 8 ? 0xC000000D : 0;
    if ( a5 == 8 )
    {
      v7 = *((_DWORD *)this + 4) | 0x20;
      v8 = *((_QWORD *)this + 5) == 0LL;
      *((double *)this + 8) = *a4;
      v9 = a4[1];
      *((_DWORD *)this + 4) = v7;
      *((double *)this + 9) = v9;
      if ( !v8 )
      {
        *((_BYTE *)this + 80) = 0;
        *((_DWORD *)this + 4) = v7 | 0x40;
      }
      *a6 = 1;
    }
  }
  return v6;
}
