/*
 * XREFs of MiApplyRequiredDriverHotPatches @ 0x140682FA0
 * Callers:
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     MiFindHotPatchRecord @ 0x1406833C4 (MiFindHotPatchRecord.c)
 *     MiLoadHotPatch @ 0x140856C38 (MiLoadHotPatch.c)
 */

__int64 __fastcall MiApplyRequiredDriverHotPatches(__int64 a1)
{
  int v2; // r9d
  __int64 result; // rax
  unsigned int v4; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+58h] [rbp+10h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  v2 = *(_DWORD *)(a1 + 156);
  v7 = *(_DWORD *)(a1 + 120);
  v6 = v2;
  result = MiFindHotPatchRecord((int)&MiGlobalHotPatchList, 0, v7, v2, &DestinationString, 0LL);
  if ( (int)result >= 0 )
  {
    v4 = MiLoadHotPatch(&DestinationString, 0LL, &v7, &v6);
    RtlFreeAnsiString(&DestinationString);
    return v4;
  }
  else if ( (_DWORD)result == -1073741275 )
  {
    return 0LL;
  }
  return result;
}
