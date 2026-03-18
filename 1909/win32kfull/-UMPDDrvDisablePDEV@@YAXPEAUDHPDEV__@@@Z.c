/*
 * XREFs of ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C00F4650
 * Callers:
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00F65F0 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C009958C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0099C30 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0099F38 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C00F4714 (-vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall UMPDDrvDisablePDEV(struct DHPDEV__ *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 ThreadWin32Thread; // rax
  size_t v5; // [rsp+20h] [rbp-48h]
  UMPDOBJ *v6; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v7[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h]
  struct DHPDEV__ *v9; // [rsp+50h] [rbp-18h]

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v6);
  if ( v6 )
  {
    v9 = 0LL;
    LODWORD(v5) = 0;
    v8 = 0LL;
    v7[1] = 2;
    v7[0] = 32;
    *((_QWORD *)&v8 + 1) = *(_QWORD *)v6;
    v9 = a1;
    UMPDOBJ::Thunk(v6, v7, 32LL, 0LL, v5);
  }
  XUMPDOBJ::~XUMPDOBJ(&v6);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3);
  if ( *(_QWORD *)(ThreadWin32Thread + 40) == ThreadWin32Thread + 40 )
    vUMPDCachedResourceCleanup((struct _W32THREAD *)ThreadWin32Thread);
}
