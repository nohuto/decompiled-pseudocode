/*
 * XREFs of ??0CComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@@Z @ 0x180088E34
 * Callers:
 *     ??0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@@Z @ 0x18006310C (--0CCrossThreadComposition@@IEAA@PEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection.c)
 * Callees:
 *     ??0?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x180062E20 (--0-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 *     ??0CMmcssTask@@QEAA@XZ @ 0x1800899A8 (--0CMmcssTask@@QEAA@XZ.c)
 */

CComposition *__fastcall CComposition::CComposition(
        CComposition *this,
        struct CKernelTransport *a2,
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
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  CMmcssTask::CMmcssTask((CComposition *)((char *)this + 144));
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 64) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_DWORD *)this + 74) = 0;
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((char *)this + 312);
  *((_DWORD *)this + 88) = 1;
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((char *)this + 384);
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((char *)this + 416);
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_DWORD *)this + 118) = 0;
  *((_QWORD *)this + 62) = a5;
  *((_QWORD *)this + 64) = 0LL;
  *((_DWORD *)this + 130) = 0;
  *((_QWORD *)this + 66) = a2;
  *((_QWORD *)this + 67) = a3;
  *((_QWORD *)this + 68) = a4;
  *((_DWORD *)this + 140) = 0;
  InitializeSRWLock((PSRWLOCK)this + 69);
  *((_DWORD *)this + 146) = 2;
  *((_QWORD *)this + 71) = (char *)this + 600;
  *((_QWORD *)this + 72) = (char *)this + 600;
  *(_QWORD *)((char *)this + 588) = 2LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_DWORD *)this + 160) = 0;
  *((_QWORD *)this + 81) = (char *)this + 680;
  *((_QWORD *)this + 82) = (char *)this + 680;
  *((_DWORD *)this + 166) = 1;
  *(_QWORD *)((char *)this + 668) = 1LL;
  *((_QWORD *)this + 86) = (char *)this + 720;
  *((_QWORD *)this + 87) = (char *)this + 720;
  *((_DWORD *)this + 176) = 2;
  *(_QWORD *)((char *)this + 708) = 2LL;
  *((_QWORD *)this + 92) = (char *)this + 768;
  *((_QWORD *)this + 93) = (char *)this + 768;
  *((_DWORD *)this + 188) = 16;
  *(_QWORD *)((char *)this + 756) = 16LL;
  *((_QWORD *)this + 112) = 0LL;
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 114) = 0LL;
  *((_DWORD *)this + 230) = 0;
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_DWORD *)this + 238) = 0;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_DWORD *)this + 246) = 0;
  *((_QWORD *)this + 124) = 0LL;
  *((_QWORD *)this + 125) = 0LL;
  *((_QWORD *)this + 126) = 0LL;
  *((_DWORD *)this + 254) = 0;
  *((_QWORD *)this + 128) = 0LL;
  *((_QWORD *)this + 129) = 0LL;
  *((_QWORD *)this + 130) = 0LL;
  *((_DWORD *)this + 262) = 0;
  *((_QWORD *)this + 132) = 0LL;
  *((_QWORD *)this + 133) = 0LL;
  *((_QWORD *)this + 134) = 0LL;
  *((_QWORD *)this + 136) = 0LL;
  *((_QWORD *)this + 138) = 0LL;
  *((_DWORD *)this + 274) = 0;
  *((_DWORD *)this + 278) = 0;
  *((_QWORD *)this + 152) = 0LL;
  *((_QWORD *)this + 156) = 0LL;
  *((_BYTE *)this + 1258) = 0;
  *((_BYTE *)this + 1260) = 0;
  InitializeSListHead((PSLIST_HEADER)this + 77);
  *((_BYTE *)this + 1257) = 1;
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  return this;
}
