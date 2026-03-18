/*
 * XREFs of DesktopAlloc @ 0x1C0022E10
 * Callers:
 *     xxxConsoleControl @ 0x1C001A2C8 (xxxConsoleControl.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C001FA58 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C002256C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     DefSetText @ 0x1C0022B3C (DefSetText.c)
 *     xxxCreateDefaultImeWindow @ 0x1C009020C (xxxCreateDefaultImeWindow.c)
 *     CkptRestore @ 0x1C0090C80 (CkptRestore.c)
 *     _InitPwSB @ 0x1C00AA8C4 (_InitPwSB.c)
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C0130E2C (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall DesktopAlloc(__int64 a1, unsigned int a2)
{
  PVOID Heap; // rbx

  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 )
    return 0LL;
  Heap = RtlAllocateHeap(*(PVOID *)(a1 + 128), 0, a2);
  if ( !Heap && (*gpsi & 0x100) != 0 )
  {
    _InterlockedAnd(gpsi, 0xFFFFFEFF);
    UserLogError(2147483891LL);
  }
  return Heap;
}
