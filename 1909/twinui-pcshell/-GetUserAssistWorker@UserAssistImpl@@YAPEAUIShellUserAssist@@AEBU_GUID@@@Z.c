/*
 * XREFs of ?GetUserAssistWorker@UserAssistImpl@@YAPEAUIShellUserAssist@@AEBU_GUID@@@Z @ 0x180132188
 * Callers:
 *     ?UAFireEvent@@YAJPEBU_GUID@@W4tagUAEVENT@@PEBGK@Z @ 0x18013A10C (-UAFireEvent@@YAJPEBU_GUID@@W4tagUAEVENT@@PEBGK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

struct IShellUserAssist *__fastcall UserAssistImpl::GetUserAssistWorker(UserAssistImpl *this, const struct _GUID *a2)
{
  struct IShellUserAssist *result; // rax
  signed __int64 v3; // rcx
  LPVOID ppv; // [rsp+40h] [rbp+8h] BYREF

  ppv = this;
  result = UserAssistImpl::g_cachedUserAssist;
  if ( !UserAssistImpl::g_cachedUserAssist )
  {
    if ( CoCreateInstance(
           &GUID_dd313e04_feff_11d1_8ecd_0000f87a470c,
           0LL,
           0x403u,
           &GUID_49b36d57_5fd2_45a7_981b_06028d577a47,
           &ppv) < 0 )
    {
      v3 = -1LL;
      ppv = (LPVOID)-1LL;
    }
    else
    {
      SHPinDllOfCLSID(&GUID_dd313e04_feff_11d1_8ecd_0000f87a470c);
      v3 = (signed __int64)ppv;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&UserAssistImpl::g_cachedUserAssist, v3, 0LL)
      && ppv != (LPVOID)-1LL )
    {
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
    }
    result = UserAssistImpl::g_cachedUserAssist;
  }
  if ( result == (struct IShellUserAssist *)-1LL )
    return 0LL;
  return result;
}
