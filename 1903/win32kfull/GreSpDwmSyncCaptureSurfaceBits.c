/*
 * XREFs of GreSpDwmSyncCaptureSurfaceBits @ 0x1C026D920
 * Callers:
 *     xxxPrintWindow @ 0x1C01E996C (xxxPrintWindow.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0036028 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0043E30 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0046A44 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00589F4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00600A4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C0085390 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0091FF0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

_BOOL8 __fastcall GreSpDwmSyncCaptureSurfaceBits(HWND a1, HDC a2, float a3, int a4, int a5, int a6, int a7)
{
  BOOL updated; // ebx
  __int64 *v10; // rcx
  __int64 v11; // rax
  LONG v12; // edx
  LONG v13; // ecx
  __int64 v14; // rcx
  int v15; // eax
  HSURF v16; // rbx
  _QWORD v18[2]; // [rsp+58h] [rbp-81h] BYREF
  __int64 v19; // [rsp+68h] [rbp-71h] BYREF
  _BYTE v20[8]; // [rsp+70h] [rbp-69h] BYREF
  int v21[4]; // [rsp+78h] [rbp-61h] BYREF
  _BYTE v22[32]; // [rsp+88h] [rbp-51h] BYREF
  __int64 v23; // [rsp+A8h] [rbp-31h] BYREF
  int v24; // [rsp+B0h] [rbp-29h]
  int v25; // [rsp+B4h] [rbp-25h]
  __int16 v26; // [rsp+B8h] [rbp-21h]
  struct tagRECT v27; // [rsp+D8h] [rbp-1h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v18, a2);
  if ( !v18[0] )
    return 0;
  v10 = (__int64 *)(v18[0] + 1024LL);
  if ( (*(_DWORD *)(v18[0] + 40LL) & 1) == 0 )
    v10 = (__int64 *)(v18[0] + 1016LL);
  v11 = *v10;
  v12 = *v10 + a6;
  v13 = HIDWORD(*v10) + a7;
  *(_QWORD *)&v27.left = v11;
  v27.bottom = v13;
  v27.right = v12;
  ERECTL::vOrder((ERECTL *)&v27);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v20, ghsemDynamicModeChange);
  v19 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  v23 = 0LL;
  v24 = 0;
  v25 = 0;
  v26 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v22, (struct XDCOBJ *)v18, 0);
  if ( (v22[24] & 1) != 0 && (v14 = *(_QWORD *)(v18[0] + 496LL)) != 0 )
  {
    v15 = *(_DWORD *)(v14 + 56);
    v16 = *(HSURF *)(v14 + 32);
    v21[0] = 0;
    v21[1] = 0;
    v21[2] = v15;
    v21[3] = *(_DWORD *)(v14 + 60);
    ERECTL::operator*=(&v27.left, v21);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v22);
    if ( v23 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v23);
    SEMOBJ::vUnlock((SEMOBJ *)&v19);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v20);
    if ( !IsRectEmptyInl(&v27) && !KeAreApcsDisabled() )
    {
      updated = bSpDwmUpdateSurface(a1, 0LL, (struct XDCOBJ *)v18, v16, a3, a4, a5, (struct ERECTL *)&v27, 0LL);
      goto LABEL_16;
    }
  }
  else
  {
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v22);
    if ( v23 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v23);
    SEMOBJ::vUnlock((SEMOBJ *)&v19);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v20);
  }
  updated = 0;
LABEL_16:
  if ( v18[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v18);
  return updated;
}
