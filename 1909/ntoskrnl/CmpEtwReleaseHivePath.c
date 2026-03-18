/*
 * XREFs of CmpEtwReleaseHivePath @ 0x1406BB234
 * Callers:
 *     CmKtmNotification @ 0x1406BAEA0 (CmKtmNotification.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 */

void __fastcall CmpEtwReleaseHivePath(UNICODE_STRING *a1)
{
  if ( a1->Buffer )
    RtlFreeAnsiString(a1);
}
