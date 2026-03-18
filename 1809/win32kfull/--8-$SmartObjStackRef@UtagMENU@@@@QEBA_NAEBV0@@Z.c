/*
 * XREFs of ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C011DEC4
 * Callers:
 *     xxxInsertMenuItem @ 0x1C0069348 (xxxInsertMenuItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C006AA5C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C01529CC (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     xxxMNInvertItem @ 0x1C0231D7C (xxxMNInvertItem.c)
 * Callees:
 *     <none>
 */

bool __fastcall SmartObjStackRef<tagMENU>::operator==(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    return v2 == *(_QWORD *)(a2 + 16);
  else
    return **(_QWORD **)a1 == **(_QWORD **)a2;
}
