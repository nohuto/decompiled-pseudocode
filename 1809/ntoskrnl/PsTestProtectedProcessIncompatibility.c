/*
 * XREFs of PsTestProtectedProcessIncompatibility @ 0x14060921C
 * Callers:
 *     PspThreadOpen @ 0x140609090 (PspThreadOpen.c)
 *     PspProcessOpen @ 0x140609150 (PspProcessOpen.c)
 *     DbgkCopyProcessDebugPort @ 0x140609650 (DbgkCopyProcessDebugPort.c)
 *     NtCreateUserProcess @ 0x14060A950 (NtCreateUserProcess.c)
 *     DbgkOpenProcessDebugPort @ 0x14080E3B8 (DbgkOpenProcessDebugPort.c)
 *     NtDebugActiveProcess @ 0x14080FC60 (NtDebugActiveProcess.c)
 *     NtRemoveProcessDebug @ 0x140810050 (NtRemoveProcessDebug.c)
 *     DbgkpSendErrorMessage @ 0x140810DEC (DbgkpSendErrorMessage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     PspCheckForInvalidAccessByProtection @ 0x140609270 (PspCheckForInvalidAccessByProtection.c)
 */

bool __fastcall PsTestProtectedProcessIncompatibility(__int64 a1, __int64 a2, __int64 a3)
{
  bool result; // al
  __int64 v4; // r10
  __int64 v5; // r11

  result = 0;
  if ( a2 != a3 )
  {
    LOBYTE(a2) = *(_BYTE *)(a2 + 1738);
    LOBYTE(a3) = *(_BYTE *)(a3 + 1738);
    if ( (unsigned __int8)PspCheckForInvalidAccessByProtection(a1, a2, a3) )
    {
      if ( !qword_14040DE40 || !(unsigned __int8)qword_14040DE40(v5, v4) )
        return 1;
    }
  }
  return result;
}
