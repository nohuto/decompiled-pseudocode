/*
 * XREFs of MiApplyRequiredDriverHotPatches @ 0x1407104F0
 * Callers:
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     MiFindHotPatchRecord @ 0x140711564 (MiFindHotPatchRecord.c)
 *     MiLoadHotPatch @ 0x14088E6D0 (MiLoadHotPatch.c)
 */

__int64 __fastcall MiApplyRequiredDriverHotPatches(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  result = MiFindHotPatchRecord(
             (int)&MiGlobalHotPatchList,
             0,
             *(_DWORD *)(a1 + 120),
             *(_DWORD *)(a1 + 156),
             &DestinationString,
             0LL);
  if ( (int)result >= 0 )
  {
    v3 = MiLoadHotPatch(&DestinationString);
    RtlFreeAnsiString(&DestinationString);
    return v3;
  }
  else if ( (_DWORD)result == -1073741275 )
  {
    return 0LL;
  }
  return result;
}
