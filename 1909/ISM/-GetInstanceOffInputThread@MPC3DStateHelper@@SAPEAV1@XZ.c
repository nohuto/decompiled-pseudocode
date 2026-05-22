/*
 * XREFs of ?GetInstanceOffInputThread@MPC3DStateHelper@@SAPEAV1@XZ @ 0x18007C108
 * Callers:
 *     ?Register3DCompositor@@YAHPEAUIUnknown@@@Z @ 0x1800530D0 (-Register3DCompositor@@YAHPEAUIUnknown@@@Z.c)
 *     ?Unregister3DCompositor@@YAHXZ @ 0x180053100 (-Unregister3DCompositor@@YAHXZ.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x1800977E8 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct MPC3DStateHelper *MPC3DStateHelper::GetInstanceOffInputThread(void)
{
  DWORD v0; // eax
  const char *v1; // r9
  struct MPC3DStateHelper *result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v0 = WaitForSingleObjectEx(MPC3DStateHelper::s_isInstanceCreatedEvent, 0xFFFFFFFF, 0);
  if ( v0 != 258 && v0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      2512LL,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
      v1);
    __debugbreak();
  }
  result = (struct MPC3DStateHelper *)MPC3DStateHelper::s_instance;
  if ( !MPC3DStateHelper::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      73LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpc3dstatehelper.cpp",
      v1);
    __debugbreak();
  }
  return result;
}
