/*
 * XREFs of RaUnitSurpriseRemovalIrp @ 0x1C006E2BC
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00082C0 (RaUnitPnpIrp.c)
 * Callees:
 *     StorpLogPerUnitStatistics @ 0x1C0002BC0 (StorpLogPerUnitStatistics.c)
 *     RaidIsUnitControlSupported @ 0x1C0007578 (RaidIsUnitControlSupported.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0009540 (RaUnitReleaseRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaUnitWaitForRemoveLock @ 0x1C0016D78 (RaUnitWaitForRemoveLock.c)
 *     RaCallMiniportUnitControl @ 0x1C0019BDC (RaCallMiniportUnitControl.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C001E2D4 (RaidUnitUnRegisterInterfaces.c)
 *     RaidUnitConvertToZombieUnit @ 0x1C001E350 (RaidUnitConvertToZombieUnit.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C001E400 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitCancelPendingRequests @ 0x1C001E454 (RaidUnitCancelPendingRequests.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     McTemplateK0zqjuuujsssztt @ 0x1C0027B1C (McTemplateK0zqjuuujsssztt.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RaUnitSurpriseRemovalIrp(__int64 a1, IRP *a2)
{
  int v2; // ebx
  void (__fastcall *v5)(_QWORD, __int64 *); // rax
  __int64 v6; // rcx
  char v7; // dl
  __int64 v8; // rcx
  const struct _MCGEN_TRACE_CONTEXT *p_Logger; // r10
  __int64 v10; // rdi
  __int64 v12; // [rsp+80h] [rbp+17h] BYREF
  __int16 v13; // [rsp+88h] [rbp+1Fh]
  __int64 v14; // [rsp+90h] [rbp+27h]
  __int64 v15; // [rsp+98h] [rbp+2Fh]

  v2 = *(_DWORD *)(a1 + 48);
  v12 = 0LL;
  *(_DWORD *)(a1 + 48) = 5;
  v5 = *(void (__fastcall **)(_QWORD, __int64 *))(a1 + 3312);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    LODWORD(v12) = 8;
    v7 = *(_BYTE *)(v6 + 56);
    *(_WORD *)((char *)&v12 + 5) = *(_WORD *)(a1 + 96);
    HIBYTE(v12) = *(_BYTE *)(a1 + 98);
    BYTE4(v12) = v7;
    v5(0LL, &v12);
    *(_QWORD *)(a1 + 3312) = 0LL;
  }
  if ( (unsigned int)(v2 - 6) > 1 )
    RaidUnitUnRegisterInterfaces(a1);
  RaidUnitCancelPendingRequests(a1);
  if ( RaidIsUnitControlSupported(a1, 10) )
  {
    v8 = *(_QWORD *)(a1 + 24);
    v15 = 0LL;
    v14 = 1LL;
    WORD1(v14) = *(_WORD *)(v8 + 56);
    LOWORD(v15) = *(_WORD *)(a1 + 96);
    BYTE2(v15) = *(_BYTE *)(a1 + 98);
    HIDWORD(v14) = 4;
    RaCallMiniportUnitControl(v8 + 312);
  }
  if ( (byte_1C00617E5 & 4) != 0 )
  {
    p_Logger = (const struct _MCGEN_TRACE_CONTEXT *)&stru_1C0055A88.Logger;
    v10 = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(v10 + 5272) )
      p_Logger = *(const struct _MCGEN_TRACE_CONTEXT **)(v10 + 5272);
    McTemplateK0zqjuuujsssztt(
      a1 + 169,
      a1 + 160,
      a1 + 1976,
      *(const struct _MCGEN_TRACE_CONTEXT **)(v10 + 4864),
      *(_DWORD *)(v10 + 56),
      v10 + 5256,
      *(_BYTE *)(a1 + 96),
      *(_BYTE *)(a1 + 97),
      *(_BYTE *)(a1 + 98),
      a1 + 1976,
      (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 160),
      (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 169),
      (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 186),
      p_Logger,
      (*(_BYTE *)(a1 + 450) & 0x40) != 0,
      *(_BYTE *)(a1 + 450) >> 7);
  }
  StorpLogPerUnitStatistics(a1, v13 | 0x34);
  RaUnitReleaseRemoveLock(a1);
  RaUnitWaitForRemoveLock(a1);
  RaUnitDeregisterFromIdleDetection(a1);
  RaidUnitConvertToZombieUnit(a1);
  return RaidCompleteRequestEx(a2, 0, 0);
}
