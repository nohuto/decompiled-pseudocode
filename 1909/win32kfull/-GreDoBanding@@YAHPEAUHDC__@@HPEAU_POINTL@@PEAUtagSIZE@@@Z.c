/*
 * XREFs of ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C00F703C
 * Callers:
 *     NtGdiDoBanding @ 0x1C00F6F80 (NtGdiDoBanding.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C00BC8F0 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     GreDeleteWnd @ 0x1C0283FC0 (GreDeleteWnd.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0285014 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall GreDoBanding(HDC a1, int a2, struct _POINTL *a3, struct tagSIZE *a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, struct _POINTL *); // rdi
  unsigned int v13; // edi
  __int64 (__fastcall *v15)(__int64, struct _POINTL *); // rbx
  EWNDOBJ *v16; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  struct _EPROCESS *v18; // rax
  _QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v19, a1);
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v19)
    || (v10 = *(_QWORD *)(v19[0] + 496LL)) == 0
    || (v11 = *(_QWORD *)(v19[0] + 48LL), !*(_QWORD *)(v11 + 2560))
    || (*(_DWORD *)(v10 + 112) & 0x2000000) == 0 )
  {
LABEL_33:
    v13 = 0;
    goto LABEL_12;
  }
  if ( a2 )
  {
    v15 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v11 + 3144);
    if ( gUMPDSecurityLevel == 2
      || gUMPDSecurityLevel
      && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v7, v8, v9),
          (unsigned int)bIsProcessLocalSystem(CurrentProcess))
      || v15 )
    {
      v13 = v15(v10 + 24, a3);
    }
    else
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreDoBanding:!pfnDrvStartBanding\n", 2443);
      v13 = 0;
    }
    a4->cx = *(_DWORD *)(v10 + 56);
    a4->cy = *(_DWORD *)(v10 + 60);
LABEL_11:
    *(struct _POINTL *)(v19[0] + 2088LL) = *a3;
    goto LABEL_12;
  }
  v12 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v11 + 3152);
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel
      || (v18 = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v7, v8, v9),
          !(unsigned int)bIsProcessLocalSystem(v18)) )
    {
      if ( !v12 )
      {
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreDoBanding:!pfnDrvNextBand\n", 2470);
        goto LABEL_33;
      }
    }
  }
  v13 = v12(v10 + 24, a3);
  if ( !v13 )
    goto LABEL_12;
  if ( a3->x != -1 )
    goto LABEL_11;
  v13 &= -((*(_DWORD *)(v11 + 40) & 0x8000) != 0);
  if ( v13 )
  {
    *(_DWORD *)(v19[0] + 36LL) &= ~0x100u;
    v16 = *(EWNDOBJ **)(v10 + 136);
    if ( v16 )
    {
      GreDeleteWnd(v16);
      *(_QWORD *)(v10 + 136) = 0LL;
    }
    *(_WORD *)(v19[0] + 2072LL) = 0;
  }
LABEL_12:
  if ( v19[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v19);
  return v13;
}
