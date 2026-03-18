/*
 * XREFs of EtwpLoadMicroarchitecturalProfileGroup @ 0x1408F7BF8
 * Callers:
 *     EtwpLoadMicroarchitecturalPmcs @ 0x14076DE5C (EtwpLoadMicroarchitecturalPmcs.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004178 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     KeIsEmptyAffinityEx @ 0x14009E170 (KeIsEmptyAffinityEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1401C1290 (ZwEnumerateKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     KiGetCpuVendor @ 0x14059DB24 (KiGetCpuVendor.c)
 *     RtlpQueryRegistryValues @ 0x1405C1D18 (RtlpQueryRegistryValues.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1408F7A14 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     EtwpGetPmcCpuHierarchyRegistry @ 0x1408F7AD0 (EtwpGetPmcCpuHierarchyRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1408F7ED0 (EtwpLoadMicroarchitecturalProfileSource.c)
 */

void __fastcall EtwpLoadMicroarchitecturalProfileGroup(WCHAR *KeyHandle, __int64 a2)
{
  int CpuVendor; // edi
  __int64 v5; // rbx
  __int64 **v6; // rdx
  __int64 *v7; // r8
  _BYTE *v8; // rcx
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
  unsigned __int16 v22[88]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD KeyInformation[136]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v24; // [rsp+360h] [rbp+260h] BYREF
  int v25; // [rsp+368h] [rbp+268h]
  _QWORD v26[4]; // [rsp+370h] [rbp+270h] BYREF
  char v27; // [rsp+390h] [rbp+290h] BYREF
  char v28; // [rsp+398h] [rbp+298h] BYREF
  _BYTE v29[224]; // [rsp+3D0h] [rbp+2D0h] BYREF

  memset(KeyInformation, 0, 0x218uLL);
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v26[0] = L"Family";
  v26[1] = L"Model";
  v26[2] = L"Stepping";
  memset(v22, 0, 0xA8uLL);
  CpuVendor = KiGetCpuVendor();
  EtwpGetPmcCpuHierarchyRegistry(KeyHandle, &v17, (__int64)&v24);
  memset(v29, 0, sizeof(v29));
  v5 = -1LL;
  v6 = (__int64 **)&v28;
  v7 = v26;
  v24 = -1LL;
  v8 = &v29[24];
  v25 = -1;
  v9 = &v24;
  v10 = 3LL;
  v11 = &v27;
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
    v8 += 56;
    *((_DWORD *)v6 - 2) = 4;
    v6 += 2;
    --v10;
  }
  while ( v10 );
  if ( (int)RtlpQueryRegistryValues(0x40000000u, KeyHandle, (__int64)v29, 0LL) >= 0 && v17 == CpuVendor )
  {
    EtwpGetMicroarchitecturalPmcAffinity((__int64)&v24, v22);
    if ( !(unsigned int)KeIsEmptyAffinityEx(v22) )
    {
      do
        ++v5;
      while ( *(_WORD *)(a2 + 2 * v5) );
      v13 = (unsigned int)(2 * v5 + 512);
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v13, 0x50777445u);
      v15 = -1;
      while ( ZwEnumerateKey(KeyHandle, ++v15, KeyBasicInformation, KeyInformation, 0x216u, &ResultLength) >= 0 )
      {
        v16 = KeyInformation[3] >> 1;
        if ( (unsigned int)v16 <= 0xFE )
        {
          *((_WORD *)&KeyInformation[4] + v16) = 0;
          if ( RtlStringCbPrintfW(PoolWithTag, v13, L"%ws\\%ws", a2, &KeyInformation[4]) >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, PoolWithTag);
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &DestinationString;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&KeyHandlea, 0x20019u, &ObjectAttributes) >= 0 )
            {
              EtwpLoadMicroarchitecturalProfileSource(KeyHandlea, v22, &KeyInformation[4]);
              ZwClose(&KeyHandlea);
            }
          }
        }
      }
      ExFreePoolWithTag(PoolWithTag, 0x50777445u);
    }
  }
}
