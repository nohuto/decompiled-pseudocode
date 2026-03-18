/*
 * XREFs of GreAddLogicalSurfaceToDirtyQueue @ 0x1C0074C48
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C00596B0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C00A1CDC (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025246C (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C000246C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00024A0 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0075440 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00768A4 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015F07C (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreAddLogicalSurfaceToDirtyQueue(UINT64 a1, ULONG a2, UINT_PTR a3)
{
  unsigned int v5; // ebx
  _BYTE v7[8]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v8[8]; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v9[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B0h]
  int v11; // [rsp+58h] [rbp-A8h]
  struct _D3DKMT_PRESENTHISTORYTOKEN v12; // [rsp+60h] [rbp-A0h] BYREF

  v12.Token.GdiSysMem.dwDirtyFlags = a2;
  v12.Token.Flip.FenceValue = a1;
  v12.Model = D3DKMT_PM_REDIRECTED_GDI_SYSMEM;
  v12.Token.Flip.dxgContext = a3;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v8, (struct SfmState *)((char *)gpSfmState + 32));
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v9);
  v10 = 0LL;
  v11 = 0;
  SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v9, (HLSURF)a1);
  if ( v10 )
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v7, (struct _EX_PUSH_LOCK *)(v10 + 256));
    EtwGdiSysMemToken(
      (unsigned __int8)-__CFSHR__(*(_DWORD *)(v10 + 244), 2),
      a2,
      v12.Token.Flip.FenceValue,
      v12.Token.Flip.dxgContext);
    if ( __CFSHR__(*(_DWORD *)(v10 + 244), 2) )
    {
      v5 = SfmTokenArray::AddNotificationToken(gpSfmState, &v12);
      if ( !v5 )
        SfmSignalTokenEvent();
    }
    else
    {
      v5 = SfmTokenArray::AddNotificationToken((SfmTokenArray *)(v10 + 216), &v12);
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v7);
  }
  else
  {
    v5 = -1073741816;
  }
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v9);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v8);
  return v5;
}
