/*
 * XREFs of PspSiloInitializeSystemRootBuffer @ 0x140888C10
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x140888D98 (PspSiloInitializeUserSharedData.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     PsDereferenceSiloContext @ 0x14012C170 (PsDereferenceSiloContext.c)
 *     PsRemoveSiloContext @ 0x140887B10 (PsRemoveSiloContext.c)
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
    v4 = *(_QWORD *)(v3 + 1120);
    *(_QWORD *)(v3 + 1064) = 0LL;
    *(_QWORD *)(v3 + 1072) = v4 + 30;
    v5 = SourceString;
    *(_WORD *)(v3 + 1066) = 520;
    RtlCopyUnicodeString((PUNICODE_STRING)(v3 + 1064), v5);
    PsDereferenceSiloContext((void *)SourceString);
    return 0LL;
  }
  return result;
}
