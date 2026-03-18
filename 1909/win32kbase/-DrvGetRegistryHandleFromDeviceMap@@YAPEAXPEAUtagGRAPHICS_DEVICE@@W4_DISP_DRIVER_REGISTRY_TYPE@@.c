/*
 * XREFs of ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0012318
 * Callers:
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0010424 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvEnumDisplayDevices @ 0x1C003B980 (DrvEnumDisplayDevices.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C003C300 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C003CF80 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C003E120 (DrvUpdateDisplayDriverParameters.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C0043DC0 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0044280 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C004439C (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetDisplayDriverParameters @ 0x1C0045808 (DrvGetDisplayDriverParameters.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C00A4DBC (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHKK@Z @ 0x1C00B3B28 (-DrvAddMirrorDriversToRemoteList@@YAHKK@Z.c)
 *     DrvSetPruneFlag @ 0x1C012BD98 (DrvSetPruneFlag.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00063F0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0010390 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     UserIsCurrentProcessDwm @ 0x1C0036D50 (UserIsCurrentProcessDwm.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00A1094 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     wcschr @ 0x1C00B80DC (wcschr.c)
 *     wcsstr @ 0x1C00B81F4 (wcsstr.c)
 *     toupper @ 0x1C00B8488 (toupper.c)
 *     _wcsnicmp @ 0x1C00B84EC (_wcsnicmp.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

HANDLE __fastcall DrvGetRegistryHandleFromDeviceMap(
        unsigned __int16 *a1,
        int a2,
        unsigned int *a3,
        char *a4,
        unsigned int a5,
        NTSTATUS *a6)
{
  __int64 v6; // rbx
  __int64 v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // rdx
  int v13; // esi
  WCHAR *v14; // rcx
  NTSTATUS v15; // ebx
  const WCHAR *v16; // rdx
  __int64 v17; // rdx
  char *v18; // rsi
  unsigned __int16 v19; // ax
  wchar_t *v20; // rsi
  __int64 v21; // r8
  int v22; // ebx
  ULONG v23; // r15d
  __int64 v24; // rax
  int v26; // eax
  int v27; // ecx
  wchar_t *v28; // rax
  wchar_t *v29; // rdi
  NTSTATUS v30; // eax
  const WCHAR *v31; // rdx
  int v32; // r12d
  __int64 v33; // rcx
  int v34; // ebx
  __int64 v35; // r13
  char *v36; // rax
  char *v37; // r15
  unsigned __int64 v38; // rbx
  char *i; // rcx
  __int64 v40; // rbx
  char *v41; // rcx
  __int64 v42; // rdx
  char *v43; // r8
  __int16 v44; // ax
  char *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  unsigned __int16 *v48; // rcx
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int64 v56; // rax
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int64 v59; // rax
  char *v60; // rbx
  unsigned __int16 v61; // cx
  int v62; // r13d
  wchar_t *v63; // rcx
  char *v64; // rbx
  wchar_t *v65; // r15
  wchar_t v66; // ax
  __int64 v67; // rcx
  __int64 v68; // rax
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR *v71; // [rsp+60h] [rbp-A0h]
  int v72; // [rsp+68h] [rbp-98h]
  struct _UNICODE_STRING Destination; // [rsp+70h] [rbp-90h] BYREF
  wchar_t *Str1; // [rsp+80h] [rbp-80h]
  void *KeyHandle; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  ULONG Length[2]; // [rsp+C0h] [rbp-40h]
  char *v78; // [rsp+C8h] [rbp-38h]
  HANDLE v79; // [rsp+D0h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+D8h] [rbp-28h] BYREF
  ULONG v81; // [rsp+DCh] [rbp-24h] BYREF
  size_t Size; // [rsp+E0h] [rbp-20h]
  char *v83; // [rsp+E8h] [rbp-18h]
  unsigned int *v84; // [rsp+F0h] [rbp-10h]
  NTSTATUS *v85; // [rsp+F8h] [rbp-8h]
  unsigned __int16 v86[160]; // [rsp+100h] [rbp+0h] BYREF

  v6 = a2;
  v85 = a6;
  v84 = a3;
  v78 = a4;
  v72 = a2;
  Handle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v10 = 0LL;
  memset(v86, 0, 0x138uLL);
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v11[3] = a1;
  v11[4] = v6;
  v11[5] = a3;
  WdLogEvent5_WdTrace(v11);
  if ( a4 && !a5 )
  {
    v15 = -1073741811;
    v14 = 0LL;
    goto LABEL_26;
  }
  if ( dword_1C0212BA0
    && (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
    && Object
    && (PVOID)PsGetCurrentProcess(65533LL, v12) != gpepCSRSS
    && !(unsigned int)UserIsCurrentProcessDwm(v46)
    && (*((_DWORD *)a1 + 40) & 0x4000000) != 0 )
  {
    v47 = 2LL;
    v48 = v86;
    do
    {
      v49 = *((_OWORD *)a1 + 1);
      *(_OWORD *)v48 = *(_OWORD *)a1;
      v50 = *((_OWORD *)a1 + 2);
      *((_OWORD *)v48 + 1) = v49;
      v51 = *((_OWORD *)a1 + 3);
      *((_OWORD *)v48 + 2) = v50;
      v52 = *((_OWORD *)a1 + 4);
      *((_OWORD *)v48 + 3) = v51;
      v53 = *((_OWORD *)a1 + 5);
      *((_OWORD *)v48 + 4) = v52;
      v54 = *((_OWORD *)a1 + 6);
      *((_OWORD *)v48 + 5) = v53;
      v55 = *((_OWORD *)a1 + 7);
      a1 += 64;
      *((_OWORD *)v48 + 6) = v54;
      v48 += 64;
      *((_OWORD *)v48 - 1) = v55;
      --v47;
    }
    while ( v47 );
    v56 = *((_QWORD *)a1 + 6);
    v57 = *((_OWORD *)a1 + 1);
    *(_OWORD *)v48 = *(_OWORD *)a1;
    v58 = *((_OWORD *)a1 + 2);
    a1 = v86;
    *((_OWORD *)v48 + 1) = v57;
    *((_OWORD *)v48 + 2) = v58;
    *((_QWORD *)v48 + 6) = v56;
    StringCchCopyW((char *)v86, 32LL, (char *)Dest);
    *(_DWORD *)&v86[80] &= ~0x4000000u;
  }
  v13 = *((_DWORD *)a1 + 40) & 8;
  v71 = (WCHAR *)PALLOCMEM2(0x200uLL);
  v14 = v71;
  if ( v71 )
  {
    if ( (*((_DWORD *)a1 + 40) & 0x4000000) == 0 || v13 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\DeviceMap\\Video");
      goto LABEL_6;
    }
    if ( (unsigned int)(v6 - 1) > 1 )
    {
      DestinationString.Buffer = v71;
      *(_DWORD *)&DestinationString.Length = 33423360;
      RtlAppendUnicodeToString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Terminal Server\\Video\\");
      v31 = L"vgastub";
      if ( qword_1C0212B88 )
        v31 = qword_1C0212B88;
      RtlAppendUnicodeToString(&DestinationString, v31);
LABEL_6:
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v15 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( v15 < 0 )
        goto LABEL_117;
      v10 = PALLOCMEM2(0x400uLL);
      if ( !v10 )
      {
        v15 = -1073741670;
        goto LABEL_25;
      }
      if ( (*((_DWORD *)a1 + 40) & 0x4000000) == 0 || (v16 = L"\\Device\\Video0", v13) )
        v16 = a1;
      RtlInitUnicodeString(&DestinationString, v16);
      v15 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, (PVOID)v10, 0x200u, &ResultLength);
      if ( v15 < 0 )
      {
LABEL_24:
        ZwClose(KeyHandle);
        if ( v15 >= 0 )
        {
LABEL_25:
          v14 = v71;
          goto LABEL_26;
        }
LABEL_117:
        v68 = WdLogNewEntry5_WdTrace();
        *(_QWORD *)(v68 + 24) = v15;
        WdLogEvent5_WdTrace(v68);
        goto LABEL_25;
      }
      v17 = *(unsigned int *)(v10 + 8);
      *(_QWORD *)&Destination.Length = 0LL;
      Destination.Buffer = 0LL;
      v18 = (char *)(v10 + v17);
      if ( v72 == 3 )
      {
        if ( a4 )
        {
          v26 = StringCchCopyNW(a4, a5, v18, 0x7FuLL);
          if ( (int)(v26 + 0x80000000) >= 0 )
          {
            v27 = v15;
            if ( v26 != -2147024774 )
              v27 = -1073741811;
            v15 = v27;
          }
        }
        ZwClose(KeyHandle);
        goto LABEL_25;
      }
      v19 = *(_WORD *)v18;
      if ( *(_WORD *)v18 )
      {
        do
        {
          *(_WORD *)v18 = toupper(v19);
          v18 += 2;
          v19 = *(_WORD *)v18;
        }
        while ( *(_WORD *)v18 );
        LODWORD(v17) = *(_DWORD *)(v10 + 8);
      }
      v20 = wcsstr((const wchar_t *)(v10 + (unsigned int)v17), L"\\CONTROL\\");
      if ( !v20 )
        v20 = wcsstr((const wchar_t *)(v10 + *(unsigned int *)(v10 + 8)), L"\\SERVICES");
      v21 = -1LL;
      if ( a4 )
      {
        v32 = a5 - 1;
        Str1 = (wchar_t *)a4;
        v33 = -1LL;
        if ( a5 - 1 > 0x1F )
          v32 = 31;
        do
          ++v33;
        while ( *(_WORD *)(v10 + *(unsigned int *)(v10 + 8) + 2 * v33) );
        v34 = 102;
        v35 = (int)v33;
        *(_QWORD *)Length = 102LL;
        if ( (unsigned __int64)(2LL * (int)v33 + 12) > 0x66 )
        {
          v34 = 2 * v33 + 12;
          *(_QWORD *)Length = (unsigned int)v34;
        }
        v36 = (char *)PALLOCMEM2((unsigned int)v34);
        v83 = v36;
        v37 = v36;
        if ( v36 )
        {
          Size = v34;
          memset(v36, 0, v34);
          v38 = (unsigned __int64)v34 >> 1;
          StringCchCopyW(v37, v38, (char *)(v10 + *(unsigned int *)(v10 + 8)));
          for ( i = &v37[2 * v35 - 2]; i > v37; i -= 2 )
          {
            if ( *(_WORD *)i == 92 )
              goto LABEL_72;
          }
          if ( *(_WORD *)i != 92 )
            goto LABEL_81;
LABEL_72:
          v40 = v38 - v35;
          v41 = i + 2;
          if ( (unsigned __int64)(v40 - 1) > 0x7FFFFFFE )
          {
            if ( v40 )
              *(_WORD *)v41 = 0;
          }
          else
          {
            v42 = 2147483646 - v40;
            v43 = (char *)((char *)L"Video" - v41);
            do
            {
              if ( !(v40 + v42) )
                break;
              v44 = *(_WORD *)&v43[(_QWORD)v41];
              if ( !v44 )
                break;
              *(_WORD *)v41 = v44;
              v41 += 2;
              --v40;
            }
            while ( v40 );
            v45 = v41 - 2;
            if ( v40 )
              v45 = v41;
            *(_WORD *)v45 = 0;
          }
          RtlInitUnicodeString(&DestinationString, (PCWSTR)v37);
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&v79, 0x20019u, &ObjectAttributes) >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"Service");
            memset(v37, 0, Size);
            if ( ZwQueryValueKey(v79, &DestinationString, KeyValueFullInformation, v37, Length[0], &v81) >= 0 )
            {
              v59 = *((unsigned int *)v37 + 2);
              v60 = &v37[v59];
              v61 = *(_WORD *)&v37[v59];
              if ( v61 )
              {
                do
                {
                  *(_WORD *)v60 = toupper(v61);
                  v60 += 2;
                  v61 = *(_WORD *)v60;
                }
                while ( *(_WORD *)v60 );
                v59 = *((unsigned int *)v37 + 2);
              }
              v62 = v32;
              if ( v32 )
              {
                v63 = Str1;
                v64 = &v37[v59 - (_QWORD)v78];
                v65 = Str1;
                do
                {
                  v66 = *(wchar_t *)((char *)v63 + (_QWORD)v64);
                  --v32;
                  if ( !v66 )
                    break;
                  *v63++ = v66;
                  Str1 = v63;
                  if ( v32 == v62 - 3 )
                  {
                    if ( !wcsnicmp(v65, L"VGA", 3uLL) )
                      break;
                    v63 = Str1;
                  }
                }
                while ( v32 );
                v37 = v83;
              }
            }
            ZwClose(v79);
          }
LABEL_81:
          Win32FreePool(v37);
        }
        v21 = -1LL;
        *Str1 = 0;
      }
      if ( v84 )
      {
        v67 = -1LL;
        do
          ++v67;
        while ( v20[v67] );
        do
          ++v21;
        while ( v20[v21] );
        StringCchPrintfW(
          &v20[v21],
          512 - ((unsigned int)(((__int64)v20 - v10) >> 1) >> 1) - (unsigned int)v67,
          L"\\Mon%08X",
          *v84);
      }
      *(_DWORD *)&Destination.Length = 33423360;
      Destination.Buffer = (PWSTR)(v10 + 512);
      RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\System\\CurrentControlSet");
      v22 = v72;
      if ( (unsigned int)(v72 - 1) <= 1 )
      {
        if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"\\Control\\UnitedVideo");
          if ( (unsigned __int8)RtlIsStateSeparationEnabled() )
          {
            v23 = 1;
LABEL_21:
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &Destination;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( v22 == 2 )
            {
              v15 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, v23, 0LL);
              if ( v15 < 0 )
                goto LABEL_116;
              while ( 1 )
              {
                v28 = wcschr(v20 + 1, 0x5Cu);
                v29 = v28;
                if ( v28 )
                  *v28 = 0;
                RtlAppendUnicodeToString(&Destination, v20);
                if ( Handle )
                  ZwClose(Handle);
                v30 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, v23, 0LL);
                v15 = v30;
                if ( v30 < 0 )
                  break;
                if ( !v29 )
                  goto LABEL_53;
                *v29 = 92;
                v20 = v29;
              }
              Handle = 0LL;
LABEL_53:
              if ( v30 < 0 )
LABEL_116:
                Handle = 0LL;
            }
            else
            {
              RtlAppendUnicodeToString(&Destination, v20);
              v15 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
              if ( v15 < 0 )
                v15 = -1073741438;
            }
            goto LABEL_24;
          }
        }
        else
        {
          RtlAppendUnicodeToString(&Destination, L"\\Hardware Profiles\\Current\\System\\CurrentControlSet");
        }
      }
      v23 = 0;
      goto LABEL_21;
    }
    v15 = -1073741766;
  }
  else
  {
    v15 = -1073741670;
  }
LABEL_26:
  if ( v85 )
    *v85 = v15;
  if ( v14 )
    Win32FreePool(v14);
  if ( v10 )
    Win32FreePool(v10);
  v24 = WdLogNewEntry5_WdTrace();
  *(_QWORD *)(v24 + 24) = v15;
  WdLogEvent5_WdTrace(v24);
  return Handle;
}
