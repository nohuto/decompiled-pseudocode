/*
 * XREFs of ?AttachDeviceImpl@MPCRawInputProvider@@AEAAXAEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@Z @ 0x180094240
 * Callers:
 *     ?AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z @ 0x18009411C (-AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z.c)
 *     ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x180094310 (-FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@ULegacyDeviceInfo@@@1@QEAV21@AEBV21@@Z @ 0x180093978 (--$_Emplace_reallocate@AEBV-$shared_ptr@ULegacyDeviceInfo@@@std@@@-$vector@V-$shared_ptr@ULegacy.c)
 */

unsigned __int64 __fastcall MPCRawInputProvider::AttachDeviceImpl(__int64 a1, _QWORD *a2, __int64 a3, const char *a4)
{
  _QWORD *v4; // rbx
  _DWORD **i; // r8
  int v7; // eax
  _QWORD *v8; // rdx
  __int64 v9; // rax
  unsigned __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (_QWORD *)(a1 + 24);
  for ( i = *(_DWORD ***)(a1 + 24); i != *(_DWORD ***)(a1 + 32); i += 2 )
  {
    if ( **i == *(_DWORD *)*a2 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        312LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
        a4);
      __debugbreak();
    }
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 16) + 40LL))(
         *(_QWORD *)(a1 + 16),
         *a2,
         a1);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      314LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = (_QWORD *)v4[1];
  if ( (_QWORD *)v4[2] == v8 )
    return std::vector<std::shared_ptr<LegacyDeviceInfo>>::_Emplace_reallocate<std::shared_ptr<LegacyDeviceInfo> const &>(
             v4,
             v8,
             a2);
  *v8 = 0LL;
  v8[1] = 0LL;
  v9 = a2[1];
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
  *v8 = *a2;
  result = a2[1];
  v8[1] = result;
  v4[1] += 16LL;
  return result;
}
