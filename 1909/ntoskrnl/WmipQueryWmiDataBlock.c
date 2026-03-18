/*
 * XREFs of WmipQueryWmiDataBlock @ 0x1406A44A0
 * Callers:
 *     IoWMISystemControl @ 0x1406EC7BC (IoWMISystemControl.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x1400EDD84 (WmipUnreferenceRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x140158A48 (WmipFindRegEntryByDevice.c)
 *     IoGetDeviceInstanceName @ 0x1401744FC (IoGetDeviceInstanceName.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlpQueryRegistryValues @ 0x1405C1D18 (RtlpQueryRegistryValues.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     IoWMICompleteRequest @ 0x1406A4594 (IoWMICompleteRequest.c)
 *     WmipGetSMBiosTableData @ 0x1406A4AF8 (WmipGetSMBiosTableData.c)
 *     WmipGetSMBiosEventlog @ 0x1408EF7E8 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x1408EF9D8 (WmipGetSysIds.c)
 */

__int64 __fastcall WmipQueryWmiDataBlock(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned __int64 a8)
{
  unsigned __int64 v8; // rsi
  unsigned int SysIds; // edi
  int *v10; // r15
  unsigned int v12; // r14d
  _DWORD *v13; // r12
  unsigned int v14; // eax
  char *v15; // rcx
  int SMBiosEventlog; // eax
  int v18; // eax
  int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // r13
  ULONG_PTR v22; // rcx
  unsigned __int16 v23; // cx
  wchar_t *v24; // rdx
  __int64 v25; // rbx
  UNICODE_STRING *p_UnicodeString; // rcx
  __int64 RegEntryByDevice; // rax
  ULONG_PTR v28; // rcx
  int v29; // r12d
  unsigned __int16 Length; // r13
  __int64 v31; // r14
  size_t v32; // rdi
  wchar_t *Buffer; // rdx
  unsigned __int16 *v34; // rsi
  unsigned int v35; // [rsp+30h] [rbp-D0h] BYREF
  int DeviceInstanceName; // [rsp+34h] [rbp-CCh] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING Src; // [rsp+48h] [rbp-B8h] BYREF
  const void *v39; // [rsp+58h] [rbp-A8h]
  __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  int v41; // [rsp+68h] [rbp-98h]
  const wchar_t *v42; // [rsp+70h] [rbp-90h]
  UNICODE_STRING *v43; // [rsp+78h] [rbp-88h]
  int v44; // [rsp+80h] [rbp-80h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  int v46; // [rsp+A0h] [rbp-60h]
  const wchar_t *v47; // [rsp+A8h] [rbp-58h]
  unsigned int *v48; // [rsp+B0h] [rbp-50h]
  int v49; // [rsp+B8h] [rbp-48h]
  __int64 v50; // [rsp+D0h] [rbp-30h]
  int v51; // [rsp+D8h] [rbp-28h]
  const wchar_t *v52; // [rsp+E0h] [rbp-20h]
  int *p_DeviceInstanceName; // [rsp+E8h] [rbp-18h]
  int v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  int v56; // [rsp+110h] [rbp+10h]

  v8 = a8;
  SysIds = 0;
  v10 = (int *)a6;
  v39 = a2;
  v12 = 0;
  v13 = 0LL;
  switch ( a3 )
  {
    case 0u:
      *(_QWORD *)&UnicodeString.Length = 0LL;
      UnicodeString.Buffer = 0LL;
      RegEntryByDevice = WmipFindRegEntryByDevice(a1);
      *(_QWORD *)&Src.Length = RegEntryByDevice;
      v21 = RegEntryByDevice;
      if ( !RegEntryByDevice )
        goto LABEL_47;
      v28 = *(_QWORD *)(RegEntryByDevice + 24);
      if ( v28 )
      {
        DeviceInstanceName = IoGetDeviceInstanceName(v28, &UnicodeString);
        SysIds = DeviceInstanceName;
        if ( DeviceInstanceName >= 0 )
        {
          v29 = UnicodeString.Length + 2;
          v12 = v29 + (a5 - 1) * ((UnicodeString.Length + 9) & 0xFFFFFFF8);
          v35 = v12;
          if ( v12 > a7 )
          {
            SysIds = -1073741789;
          }
          else
          {
            memset((void *)a8, 0, v12);
            if ( a5 )
            {
              Length = UnicodeString.Length;
              v31 = a5;
              v32 = UnicodeString.Length;
              do
              {
                Buffer = UnicodeString.Buffer;
                *v10 = v29;
                v34 = (unsigned __int16 *)((v8 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                ++v10;
                *v34++ = Length;
                memmove(v34, Buffer, v32);
                v8 = (unsigned __int64)v34 + v32;
                --v31;
              }
              while ( v31 );
              SysIds = DeviceInstanceName;
              v12 = v35;
              v21 = *(_QWORD *)&Src.Length;
            }
          }
          p_UnicodeString = &UnicodeString;
          goto LABEL_43;
        }
LABEL_44:
        SysIds = -1073741163;
        goto LABEL_46;
      }
LABEL_45:
      SysIds = -1073741823;
      goto LABEL_46;
    case 1u:
      *(_QWORD *)&Src.Length = 0LL;
      Src.Buffer = 0LL;
      v20 = WmipFindRegEntryByDevice(a1);
      v21 = v20;
      if ( !v20 )
        goto LABEL_47;
      v22 = *(_QWORD *)(v20 + 24);
      if ( v22 )
      {
        SysIds = IoGetDeviceInstanceName(v22, &Src);
        if ( (SysIds & 0x80000000) == 0 )
        {
          v23 = Src.Length;
          v12 = Src.Length + 10;
          if ( v12 > a7 )
          {
            SysIds = -1073741789;
          }
          else
          {
            v24 = Src.Buffer;
            *(_DWORD *)a8 = 1;
            *a6 = v12;
            v25 = v23;
            *(_WORD *)(a8 + 4) = v23 + 4;
            memmove((void *)(a8 + 6), v24, v23);
            *(_DWORD *)(a8 + 4 + v25 + 2) = 3145823;
          }
          p_UnicodeString = &Src;
LABEL_43:
          RtlFreeAnsiString(p_UnicodeString);
LABEL_46:
          WmipUnreferenceRegEntry(v21);
          return IoWMICompleteRequest(a1, a2, v39, SysIds, v12);
        }
        goto LABEL_44;
      }
      goto LABEL_45;
    case 2u:
      *(_DWORD *)&UnicodeString.Length = 0;
      v44 = 0x4000000;
      v41 = 292;
      v42 = L"BootArchitecture";
      v46 = 292;
      v43 = &UnicodeString;
      v49 = 0x4000000;
      v47 = L"PreferredProfile";
      v48 = &v35;
      v52 = L"Capabilities";
      v51 = 292;
      v54 = 0x4000000;
      p_DeviceInstanceName = &DeviceInstanceName;
      v35 = 0;
      DeviceInstanceName = 0;
      v40 = 0LL;
      v45 = 0LL;
      v50 = 0LL;
      v55 = 0LL;
      v56 = 0;
      if ( (int)RtlpQueryRegistryValues(0, L"\\Registry\\Machine\\Hardware\\Description\\System", (__int64)&v40, 0LL) < 0 )
        goto LABEL_47;
      v12 = 12;
      if ( a7 >= 0xC )
      {
        *(_DWORD *)a8 = *(_DWORD *)&UnicodeString.Length;
        *(_DWORD *)(a8 + 4) = v35;
        *(_DWORD *)(a8 + 8) = DeviceInstanceName;
        goto LABEL_9;
      }
      goto LABEL_25;
  }
  if ( a3 != 3 )
  {
    if ( a3 > 5 )
    {
      if ( a3 == 6 )
      {
        *(_DWORD *)&UnicodeString.Length = a7;
        SMBiosEventlog = WmipGetSMBiosEventlog(a8 & -(__int64)(a7 != 0), &UnicodeString);
        v12 = *(_DWORD *)&UnicodeString.Length;
        SysIds = SMBiosEventlog;
        if ( SMBiosEventlog < 0 )
          return IoWMICompleteRequest(a1, a2, v39, SysIds, v12);
        goto LABEL_9;
      }
LABEL_47:
      SysIds = -1073741163;
      return IoWMICompleteRequest(a1, a2, v39, SysIds, v12);
    }
    SysIds = WmipGetSysIds(&Src, &v35, &UnicodeString, &DeviceInstanceName);
    if ( (SysIds & 0x80000000) != 0 )
      return IoWMICompleteRequest(a1, a2, v39, SysIds, v12);
    if ( a3 == 5 )
    {
      v18 = DeviceInstanceName;
      a2 = *(const void **)&UnicodeString.Length;
      v19 = 8 * DeviceInstanceName;
    }
    else
    {
      v18 = v35;
      a2 = *(const void **)&Src.Length;
      v19 = 16 * v35;
    }
    v12 = v19 + 4;
    if ( a7 >= v12 )
    {
      *a6 = v12;
      *(_DWORD *)a8 = v18;
      memmove((void *)(a8 + 4), a2, v12 - 4LL);
      SysIds = 0;
      return IoWMICompleteRequest(a1, a2, v39, SysIds, v12);
    }
LABEL_25:
    SysIds = -1073741789;
    return IoWMICompleteRequest(a1, a2, v39, SysIds, v12);
  }
  if ( a7 < 8 )
  {
    v15 = 0LL;
    v14 = 0;
  }
  else
  {
    v13 = (_DWORD *)(a8 + 4);
    v14 = a7 - 8;
    v15 = (char *)(a8 + 8);
  }
  *(_DWORD *)&UnicodeString.Length = v14;
  SysIds = WmipGetSMBiosTableData(v15);
  v12 = *(_DWORD *)&UnicodeString.Length + 8;
  if ( (SysIds & 0x80000000) == 0 )
  {
    *v13 = *(_DWORD *)&UnicodeString.Length;
LABEL_9:
    *a6 = v12;
  }
  return IoWMICompleteRequest(a1, a2, v39, SysIds, v12);
}
