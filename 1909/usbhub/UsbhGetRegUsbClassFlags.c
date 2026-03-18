/*
 * XREFs of UsbhGetRegUsbClassFlags @ 0x1C0025EE0
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x1C0025DB8 (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     RtlStringCbPrintfW @ 0x1C0025A60 (RtlStringCbPrintfW.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CA00 (memset.c)
 */

void __fastcall UsbhGetRegUsbClassFlags(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rax
  unsigned __int8 v4; // di
  unsigned __int8 v5; // si
  unsigned __int8 v6; // r15
  wchar_t *PoolWithTag; // rax
  wchar_t *v8; // rbx
  int v9; // r12d
  unsigned int v10; // esi
  wchar_t *v11; // rax
  wchar_t **v12; // rdi
  wchar_t **v13; // r15
  void (__fastcall *SystemRoutineAddress)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD); // rax
  wchar_t *v15; // rax
  wchar_t **v16; // r15
  void (__fastcall *v17)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD); // rax
  wchar_t *i; // rax
  void (__fastcall *v19)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD); // rax
  __int64 v20; // [rsp+28h] [rbp-59h]
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-49h] BYREF
  __int64 (__fastcall *v22)(int, int, int, int, __int64, __int64); // [rsp+48h] [rbp-39h] BYREF
  int v23; // [rsp+50h] [rbp-31h]
  wchar_t *v24; // [rsp+58h] [rbp-29h]
  wchar_t **v25; // [rsp+60h] [rbp-21h]
  int v26; // [rsp+68h] [rbp-19h]
  __int64 v27; // [rsp+70h] [rbp-11h]
  int v28; // [rsp+78h] [rbp-9h]
  __int64 v29; // [rsp+80h] [rbp-1h]
  int v30; // [rsp+88h] [rbp+7h]
  __int64 v31; // [rsp+90h] [rbp+Fh]

  v3 = PdoExt(a2);
  v4 = v3[2438];
  v5 = v3[2439];
  v6 = v3[2440];
  if ( (unsigned __int8)(v4 - 1) <= 0xFDu )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x54uLL, 0x42554855u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x54uLL);
      v9 = v5;
      v10 = v4;
      if ( (RtlStringCbPrintfW(v8, 0x54uLL, L"usbflags\\CLASS_%02X_SUBCLASS_%02X_PROTOCOL_%02X", v4, v9, v6) & 0xC0000000) != 0xC0000000 )
      {
        v11 = GlobalClassValues;
        v12 = &GlobalClassValues;
        v13 = &GlobalClassValues;
        if ( GlobalClassValues )
        {
          do
          {
            v24 = v11;
            v26 = *((_DWORD *)v13 + 2);
            *(_QWORD *)&DestinationString.Length = 0LL;
            DestinationString.Buffer = 0LL;
            v22 = UsbhQueryGlobalDeviceValue;
            v23 = 0;
            v25 = v13;
            v27 = 0LL;
            v28 = 0;
            v29 = 0LL;
            v30 = 0;
            v31 = 0LL;
            RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
            SystemRoutineAddress = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
            if ( !SystemRoutineAddress )
              SystemRoutineAddress = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))RtlQueryRegistryValues;
            SystemRoutineAddress(2LL, v8, &v22, a2, 0LL);
            v13 += 3;
            v11 = *v13;
          }
          while ( *v13 );
        }
        LODWORD(v20) = v9;
        if ( (RtlStringCbPrintfW(v8, 0x54uLL, L"usbflags\\CLASS_%02X_SUBCLASS_%02X", v10, v20) & 0xC0000000) != 0xC0000000 )
        {
          v15 = GlobalClassValues;
          v16 = &GlobalClassValues;
          if ( GlobalClassValues )
          {
            do
            {
              v24 = v15;
              v26 = *((_DWORD *)v16 + 2);
              *(_QWORD *)&DestinationString.Length = 0LL;
              DestinationString.Buffer = 0LL;
              v22 = UsbhQueryGlobalDeviceValue;
              v23 = 0;
              v25 = v16;
              v27 = 0LL;
              v28 = 0;
              v29 = 0LL;
              v30 = 0;
              v31 = 0LL;
              RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
              v17 = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
              if ( !v17 )
                v17 = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))RtlQueryRegistryValues;
              v17(2LL, v8, &v22, a2, 0LL);
              v16 += 3;
              v15 = *v16;
            }
            while ( *v16 );
          }
          if ( (RtlStringCbPrintfW(v8, 0x54uLL, L"usbflags\\CLASS_%02X", v10) & 0xC0000000) != 0xC0000000 )
          {
            for ( i = GlobalClassValues; i; i = *v12 )
            {
              v24 = i;
              v26 = *((_DWORD *)v12 + 2);
              v22 = UsbhQueryGlobalDeviceValue;
              *(_QWORD *)&DestinationString.Length = 0LL;
              DestinationString.Buffer = 0LL;
              v23 = 0;
              v25 = v12;
              v27 = 0LL;
              v28 = 0;
              v29 = 0LL;
              v30 = 0;
              v31 = 0LL;
              RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
              v19 = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
              if ( !v19 )
                v19 = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))RtlQueryRegistryValues;
              v19(2LL, v8, &v22, a2, 0LL);
              v12 += 3;
            }
          }
        }
      }
      ExFreePoolWithTag(v8, 0);
    }
  }
}
