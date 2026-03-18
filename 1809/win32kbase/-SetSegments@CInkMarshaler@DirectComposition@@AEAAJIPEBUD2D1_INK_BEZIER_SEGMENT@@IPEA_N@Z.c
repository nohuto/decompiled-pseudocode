/*
 * XREFs of ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C016A280
 * Callers:
 *     ?SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C016A0C0 (-SetBufferProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@.c)
 * Callees:
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C006E404 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall DirectComposition::CInkMarshaler::SetSegments(
        DirectComposition::CInkMarshaler *this,
        unsigned int a2,
        const struct D2D1_INK_BEZIER_SEGMENT *a3,
        unsigned int a4,
        bool *a5)
{
  unsigned __int64 v5; // r15
  unsigned int v7; // edi
  unsigned __int64 v8; // r12
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  int v11; // esi
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbp
  const struct D2D1_INK_BEZIER_SEGMENT *v14; // rdi

  v5 = *((_QWORD *)this + 15);
  v7 = a2;
  v8 = a4;
  v9 = a2;
  v10 = a4 + (unsigned __int64)a2;
  if ( v10 >= a2 )
  {
    v12 = *((_QWORD *)this + 15);
    if ( v5 <= v10 )
      v12 = a4 + (unsigned __int64)a2;
    v13 = 0LL;
    v11 = DirectComposition::CDCompDynamicArrayBase::SetCount(
            (DirectComposition::CInkMarshaler *)((char *)this + 96),
            v12,
            0x6B694344u);
    if ( v11 >= 0 )
    {
      if ( v8 )
      {
        v14 = a3;
        do
        {
          memmove((void *)(*((_QWORD *)this + 12) + *((_QWORD *)this + 16) * (v9 + v13++)), v14, *((_QWORD *)this + 16));
          v14 = (const struct D2D1_INK_BEZIER_SEGMENT *)((char *)v14 + 36);
        }
        while ( v13 < v8 );
        v7 = a2;
      }
      if ( v12 != v5 )
        *((_DWORD *)this + 4) &= ~0x80u;
      if ( *((_DWORD *)this + 34) < v7 )
        v7 = *((_DWORD *)this + 34);
      *((_DWORD *)this + 34) = v7;
      *a5 = 1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v11;
}
