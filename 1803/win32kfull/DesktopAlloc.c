/*
 * XREFs of DesktopAlloc @ 0x1C005E320
 * Callers:
 *     xxxConsoleControl @ 0x1C0011F74 (xxxConsoleControl.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C002133C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     DefSetText @ 0x1C002FFEC (DefSetText.c)
 *     _InitPwSB @ 0x1C0038CEC (_InitPwSB.c)
 *     xxxCreateDefaultImeWindow @ 0x1C005BB1C (xxxCreateDefaultImeWindow.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C005E128 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ?GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP@1@PEAUtagWND@@H@Z @ 0x1C006003C (-GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP.c)
 *     CkptRestore @ 0x1C00669FC (CkptRestore.c)
 *     ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C0107340 (-xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX.c)
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
    *gpsi &= ~0x100u;
    UserLogError(2147483891LL);
  }
  return Heap;
}
