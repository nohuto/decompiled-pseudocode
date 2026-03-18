/*
 * XREFs of PsTestProtectedProcessIncompatibility @ 0x14067222C
 * Callers:
 *     NtCreateUserProcess @ 0x140615E10 (NtCreateUserProcess.c)
 *     PspThreadOpen @ 0x1406720A0 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x140672160 (PspProcessOpen.c)
 *     DbgkCopyProcessDebugPort @ 0x14067274C (DbgkCopyProcessDebugPort.c)
 *     DbgkOpenProcessDebugPort @ 0x140847BF0 (DbgkOpenProcessDebugPort.c)
 *     NtDebugActiveProcess @ 0x140849520 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140849930 (NtRemoveProcessDebug.c)
 *     DbgkpSendErrorMessage @ 0x14084A7A8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     PspCheckForInvalidAccessByProtection @ 0x140672280 (PspCheckForInvalidAccessByProtection.c)
 */

bool __fastcall PsTestProtectedProcessIncompatibility(__int64 a1, __int64 a2, __int64 a3)
{
  bool result; // al
  __int64 v4; // r10
  __int64 v5; // r11

  result = 0;
  if ( a2 != a3 )
  {
    LOBYTE(a2) = *(_BYTE *)(a2 + 1786);
    LOBYTE(a3) = *(_BYTE *)(a3 + 1786);
    if ( (unsigned __int8)PspCheckForInvalidAccessByProtection(a1, a2, a3) )
    {
      if ( !qword_140436540 || !(unsigned __int8)qword_140436540(v5, v4) )
        return 1;
    }
  }
  return result;
}
