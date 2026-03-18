/*
 * XREFs of ?ProcessSetOffset@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETOFFSET@@@Z @ 0x18007ABAC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDropShadow::ProcessSetOffset(
        CDropShadow *this,
        struct CResourceTable *a2,
        const struct MILCMD_DROPSHADOW_SETOFFSET *a3)
{
  int v3; // xmm1_4
  _DWORD v5[4]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_DWORD *)a3 + 3);
  v5[0] = *((_DWORD *)a3 + 2);
  v5[2] = *((_DWORD *)a3 + 4);
  v5[1] = v3;
  return ((__int64 (__fastcall *)(char *, void *, _DWORD *))xmmword_180306EE0)(
           (char *)this + SDWORD2(xmmword_180306EE0),
           &CDropShadow::sc_Offset,
           v5);
}
