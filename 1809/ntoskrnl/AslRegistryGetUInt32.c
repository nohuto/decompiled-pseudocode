/*
 * XREFs of AslRegistryGetUInt32 @ 0x1408E97AC
 * Callers:
 *     SdbpQueryAppCompatFlagsByExeID @ 0x1407233CC (SdbpQueryAppCompatFlagsByExeID.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     AslLogCallPrintf @ 0x140680C80 (AslLogCallPrintf.c)
 *     AslRegistryGetUInt32_UStr @ 0x1408E9824 (AslRegistryGetUInt32_UStr.c)
 */

__int64 __fastcall AslRegistryGetUInt32(__int64 a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS inited; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  inited = RtlInitUnicodeStringEx(&DestinationString, a3);
  if ( inited >= 0 )
    return (unsigned int)AslRegistryGetUInt32_UStr(a1, a2, &DestinationString);
  else
    AslLogCallPrintf(1LL);
  return (unsigned int)inited;
}
