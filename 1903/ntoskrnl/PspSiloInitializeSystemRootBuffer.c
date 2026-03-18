/*
 * XREFs of PspSiloInitializeSystemRootBuffer @ 0x1408C5D78
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x1408C5F14 (PspSiloInitializeUserSharedData.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140043E20 (RtlCopyUnicodeString.c)
 *     PsDereferenceSiloContext @ 0x14012DE80 (PsDereferenceSiloContext.c)
 *     PsRemoveSiloContext @ 0x1408C4C70 (PsRemoveSiloContext.c)
 */

__int64 __fastcall PspSiloInitializeSystemRootBuffer(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  const UNICODE_STRING *v5; // rdx
  PCUNICODE_STRING SourceString; // [rsp+38h] [rbp+10h] BYREF

  result = PsRemoveSiloContext(a1, (unsigned int)PsSystemRootSiloContextSlot, (__int64)&SourceString);
  if ( (int)result >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 1256);
    v4 = *(_QWORD *)(v3 + 1104);
    *(_QWORD *)(v3 + 1048) = 0LL;
    *(_QWORD *)(v3 + 1056) = v4 + 30;
    v5 = SourceString;
    *(_WORD *)(v3 + 1050) = 520;
    RtlCopyUnicodeString((PUNICODE_STRING)(v3 + 1048), v5);
    PsDereferenceSiloContext((void *)SourceString);
    return 0LL;
  }
  return result;
}
