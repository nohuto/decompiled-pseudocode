/*
 * XREFs of ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x1800278B0
 * Callers:
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateComparison@@@Z @ 0x1800EA5D0 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAVCDXGIEnumeration@@PEAW4Enum@DisplayStateCompa.c)
 * Callees:
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x1800262B8 (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 *     ??$ReplaceInterface@VCDisplay@@V1@@@YAXAEAPEAVCDisplay@@PEAV0@@Z @ 0x18002B13C (--$ReplaceInterface@VCDisplay@@V1@@@YAXAEAPEAVCDisplay@@PEAV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyState@CDisplay@@IEAAXPEBV1@@Z @ 0x1800D7410 (-CopyState@CDisplay@@IEAAXPEBV1@@Z.c)
 *     ?IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z @ 0x1800D8F50 (-IsRenderTargetEquivalentTo@CDisplay@@QEBA_NPEBV1@@Z.c)
 */

__int64 __fastcall CDisplayManager::CombineNewAndOldDisplaySets(
        CDisplayManager *this,
        struct CDisplaySet *a2,
        struct CDisplaySet *a3)
{
  __int64 i; // rdi
  __int64 v6; // rsi
  CDisplay *v7; // r12
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  const struct CDisplay *v12; // r14
  __int64 v13; // r13

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 18); i = (unsigned int)(i + 1) )
  {
    v6 = 0LL;
    v7 = *(CDisplay **)(*((_QWORD *)a2 + 6) + 8 * i);
    if ( *((_DWORD *)a3 + 18) )
    {
      v13 = *((_QWORD *)a3 + 6);
      while ( 1 )
      {
        v12 = *(const struct CDisplay **)(v13 + 8 * v6);
        if ( CDisplay::IsRenderTargetEquivalentTo(v7, v12) )
          break;
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= *((_DWORD *)a3 + 18) )
          goto LABEL_3;
      }
      CDisplay::CopyState(v12, v7);
      ReplaceInterface<CDisplay,CDisplay>(*((_QWORD *)a2 + 6) + 8 * i, v12);
    }
LABEL_3:
    ;
  }
  v8 = CDisplaySet::ArrangeCloneDisplays(a2);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x13Fu, 0LL);
  return v10;
}
