/*
 * XREFs of GreSpDwmSyncCaptureSurfaceBits @ 0x1C023CE98
 * Callers:
 *     xxxPrintWindow @ 0x1C01B1C10 (xxxPrintWindow.c)
 * Callees:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0020FB8 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0020FEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C0057248 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A512C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A51E0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

_BOOL8 __fastcall GreSpDwmSyncCaptureSurfaceBits(HWND a1, int a2, HDC a3, float a4, int a5, int a6, int a7, int a8)
{
  BOOL updated; // ebx
  __int64 v11; // rcx
  int v12; // eax
  HSURF v13; // rbx
  _QWORD v15[2]; // [rsp+58h] [rbp-89h] BYREF
  __int64 v16; // [rsp+68h] [rbp-79h] BYREF
  _BYTE v17[8]; // [rsp+70h] [rbp-71h] BYREF
  int v18[4]; // [rsp+78h] [rbp-69h] BYREF
  _BYTE v19[32]; // [rsp+88h] [rbp-59h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-39h]
  int v21; // [rsp+B0h] [rbp-31h]
  int v22; // [rsp+B4h] [rbp-2Dh]
  struct tagRECT v23; // [rsp+D8h] [rbp-9h] BYREF

  MDCOBJ::MDCOBJ((MDCOBJ *)v15, a3);
  if ( !v15[0] )
    return 0;
  *(_QWORD *)&v23.left = *(_QWORD *)(v15[0] + 8LL * (*(_DWORD *)(v15[0] + 40LL) & 1) + 1424);
  v23.right = v23.left + a7;
  v23.bottom = a8 + v23.top;
  ERECTL::vOrder((ERECTL *)&v23);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v17, ghsemDynamicModeChange);
  v16 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v19, (struct XDCOBJ *)v15, 0);
  if ( (v19[24] & 1) != 0 && (v11 = *(_QWORD *)(v15[0] + 504LL)) != 0 )
  {
    v12 = *(_DWORD *)(v11 + 56);
    v13 = *(HSURF *)(v11 + 32);
    v18[0] = 0;
    v18[1] = 0;
    v18[2] = v12;
    v18[3] = *(_DWORD *)(v11 + 60);
    ERECTL::operator*=(&v23.left, v18);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
    SEMOBJ::vUnlock((SEMOBJ *)&v16);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v17);
    if ( !IsRectEmptyInl(&v23) && !KeAreApcsDisabled() )
    {
      updated = bSpDwmUpdateSurface(a1, a2, 0LL, (struct XDCOBJ *)v15, v13, a4, a5, a6, (struct ERECTL *)&v23, 0LL);
      goto LABEL_10;
    }
  }
  else
  {
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
    SEMOBJ::vUnlock((SEMOBJ *)&v16);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v17);
  }
  updated = 0;
LABEL_10:
  if ( v15[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v15);
  return updated;
}
