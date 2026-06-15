/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a0f022487c8cee8834c9675ba7b0437b___::Run @ 0x18006C3E0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180037244 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a0f022487c8cee8834c9675ba7b0437b___::Run(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        const GUID *a4)
{
  __int64 result; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1801B54F0 > 5 )
    TlgWrite((TraceLoggingHProvider)&dword_1801B54F0, &unk_18017C4B1, a3, a4, 2u, &pData);
  AtmosCheck::PerformLicenseCheck(*(AtmosCheck **)(a1 + 16), 1, a3, a4);
  result = *(_QWORD *)(a1 + 16);
  *(_BYTE *)(result + 98) = 1;
  return result;
}
