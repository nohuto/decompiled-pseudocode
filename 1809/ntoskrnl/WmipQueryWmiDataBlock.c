/*
 * XREFs of WmipQueryWmiDataBlock @ 0x1406A8E70
 * Callers:
 *     IoWMISystemControl @ 0x1406CD39C (IoWMISystemControl.c)
 * Callees:
 *     WmipUnreferenceRegEntry @ 0x14008DA70 (WmipUnreferenceRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x14012EA18 (WmipFindRegEntryByDevice.c)
 *     IoGetDeviceInstanceName @ 0x14016D320 (IoGetDeviceInstanceName.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlpQueryRegistryValues @ 0x1405C68AC (RtlpQueryRegistryValues.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     IoWMICompleteRequest @ 0x1406A8F64 (IoWMICompleteRequest.c)
 *     WmipGetSMBiosTableData @ 0x1406A905C (WmipGetSMBiosTableData.c)
 *     WmipGetSMBiosEventlog @ 0x1408B3C60 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x1408B3E50 (WmipGetSysIds.c)
 */

__int64 __fastcall WmipQueryWmiDataBlock(
        __int64 a1,
        void *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned __int64 a8)
{
  unsigned __int64 v8; // rsi
  unsigned int SysIds; // edi
  int *v10; // r12
  void *v12; // r13
  unsigned int v13; // r14d
  _DWORD *v14; // r15
  unsigned int v15; // eax
  char *v16; // rcx
  int SMBiosEventlog; // eax
  int v19; // eax
  int v20; // r14d
  __int64 v21; // rax
  __int64 v22; // r15
  ULONG_PTR v23; // rcx
  unsigned __int16 v24; // cx
  wchar_t *v25; // rdx
  __int64 v26; // rbx
  _QWORD *RegEntryByDevice; // rax
  ULONG_PTR v28; // rcx
  int v29; // r13d
  unsigned __int16 Length; // r15
  __int64 v31; // r14
  size_t v32; // rdi
  wchar_t *Buffer; // rdx
  unsigned __int16 *v34; // rsi
  void *v35; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v36; // [rsp+38h] [rbp-C8h] BYREF
  int DeviceInstanceName; // [rsp+3Ch] [rbp-C4h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  void *Src; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  int v41; // [rsp+68h] [rbp-98h]
  const wchar_t *v42; // [rsp+70h] [rbp-90h]
  void **v43; // [rsp+78h] [rbp-88h]
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
  v35 = a2;
  v12 = a2;
  v13 = 0;
  v14 = 0LL;
  switch ( a3 )
  {
    case 0u:
      RegEntryByDevice = (_QWORD *)WmipFindRegEntryByDevice(a1);
      Src = RegEntryByDevice;
      v22 = (__int64)RegEntryByDevice;
      if ( !RegEntryByDevice )
        goto LABEL_46;
      v28 = RegEntryByDevice[3];
      if ( v28 )
      {
        DeviceInstanceName = IoGetDeviceInstanceName(v28, &UnicodeString);
        SysIds = DeviceInstanceName;
        if ( DeviceInstanceName >= 0 )
        {
          v29 = UnicodeString.Length + 2;
          v13 = v29 + (a5 - 1) * ((UnicodeString.Length + 9) & 0xFFFFFFF8);
          v36 = v13;
          if ( v13 > a7 )
          {
            SysIds = -1073741789;
          }
          else
          {
            memset((void *)a8, 0, v13);
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
              v13 = v36;
              v22 = (__int64)Src;
            }
          }
          RtlFreeAnsiString(&UnicodeString);
          v12 = v35;
          goto LABEL_45;
        }
LABEL_43:
        SysIds = -1073741163;
LABEL_45:
        WmipUnreferenceRegEntry(v22);
        return IoWMICompleteRequest(a1, a2, v12, SysIds, v13);
      }
LABEL_44:
      SysIds = -1073741823;
      goto LABEL_45;
    case 1u:
      v21 = WmipFindRegEntryByDevice(a1);
      v22 = v21;
      if ( !v21 )
        goto LABEL_46;
      v23 = *(_QWORD *)(v21 + 24);
      if ( v23 )
      {
        SysIds = IoGetDeviceInstanceName(v23, &UnicodeString);
        if ( (SysIds & 0x80000000) == 0 )
        {
          v24 = UnicodeString.Length;
          v13 = UnicodeString.Length + 10;
          if ( v13 > a7 )
          {
            SysIds = -1073741789;
          }
          else
          {
            v25 = UnicodeString.Buffer;
            *(_DWORD *)a8 = 1;
            *a6 = v13;
            v26 = v24;
            *(_WORD *)(a8 + 4) = v24 + 4;
            memmove((void *)(a8 + 6), v25, v24);
            *(_DWORD *)(a8 + 4 + v26 + 2) = 3145823;
          }
          RtlFreeAnsiString(&UnicodeString);
          goto LABEL_45;
        }
        goto LABEL_43;
      }
      goto LABEL_44;
    case 2u:
      LODWORD(v35) = 0;
      v44 = 0x4000000;
      v41 = 292;
      v42 = L"BootArchitecture";
      v46 = 292;
      v43 = &v35;
      v49 = 0x4000000;
      v47 = L"PreferredProfile";
      v48 = &v36;
      v52 = L"Capabilities";
      v51 = 292;
      v54 = 0x4000000;
      p_DeviceInstanceName = &DeviceInstanceName;
      v36 = 0;
      DeviceInstanceName = 0;
      v40 = 0LL;
      v45 = 0LL;
      v50 = 0LL;
      v55 = 0LL;
      v56 = 0;
      if ( (int)RtlpQueryRegistryValues(0LL, L"\\Registry\\Machine\\Hardware\\Description\\System", (__int64)&v40, 0LL) < 0 )
        goto LABEL_46;
      v13 = 12;
      if ( a7 >= 0xC )
      {
        *(_DWORD *)a8 = (_DWORD)v35;
        *(_DWORD *)(a8 + 4) = v36;
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
        LODWORD(v35) = a7;
        SMBiosEventlog = WmipGetSMBiosEventlog(a8 & -(__int64)(a7 != 0), &v35);
        v13 = (unsigned int)v35;
        SysIds = SMBiosEventlog;
        if ( SMBiosEventlog < 0 )
          return IoWMICompleteRequest(a1, a2, v12, SysIds, v13);
        goto LABEL_9;
      }
LABEL_46:
      SysIds = -1073741163;
      return IoWMICompleteRequest(a1, a2, v12, SysIds, v13);
    }
    SysIds = WmipGetSysIds(&Src, &v36, &v35, &DeviceInstanceName);
    if ( (SysIds & 0x80000000) != 0 )
      return IoWMICompleteRequest(a1, a2, v12, SysIds, v13);
    if ( a3 == 5 )
    {
      v19 = DeviceInstanceName;
      a2 = v35;
      v20 = 8 * DeviceInstanceName;
    }
    else
    {
      v19 = v36;
      a2 = Src;
      v20 = 16 * v36;
    }
    v13 = v20 + 4;
    if ( a7 >= v13 )
    {
      *a6 = v13;
      *(_DWORD *)a8 = v19;
      memmove((void *)(a8 + 4), a2, v13 - 4LL);
      SysIds = 0;
      return IoWMICompleteRequest(a1, a2, v12, SysIds, v13);
    }
LABEL_25:
    SysIds = -1073741789;
    return IoWMICompleteRequest(a1, a2, v12, SysIds, v13);
  }
  if ( a7 < 8 )
  {
    v16 = 0LL;
    v15 = 0;
  }
  else
  {
    v14 = (_DWORD *)(a8 + 4);
    v15 = a7 - 8;
    v16 = (char *)(a8 + 8);
  }
  LODWORD(v35) = v15;
  SysIds = WmipGetSMBiosTableData(v16);
  v13 = (_DWORD)v35 + 8;
  if ( (SysIds & 0x80000000) == 0 )
  {
    *v14 = (_DWORD)v35;
LABEL_9:
    *a6 = v13;
  }
  return IoWMICompleteRequest(a1, a2, v12, SysIds, v13);
}
