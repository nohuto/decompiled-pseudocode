/*
 * XREFs of ?ProcessSetSourcePolicy@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DROPSHADOW_SETSOURCEPOLICY@@@Z @ 0x1801CA51C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropShadow::ProcessSetSourcePolicy(
        CDropShadow *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DROPSHADOW_SETSOURCEPOLICY *a3)
{
  *((_DWORD *)this + 33) = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CDropShadow *, _QWORD, CDropShadow *))(*(_QWORD *)this + 64LL))(this, 0LL, this);
  return 0LL;
}
