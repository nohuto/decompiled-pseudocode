/*
 * XREFs of ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C012AF0C
 * Callers:
 *     NtGdiDoBanding @ 0x1C012AE60 (NtGdiDoBanding.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C008F8E0 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C00BA764 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     GreDeleteWnd @ 0x1C0258760 (GreDeleteWnd.c)
 */

__int64 __fastcall GreDoBanding(HDC a1, int a2, struct _POINTL *a3, struct tagSIZE *a4)
{
  int valid; // eax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, struct _POINTL *); // rdi
  unsigned int v13; // edi
  __int64 (__fastcall *v15)(__int64, struct _POINTL *); // rbx
  EWNDOBJ *v16; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  struct _EPROCESS *v18; // rax
  _QWORD v19[5]; // [rsp+20h] [rbp-28h] BYREF

  MDCOBJ::MDCOBJ((MDCOBJ *)v19, a1);
  valid = XDCOBJ::bValidSurf((XDCOBJ *)v19);
  v9 = v19[0];
  if ( !valid
    || (v10 = *(_QWORD *)(v19[0] + 504LL)) == 0
    || (v11 = *(_QWORD *)(v19[0] + 48LL), !*(_QWORD *)(v11 + 2552))
    || (*(_DWORD *)(v10 + 112) & 0x2000000) == 0 )
  {
LABEL_33:
    v13 = 0;
    goto LABEL_12;
  }
  if ( a2 )
  {
    v15 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v11 + 3136);
    if ( gUMPDSecurityLevel == 2
      || gUMPDSecurityLevel
      && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v8),
          (unsigned int)bIsProcessLocalSystem(CurrentProcess))
      || v15 )
    {
      v13 = v15(v10 + 24, a3);
    }
    else
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreDoBanding:!pfnDrvStartBanding\n", 2440);
      v13 = 0;
    }
    a4->cx = *(_DWORD *)(v10 + 56);
    a4->cy = *(_DWORD *)(v10 + 60);
LABEL_11:
    *(struct _POINTL *)(v9 + 2496) = *a3;
    goto LABEL_12;
  }
  v12 = *(__int64 (__fastcall **)(__int64, struct _POINTL *))(v11 + 3144);
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel
      || (v18 = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v8),
          !(unsigned int)bIsProcessLocalSystem(v18)) )
    {
      if ( !v12 )
      {
        if ( gfUMPDDebug )
          DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreDoBanding:!pfnDrvNextBand\n", 2467);
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
    *(_DWORD *)(v9 + 36) &= ~0x100u;
    v16 = *(EWNDOBJ **)(v10 + 136);
    if ( v16 )
    {
      GreDeleteWnd(v16);
      *(_QWORD *)(v10 + 136) = 0LL;
    }
    *(_WORD *)(v9 + 2480) = 0;
  }
LABEL_12:
  if ( v9 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v19);
  return v13;
}
