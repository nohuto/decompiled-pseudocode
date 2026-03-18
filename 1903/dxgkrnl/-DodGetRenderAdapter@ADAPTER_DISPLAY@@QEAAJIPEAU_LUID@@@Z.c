/*
 * XREFs of ?DodGetRenderAdapter@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C01F13F4
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5770 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DodGetRenderAdapter(ADAPTER_DISPLAY *this, __int64 a2, struct _LUID *a3)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rax

  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _LUID *))(*((_QWORD *)this + 2) + 1824LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 1744LL),
         a2,
         a3);
  v7 = v3;
  if ( v3 < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdError(v8);
  }
  return (unsigned int)v7;
}
