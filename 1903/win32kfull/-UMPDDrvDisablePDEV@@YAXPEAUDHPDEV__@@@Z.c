/*
 * XREFs of ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C011A640
 * Callers:
 *     ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C011CB60 (-UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@.c)
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C004FD7C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00506CC (--0XUMPDOBJ@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C011A704 (-vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall UMPDDrvDisablePDEV(struct DHPDEV__ *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 ThreadWin32Thread; // rax
  size_t v6; // [rsp+20h] [rbp-48h]
  UMPDOBJ *v7; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v8[2]; // [rsp+38h] [rbp-30h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]
  struct DHPDEV__ *v10; // [rsp+50h] [rbp-18h]

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v7);
  if ( v7 )
  {
    v10 = 0LL;
    LODWORD(v6) = 0;
    v9 = 0LL;
    v8[1] = 2;
    v8[0] = 32;
    *((_QWORD *)&v9 + 1) = *(_QWORD *)v7;
    v10 = a1;
    UMPDOBJ::Thunk(v7, v8, 32LL, 0LL, v6);
  }
  XUMPDOBJ::~XUMPDOBJ(&v7);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3, v4);
  if ( *(_QWORD *)(ThreadWin32Thread + 40) == ThreadWin32Thread + 40 )
    vUMPDCachedResourceCleanup((struct _W32THREAD *)ThreadWin32Thread);
}
