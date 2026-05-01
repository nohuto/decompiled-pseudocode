/*
 * XREFs of ?PerformDelayedInitialization@KioskPositioner@@UEAAJXZ @ 0x180099540
 * Callers:
 *     <none>
 * Callees:
 *     ?SetWindowManagement@KioskPositioner@@AEAAXXZ @ 0x180099ED8 (-SetWindowManagement@KioskPositioner@@AEAAXXZ.c)
 */

__int64 __fastcall KioskPositioner::PerformDelayedInitialization(KioskPositioner *this)
{
  __int64 result; // rax
  KioskPositioner *v2; // rcx
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_BYTE *)this + 568) )
    return 0LL;
  v2 = (KioskPositioner *)((char *)this - 40);
  try
  {
    KioskPositioner::SetWindowManagement(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x255,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
                           v3);
  }
  return result;
}
