/*
 * XREFs of GreSpDwmSyncCaptureSurfaceBits @ 0x1C02542F8
 * Callers:
 *     xxxPrintWindow @ 0x1C01D43EC (xxxPrintWindow.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0045A3C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009E31C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00A19EC (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C00A3A98 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00B9734 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

_BOOL8 __fastcall GreSpDwmSyncCaptureSurfaceBits(HWND a1, int a2, HDC a3, float a4, int a5, int a6, int a7, int a8)
{
  BOOL updated; // ebx
  __int64 *v11; // rcx
  __int64 v12; // rcx
  HSURF v13; // rdi
  int v14; // eax
  __int64 v16; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+68h] [rbp-A0h] BYREF
  int v19; // [rsp+70h] [rbp-98h]
  int v20; // [rsp+74h] [rbp-94h]
  _QWORD v21[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v22[32]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v23[32]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v24[80]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v25; // [rsp+118h] [rbp+10h] BYREF
  int v26; // [rsp+120h] [rbp+18h]
  int v27; // [rsp+124h] [rbp+1Ch]

  DCOBJ::DCOBJ((DCOBJ *)v21, a3);
  updated = 0;
  if ( v21[0] )
  {
    v11 = (__int64 *)(v21[0] + 1024LL);
    if ( (*(_DWORD *)(v21[0] + 40LL) & 1) == 0 )
      v11 = (__int64 *)(v21[0] + 1016LL);
    v25 = *v11;
    v26 = v25 + a7;
    v27 = a8 + HIDWORD(v25);
    ERECTL::vOrder((ERECTL *)&v25);
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v17, ghsemDynamicModeChange);
    v16 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    DCOBJ::DCOBJ((DCOBJ *)v24);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v23, (struct XDCOBJ *)v21, 0);
    if ( (v23[24] & 1) != 0 && (v12 = *(_QWORD *)(v21[0] + 496LL)) != 0 )
    {
      v13 = *(HSURF *)(v12 + 32);
      v19 = *(_DWORD *)(v12 + 56);
      v14 = *(_DWORD *)(v12 + 60);
      v18 = 0LL;
      v20 = v14;
      ERECTL::operator*=((int *)&v25, (int *)&v18);
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v23);
      DCOBJ::~DCOBJ((DCOBJ *)v24);
      SEMOBJ::vUnlock((SEMOBJ *)&v16);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v17);
      if ( !ERECTL::bWrapped((ERECTL *)&v25) && !KeAreApcsDisabled() )
        updated = bSpDwmUpdateSurface(a1, a2, 0LL, (struct XDCOBJ *)v21, v13, a4, a5, a6, (struct ERECTL *)&v25, 0LL);
    }
    else
    {
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v23);
      DCOBJ::~DCOBJ((DCOBJ *)v24);
      SEMOBJ::vUnlock((SEMOBJ *)&v16);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v17);
    }
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v21);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v22);
  return updated;
}
