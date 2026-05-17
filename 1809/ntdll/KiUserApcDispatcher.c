/*
 * XREFs of KiUserApcDispatcher @ 0x1800A3F10
 * Callers:
 *     KiUserApcDispatcher @ 0x1800A3F10 (KiUserApcDispatcher.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18009F6A0 (RtlRaiseStatus.c)
 *     ZwContinue @ 0x1800A0B40 (ZwContinue.c)
 *     KiUserCallForwarder @ 0x1800A3EC0 (KiUserCallForwarder.c)
 */

void __noreturn KiUserApcDispatcher()
{
  unsigned __int64 v0; // rcx
  int v1; // eax
  int v2; // esi
  unsigned __int64 v3; // rcx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF
  __int64 v5; // [rsp+8h] [rbp+8h]
  __int64 v6; // [rsp+10h] [rbp+10h]
  __int64 v7; // [rsp+18h] [rbp+18h]

  while ( 1 )
  {
    v0 = __ROL8__(-(v7 >> 2), 32);
    if ( (_DWORD)v0 )
    {
      KiUserCallForwarder();
    }
    else
    {
      v3 = (unsigned int)retaddr | v0;
      if ( Wow64ApcRoutine )
      {
        Wow64ApcRoutine(v3, v5, v6, &retaddr);
        v2 = -1073741811;
        goto LABEL_7;
      }
    }
    v1 = ZwContinue();
    if ( v1 )
    {
      if ( v1 == -1073740278 )
        __fastfail(0x30u);
      v2 = v1;
LABEL_7:
      RtlRaiseStatus(v2);
    }
  }
}
