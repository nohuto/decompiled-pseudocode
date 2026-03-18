/*
 * XREFs of UsbhGetRegUsbClassFlags @ 0x1C0024FCC
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x1C0024EA4 (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     RtlStringCbPrintfW @ 0x1C0024E10 (RtlStringCbPrintfW.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002B800 (memset.c)
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
  int v19; // eax
  void (__fastcall *v20)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD); // rax
  __int64 v21; // [rsp+28h] [rbp-59h]
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-49h] BYREF
  __int64 (__fastcall *v23)(int, int, int, int, __int64, __int64); // [rsp+48h] [rbp-39h] BYREF
  int v24; // [rsp+50h] [rbp-31h]
  wchar_t *v25; // [rsp+58h] [rbp-29h]
  wchar_t **v26; // [rsp+60h] [rbp-21h]
  int v27; // [rsp+68h] [rbp-19h]
  __int64 v28; // [rsp+70h] [rbp-11h]
  int v29; // [rsp+78h] [rbp-9h]
  __int64 v30; // [rsp+80h] [rbp-1h]
  int v31; // [rsp+88h] [rbp+7h]
  __int64 v32; // [rsp+90h] [rbp+Fh]

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
            v25 = v11;
            v27 = *((_DWORD *)v13 + 2);
            v23 = UsbhQueryGlobalDeviceValue;
            v24 = 0;
            v26 = v13;
            v28 = 0LL;
            v29 = 0;
            v30 = 0LL;
            v31 = 0;
            v32 = 0LL;
            RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
            SystemRoutineAddress = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
            if ( !SystemRoutineAddress )
              SystemRoutineAddress = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))RtlQueryRegistryValues;
            SystemRoutineAddress(2LL, v8, &v23, a2, 0LL);
            v13 += 3;
            v11 = *v13;
          }
          while ( *v13 );
        }
        LODWORD(v21) = v9;
        if ( (RtlStringCbPrintfW(v8, 0x54uLL, L"usbflags\\CLASS_%02X_SUBCLASS_%02X", v10, v21) & 0xC0000000) != 0xC0000000 )
        {
          v15 = GlobalClassValues;
          v16 = &GlobalClassValues;
          if ( GlobalClassValues )
          {
            do
            {
              v25 = v15;
              v27 = *((_DWORD *)v16 + 2);
              v23 = UsbhQueryGlobalDeviceValue;
              v24 = 0;
              v26 = v16;
              v28 = 0LL;
              v29 = 0;
              v30 = 0LL;
              v31 = 0;
              v32 = 0LL;
              RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
              v17 = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
              if ( !v17 )
                v17 = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))RtlQueryRegistryValues;
              v17(2LL, v8, &v23, a2, 0LL);
              v16 += 3;
              v15 = *v16;
            }
            while ( *v16 );
          }
          if ( (RtlStringCbPrintfW(v8, 0x54uLL, L"usbflags\\CLASS_%02X", v10) & 0xC0000000) != 0xC0000000 )
          {
            for ( i = GlobalClassValues; i; i = *v12 )
            {
              v25 = i;
              v19 = *((_DWORD *)v12 + 2);
              v23 = UsbhQueryGlobalDeviceValue;
              v24 = 0;
              v26 = v12;
              v27 = v19;
              v28 = 0LL;
              v29 = 0;
              v30 = 0LL;
              v31 = 0;
              v32 = 0LL;
              RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
              v20 = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
              if ( !v20 )
                v20 = (void (__fastcall *)(__int64, wchar_t *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))RtlQueryRegistryValues;
              v20(2LL, v8, &v23, a2, 0LL);
              v12 += 3;
            }
          }
        }
      }
      ExFreePoolWithTag(v8, 0);
    }
  }
}
