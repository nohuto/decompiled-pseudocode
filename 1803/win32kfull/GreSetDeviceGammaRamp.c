/*
 * XREFs of GreSetDeviceGammaRamp @ 0x1C00BBD80
 * Callers:
 *     NtGdiSetDeviceGammaRamp @ 0x1C00BA6C0 (NtGdiSetDeviceGammaRamp.c)
 *     RestoreGammaRamp @ 0x1C00BB520 (RestoreGammaRamp.c)
 *     FadeDesktop @ 0x1C00BBB90 (FadeDesktop.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0F0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z @ 0x1C00BBF58 (-GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C0123EA4 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall GreSetDeviceGammaRamp(HDC a1, void *a2, int a3, int a4)
{
  unsigned int v7; // r12d
  int v8; // r14d
  unsigned int v9; // edi
  __int64 v10; // rcx
  DYNAMICMODECHANGESHARELOCK *v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _BYTE v14[4]; // [rsp+30h] [rbp-A8h] BYREF
  int v15; // [rsp+34h] [rbp-A4h] BYREF
  unsigned int v16[2]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+40h] [rbp-98h] BYREF
  int v18; // [rsp+48h] [rbp-90h]
  int v19; // [rsp+4Ch] [rbp-8Ch]
  _BYTE v20[16]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v21[8]; // [rsp+60h] [rbp-78h] BYREF

  v7 = (unsigned int)a1;
  v8 = 0;
  v15 = 0;
  v16[0] = (unsigned int)a1;
  v9 = 0;
  v18 = 0;
  v19 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v17, a1);
  if ( v17 )
  {
    if ( !*(_DWORD *)(v17 + 32) )
    {
      DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)v14);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)v20, (struct XDCOBJ *)&v17);
      v9 = GreSetDeviceGammaRampInternal(*(HDEV *)(v17 + 48), a2, a3, a4, (enum _SETGAMMARAMP_FAILED_REASON *)&v15, v16);
      v16[1] = v9;
      v8 = v15;
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v20);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v11);
      v7 = v16[0];
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v17);
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
  if ( CurrentProcessWin32Process && !*(_DWORD *)(CurrentProcessWin32Process + 288) )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 288) = 1;
    memset(v21, 0, sizeof(v21));
    v21[0] = 0x4000000006LL;
    memset(&v21[1], 0, 36);
    v21[6] = 0x20000005ELL;
    v21[7] = v9 == 0 ? 0xC0000001 : 0;
    DrvDxgkWriteDiagEntry(v21);
  }
  if ( !v9 )
  {
    memset(v21, 0, sizeof(v21));
    v21[0] = 0x4000000006LL;
    memset(&v21[1], 0, 36);
    LODWORD(v21[6]) = 84;
    HIDWORD(v21[6]) = v8;
    v21[7] = __PAIR64__(a4, v7);
    DrvDxgkWriteDiagEntry(v21);
    EngSetLastError(0x57u);
  }
  return v9;
}
