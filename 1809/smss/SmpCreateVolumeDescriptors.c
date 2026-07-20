/*
 * XREFs of SmpCreateVolumeDescriptors @ 0x1400068E0
 * Callers:
 *     SmpCreatePagingFiles @ 0x14000B0A8 (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpCreateVolumeDescriptor @ 0x140006DD0 (SmpCreateVolumeDescriptor.c)
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 */

__int64 SmpCreateVolumeDescriptors()
{
  unsigned int v0; // edi
  NTSTATUS InformationProcess; // ecx
  __int64 v2; // rbx
  __int64 v3; // rdx
  WCHAR *v4; // rcx
  WCHAR v5; // ax
  WCHAR *v6; // rcx
  WCHAR v7; // ax
  WCHAR i; // bx
  int v9; // eax
  __int64 v11; // rax
  struct _UNICODE_STRING v12; // [rsp+30h] [rbp-78h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-68h] BYREF
  _DWORD ProcessInformation[10]; // [rsp+50h] [rbp-58h] BYREF
  WCHAR SourceString[8]; // [rsp+78h] [rbp-30h] BYREF
  WCHAR v16[8]; // [rsp+88h] [rbp-20h] BYREF

  v0 = 0;
  InformationProcess = NtQueryInformationProcess(
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         ProcessDeviceMap,
                         ProcessInformation,
                         0x24u,
                         0LL);
  if ( InformationProcess < 0 )
  {
    v11 = 2LL * (_InterlockedIncrement(&SmpPagefileLogIndex) % 32);
    *((_DWORD *)&SmpPagefileLog + 2 * v11) = 1638;
    *((_DWORD *)&SmpPagefileLog + 2 * v11 + 1) = InformationProcess;
    *((_QWORD *)&SmpPagefileLog + v11 + 1) = 0LL;
    return (unsigned int)InformationProcess;
  }
  else
  {
    v2 = 8LL;
    v3 = 8LL;
    v4 = SourceString;
    while ( v3 != -2147483638 )
    {
      v5 = *(WCHAR *)((char *)v4 + (char *)L"\\??\\A:\\" - (char *)SourceString);
      if ( !v5 )
        break;
      *v4++ = v5;
      if ( !--v3 )
      {
        --v4;
        break;
      }
    }
    *v4 = 0;
    RtlInitUnicodeStringEx(&DestinationString, SourceString);
    v6 = v16;
    while ( v2 != -2147483638 )
    {
      v7 = *(WCHAR *)((char *)v6 + (char *)L"\\??\\A:" - (char *)v16);
      if ( !v7 )
        break;
      *v6++ = v7;
      if ( !--v2 )
      {
        --v6;
        break;
      }
    }
    *v6 = 0;
    RtlInitUnicodeStringEx(&v12, v16);
    for ( i = 67; i <= 0x5Au; ++i )
    {
      v9 = ProcessInformation[0];
      if ( _bittest(&v9, (unsigned __int8)(i - 65)) && (SmpPagefileOnOsVolume != 1 || i == SmpOsVolumeLetter) )
      {
        DestinationString.Buffer[4] = i;
        v12.Buffer[4] = i;
        SmpCreateVolumeDescriptor(i, &DestinationString, &v12);
      }
    }
    if ( (__int64 *)SmpVolumeDescriptorList == &SmpVolumeDescriptorList )
      return (unsigned int)-1073741591;
    return v0;
  }
}
