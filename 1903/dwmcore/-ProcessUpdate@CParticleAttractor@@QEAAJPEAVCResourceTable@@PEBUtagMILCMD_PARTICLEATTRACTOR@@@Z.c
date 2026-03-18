/*
 * XREFs of ?ProcessUpdate@CParticleAttractor@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEATTRACTOR@@@Z @ 0x180212494
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CParticleAttractor::ProcessUpdate(
        CParticleAttractor *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEATTRACTOR *a3)
{
  *((_QWORD *)this + 10) = *((_QWORD *)a3 + 1);
  *((_DWORD *)this + 22) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 23) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 24) = *((_DWORD *)a3 + 6);
  (*(void (__fastcall **)(CParticleAttractor *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return 0LL;
}
