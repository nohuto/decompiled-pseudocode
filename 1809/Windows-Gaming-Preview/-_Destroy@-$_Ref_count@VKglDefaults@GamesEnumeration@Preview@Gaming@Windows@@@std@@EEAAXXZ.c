/*
 * XREFs of ?_Destroy@?$_Ref_count@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@EEAAXXZ @ 0x18003BA10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Ref_count<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::_Destroy(__int64 a1)
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 16);
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
