/*
 * XREFs of ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJG@Z @ 0x1C001BD10
 * Callers:
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0015460 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C001554C (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvEnumDisplayDevices @ 0x1C00158D0 (DrvEnumDisplayDevices.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00161E0 (DrvUpdateGraphicsDeviceList.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0040A94 (DrvUpdateDisplayDriverParameters.c)
 *     DrvGetDisplayDriverParameters @ 0x1C0053824 (DrvGetDisplayDriverParameters.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C005586C (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C005679C (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00568A8 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C00910D8 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00A4A18 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvSetPruneFlag @ 0x1C0105384 (DrvSetPruneFlag.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     UserIsCurrentProcessDwm @ 0x1C00339B0 (UserIsCurrentProcessDwm.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C006D0CC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C008E21C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0099B18 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     wcschr @ 0x1C00A667C (wcschr.c)
 *     wcsstr @ 0x1C00A676C (wcsstr.c)
 *     toupper @ 0x1C00A68D8 (toupper.c)
 *     _wcsnicmp @ 0x1C00A693C (_wcsnicmp.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

HANDLE __fastcall DrvGetRegistryHandleFromDeviceMap(
        unsigned __int16 *a1,
        int a2,
        unsigned int *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        NTSTATUS *a6,
        unsigned __int16 a7)
{
  __int64 v8; // r13
  unsigned __int16 *v9; // r15
  int v10; // ebx
  WCHAR *v11; // rsi
  WCHAR *v12; // r14
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  WCHAR *v17; // rax
  NTSTATUS v18; // edi
  WCHAR *v19; // rax
  const WCHAR *v20; // rdx
  __int64 v21; // rdx
  unsigned __int16 *v22; // rbx
  unsigned __int16 v23; // ax
  wchar_t *v24; // rbx
  __int64 v25; // rdi
  wchar_t *v26; // r14
  ULONG v27; // r15d
  __int64 v28; // rax
  int v30; // eax
  wchar_t *v31; // rax
  NTSTATUS v32; // eax
  unsigned __int16 *v33; // rcx
  __int64 v34; // rax
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int64 v43; // rax
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  const WCHAR *v46; // rdx
  __int64 v47; // rcx
  int v48; // r13d
  __int64 v49; // r12
  signed int v50; // r14d
  unsigned __int16 *v51; // rax
  unsigned __int16 *v52; // r15
  unsigned __int64 v53; // r14
  unsigned __int16 *v54; // rcx
  char *v55; // rcx
  __int64 v56; // rdx
  signed __int64 v57; // r8
  __int16 v58; // ax
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int16 v61; // cx
  unsigned __int16 *v62; // r14
  int v63; // r14d
  wchar_t *v64; // rcx
  char *v65; // r12
  wchar_t *v66; // r15
  wchar_t v67; // ax
  __int64 v68; // rcx
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  ULONG Length; // [rsp+60h] [rbp-A0h]
  unsigned __int16 *v73; // [rsp+68h] [rbp-98h]
  wchar_t *Str1; // [rsp+70h] [rbp-90h]
  struct _UNICODE_STRING Destination; // [rsp+78h] [rbp-88h] BYREF
  int v76; // [rsp+88h] [rbp-78h]
  void *KeyHandle; // [rsp+90h] [rbp-70h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  HANDLE v79; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int16 *v80; // [rsp+D0h] [rbp-30h]
  WCHAR *v81; // [rsp+D8h] [rbp-28h]
  ULONG ResultLength; // [rsp+E0h] [rbp-20h] BYREF
  ULONG v83; // [rsp+E4h] [rbp-1Ch] BYREF
  size_t Size; // [rsp+E8h] [rbp-18h]
  unsigned __int16 *v85; // [rsp+F0h] [rbp-10h]
  unsigned int *v86; // [rsp+F8h] [rbp-8h]
  NTSTATUS *v87; // [rsp+100h] [rbp+0h]
  unsigned __int16 v88[160]; // [rsp+110h] [rbp+10h] BYREF

  v8 = a2;
  v9 = a1;
  v87 = a6;
  v86 = a3;
  v80 = a1;
  Handle = 0LL;
  v10 = 0;
  v73 = a4;
  v11 = 0LL;
  v76 = a2;
  v12 = 0LL;
  memset(v88, 0, 0x138uLL);
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v14);
  v15[6] = a7;
  v15[3] = v9;
  v15[4] = v8;
  v15[5] = a3;
  WdLogEvent5_WdTrace(v15);
  if ( a4 && !a5 )
  {
    v18 = -1073741811;
  }
  else
  {
    if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
      && Object
      && (PVOID)PsGetCurrentProcess() != gpepCSRSS
      && !(unsigned int)UserIsCurrentProcessDwm()
      && (*((_DWORD *)v9 + 40) & 0x4000000) != 0 )
    {
      v33 = v88;
      v34 = 2LL;
      do
      {
        v33 += 64;
        v35 = *(_OWORD *)v9;
        v36 = *((_OWORD *)v9 + 1);
        v9 += 64;
        *((_OWORD *)v33 - 8) = v35;
        v37 = *((_OWORD *)v9 - 6);
        *((_OWORD *)v33 - 7) = v36;
        v38 = *((_OWORD *)v9 - 5);
        *((_OWORD *)v33 - 6) = v37;
        v39 = *((_OWORD *)v9 - 4);
        *((_OWORD *)v33 - 5) = v38;
        v40 = *((_OWORD *)v9 - 3);
        *((_OWORD *)v33 - 4) = v39;
        v41 = *((_OWORD *)v9 - 2);
        *((_OWORD *)v33 - 3) = v40;
        v42 = *((_OWORD *)v9 - 1);
        *((_OWORD *)v33 - 2) = v41;
        *((_OWORD *)v33 - 1) = v42;
        --v34;
      }
      while ( v34 );
      v43 = *((_QWORD *)v9 + 6);
      v44 = *((_OWORD *)v9 + 1);
      *(_OWORD *)v33 = *(_OWORD *)v9;
      v45 = *((_OWORD *)v9 + 2);
      v9 = v88;
      *((_OWORD *)v33 + 1) = v44;
      v80 = v88;
      *((_OWORD *)v33 + 2) = v45;
      *((_QWORD *)v33 + 6) = v43;
      StringCchCopyW(v88, 0x20uLL, word_1C01CE308);
      *(_DWORD *)&v88[80] &= ~0x4000000u;
    }
    if ( (*((_DWORD *)v9 + 40) & 8) != 0 )
      v10 = 1;
    v17 = (WCHAR *)Win32AllocPool(512LL, 1886221383LL);
    v81 = v17;
    v12 = v17;
    if ( v17 )
      memset(v17, 0, 0x200uLL);
    if ( v12 )
    {
      if ( (*((_DWORD *)v9 + 40) & 0x4000000) == 0 || v10 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\DeviceMap\\Video");
      }
      else
      {
        if ( (unsigned int)(v8 - 1) <= 1 )
        {
          v18 = -1073741766;
          goto LABEL_33;
        }
        DestinationString.Buffer = v12;
        *(_DWORD *)&DestinationString.Length = 33423360;
        RtlAppendUnicodeToString(
          &DestinationString,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Terminal Server\\Video\\");
        v46 = qword_1C01CE2D8;
        if ( !qword_1C01CE2D8 )
          v46 = L"vgastub";
        RtlAppendUnicodeToString(&DestinationString, v46);
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v18 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( v18 < 0 )
        goto LABEL_95;
      v19 = (WCHAR *)Win32AllocPool(1024LL, 1886221383LL);
      v11 = v19;
      if ( v19 )
        memset(v19, 0, 0x400uLL);
      if ( v11 )
      {
        if ( (*((_DWORD *)v9 + 40) & 0x4000000) == 0 || v10 )
          v20 = v9;
        else
          v20 = L"\\Device\\Video0";
        RtlInitUnicodeString(&DestinationString, v20);
        v18 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, v11, 0x200u, &ResultLength);
        if ( v18 < 0 )
          goto LABEL_32;
        v21 = *((unsigned int *)v11 + 2);
        v22 = (WCHAR *)((char *)v11 + v21);
        if ( (_DWORD)v8 != 3 )
        {
          v23 = *v22;
          if ( *v22 )
          {
            do
            {
              *v22++ = toupper(v23);
              v23 = *v22;
            }
            while ( *v22 );
            LODWORD(v21) = *((_DWORD *)v11 + 2);
          }
          v24 = wcsstr((WCHAR *)((char *)v11 + (unsigned int)v21), L"\\CONTROL\\");
          if ( !v24 )
            v24 = wcsstr((WCHAR *)((char *)v11 + *((unsigned int *)v11 + 2)), L"\\SERVICES");
          v25 = -1LL;
          if ( !v73 )
          {
            v26 = 0LL;
            goto LABEL_26;
          }
          v47 = -1LL;
          Str1 = v73;
          v48 = a5 - 1;
          if ( a5 - 1 > 0x1F )
            v48 = 31;
          do
            ++v47;
          while ( *(WCHAR *)((char *)&v11[v47] + *((unsigned int *)v11 + 2)) );
          v49 = (int)v47;
          if ( (unsigned __int64)(2LL * (int)v47 + 12) <= 0x66 )
            v50 = 102;
          else
            v50 = 2 * v47 + 12;
          Length = v50;
          v51 = (unsigned __int16 *)PALLOCMEM2((unsigned int)v50);
          v85 = v51;
          v52 = v51;
          if ( !v51 )
          {
            v26 = 0LL;
            goto LABEL_93;
          }
          Size = v50;
          memset(v51, 0, v50);
          v53 = (unsigned __int64)v50 >> 1;
          StringCchCopyW(v52, v53, (WCHAR *)((char *)v11 + *((unsigned int *)v11 + 2)));
          v54 = &v52[v49 - 1];
          if ( v54 <= v52 )
          {
LABEL_100:
            if ( *v54 != 92 )
            {
              v26 = 0LL;
LABEL_92:
              Win32FreePool(v52);
LABEL_93:
              v9 = v80;
              LODWORD(v8) = v76;
              *Str1 = 0;
LABEL_26:
              if ( v86 )
              {
                v68 = -1LL;
                do
                  ++v68;
                while ( v24[v68] );
                while ( v24[++v25] != 0 )
                  ;
                StringCchPrintfW(
                  &v24[v25],
                  512 - ((unsigned int)(v24 - v11) >> 1) - (unsigned int)v68,
                  L"\\Mon%08X",
                  *v86);
              }
              *(_DWORD *)&Destination.Length = 33423360;
              Destination.Buffer = v11 + 256;
              RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\System\\CurrentControlSet");
              if ( (unsigned int)(v8 - 1) <= 1 )
              {
                if ( (*((_DWORD *)v9 + 40) & 0x800000) != 0 )
                {
                  RtlAppendUnicodeToString(&Destination, L"\\Control\\UnitedVideo");
                  if ( (unsigned __int8)RtlIsStateSeparationEnabled() )
                  {
                    v27 = 1;
LABEL_29:
                    ObjectAttributes.Length = 48;
                    ObjectAttributes.ObjectName = &Destination;
                    ObjectAttributes.RootDirectory = 0LL;
                    ObjectAttributes.Attributes = 576;
                    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                    if ( (_DWORD)v8 == 2 )
                    {
                      v18 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, v27, 0LL);
                      if ( v18 < 0 )
                        goto LABEL_126;
                      while ( 1 )
                      {
                        v31 = wcschr(v24 + 1, 0x5Cu);
                        v26 = v31;
                        if ( v31 )
                          *v31 = 0;
                        RtlAppendUnicodeToString(&Destination, v24);
                        if ( Handle )
                          ZwClose(Handle);
                        v32 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, v27, 0LL);
                        v18 = v32;
                        if ( v32 < 0 )
                          break;
                        if ( !v26 )
                          goto LABEL_57;
                        *v26 = 92;
                        v24 = v26;
                      }
                      v26 = 0LL;
                      Handle = 0LL;
LABEL_57:
                      if ( v32 < 0 )
LABEL_126:
                        Handle = v26;
                    }
                    else
                    {
                      RtlAppendUnicodeToString(&Destination, v24);
                      v18 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
                      if ( v18 < 0 )
                        v18 = -1073741438;
                    }
LABEL_32:
                    ZwClose(KeyHandle);
                    v12 = v81;
                    if ( v18 >= 0 )
                      goto LABEL_33;
LABEL_95:
                    v59 = WdLogNewEntry5_WdTrace(v16);
                    *(_QWORD *)(v59 + 24) = v18;
                    WdLogEvent5_WdTrace(v59);
                    goto LABEL_33;
                  }
                }
                else
                {
                  RtlAppendUnicodeToString(&Destination, L"\\Hardware Profiles\\Current\\System\\CurrentControlSet");
                }
              }
              v27 = 0;
              goto LABEL_29;
            }
          }
          else
          {
            while ( *v54 != 92 )
            {
              if ( --v54 <= v52 )
                goto LABEL_100;
            }
          }
          v26 = (wchar_t *)(v53 - v49);
          v55 = (char *)(v54 + 1);
          if ( (unsigned __int64)v26 - 1 > 0x7FFFFFFE )
          {
            if ( v26 )
            {
              v26 = 0LL;
              *(_WORD *)v55 = 0;
            }
          }
          else
          {
            v56 = 2147483646LL - (_QWORD)v26;
            v57 = (char *)L"Video" - v55;
            while ( (wchar_t *)((char *)v26 + v56) )
            {
              v58 = *(_WORD *)&v55[v57];
              if ( !v58 )
                break;
              *(_WORD *)v55 = v58;
              v55 += 2;
              v26 = (wchar_t *)((char *)v26 - 1);
              if ( !v26 )
                goto LABEL_102;
            }
            if ( v26 )
              goto LABEL_90;
LABEL_102:
            v55 -= 2;
LABEL_90:
            v26 = 0LL;
            *(_WORD *)v55 = 0;
          }
          RtlInitUnicodeString(&DestinationString, v52);
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&v79, 0x20019u, &ObjectAttributes) >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"Service");
            memset(v52, 0, Size);
            if ( ZwQueryValueKey(v79, &DestinationString, KeyValueFullInformation, v52, Length, &v83) >= 0 )
            {
              v60 = *((unsigned int *)v52 + 2);
              v61 = *(unsigned __int16 *)((char *)v52 + v60);
              v62 = (unsigned __int16 *)((char *)v52 + v60);
              if ( v61 )
              {
                do
                {
                  *v62++ = toupper(v61);
                  v61 = *v62;
                }
                while ( *v62 );
                v60 = *((unsigned int *)v52 + 2);
              }
              v63 = v48;
              if ( v48 )
              {
                v64 = Str1;
                v65 = (char *)v52 + v60 - (_QWORD)v73;
                v66 = Str1;
                do
                {
                  v67 = *(wchar_t *)((char *)v64 + (_QWORD)v65);
                  --v48;
                  if ( !v67 )
                    break;
                  *v64++ = v67;
                  Str1 = v64;
                  if ( v48 == v63 - 3 )
                  {
                    if ( !wcsnicmp(v66, L"VGA", 3uLL) )
                      break;
                    v64 = Str1;
                  }
                }
                while ( v48 );
                v52 = v85;
              }
              v26 = 0LL;
            }
            ZwClose(v79);
          }
          goto LABEL_92;
        }
        if ( v73 )
        {
          v30 = StringCchCopyNW(v73, a5, v22, 0x7FuLL);
          if ( (int)(v30 + 0x80000000) >= 0 && v30 != -2147024774 )
            v18 = -1073741811;
        }
        ZwClose(KeyHandle);
      }
      else
      {
        v18 = -1073741670;
      }
    }
    else
    {
      v18 = -1073741670;
    }
  }
LABEL_33:
  if ( v87 )
    *v87 = v18;
  if ( v12 )
    Win32FreePool(v12);
  if ( v11 )
    Win32FreePool(v11);
  v28 = WdLogNewEntry5_WdTrace(v16);
  *(_QWORD *)(v28 + 24) = v18;
  WdLogEvent5_WdTrace(v28);
  return Handle;
}
