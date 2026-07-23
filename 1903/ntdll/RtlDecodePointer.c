/*
 * XREFs of RtlDecodePointer @ 0x180067DA0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

PVOID __cdecl RtlDecodePointer(PVOID Ptr)
{
  unsigned int v1; // edx
  int v4; // eax
  int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v1 = dword_180166018;
  if ( !dword_180166018 )
  {
    v4 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
    if ( v4 < 0 )
      RtlRaiseStatus(v4);
    v1 = ProcessInformation;
    dword_180166018 = ProcessInformation;
  }
  return (PVOID)(__ROR8__(Ptr, 64 - (v1 & 0x3F)) ^ v1);
}
