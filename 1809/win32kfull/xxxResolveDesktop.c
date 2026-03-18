/*
 * XREFs of xxxResolveDesktop @ 0x1C00EF100
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     MapDesktop @ 0x1C00B24C0 (MapDesktop.c)
 *     CloseProtectedHandle @ 0x1C00BB984 (CloseProtectedHandle.c)
 *     _OpenDesktop @ 0x1C00EEE38 (_OpenDesktop.c)
 *     ?SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z @ 0x1C00EF9C0 (-SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z.c)
 *     _UserTestForWinStaAccess @ 0x1C00EFA44 (_UserTestForWinStaAccess.c)
 *     _OpenWindowStation @ 0x1C00EFCA8 (_OpenWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00EFCF4 (xxxCreateDesktopEx.c)
 *     RtlStringCchPrintfW @ 0x1C00F0EE8 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     xxxConnectService @ 0x1C022BD68 (xxxConnectService.c)
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
  PVOID v41; // r14
  PVOID *Object; // [rsp+20h] [rbp-3B8h]
  PVOID BaseAddress; // [rsp+40h] [rbp-398h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-390h] BYREF
  HANDLE SourceHandle; // [rsp+50h] [rbp-388h] BYREF
  unsigned int v46; // [rsp+58h] [rbp-380h]
  int v47; // [rsp+5Ch] [rbp-37Ch]
  struct _UNICODE_STRING Destination; // [rsp+60h] [rbp-378h] BYREF
  int v49; // [rsp+70h] [rbp-368h]
  int v50; // [rsp+74h] [rbp-364h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-360h] BYREF
  HANDLE *v52; // [rsp+80h] [rbp-358h]
  _QWORD *v53; // [rsp+88h] [rbp-350h]
  PVOID v54; // [rsp+90h] [rbp-348h] BYREF
  PUNICODE_STRING v55; // [rsp+98h] [rbp-340h]
  int v56; // [rsp+A0h] [rbp-338h]
  void *TargetHandle; // [rsp+A8h] [rbp-330h] BYREF
  HANDLE SourceProcessHandle; // [rsp+B0h] [rbp-328h]
  PVOID v59; // [rsp+B8h] [rbp-320h] BYREF
  UNICODE_STRING Source; // [rsp+C0h] [rbp-318h] BYREF
  _DWORD v61[2]; // [rsp+D0h] [rbp-308h] BYREF
  PVOID v62[3]; // [rsp+D8h] [rbp-300h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-2E8h] BYREF
  char *v64; // [rsp+100h] [rbp-2D8h]
  __int64 v65; // [rsp+108h] [rbp-2D0h]
  int v66; // [rsp+110h] [rbp-2C8h] BYREF
  PVOID v67; // [rsp+118h] [rbp-2C0h]
  PVOID v68; // [rsp+120h] [rbp-2B8h]
  int v69; // [rsp+128h] [rbp-2B0h]
  int v70; // [rsp+12Ch] [rbp-2ACh]
  wchar_t pszDest[32]; // [rsp+140h] [rbp-298h] BYREF
  char v72; // [rsp+180h] [rbp-258h] BYREF

  v47 = a4;
  v52 = a3;
  SourceProcessHandle = a1;
  v54 = a1;
  v62[1] = a3;
  v53 = a5;
  v6 = 0;
  v49 = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  v55 = 0LL;
  BaseAddress = 0LL;
  *a3 = 0LL;
  *a5 = 0LL;
  result = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &v59, 0LL);
  ProcessLuid = result;
  if ( result >= 0 )
  {
    TargetHandle = 0LL;
    Handle = 0LL;
    SourceHandle = 0LL;
    *(_DWORD *)&Destination.Length = 34209792;
    Destination.Buffer = (PWSTR)&v72;
    v9 = v59;
    ProcessWin32Process = PsGetProcessWin32Process(v59);
    v15 = (PVOID *)ProcessWin32Process;
    v65 = ProcessWin32Process;
    if ( ProcessWin32Process )
    {
      if ( (*(_DWORD *)(ProcessWin32Process + 12) & 0x1000) != 0 )
      {
        ObfDereferenceObject(v9);
        return -1073741790;
      }
      if ( *(_QWORD *)(ProcessWin32Process + 680) && *(_QWORD *)(ProcessWin32Process + 400) )
      {
        if ( v9 == (PVOID)PsGetCurrentProcess(v12, v11, v13, v14) )
        {
          Handle = v15[85];
          SourceHandle = v15[50];
        }
        else
        {
          ProcessLuid = ObOpenObjectByPointer(v15[84], 0, 0LL, 0x2000000u, ExWindowStationObjectType, 1, &Handle);
          if ( ProcessLuid >= 0 )
          {
            ProcessLuid = ObOpenObjectByPointer(
                            v15[43],
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
        *v52 = Handle;
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
      v46 = 0;
      if ( v32 )
      {
        DestinationString.Buffer = i + 1;
        DestinationString.MaximumLength = 2 * v32 - 2;
        DestinationString.Length = DestinationString.MaximumLength;
        Source.Length = 2 * ((__int64)((__int64)i - v33) >> 1);
        v18 = 0;
        v50 = 0;
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
          v19 = v47;
        v47 = v19;
        v56 = v19;
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
            ProcessLuid = GetProcessLuid(0LL, v61);
            if ( ProcessLuid < 0 )
              goto LABEL_49;
            LODWORD(Object) = v61[0];
            RtlStringCchPrintfW(pszDest, 0x1DuLL, L"Service-0x%x-%x$", v61[1], Object);
            RtlInitUnicodeString(&Source, pszDest);
            v49 = 0;
          }
          else
          {
            v6 = 1;
            v49 = 1;
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
                v55 = (PUNICODE_STRING)((char *)BaseAddress + 48);
                v64 = (char *)BaseAddress + 48;
                if ( ProcessLuid >= 0 )
                {
                  SafeCopyUnicodeString((PUNICODE_STRING)BaseAddress + 3, &Destination);
                  *(_DWORD *)BaseAddress = 48;
                  *((_QWORD *)BaseAddress + 1) = 0LL;
                  *((_DWORD *)BaseAddress + 6) = 64;
                  *((_QWORD *)BaseAddress + 2) = v55;
                  *((_QWORD *)BaseAddress + 4) = 0LL;
                  *((_QWORD *)BaseAddress + 5) = 0LL;
                  if ( v47 )
                    *((_DWORD *)BaseAddress + 6) |= 2u;
                  Handle = (HANDLE)OpenWindowStation(BaseAddress, 0x2000000LL);
                }
              }
              if ( !gbRemoteSession && ProcessLuid >= 0 && !Handle && !v6 && v18 )
              {
                ProcessLuid = xxxConnectService(&Destination, &SourceHandle, v52);
                if ( BaseAddress )
                  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
                ObfDereferenceObject(v9);
                if ( ProcessLuid < 0 )
                  return ProcessLuid;
                goto LABEL_52;
              }
              v17 = v46;
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
                *v52 = Handle;
LABEL_52:
                v16 = SourceHandle;
LABEL_10:
                *v53 = v16;
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
                    v28 = v55;
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
                    v29 = v46;
                    *((_DWORD *)BaseAddress + 6) = (v46 << 7) | 0x40;
                    *((_QWORD *)BaseAddress + 2) = v28;
                    *((_QWORD *)BaseAddress + 4) = 0LL;
                    *((_QWORD *)BaseAddress + 5) = 0LL;
                    if ( v47 )
                      *((_DWORD *)BaseAddress + 6) |= 2u;
                    if ( (_DWORD)v29 )
                      Desktop = xxxCreateDesktopEx((_DWORD)BaseAddress, 0, 0x2000000, 0, (__int64)&SourceHandle, 0);
                    else
                      Desktop = OpenDesktop(
                                  (struct _OBJECT_ATTRIBUTES *)BaseAddress,
                                  v29,
                                  0LL,
                                  0x2000000,
                                  &SourceHandle);
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
                                &v54,
                                0,
                                0,
                                2u);
                if ( ProcessLuid < 0 )
                {
LABEL_99:
                  CloseProtectedHandle(SourceHandle, 1);
                  SourceHandle = 0LL;
                  goto LABEL_37;
                }
                SourceHandle = v54;
              }
              if ( !SourceHandle || !v15 )
                goto LABEL_37;
              ProcessLuid = ObReferenceObjectByHandle(SourceHandle, 0, (POBJECT_TYPE)ExDesktopObjectType, 0, &v54, 0LL);
              if ( ProcessLuid >= 0 )
              {
                v66 = 1;
                v67 = v9;
                v41 = v54;
                v68 = v54;
                v69 = 0;
                v70 = 1;
                ProcessLuid = MapDesktop((__int64)&v66);
                if ( ProcessLuid < 0 )
                {
                  CloseProtectedHandle(SourceHandle, 1);
                  SourceHandle = 0LL;
                }
                ObfDereferenceObject(v41);
                goto LABEL_37;
              }
              goto LABEL_99;
            }
            Handle = TargetHandle;
          }
        }
        if ( Handle )
        {
          ProcessLuid = ObReferenceObjectByHandle(Handle, 0, ExWindowStationObjectType, 0, v62, 0LL);
          if ( ProcessLuid >= 0 )
          {
            v35 = v62[0];
            if ( (((*((_DWORD *)v62[0] + 8) >> 2) & 1) == 0) != v6 )
            {
              if ( TargetHandle )
              {
                CloseProtectedHandle(Handle, 1);
                v35 = v62[0];
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
      v46 = 1;
    }
    v18 = 1;
    v50 = 1;
    goto LABEL_17;
  }
  return result;
}
