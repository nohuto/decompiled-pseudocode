/*
 * XREFs of EtwpLoadMicroarchitecturalProfileGroup @ 0x1408BC920
 * Callers:
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407424D0 (EtwpLoadMicroarchitecturalPmcs.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     KeIsEmptyAffinityEx @ 0x140062160 (KeIsEmptyAffinityEx.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1401B8930 (ZwEnumerateKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     KiGetCpuVendor @ 0x1405706EC (KiGetCpuVendor.c)
 *     RtlpQueryRegistryValues @ 0x1405C68AC (RtlpQueryRegistryValues.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1408BC73C (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     EtwpGetPmcCpuHierarchyRegistry @ 0x1408BC7F8 (EtwpGetPmcCpuHierarchyRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1408BCBC0 (EtwpLoadMicroarchitecturalProfileSource.c)
 */

void __fastcall EtwpLoadMicroarchitecturalProfileGroup(WCHAR *KeyHandle, __int64 a2)
{
  int CpuVendor; // edi
  __int64 v5; // rbx
  __int64 **v6; // rdx
  __int64 *v7; // r8
  unsigned __int16 *v8; // rcx
  __int64 *v9; // r9
  __int64 v10; // r11
  char *v11; // r10
  __int64 v12; // rax
  SIZE_T v13; // rsi
  WCHAR *PoolWithTag; // rbx
  int v15; // edi
  __int64 v16; // rax
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandlea; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE KeyInformation[12]; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v23; // [rsp+9Ch] [rbp-64h]
  _WORD v24[264]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v25; // [rsp+2B0h] [rbp+1B0h] BYREF
  int v26; // [rsp+2B8h] [rbp+1B8h]
  _QWORD v27[4]; // [rsp+2C0h] [rbp+1C0h] BYREF
  char v28; // [rsp+2E0h] [rbp+1E0h] BYREF
  char v29; // [rsp+2E8h] [rbp+1E8h] BYREF
  unsigned __int16 v30[112]; // [rsp+320h] [rbp+220h] BYREF

  v27[0] = L"Family";
  v27[1] = L"Model";
  v27[2] = L"Stepping";
  CpuVendor = KiGetCpuVendor();
  EtwpGetPmcCpuHierarchyRegistry(KeyHandle, &v17, (__int64)&v25);
  memset(v30, 0, sizeof(v30));
  v5 = -1LL;
  v6 = (__int64 **)&v29;
  v7 = v27;
  v25 = -1LL;
  v8 = &v30[12];
  v26 = -1;
  v9 = &v25;
  v10 = 3LL;
  v11 = &v28;
  do
  {
    *(_QWORD *)v8 = v11;
    *((_QWORD *)v8 - 3) = EtwpQueryRegistryCallback;
    v11 += 16;
    v12 = *v7++;
    *v6 = v9;
    v9 = (__int64 *)((char *)v9 + 4);
    *((_QWORD *)v8 - 1) = v12;
    *((_DWORD *)v8 + 2) = 4;
    v8 += 28;
    *((_DWORD *)v6 - 2) = 4;
    v6 += 2;
    --v10;
  }
  while ( v10 );
  if ( (int)RtlpQueryRegistryValues(0x40000000LL, KeyHandle, (__int64)v30, 0LL) >= 0 && v17 == CpuVendor )
  {
    EtwpGetMicroarchitecturalPmcAffinity((__int64)&v25, v30);
    if ( !(unsigned int)KeIsEmptyAffinityEx(v30) )
    {
      do
        ++v5;
      while ( *(_WORD *)(a2 + 2 * v5) );
      v13 = (unsigned int)(2 * v5 + 512);
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v13, 0x50777445u);
      v15 = -1;
      while ( ZwEnumerateKey(KeyHandle, ++v15, KeyBasicInformation, KeyInformation, 0x216u, &ResultLength) >= 0 )
      {
        v16 = v23 >> 1;
        if ( (unsigned int)v16 <= 0xFE )
        {
          v24[v16] = 0;
          if ( RtlStringCbPrintfW(PoolWithTag, v13, L"%ws\\%ws", a2, v24) >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, PoolWithTag);
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes) >= 0 )
            {
              EtwpLoadMicroarchitecturalProfileSource(KeyHandlea, v30, v24);
              ZwClose(&KeyHandlea);
            }
          }
        }
      }
      ExFreePoolWithTag(PoolWithTag, 0x50777445u);
    }
  }
}
