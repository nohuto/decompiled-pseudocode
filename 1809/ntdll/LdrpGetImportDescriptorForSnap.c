/*
 * XREFs of LdrpGetImportDescriptorForSnap @ 0x180078D00
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18002385C (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180007188 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     LdrpCheckPagesForTampering @ 0x180078DB8 (LdrpCheckPagesForTampering.c)
 *     LdrpMapCleanModuleView @ 0x1800D76D4 (LdrpMapCleanModuleView.c)
 */

__int64 __fastcall LdrpGetImportDescriptorForSnap(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // eax
  __int64 v4; // rbx
  int v6; // eax
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v3 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(v1 + 48), 1, 1u, &v7, &v8);
  v4 = v8;
  if ( v3 < 0 )
    v4 = 0LL;
  if ( v1 == LdrpImageEntry && ((*((_QWORD *)&xmmword_180178390 + 1) >> 44) & 3) == 1 )
  {
    RtlImageNtHeaderEx(3, *(_QWORD *)(v1 + 48), 0LL, &v8);
    if ( ((unsigned __int8)LdrpCheckPagesForTampering(v8 + 144, 8LL)
       || (unsigned __int8)LdrpCheckPagesForTampering(v4, v7))
      && (int)LdrpMapCleanModuleView(a1) >= 0 )
    {
      v6 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a1 + 184), 1, 1u, &v7, &v8);
      v4 = v8;
      if ( v6 < 0 )
        return 0LL;
    }
  }
  return v4;
}
