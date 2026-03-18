/*
 * XREFs of GreExtTextOutRect @ 0x1C0099CF4
 * Callers:
 *     NtGdiExtTextOutW @ 0x1C009AD50 (NtGdiExtTextOutW.c)
 * Callees:
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C004CE40 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C0099DC4 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreExtTextOutRect(HDC a1, struct tagRECT *a2)
{
  unsigned int v3; // edi
  unsigned int v5; // eax
  _QWORD v7[2]; // [rsp+28h] [rbp-49h] BYREF
  _BYTE v8[32]; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v9[32]; // [rsp+58h] [rbp-19h] BYREF
  _BYTE v10[80]; // [rsp+78h] [rbp+7h] BYREF

  v3 = 0;
  v7[0] = 0LL;
  v7[1] = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v8);
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  if ( v7[0] && (*(_DWORD *)(v7[0] + 36LL) & 0x10000) == 0 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v9);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v9, (struct XDCOBJ *)v7, 0) )
      v5 = ExtTextOutRect((struct XDCOBJ *)v7, a2);
    else
      v5 = XDCOBJ::bFullScreen((XDCOBJ *)v7);
    v3 = v5;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v9);
    DCOBJ::~DCOBJ((DCOBJ *)v10);
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v7);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v8);
  return v3;
}
