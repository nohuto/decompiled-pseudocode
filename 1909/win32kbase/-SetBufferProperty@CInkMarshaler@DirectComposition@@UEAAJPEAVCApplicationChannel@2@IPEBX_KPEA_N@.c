/*
 * XREFs of ?SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01A54B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C01A4FDC (-AddSegments@CInkMarshaler@DirectComposition@@AEAAJPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C01A5670 (-SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CInkMarshaler::SetBufferProperty(
        DirectComposition::CInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        const struct D2D1_INK_BEZIER_SEGMENT *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edx
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  unsigned int v9; // r8d
  __int64 v10; // rax
  int v12; // eax

  v6 = 0;
  *a6 = 0;
  if ( a3 >= 6 )
  {
    if ( a4 && a5 == 36 * (a5 / 0x24) )
      return (unsigned int)DirectComposition::CInkMarshaler::SetSegments(this, a3 - 6, a4, a5 / 0x24, a6);
    return (unsigned int)-1073741811;
  }
  if ( !a3 )
  {
    if ( !a4 || a5 != 16 )
      return (unsigned int)-1073741811;
    *(_OWORD *)((char *)this + 40) = *(_OWORD *)a4;
LABEL_21:
    *((_DWORD *)this + 4) &= ~0x20u;
    goto LABEL_17;
  }
  v7 = a3 - 1;
  if ( !v7 )
  {
    if ( !a4 || a5 != 28 )
      return (unsigned int)-1073741811;
    *(_OWORD *)((char *)this + 56) = *(_OWORD *)a4;
    *((_QWORD *)this + 9) = *((_QWORD *)a4 + 2);
    *((_DWORD *)this + 20) = *((_DWORD *)a4 + 6);
    goto LABEL_21;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 == 2 )
      {
        if ( a4 )
        {
          if ( a5 == 36 )
          {
            v10 = *((_QWORD *)this + 15);
            if ( v10 )
              return (unsigned int)DirectComposition::CInkMarshaler::SetSegments(this, (int)v10 - 1, a4, 1u, a6);
          }
        }
      }
    }
    else if ( a4 && a5 == 36 * (a5 / 0x24) )
    {
      return (unsigned int)DirectComposition::CInkMarshaler::AddSegments(this, a4, a5 / 0x24, a6);
    }
    return (unsigned int)-1073741811;
  }
  if ( !a4 || a5 != 12 )
    return (unsigned int)-1073741811;
  *(_QWORD *)((char *)this + 84) = *(_QWORD *)a4;
  v12 = *((_DWORD *)a4 + 2);
  *((_DWORD *)this + 4) &= ~0x40u;
  *((_DWORD *)this + 23) = v12;
LABEL_17:
  *a6 = 1;
  return v6;
}
