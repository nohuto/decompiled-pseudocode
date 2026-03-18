/*
 * XREFs of ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C011B3C8
 * Callers:
 *     NtGdiDoBanding @ 0x1C011B310 (NtGdiDoBanding.c)
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C004CA70 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0094930 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     GreDeleteWnd @ 0x1C026B980 (GreDeleteWnd.c)
 */

__int64 __fastcall GreDoBanding(HDC a1, int a2, struct _POINTL *a3, struct tagSIZE *a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, struct _POINTL *); // rbx
  struct _EPROCESS *CurrentProcess; // rax
  unsigned int v14; // edi
  __int64 (__fastcall *v15)(__int64, struct _POINTL *); // rdi
  struct _EPROCESS *v16; // rax
  EWNDOBJ *v18; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v20[32]; // [rsp+30h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v19, a1);
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v19)
    || (v10 = *(_QWORD *)(v19[0] + 496LL)) == 0
    || (v11 = *(_QWORD *)(v19[0] + 48LL), !*(_QWORD *)(v11 + 2560))
    || (*(_DWORD *)(v10 + 112) & 0x2000000) == 0 )
  {
LABEL_22:
    v14 = 0;
    goto LABEL_23;
  }
  if ( a2 )
  {
    v12 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v11 + 3144);
    if ( gUMPDSecurityLevel == 2
      || gUMPDSecurityLevel
      && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v7, v8, v9),
          (unsigned int)bIsProcessLocalSystem(CurrentProcess))
      || v12 )
    {
      v14 = v12(v10 + 24, a3);
    }
    else
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreDoBanding:!pfnDrvStartBanding\n", 2459);
      v14 = 0;
    }
    a4->cx = *(_DWORD *)(v10 + 56);
    a4->cy = *(_DWORD *)(v10 + 60);
LABEL_15:
    *(struct _POINTL *)(v19[0] + 2112LL) = *a3;
    goto LABEL_23;
  }
  v15 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v11 + 3152);
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel
      || (v16 = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v7, v8, v9),
          !(unsigned int)bIsProcessLocalSystem(v16)) )
    {
      if ( !v15 )
      {
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreDoBanding:!pfnDrvNextBand\n", 2486);
        goto LABEL_22;
      }
    }
  }
  v14 = v15(v10 + 24, a3);
  if ( !v14 )
    goto LABEL_23;
  if ( a3->x != -1 )
    goto LABEL_15;
  v14 &= -((*(_DWORD *)(v11 + 40) & 0x8000) != 0);
  if ( v14 )
  {
    *(_DWORD *)(v19[0] + 36LL) &= ~0x100u;
    v18 = *(EWNDOBJ **)(v10 + 136);
    if ( v18 )
    {
      GreDeleteWnd(v18);
      *(_QWORD *)(v10 + 136) = 0LL;
    }
    *(_WORD *)(v19[0] + 2096LL) = 0;
  }
LABEL_23:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v19);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v20);
  return v14;
}
