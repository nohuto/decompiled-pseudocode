/*
 * XREFs of Controller_SetDeviceDescription @ 0x1C0062230
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C0013B50 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     RtlStringCbPrintfW @ 0x1C001448C (RtlStringCbPrintfW.c)
 *     RtlUnalignedStringCbLengthW @ 0x1C00145AC (RtlUnalignedStringCbLengthW.c)
 *     RootHub_GetHighestUsbVersionSupported @ 0x1C0021ED0 (RootHub_GetHighestUsbVersionSupported.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C0060270 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 */

void __fastcall Controller_SetDeviceDescription(_QWORD *a1)
{
  wchar_t *v2; // r12
  __int16 HighestUsbVersionSupported; // ax
  unsigned __int8 v4; // bl
  _QWORD *v5; // rax
  unsigned int v6; // ecx
  unsigned int v7; // r14d
  char **v8; // rdi
  unsigned __int16 v9; // r9
  size_t v10; // rdx
  size_t v11; // rdx
  wchar_t *Text; // r13
  size_t v13; // rax
  rsize_t v14; // r14
  size_t v15; // rdi
  wchar_t *PoolWithTag; // rax
  __int64 v17; // rax
  unsigned __int16 v18; // r9
  NTSTATUS v19; // eax
  void *Data; // rbx
  size_t v21; // rdx
  wchar_t *v22; // rax
  int v23; // r8d
  struct _DEVICE_OBJECT *v24; // rax
  NTSTATUS v25; // eax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+28h] [rbp-89h]
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntrya; // [rsp+28h] [rbp-89h]
  ULONG v28[2]; // [rsp+30h] [rbp-81h]
  unsigned __int8 v29; // [rsp+69h] [rbp-48h]
  size_t pcbLength; // [rsp+70h] [rbp-41h] BYREF
  size_t Size; // [rsp+78h] [rbp-39h] BYREF
  size_t cbDest; // [rsp+80h] [rbp-31h] BYREF
  PMESSAGE_RESOURCE_ENTRY v33; // [rsp+88h] [rbp-29h] BYREF
  PMESSAGE_RESOURCE_ENTRY v34; // [rsp+90h] [rbp-21h] BYREF
  rsize_t MaxCount; // [rsp+98h] [rbp-19h]
  _OWORD v36[3]; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v37; // [rsp+D0h] [rbp+1Fh]
  int v38; // [rsp+D8h] [rbp+27h]

  v38 = *(_DWORD *)L"s";
  v36[0] = *(_OWORD *)L"@System32\\drivers\\usbxhci.sys";
  Size = 0LL;
  v2 = 0LL;
  v36[1] = *(_OWORD *)L"2\\drivers\\usbxhci.sys";
  v36[2] = *(_OWORD *)L"s\\usbxhci.sys";
  v37 = *(_QWORD *)L"i.sys";
  if ( !Controller_DriverInstalledDueToCompatibleIdMatch(a1) )
    return;
  HighestUsbVersionSupported = RootHub_GetHighestUsbVersionSupported(a1[19]);
  v4 = HighestUsbVersionSupported;
  v29 = HIBYTE(HighestUsbVersionSupported);
  if ( *((_DWORD *)a1 + 61) == 1 )
  {
    v5 = &PciVendorIdTable;
    v6 = 0;
    while ( *(_WORD *)v5 != *((_WORD *)a1 + 124) )
    {
      ++v6;
      v5 += 2;
      if ( v6 >= 0xB )
        goto LABEL_13;
    }
    Size = v5[1];
  }
  else
  {
    v7 = 0;
    v8 = &AcpiVendorIdTable;
    while ( _stricmp(*v8, (const char *)a1 + 304) )
    {
      ++v7;
      v8 += 2;
      if ( v7 >= 5 )
        goto LABEL_13;
    }
    Size = (size_t)v8[1];
  }
LABEL_13:
  if ( RtlFindMessage(
         *(PVOID *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 24LL),
         0xBu,
         0,
         0x40010001u,
         &v33) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 144;
LABEL_16:
      WPP_RECORDER_SF_(a1[9], 2u, 4u, v9, (__int64)&Context.Logger + 4);
      return;
    }
    return;
  }
  v10 = v33->Length - 4LL;
  pcbLength = v10;
  if ( v10 <= 0xFFFFFFFE )
  {
    if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)v33->Text, v10, &pcbLength) < 0 )
      return;
    v11 = pcbLength;
    Text = (wchar_t *)v33->Text;
    if ( pcbLength >= 4 )
    {
      v13 = pcbLength >> 1;
      if ( Text[(pcbLength >> 1) - 1] == 10 )
      {
        v14 = v13 - 2;
        if ( Text[v13 - 2] == 13 )
        {
          v15 = pcbLength - 2;
          PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, pcbLength - 2, 0x49434858u);
          Text = PoolWithTag;
          if ( !PoolWithTag )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v9 = 146;
              goto LABEL_16;
            }
            return;
          }
          memset(PoolWithTag, 0, v15);
          wcsncpy_s(Text, v15 >> 1, (const wchar_t *)v33->Text, v14);
          v11 = pcbLength;
        }
      }
    }
    if ( Size )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( *(_WORD *)(Size + 2 * v17) );
      cbDest = v11 + 112 + 2 * v17;
      pcbLength = (size_t)ExAllocatePoolWithTag(PagedPool, cbDest, 0x49434858u);
      if ( !pcbLength )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_55;
        v18 = 147;
        goto LABEL_34;
      }
      LODWORD(MessageResourceEntry) = 1073807361;
      v19 = RtlStringCbPrintfW(
              (NTSTRSAFE_PWSTR)pcbLength,
              cbDest,
              L"%s,#%d;%s;(%s,%X.%X,%X.%X)",
              v36,
              MessageResourceEntry,
              Text,
              Size,
              v4,
              v29,
              *((unsigned __int8 *)a1 + 320),
              *((unsigned __int8 *)a1 + 321));
      Data = (void *)pcbLength;
      goto LABEL_60;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a1[9], 4u, 4u, 0x94u, (__int64)&Context.Logger + 4);
    if ( RtlFindMessage(
           *(PVOID *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 24LL),
           0xBu,
           0,
           0x40010002u,
           &v34) < 0 )
      goto LABEL_55;
    v21 = v34->Length - 4LL;
    Size = v21;
    if ( v21 <= 0xFFFFFFFE )
    {
      if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)v34->Text, v21, &Size) >= 0 )
      {
        cbDest = pcbLength + Size + 108;
        pcbLength = (size_t)ExAllocatePoolWithTag(PagedPool, cbDest, 0x49434858u);
        if ( pcbLength )
        {
          v2 = (wchar_t *)v34->Text;
          if ( Size >= 4 && v2[(Size >> 1) - 1] == 10 )
          {
            MaxCount = (Size >> 1) - 2;
            if ( v2[MaxCount] == 13 )
            {
              Size -= 2LL;
              v22 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Size, 0x49434858u);
              v2 = v22;
              if ( !v22 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_(a1[9], 2u, 4u, 0x97u, (__int64)&Context.Logger + 4);
                Data = (void *)pcbLength;
                goto LABEL_53;
              }
              memset(v22, 0, Size);
              wcsncpy_s(v2, Size >> 1, (const wchar_t *)v34->Text, MaxCount);
            }
          }
          v23 = v4;
          Data = (void *)pcbLength;
          LODWORD(MessageResourceEntrya) = 1073807361;
          v19 = RtlStringCbPrintfW(
                  (NTSTRSAFE_PWSTR)pcbLength,
                  cbDest,
                  L"%s,#%d;%s;(%s,%X.%X,%X.%X)",
                  v36,
                  MessageResourceEntrya,
                  Text,
                  v2,
                  v23,
                  v29,
                  *((unsigned __int8 *)a1 + 320),
                  *((unsigned __int8 *)a1 + 321));
LABEL_60:
          if ( v19 >= 0 && RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)Data, cbDest, &cbDest) >= 0 )
          {
            v24 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(WdfFunctions_01023 + 264))(
                                             WPP_MAIN_CB.Dpc.ProcessorHistory,
                                             *a1);
            v25 = IoSetDevicePropertyData(v24, &DEVPKEY_Device_FriendlyName, 0, 1u, 0x19u, cbDest + 2, Data);
            if ( v25 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v28[0] = v25;
              WPP_RECORDER_SF_d(a1[9], 3u, 4u, 0x98u, (__int64)&Context.Logger + 4, *(_QWORD *)v28);
            }
          }
LABEL_53:
          ExFreePoolWithTag(Data, 0x49434858u);
          if ( v2 )
            ExFreePoolWithTag(v2, 0x49434858u);
          goto LABEL_55;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v18 = 150;
          goto LABEL_34;
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 149;
LABEL_34:
      WPP_RECORDER_SF_(a1[9], 2u, 4u, v18, (__int64)&Context.Logger + 4);
    }
LABEL_55:
    if ( Text )
      ExFreePoolWithTag(Text, 0x49434858u);
    return;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = 145;
    goto LABEL_16;
  }
}
