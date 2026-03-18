/*
 * XREFs of ?ProcessSetSourcePolicy@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETSOURCEPOLICY@@@Z @ 0x180194780
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropShadow::ProcessSetSourcePolicy(
        CDropShadow *this,
        struct CResourceTable *a2,
        const struct MILCMD_DROPSHADOW_SETSOURCEPOLICY *a3)
{
  *((_DWORD *)this + 31) = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CDropShadow *, _QWORD, CDropShadow *))(*(_QWORD *)this + 64LL))(this, 0LL, this);
  return 0LL;
}
