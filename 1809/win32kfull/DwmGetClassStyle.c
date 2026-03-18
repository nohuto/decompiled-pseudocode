/*
 * XREFs of DwmGetClassStyle @ 0x1C00C818C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C006A6D4 (-xxxRedrawForSetLPITEMInfo@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C006C328 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxGetSystemMenu @ 0x1C00A625C (xxxGetSystemMenu.c)
 *     xxxEnableMenuItem @ 0x1C00A6654 (xxxEnableMenuItem.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00C7DC8 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxSetClassData @ 0x1C00FC374 (xxxSetClassData.c)
 * Callees:
 *     MNLookUpItem @ 0x1C0021208 (MNLookUpItem.c)
 */

__int64 __fastcall DwmGetClassStyle(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  int v4; // ebx
  unsigned int v5; // edi
  _QWORD *v7; // rax

  v1 = *(_QWORD *)(a1 + 112);
  v3 = *(_QWORD *)(a1 + 136);
  v4 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)(v1 + 8) + 8LL);
  if ( v3 )
  {
    v7 = MNLookUpItem(v3, 61536LL, 0, 0LL);
    if ( !v7
      && (v7 = MNLookUpItem(*(_QWORD *)(a1 + 136), 32864LL, 0, 0LL)) == 0LL
      && (v7 = MNLookUpItem(*(_QWORD *)(a1 + 136), 49264LL, 0, 0LL)) == 0LL
      || (*(_DWORD *)(*v7 + 4LL) & 3) != 0 )
    {
      v4 = 512;
    }
    v5 |= v4;
  }
  return v5;
}
