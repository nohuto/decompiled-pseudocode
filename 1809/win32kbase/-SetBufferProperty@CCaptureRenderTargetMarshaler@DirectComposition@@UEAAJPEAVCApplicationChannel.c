/*
 * XREFs of ?SetBufferProperty@CCaptureRenderTargetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C017C7F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetBufferProperty(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  __int128 v8; // xmm0
  __int64 v9; // rcx

  v6 = 0;
  *a6 = 0;
  if ( a3 == 2 )
  {
    v6 = a5 != 8 ? 0xC000000D : 0;
    if ( a5 == 8 )
    {
      v9 = *a4;
      *((_DWORD *)this + 4) |= 0x80u;
      *(_QWORD *)((char *)this + 60) = v9;
      goto LABEL_8;
    }
  }
  else
  {
    if ( a3 == 6 && a5 == 16 )
    {
      v8 = *(_OWORD *)a4;
      *((_DWORD *)this + 4) |= 0x400u;
      *(_OWORD *)((char *)this + 44) = v8;
LABEL_8:
      *a6 = 1;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  return v6;
}
