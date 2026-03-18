/*
 * XREFs of CmpEtwReleaseHivePath @ 0x140699D34
 * Callers:
 *     CmKtmNotification @ 0x1406999A0 (CmKtmNotification.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 */

void __fastcall CmpEtwReleaseHivePath(UNICODE_STRING *a1)
{
  if ( a1->Buffer )
    RtlFreeAnsiString(a1);
}
