/*
 * XREFs of ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C020D8B4
 * Callers:
 *     DxgkUpdateGpuVirtualAddress @ 0x1C0209BB0 (DxgkUpdateGpuVirtualAddress.c)
 *     ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1C020D848 (-GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

struct _VIDSCH_CONTEXT *__fastcall DXGCONTEXT::GetVidSchCompanionContext(DXGCONTEXT *this)
{
  struct _VIDSCH_CONTEXT *result; // rax
  int v3; // eax
  __int64 v4; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+28h] [rbp-30h]
  __int64 v6; // [rsp+30h] [rbp-28h]
  int v7; // [rsp+38h] [rbp-20h]

  result = (struct _VIDSCH_CONTEXT *)*((_QWORD *)this + 35);
  if ( !result )
  {
    v4 = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    v7 = 0;
    v3 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 304LL);
    v4 = 64LL;
    HIDWORD(v6) = v3;
    LODWORD(v5) = *((_DWORD *)this + 102);
    result = (struct _VIDSCH_CONTEXT *)(*(__int64 (__fastcall **)(DXGCONTEXT *, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL) + 8LL)
                                                                                          + 216LL))(
                                         this,
                                         &v4);
    *((_QWORD *)this + 35) = result;
  }
  return result;
}
