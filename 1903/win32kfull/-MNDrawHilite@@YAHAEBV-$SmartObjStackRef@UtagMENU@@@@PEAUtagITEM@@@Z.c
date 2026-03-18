/*
 * XREFs of ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00F9CC0
 * Callers:
 *     xxxDrawMenuItem @ 0x1C00F96F4 (xxxDrawMenuItem.c)
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C00F9B48 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagD.c)
 *     xxxMNInvertItem @ 0x1C024A9E4 (xxxMNInvertItem.c)
 *     xxxRealDrawMenuItem @ 0x1C024B514 (xxxRealDrawMenuItem.c)
 * Callees:
 *     MNIsUAHMenu @ 0x1C00229C0 (MNIsUAHMenu.c)
 */

__int64 __fastcall MNDrawHilite(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  int v5; // ecx
  __int64 v7; // rcx
  _QWORD *v8; // r9

  LODWORD(v3) = 0;
  v5 = *(_DWORD *)(*(_QWORD *)a2 + 4LL);
  if ( (v5 & 0x80u) != 0 && (v5 & 0xC0000000) == 0 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    if ( !v7 )
      v7 = **(_QWORD **)a1;
    if ( (unsigned int)MNIsUAHMenu(v7) || (*(_DWORD *)(*v8 + 4LL) & 0x20000000) == 0 || v8[3] != v3 )
      LODWORD(v3) = 1;
  }
  return (unsigned int)v3;
}
