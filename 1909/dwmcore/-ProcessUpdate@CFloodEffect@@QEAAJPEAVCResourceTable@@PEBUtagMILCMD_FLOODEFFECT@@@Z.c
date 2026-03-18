/*
 * XREFs of ?ProcessUpdate@CFloodEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FLOODEFFECT@@@Z @ 0x180210544
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFloodEffect::ProcessUpdate(
        CFloodEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_FLOODEFFECT *a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)this;
  *((_OWORD *)this + 11) = *(_OWORD *)((char *)a3 + 8);
  (*(void (__fastcall **)(CFloodEffect *, _QWORD, _QWORD))(v3 + 64))(this, 0LL, 0LL);
  return 0LL;
}
