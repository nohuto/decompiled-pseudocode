/*
 * XREFs of ?ProcessUpdate@CSaturationEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SATURATIONEFFECT@@@Z @ 0x1801BB154
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSaturationEffect::ProcessUpdate(
        CSaturationEffect *this,
        struct CResourceTable *a2,
        const struct MILCMD_SATURATIONEFFECT *a3)
{
  int v5; // [rsp+28h] [rbp-10h]

  v5 = *((_DWORD *)a3 + 2);
  (*(void (__fastcall **)(CSaturationEffect *, struct CResourceTable *))(*(_QWORD *)this + 56LL))(this, a2);
  *((_DWORD *)this + 44) = v5;
  (*(void (__fastcall **)(CSaturationEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL))(this, 0LL, 0LL);
  return 0LL;
}
