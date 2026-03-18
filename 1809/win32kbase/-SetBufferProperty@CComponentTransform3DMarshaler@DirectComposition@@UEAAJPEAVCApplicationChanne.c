/*
 * XREFs of ?SetBufferProperty@CComponentTransform3DMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0075690
 * Callers:
 *     <none>
 * Callees:
 *     memcmp @ 0x1C00AE820 (memcmp.c)
 */

__int64 __fastcall DirectComposition::CComponentTransform3DMarshaler::SetBufferProperty(
        DirectComposition::CComponentTransform3DMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _OWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  _OWORD *v9; // rbp

  v6 = 0;
  *a6 = 0;
  if ( a3 == 20 && a4 && a5 == 64 )
  {
    v9 = (_OWORD *)((char *)this + 132);
    if ( memcmp((char *)this + 132, a4, 0x40uLL) )
    {
      *v9 = *a4;
      v9[1] = a4[1];
      v9[2] = a4[2];
      v9[3] = a4[3];
    }
    *((_DWORD *)this + 4) &= ~0x4000u;
    *a6 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
