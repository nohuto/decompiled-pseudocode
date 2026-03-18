/*
 * XREFs of PsTestProtectedProcessIncompatibility @ 0x1406B8A5C
 * Callers:
 *     NtCreateUserProcess @ 0x140617920 (NtCreateUserProcess.c)
 *     DbgkCopyProcessDebugPort @ 0x140677E60 (DbgkCopyProcessDebugPort.c)
 *     PspThreadOpen @ 0x1406B88D0 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x1406B8990 (PspProcessOpen.c)
 *     DbgkOpenProcessDebugPort @ 0x1408472F8 (DbgkOpenProcessDebugPort.c)
 *     NtDebugActiveProcess @ 0x140848C20 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140849030 (NtRemoveProcessDebug.c)
 *     DbgkpSendErrorMessage @ 0x140849EA8 (DbgkpSendErrorMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1406B8AB0 (PspCheckForInvalidAccessByProtection.c)
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
      if ( !qword_1404364C0 || !(unsigned __int8)qword_1404364C0(v5, v4) )
        return 1;
    }
  }
  return result;
}
