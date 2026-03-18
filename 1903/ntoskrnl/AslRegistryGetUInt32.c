/*
 * XREFs of AslRegistryGetUInt32 @ 0x140926478
 * Callers:
 *     SdbpQueryAppCompatFlagsByExeID @ 0x1407725A4 (SdbpQueryAppCompatFlagsByExeID.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     AslRegistryGetUInt32_UStr @ 0x1409264F8 (AslRegistryGetUInt32_UStr.c)
 */

__int64 __fastcall AslRegistryGetUInt32(__int64 a1, __int64 a2, const WCHAR *a3)
{
  NTSTATUS inited; // ebx
  UNICODE_STRING v7; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&v7.Length = 0LL;
  v7.Buffer = 0LL;
  inited = RtlInitUnicodeStringEx(&v7, a3);
  if ( inited >= 0 )
    return (unsigned int)AslRegistryGetUInt32_UStr(a1, a2, &v7);
  else
    AslLogCallPrintf(1LL);
  return (unsigned int)inited;
}
