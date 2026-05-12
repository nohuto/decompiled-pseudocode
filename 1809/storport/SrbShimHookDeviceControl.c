/*
 * XREFs of SrbShimHookDeviceControl @ 0x1C0025FA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C060 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1C003B974 (WPP_SF_.c)
 */

__int64 __fastcall SrbShimHookDeviceControl(__int64 a1, __int64 a2)
{
  unsigned __int8 *v2; // r8
  unsigned __int8 v5; // si
  __int64 v6; // rax
  _DWORD *v8; // rax

  v2 = *(unsigned __int8 **)(a2 + 184);
  v5 = *v2;
  if ( *((_DWORD *)v2 + 6) == 2954240 )
  {
    v8 = *(_DWORD **)(a2 + 24);
    if ( v8 )
    {
      if ( !v8[1] && *v8 == 1 && *((_DWORD *)v2 + 2) >= 0x20u )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
        {
          WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_296d74ef2836386db84db064cfdd7f0b_Traceguids);
        }
        (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(), _QWORD))(qword_1C00610E0 + 8))(
          a1,
          a2,
          SrbShimStorageAdapterPropertyCompletionHook,
          0LL);
      }
    }
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD))qword_1C00610E0)(*(_QWORD *)(a1 + 8));
  return (*(__int64 (__fastcall **)(__int64, __int64))(v6 + 8LL * v5 + 32))(a1, a2);
}
