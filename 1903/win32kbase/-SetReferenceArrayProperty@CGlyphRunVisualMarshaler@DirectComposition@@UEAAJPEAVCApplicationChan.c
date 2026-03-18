/*
 * XREFs of ?SetReferenceArrayProperty@CGlyphRunVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C01B8610
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1C007F990 (-SetReferenceArrayProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IP.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ @ 0x1C01A5558 (-AddRef@CResourceMarshaler@DirectComposition@@QEAAKXZ.c)
 *     ?ClearGlyphRuns@CGlyphRunVisualMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01B84AC (-ClearGlyphRuns@CGlyphRunVisualMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CGlyphRunVisualMarshaler::SetReferenceArrayProperty(
        DirectComposition::CGlyphRunVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // ebx
  int v9; // esi
  unsigned int v10; // r13d

  v6 = 0;
  v9 = 0;
  *a6 = 0;
  if ( a4 || !a5 )
  {
    if ( a3 == 52 )
    {
      v10 = 0;
      do
      {
        if ( v10 >= a5 )
          break;
        if ( !(*(unsigned __int8 (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)a4[v10] + 120LL))(
                a4[v10],
                32LL) )
          v9 = -1073741811;
        ++v10;
      }
      while ( v9 >= 0 );
      if ( v9 >= 0 )
      {
        DirectComposition::CGlyphRunVisualMarshaler::ClearGlyphRuns(this, a2);
        *((_DWORD *)this + 88) = a5;
        *((_QWORD *)this + 43) = a4;
        *((_DWORD *)this + 89) = 0;
        *a6 = 1;
        *((_DWORD *)this + 90) |= 2u;
        if ( *((_DWORD *)this + 88) )
        {
          do
            DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 43) + 8LL * v6++));
          while ( v6 < *((_DWORD *)this + 88) );
        }
      }
    }
    else
    {
      return (unsigned int)DirectComposition::CVisualMarshaler::SetReferenceArrayProperty(this, a2, a3, a4, a5, a6);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
