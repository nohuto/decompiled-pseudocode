/*
 * XREFs of ?GetDataFlow@CAudioStream@@UEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@XZ @ 0x180043E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CAudioStream::GetDataFlow(CAudioStream *this)
{
  return (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 1) + 64LL))((char *)this - 8) != 0;
}
