/*
 * XREFs of KiUserApcDispatcher @ 0x1800A0330
 * Callers:
 *     KiUserApcDispatcher @ 0x1800A0330 (KiUserApcDispatcher.c)
 * Callees:
 *     ZwContinue @ 0x18009CF40 (ZwContinue.c)
 *     sub_1800A02E0 @ 0x1800A02E0 (sub_1800A02E0.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

void __noreturn KiUserApcDispatcher()
{
  unsigned __int64 v0; // rcx
  NTSTATUS v1; // eax
  NTSTATUS v2; // esi
  unsigned __int64 v3; // rcx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF
  __int64 v5; // [rsp+8h] [rbp+8h]
  __int64 v6; // [rsp+10h] [rbp+10h]
  __int64 v7; // [rsp+18h] [rbp+18h]
  char v8; // [rsp+20h] [rbp+20h]

  while ( 1 )
  {
    v0 = __ROL8__(-(v7 >> 2), 32);
    if ( (_DWORD)v0 )
    {
      sub_1800A02E0();
    }
    else
    {
      v3 = (unsigned int)retaddr | v0;
      if ( qword_18017A228 )
      {
        qword_18017A228(v3, v5, v6, &retaddr);
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
