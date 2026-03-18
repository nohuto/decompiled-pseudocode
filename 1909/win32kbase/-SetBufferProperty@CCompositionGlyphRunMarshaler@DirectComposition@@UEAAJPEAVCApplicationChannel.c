/*
 * XREFs of ?SetBufferProperty@CCompositionGlyphRunMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01B6C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionGlyphRunMarshaler::SetBufferProperty(
        DirectComposition::CCompositionGlyphRunMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  __int64 v10; // xmm0_8
  __int64 v11; // xmm0_8
  __int64 v12; // xmm0_8
  __int64 v13; // xmm0_8

  v6 = 0;
  v7 = a3 - 2;
  if ( !v7 )
  {
    if ( a5 == 8 )
    {
      v13 = *a4;
      *((_DWORD *)this + 4) |= 0x80u;
      *((_QWORD *)this + 7) = v13;
      *a6 = 1;
      return v6;
    }
    return (unsigned int)-1073741811;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( a5 == 8 )
    {
      v12 = *a4;
      *((_DWORD *)this + 4) |= 0x100u;
      *((_QWORD *)this + 8) = v12;
      goto LABEL_11;
    }
    return (unsigned int)-1073741811;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a5 == 8 )
    {
      v11 = *a4;
      *((_DWORD *)this + 4) |= 0x200u;
      *((_QWORD *)this + 9) = v11;
      goto LABEL_11;
    }
    return (unsigned int)-1073741811;
  }
  if ( v9 != 1 || a5 != 8 )
    return (unsigned int)-1073741811;
  v10 = *a4;
  *((_DWORD *)this + 4) |= 0x400u;
  *((_QWORD *)this + 10) = v10;
LABEL_11:
  *a6 = 1;
  return v6;
}
