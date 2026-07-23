/*
 * XREFs of RtlEncodePointer @ 0x18006FBD0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

PVOID __cdecl RtlEncodePointer(PVOID Ptr)
{
  __int64 v1; // rax
  int v4; // eax
  unsigned int ProcessInformation; // [rsp+48h] [rbp+10h] BYREF

  v1 = (unsigned int)dword_180166018;
  if ( !dword_180166018 )
  {
    v4 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &ProcessInformation, 4u, 0LL);
    if ( v4 < 0 )
      RtlRaiseStatus(v4);
    v1 = ProcessInformation;
    dword_180166018 = ProcessInformation;
  }
  return (PVOID)__ROR8__((unsigned __int64)Ptr ^ v1, v1 & 0x3F);
}
