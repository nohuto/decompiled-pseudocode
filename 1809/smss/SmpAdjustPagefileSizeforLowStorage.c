/*
 * XREFs of SmpAdjustPagefileSizeforLowStorage @ 0x14000D528
 * Callers:
 *     SmpCreatePagingFiles @ 0x14000B0A8 (SmpCreatePagingFiles.c)
 * Callees:
 *     <none>
 */

__int64 SmpAdjustPagefileSizeforLowStorage()
{
  __int64 result; // rax
  _QWORD *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int16 v4; // ax
  __int64 v5; // rax
  int v6; // [rsp+30h] [rbp-18h] BYREF
  const wchar_t *v7; // [rsp+38h] [rbp-10h]
  int v8; // [rsp+50h] [rbp+8h] BYREF
  int v9; // [rsp+58h] [rbp+10h] BYREF
  int v10; // [rsp+60h] [rbp+18h] BYREF

  result = (__int64)L"System-ConfigurePagefileForLowStorage-Enabled";
  v1 = SmpPagingFileDescriptorList;
  v6 = 6029402;
  v7 = L"System-ConfigurePagefileForLowStorage-Enabled";
  if ( SmpNumberOfPagefileDescriptors == 1 )
  {
    result = (__int64)&SmpPagingFileDescriptorList;
    if ( SmpPagingFileDescriptorList != &SmpPagingFileDescriptorList )
    {
      result = *((_DWORD *)SmpPagingFileDescriptorList + 23) & 6;
      if ( (*((_BYTE *)SmpPagingFileDescriptorList + 92) & 6) == 6 )
      {
        result = SmpOsVolumeDescriptor;
        v2 = 0LL;
        if ( SmpOsVolumeDescriptor )
        {
          if ( *(_QWORD *)(SmpOsVolumeDescriptor + 40) <= 0x800000000uLL )
          {
            result = NtQueryLicenseValue(&v6, &v8, &v10, 4LL, &v9);
            if ( (int)result >= 0 && v8 == 4 && v9 == 4 && v10 )
            {
              v3 = v1[3];
              v4 = SmpOsVolumeLetter;
              *((_DWORD *)v1 + 23) &= 0xFFFFFFF9;
              SmpAnyDriveDescriptorCreated = 0;
              *(_WORD *)(v3 + 8) = v4;
              v5 = 0x80000000LL;
              if ( *(_QWORD *)(SmpOsVolumeDescriptor + 40) > 0x400000000uLL )
              {
                v2 = 0x10000000LL;
                if ( (unsigned __int64)SmpMemorySize > 0xC0000000 )
                  v5 = 1610612736LL;
                v1[7] = v5;
                v5 = 4026531840LL;
              }
              else
              {
                if ( (unsigned __int64)SmpMemorySize > 0xC0000000 )
                  v5 = 0x4000000LL;
                v1[7] = v5;
              }
              SmpMaxSwapFileSize = v2;
              v1[8] = v5;
              result = v1[7];
              v1[6] = result;
            }
          }
        }
      }
    }
  }
  return result;
}
