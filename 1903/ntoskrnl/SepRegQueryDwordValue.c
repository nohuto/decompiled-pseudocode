/*
 * XREFs of SepRegQueryDwordValue @ 0x14061A8B0
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x14061A5C0 (NtImpersonateAnonymousToken.c)
 *     SeGetImageRequiredSigningLevel @ 0x1406E2AC8 (SeGetImageRequiredSigningLevel.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     SepRegQueryValue @ 0x14061A920 (SepRegQueryValue.c)
 *     SepRegOpenKey @ 0x14061AA0C (SepRegOpenKey.c)
 */

__int64 __fastcall SepRegQueryDwordValue(const WCHAR *a1, __int64 a2, void *a3)
{
  int Value; // ebx
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  Handle = 0LL;
  Value = SepRegOpenKey(a1, 0x201u, &Handle);
  if ( Value >= 0 )
  {
    Value = SepRegQueryValue(Handle, a3);
    ZwClose(Handle);
  }
  return (unsigned int)Value;
}
