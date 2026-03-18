/*
 * XREFs of ??0CComposition@@IEAA@PEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@@Z @ 0x1800E0434
 * Callers:
 *     ?Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAPEAVCComposition@@@Z @ 0x1800DFE48 (-Create@CGlobalComposition@@SAJPEAVCTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCD.c)
 * Callees:
 *     ??0?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x1800E0790 (--0-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800E0EF0 (--0CMmcssTask@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

CComposition *__fastcall CComposition::CComposition(
        CComposition *this,
        struct CTransport *a2,
        struct ICompositorScheduler *a3,
        struct CConnection *a4,
        struct CDebugFrameCounter *a5)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CComposition::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = this;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  CMmcssTask::CMmcssTask((CComposition *)((char *)this + 160));
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 0;
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((char *)this + 328);
  *((_DWORD *)this + 92) = 1;
  *((_QWORD *)this + 47) = 0LL;
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((char *)this + 400);
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((char *)this + 432);
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 122) = 0;
  *((_QWORD *)this + 64) = a5;
  *((_QWORD *)this + 66) = 0LL;
  *((_DWORD *)this + 134) = 0;
  *((_QWORD *)this + 68) = a2;
  *((_QWORD *)this + 69) = a3;
  *((_QWORD *)this + 70) = a4;
  *((_QWORD *)this + 71) = 0LL;
  *((_DWORD *)this + 144) = 0;
  *((_QWORD *)this + 73) = (char *)this + 616;
  *((_QWORD *)this + 74) = (char *)this + 616;
  *((_DWORD *)this + 150) = 2;
  *(_QWORD *)((char *)this + 604) = 2LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_DWORD *)this + 164) = 0;
  *((_QWORD *)this + 83) = (char *)this + 696;
  *((_QWORD *)this + 84) = (char *)this + 696;
  *((_DWORD *)this + 170) = 1;
  *(_QWORD *)((char *)this + 684) = 1LL;
  *((_QWORD *)this + 88) = (char *)this + 736;
  *((_QWORD *)this + 89) = (char *)this + 736;
  *((_DWORD *)this + 180) = 2;
  *(_QWORD *)((char *)this + 724) = 2LL;
  *((_QWORD *)this + 94) = (char *)this + 784;
  *((_QWORD *)this + 95) = (char *)this + 784;
  *((_DWORD *)this + 192) = 16;
  *(_QWORD *)((char *)this + 772) = 16LL;
  *((_QWORD *)this + 114) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_QWORD *)this + 116) = 0LL;
  *((_DWORD *)this + 234) = 0;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_DWORD *)this + 242) = 0;
  *((_QWORD *)this + 122) = 0LL;
  *((_QWORD *)this + 123) = 0LL;
  *((_QWORD *)this + 124) = 0LL;
  *((_DWORD *)this + 250) = 0;
  *((_QWORD *)this + 126) = 0LL;
  *((_QWORD *)this + 127) = 0LL;
  *((_QWORD *)this + 128) = 0LL;
  *((_DWORD *)this + 258) = 0;
  *((_QWORD *)this + 130) = 0LL;
  *((_QWORD *)this + 131) = 0LL;
  *((_QWORD *)this + 132) = 0LL;
  *((_DWORD *)this + 266) = 0;
  *((_QWORD *)this + 134) = 0LL;
  *((_QWORD *)this + 135) = 0LL;
  *((_QWORD *)this + 136) = 0LL;
  *((_QWORD *)this + 138) = 0LL;
  *((_QWORD *)this + 140) = 0LL;
  *((_DWORD *)this + 278) = 0;
  *((_DWORD *)this + 282) = 0;
  *((_QWORD *)this + 154) = 0LL;
  *((_QWORD *)this + 158) = 0LL;
  *((_BYTE *)this + 1275) = 0;
  *((_BYTE *)this + 1277) = 0;
  *((_BYTE *)this + 1279) = 0;
  *((_DWORD *)this + 320) = 900;
  *((_DWORD *)this + 326) = 37120;
  *(_QWORD *)((char *)this + 1308) = 37120LL;
  *((_DWORD *)this + 329) = 0;
  *((_BYTE *)this + 1320) = 0;
  InitializeSListHead((PSLIST_HEADER)this + 78);
  *((_BYTE *)this + 1274) = 1;
  *((_QWORD *)this + 162) = (*(__int64 (__fastcall **)(struct ICompositorScheduler *))(*(_QWORD *)a3 + 72LL))(a3);
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  return this;
}
