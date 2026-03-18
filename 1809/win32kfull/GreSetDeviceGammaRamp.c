/*
 * XREFs of GreSetDeviceGammaRamp @ 0x1C0097500
 * Callers:
 *     NtGdiSetDeviceGammaRamp @ 0x1C0094880 (NtGdiSetDeviceGammaRamp.c)
 *     RestoreGammaRamp @ 0x1C0094B00 (RestoreGammaRamp.c)
 *     FadeDesktop @ 0x1C0097300 (FadeDesktop.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0057424 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z @ 0x1C0097768 (-GreSetDeviceGammaRampInternal@@YAHPEAUHDEV__@@PEAXHHPEAW4_SETGAMMARAMP_FAILED_REASON@@PEAK@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0099DC4 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall GreSetDeviceGammaRamp(HDC a1, void *a2, int a3, int a4)
{
  unsigned int v7; // r12d
  int v8; // r14d
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v13; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v14[3]; // [rsp+34h] [rbp-E4h] BYREF
  _QWORD v15[6]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v16[14]; // [rsp+70h] [rbp-A8h] BYREF

  v7 = (unsigned int)a1;
  v8 = 0;
  v13 = 0;
  v14[0] = (unsigned int)a1;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  if ( v15[0] && !*(_DWORD *)(v15[0] + 32LL) )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v16);
    DEVLOCKOBJ::vLockGammaRamp((DEVLOCKOBJ *)v16, (struct XDCOBJ *)v15);
    v9 = GreSetDeviceGammaRampInternal(
           *(HDEV *)(v15[0] + 48LL),
           a2,
           a3,
           a4,
           (enum _SETGAMMARAMP_FAILED_REASON *)&v13,
           v14);
    v14[1] = v9;
    v8 = v13;
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v16);
    v7 = v14[0];
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
  if ( CurrentProcessWin32Process && !*(_DWORD *)(CurrentProcessWin32Process + 288) )
  {
    *(_DWORD *)(CurrentProcessWin32Process + 288) = 1;
    memset(v16, 0, 0x40uLL);
    v16[0] = 0x4000000006LL;
    memset(&v16[1], 0, 36);
    v16[6] = 0x20000005ELL;
    v16[7] = v9 == 0 ? 0xC0000001 : 0;
    DrvDxgkWriteDiagEntry(v16);
  }
  if ( !v9 )
  {
    memset(v16, 0, 0x40uLL);
    v16[0] = 0x4000000006LL;
    memset(&v16[1], 0, 36);
    LODWORD(v16[6]) = 84;
    HIDWORD(v16[6]) = v8;
    v16[7] = __PAIR64__(a4, v7);
    DrvDxgkWriteDiagEntry(v16);
    EngSetLastError(0x57u);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v15);
  return v9;
}
