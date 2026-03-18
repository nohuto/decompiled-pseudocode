/*
 * XREFs of ?SetHeatMapColorHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C01A8F7C
 * Callers:
 *     ?SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0098580 (-SetBufferProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::SetHeatMapColorHelper(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        _QWORD *a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // edx
  bool v7; // r10
  __int64 v8; // r8
  __int64 result; // rax

  v5 = 0;
  v7 = 0;
  if ( a4 == 16 )
  {
    v8 = *((_QWORD *)this + 30) - *a3;
    if ( !v8 )
      v8 = *((_QWORD *)this + 31) - a3[1];
    if ( v8 )
    {
      *((_DWORD *)this + 4) |= 0x40000u;
      v7 = 1;
      *((_OWORD *)this + 15) = *(_OWORD *)a3;
    }
  }
  else
  {
    v5 = -1073741811;
  }
  result = v5;
  *a5 = v7;
  return result;
}
