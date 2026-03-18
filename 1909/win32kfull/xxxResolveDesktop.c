/*
 * XREFs of xxxResolveDesktop @ 0x1C007D690
 * Callers:
 *     <none>
 * Callees:
 *     CloseProtectedHandle @ 0x1C000D284 (CloseProtectedHandle.c)
 *     MapDesktop @ 0x1C0021C00 (MapDesktop.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxConnectService @ 0x1C007C344 (xxxConnectService.c)
 *     _OpenDesktop @ 0x1C007D4E8 (_OpenDesktop.c)
 *     ?SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z @ 0x1C007DFE0 (-SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z.c)
 *     _UserTestForWinStaAccess @ 0x1C007E064 (_UserTestForWinStaAccess.c)
 *     _OpenWindowStation @ 0x1C007E2D4 (_OpenWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C007E33C (xxxCreateDesktopEx.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C007F150 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall xxxResolveDesktop(void *a1, UNICODE_STRING *a2, HANDLE *a3, int a4, _QWORD *a5)
{
  int v6; // r13d
  NTSTATUS result; // eax
  NTSTATUS ProcessLuid; // edi
  PVOID v9; // r15
  __int64 ProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  PVOID *v15; // r14
  HANDLE v16; // rax
  int v17; // r8d
  int v18; // r12d
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _UNICODE_STRING *v28; // r14
  __int64 v29; // rdx
  NTSTATUS Desktop; // eax
  UNICODE_STRING v31; // xmm1
  __int16 v32; // cx
  unsigned __int64 v33; // xmm0_8
  _WORD *i; // rdx
  PVOID v35; // rcx
  ULONG v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  NTSTATUS v40; // eax
  int v41; // edx
  PVOID v42; // r14
  PVOID *Object; // [rsp+20h] [rbp-3B8h]
  PVOID BaseAddress; // [rsp+40h] [rbp-398h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-390h] BYREF
  HANDLE SourceHandle; // [rsp+50h] [rbp-388h] BYREF
  unsigned int v47; // [rsp+58h] [rbp-380h]
  int v48; // [rsp+5Ch] [rbp-37Ch]
  struct _UNICODE_STRING Destination; // [rsp+60h] [rbp-378h] BYREF
  int v50; // [rsp+70h] [rbp-368h]
  int v51; // [rsp+74h] [rbp-364h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-360h] BYREF
  HANDLE *v53; // [rsp+80h] [rbp-358h]
  _QWORD *v54; // [rsp+88h] [rbp-350h]
  PVOID v55; // [rsp+90h] [rbp-348h] BYREF
  PUNICODE_STRING v56; // [rsp+98h] [rbp-340h]
  UNICODE_STRING Source; // [rsp+A0h] [rbp-338h] BYREF
  int v58; // [rsp+B0h] [rbp-328h]
  __int64 v59; // [rsp+B8h] [rbp-320h] BYREF
  void *TargetHandle; // [rsp+C0h] [rbp-318h] BYREF
  HANDLE SourceProcessHandle; // [rsp+C8h] [rbp-310h]
  PVOID v62; // [rsp+D0h] [rbp-308h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-2F8h] BYREF
  PVOID v64[4]; // [rsp+F0h] [rbp-2E8h] BYREF
  _QWORD v65[3]; // [rsp+110h] [rbp-2C8h] BYREF
  int v66; // [rsp+128h] [rbp-2B0h]
  int v67; // [rsp+12Ch] [rbp-2ACh]
  WCHAR SourceString[32]; // [rsp+140h] [rbp-298h] BYREF
  char v69; // [rsp+180h] [rbp-258h] BYREF

  v48 = a4;
  v53 = a3;
  SourceProcessHandle = a1;
  v55 = a1;
  v64[1] = a3;
  v54 = a5;
  v6 = 0;
  v50 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  v56 = 0LL;
  BaseAddress = 0LL;
  *a3 = 0LL;
  *a5 = 0LL;
  result = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &v62, 0LL);
  ProcessLuid = result;
  if ( result >= 0 )
  {
    TargetHandle = 0LL;
    Handle = 0LL;
    SourceHandle = 0LL;
    *(_DWORD *)&Destination.Length = 34209792;
    Destination.Buffer = (PWSTR)&v69;
    v9 = v62;
    ProcessWin32Process = PsGetProcessWin32Process(v62);
    v15 = (PVOID *)ProcessWin32Process;
    v64[3] = (PVOID)ProcessWin32Process;
    if ( ProcessWin32Process )
    {
      if ( (*(_DWORD *)(ProcessWin32Process + 12) & 0x1000) != 0 )
      {
        ObfDereferenceObject(v9);
        return -1073741790;
      }
      if ( *(_QWORD *)(ProcessWin32Process + 672) && *(_QWORD *)(ProcessWin32Process + 392) )
      {
        if ( v9 == (PVOID)PsGetCurrentProcess(v12, v11, v13, v14) )
        {
          Handle = v15[84];
          SourceHandle = v15[49];
        }
        else
        {
          ProcessLuid = ObOpenObjectByPointer(v15[83], 0, 0LL, 0x2000000u, ExWindowStationObjectType, 1, &Handle);
          if ( ProcessLuid >= 0 )
          {
            ProcessLuid = ObOpenObjectByPointer(
                            v15[42],
                            0,
                            0LL,
                            0x2000000u,
                            (POBJECT_TYPE)ExDesktopObjectType,
                            1,
                            &SourceHandle);
            if ( ProcessLuid < 0 )
            {
              ObCloseHandle(Handle, 1);
              Handle = 0LL;
            }
          }
          if ( ProcessLuid < 0 )
          {
            v36 = RtlNtStatusToDosError(ProcessLuid);
            UserSetLastError(v36, v37, v38, v39);
          }
        }
        ObfDereferenceObject(v9);
        *v53 = Handle;
        v16 = SourceHandle;
        if ( SourceHandle )
          ProcessLuid = 0;
        goto LABEL_10;
      }
    }
    if ( a2 && a2->Length )
    {
      v31 = *a2;
      Source = v31;
      v32 = (unsigned __int16)_mm_cvtsi128_si32((__m128i)v31) >> 1;
      v33 = _mm_srli_si128((__m128i)v31, 8).m128i_u64[0];
      for ( i = (_WORD *)v33; v32; --v32 )
      {
        if ( *i == 92 )
          break;
        ++i;
      }
      v17 = 0;
      v47 = 0;
      if ( v32 )
      {
        DestinationString.Buffer = i + 1;
        DestinationString.MaximumLength = 2 * v32 - 2;
        DestinationString.Length = DestinationString.MaximumLength;
        Source.Length = 2 * ((__int64)((__int64)i - v33) >> 1);
        v18 = 0;
        v51 = 0;
        RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
        RtlAppendUnicodeToString(&Destination, L"\\");
        RtlAppendUnicodeStringToString(&Destination, &Source);
        ProcessLuid = UserTestForWinStaAccess(&Destination);
        if ( ProcessLuid < 0 )
          goto LABEL_49;
        v17 = 0;
LABEL_17:
        v19 = 0;
        if ( !v17 )
          v19 = v48;
        v48 = v19;
        v58 = v19;
        if ( !grpWinStaList )
          goto LABEL_33;
        if ( v18 )
        {
          RtlInitUnicodeString(&Source, L"WinSta0");
          RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
          RtlAppendUnicodeToString(&Destination, L"\\");
          RtlAppendUnicodeStringToString(&Destination, &Source);
          if ( (int)UserTestForWinStaAccess(&Destination) < 0 )
          {
            v59 = 0LL;
            ProcessLuid = GetProcessLuid(0LL, &v59);
            if ( ProcessLuid < 0 )
              goto LABEL_49;
            LODWORD(Object) = v59;
            RtlStringCchPrintfW(SourceString, 0x1DuLL, L"Service-0x%x-%x$", HIDWORD(v59), Object);
            RtlInitUnicodeString(&Source, SourceString);
            v50 = 0;
          }
          else
          {
            v6 = 1;
            v50 = 1;
          }
          if ( (unsigned __int8)ObFindHandleForObject(v9, 0LL, ExWindowStationObjectType, 0LL, &Handle)
            && v9 != (PVOID)PsGetCurrentProcess(v21, v20, v22, v23) )
          {
            v40 = ZwDuplicateObject(SourceProcessHandle, Handle, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0, 0, 2u);
            ProcessLuid = v40;
            if ( v40 < 0 )
            {
              Handle = 0LL;
LABEL_25:
              if ( ProcessLuid >= 0 && !Handle )
              {
                Destination.Length = 0;
                RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
                RtlAppendUnicodeToString(&Destination, L"\\");
                RtlAppendUnicodeStringToString(&Destination, &Source);
                RegionSize = 586LL;
                ProcessLuid = ZwAllocateVirtualMemory(
                                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                &BaseAddress,
                                0LL,
                                &RegionSize,
                                0x1000u,
                                4u);
                v56 = (PUNICODE_STRING)((char *)BaseAddress + 48);
                v64[2] = (char *)BaseAddress + 48;
                if ( ProcessLuid >= 0 )
                {
                  SafeCopyUnicodeString((PUNICODE_STRING)BaseAddress + 3, &Destination);
                  *(_DWORD *)BaseAddress = 48;
                  *((_QWORD *)BaseAddress + 1) = 0LL;
                  *((_DWORD *)BaseAddress + 6) = 64;
                  *((_QWORD *)BaseAddress + 2) = v56;
                  *((_QWORD *)BaseAddress + 4) = 0LL;
                  *((_QWORD *)BaseAddress + 5) = 0LL;
                  if ( v48 )
                    *((_DWORD *)BaseAddress + 6) |= 2u;
                  Handle = (HANDLE)OpenWindowStation(BaseAddress, 0x2000000LL);
                }
              }
              if ( !gbRemoteSession && ProcessLuid >= 0 && !Handle && !v6 && v18 )
              {
                ProcessLuid = xxxConnectService((__int64)&Destination, &SourceHandle, v53);
                if ( BaseAddress )
                  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
                ObfDereferenceObject(v9);
                if ( ProcessLuid < 0 )
                  return ProcessLuid;
                goto LABEL_52;
              }
              v17 = v47;
LABEL_33:
              if ( !Handle )
              {
                ProcessLuid = -1073741823;
                goto LABEL_49;
              }
              if ( SourceHandle )
              {
LABEL_49:
                if ( BaseAddress )
                  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
                ObfDereferenceObject(v9);
                *v53 = Handle;
LABEL_52:
                v16 = SourceHandle;
LABEL_10:
                *v54 = v16;
                return ProcessLuid;
              }
              if ( !v17 || !(unsigned __int8)ObFindHandleForObject(v9, 0LL, ExDesktopObjectType, 0LL, &SourceHandle) )
              {
LABEL_37:
                if ( ProcessLuid < 0 )
                {
LABEL_47:
                  if ( !SourceHandle )
                  {
                    ObCloseHandle(Handle, 1);
                    Handle = 0LL;
                  }
                  goto LABEL_49;
                }
                if ( !SourceHandle )
                {
                  RtlCopyUnicodeString(&Destination, &DestinationString);
                  if ( BaseAddress )
                  {
                    v28 = v56;
                  }
                  else
                  {
                    RegionSize = 586LL;
                    ProcessLuid = ZwAllocateVirtualMemory(
                                    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                    &BaseAddress,
                                    0LL,
                                    &RegionSize,
                                    0x1000u,
                                    4u);
                    v28 = (struct _UNICODE_STRING *)((char *)BaseAddress + 48);
                  }
                  if ( ProcessLuid >= 0 )
                  {
                    SafeCopyUnicodeString(v28, &Destination);
                    *(_DWORD *)BaseAddress = 48;
                    *((_QWORD *)BaseAddress + 1) = Handle;
                    v29 = v47;
                    *((_DWORD *)BaseAddress + 6) = (v47 << 7) | 0x40;
                    *((_QWORD *)BaseAddress + 2) = v28;
                    *((_QWORD *)BaseAddress + 4) = 0LL;
                    *((_QWORD *)BaseAddress + 5) = 0LL;
                    if ( v48 )
                      *((_DWORD *)BaseAddress + 6) |= 2u;
                    if ( (_DWORD)v29 )
                      Desktop = xxxCreateDesktopEx((_DWORD)BaseAddress, 0, 0x2000000, 0, (__int64)&SourceHandle, 0);
                    else
                      Desktop = OpenDesktop((__int64)BaseAddress, v29, 0LL, 0x2000000, &SourceHandle);
                    ProcessLuid = Desktop;
                  }
                  goto LABEL_47;
                }
                goto LABEL_49;
              }
              if ( v9 != (PVOID)PsGetCurrentProcess(v25, v24, v26, v27) )
              {
                ProcessLuid = ZwDuplicateObject(
                                SourceProcessHandle,
                                SourceHandle,
                                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                &v55,
                                0,
                                0,
                                2u);
                if ( ProcessLuid < 0 )
                {
LABEL_98:
                  CloseProtectedHandle(SourceHandle, 1);
                  SourceHandle = 0LL;
                  goto LABEL_37;
                }
                SourceHandle = v55;
              }
              if ( !SourceHandle || !v15 )
                goto LABEL_37;
              ProcessLuid = ObReferenceObjectByHandle(SourceHandle, 0, (POBJECT_TYPE)ExDesktopObjectType, 0, &v55, 0LL);
              if ( ProcessLuid >= 0 )
              {
                v65[0] = 1LL;
                v65[1] = v9;
                v42 = v55;
                v65[2] = v55;
                v66 = 0;
                v67 = 1;
                ProcessLuid = MapDesktop((__int64)v65, v41);
                if ( ProcessLuid < 0 )
                {
                  CloseProtectedHandle(SourceHandle, 1);
                  SourceHandle = 0LL;
                }
                ObfDereferenceObject(v42);
                goto LABEL_37;
              }
              goto LABEL_98;
            }
            Handle = TargetHandle;
          }
        }
        if ( Handle )
        {
          ProcessLuid = ObReferenceObjectByHandle(Handle, 0, ExWindowStationObjectType, 0, v64, 0LL);
          if ( ProcessLuid >= 0 )
          {
            v35 = v64[0];
            if ( (((*((_DWORD *)v64[0] + 8) >> 2) & 1) == 0) != v6 )
            {
              if ( TargetHandle )
              {
                CloseProtectedHandle(Handle, 1);
                v35 = v64[0];
              }
              Handle = 0LL;
            }
            ObfDereferenceObject(v35);
          }
        }
        goto LABEL_25;
      }
      DestinationString = v31;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"Default");
      v17 = 1;
      v47 = 1;
    }
    v18 = 1;
    v51 = 1;
    goto LABEL_17;
  }
  return result;
}
