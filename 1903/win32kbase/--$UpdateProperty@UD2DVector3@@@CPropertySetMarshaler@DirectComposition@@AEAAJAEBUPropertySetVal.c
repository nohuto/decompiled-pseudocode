/*
 * XREFs of ??$UpdateProperty@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DVector3@@@Z @ 0x1C00BFF74
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0080CF0 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DVector3>(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // r9d
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx

  v3 = *a2;
  v4 = 0;
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 64)
    && (v6 = *(_QWORD *)(a1 + 56), v7 = *(_DWORD *)(v6 + 8 * v3 + 4), a2[1] == (v7 & 0x1FFFFFFF))
    && a2[2] == *(_DWORD *)(v6 + 8LL * (unsigned int)v3) )
  {
    v8 = *(_QWORD *)(a1 + 72);
    v9 = v7 & 0x1FFFFFFF;
    *(_QWORD *)(v9 + v8) = *(_QWORD *)a3;
    *(_DWORD *)(v9 + v8 + 8) = *(_DWORD *)(a3 + 8);
    v10 = *(_QWORD *)(a1 + 56);
    if ( (*(_DWORD *)(v10 + 8LL * (unsigned int)v3 + 4) & 0xE0000000) != 0x20000000 )
      *(_DWORD *)(v10 + 8LL * (unsigned int)v3 + 4) = *(_DWORD *)(v10 + 8LL * (unsigned int)v3 + 4) & 0x1FFFFFFF | 0x40000000;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
