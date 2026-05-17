/*
 * XREFs of RtlIsNameInExpression @ 0x1800F4E70
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     sub_1800F4FFC @ 0x1800F4FFC (sub_1800F4FFC.c)
 *     sub_1800F5584 @ 0x1800F5584 (sub_1800F5584.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

char __fastcall RtlIsNameInExpression(int a1, UNICODE_STRING *p_UnicodeString, char a3, __int64 a4)
{
  int v6; // eax
  wchar_t *Buffer; // rbx
  char v8; // di
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  if ( !a3 || a4 )
  {
    Buffer = 0LL;
    UnicodeString.Buffer = 0LL;
  }
  else
  {
    v6 = sub_1800F5584(&UnicodeString);
    if ( v6 < 0 )
      RtlRaiseStatus((unsigned int)v6);
    p_UnicodeString = &UnicodeString;
    a3 = 0;
    Buffer = UnicodeString.Buffer;
  }
  v8 = sub_1800F4FFC(a1, (_DWORD)p_UnicodeString, a3, 0, a4);
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return v8;
}
