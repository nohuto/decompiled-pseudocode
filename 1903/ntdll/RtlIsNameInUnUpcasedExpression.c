/*
 * XREFs of RtlIsNameInUnUpcasedExpression @ 0x1800F4F20
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     sub_1800F4FFC @ 0x1800F4FFC (sub_1800F4FFC.c)
 *     sub_1800F5584 @ 0x1800F5584 (sub_1800F5584.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

char __fastcall RtlIsNameInUnUpcasedExpression(int a1, UNICODE_STRING *p_UnicodeString, char a3, __int64 a4)
{
  __int64 v4; // rdi
  UNICODE_STRING *v5; // rbx
  int v6; // eax
  int v7; // eax
  char v8; // bl
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING v11; // [rsp+40h] [rbp-18h] BYREF

  v4 = a4;
  LODWORD(v5) = a1;
  UnicodeString.Buffer = 0LL;
  v11.Buffer = 0LL;
  if ( a3 && !a4 )
  {
    v6 = sub_1800F5584(&UnicodeString);
    if ( v6 < 0 )
      RtlRaiseStatus((unsigned int)v6);
    v7 = sub_1800F5584(&v11);
    if ( v7 < 0 )
      RtlRaiseStatus((unsigned int)v7);
    p_UnicodeString = &UnicodeString;
    v5 = &v11;
    a3 = 0;
  }
  LOBYTE(a4) = 1;
  v8 = sub_1800F4FFC((_DWORD)v5, (_DWORD)p_UnicodeString, a3, a4, v4);
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v11.Buffer )
    RtlFreeUnicodeString(&v11);
  return v8;
}
