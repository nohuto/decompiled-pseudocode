/*
 * XREFs of KiUserApcDispatcher @ 0x1800A0AE0
 * Callers:
 *     KiUserApcDispatcher @ 0x1800A0AE0 (KiUserApcDispatcher.c)
 * Callees:
 *     ZwContinue @ 0x18009D6F0 (ZwContinue.c)
 *     KiUserCallForwarder @ 0x1800A0A90 (KiUserCallForwarder.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

void __noreturn KiUserApcDispatcher()
{
  unsigned __int64 v0; // rcx
  NTSTATUS v1; // eax
  NTSTATUS v2; // esi
  unsigned __int64 v3; // rcx
  __int64 retaddr; // [rsp+0h] [rbp+0h] BYREF
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR *v5; // [rsp+8h] [rbp+8h]
  __int64 v6; // [rsp+10h] [rbp+10h]
  __int64 v7; // [rsp+18h] [rbp+18h]
  char v8; // [rsp+20h] [rbp+20h]

  while ( 1 )
  {
    v0 = __ROL8__(-(v7 >> 2), 32);
    if ( (_DWORD)v0 )
    {
      KiUserCallForwarder(retaddr, v5);
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
    v1 = ZwContinue((PCONTEXT)&retaddr, v8 & 1);
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
