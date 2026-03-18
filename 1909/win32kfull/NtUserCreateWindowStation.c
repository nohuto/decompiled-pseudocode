/*
 * XREFs of NtUserCreateWindowStation @ 0x1C007F1D0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C007F150 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     xxxCreateWindowStation @ 0x1C007F978 (xxxCreateWindowStation.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0080070 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserCreateWindowStation(
        ULONG64 a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        unsigned __int64 a6,
        ULONG64 a7,
        int a8)
{
  int v8; // r13d
  ULONG64 v11; // rdi
  int v12; // eax
  const unsigned __int16 *v13; // rdi
  unsigned __int64 v14; // r14
  ULONG64 v15; // rdx
  _BYTE **v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  _OWORD *v21; // rcx
  _OWORD *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  _OWORD *v25; // rcx
  _OWORD *v26; // rax
  unsigned int *v27; // rdx
  ULONG64 v28; // rdx
  int ProcessLuid; // edi
  char v30; // r14
  __int64 v31; // rcx
  WCHAR *v32; // r8
  ULONG64 v33; // rdx
  _BYTE **v34; // rax
  USHORT Length; // ax
  int v36; // eax
  ULONG64 v37; // rcx
  int v38; // eax
  int v39; // r15d
  NTSTATUS v40; // ecx
  _DWORD *v41; // rdi
  int v42; // edx
  __int64 ThreadWin32Thread; // rax
  ULONG v44; // eax
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  NTSTATUS Status; // [rsp+54h] [rbp-694h]
  int v50; // [rsp+60h] [rbp-688h]
  int v51; // [rsp+60h] [rbp-688h]
  __int64 v52; // [rsp+68h] [rbp-680h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-678h] BYREF
  _DWORD *v54; // [rsp+80h] [rbp-668h]
  PVOID BaseAddress; // [rsp+88h] [rbp-660h] BYREF
  int v56; // [rsp+90h] [rbp-658h]
  int v57; // [rsp+98h] [rbp-650h]
  int v58; // [rsp+A0h] [rbp-648h]
  __int64 v59; // [rsp+A8h] [rbp-640h] BYREF
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp-638h] BYREF
  _OWORD v61[3]; // [rsp+B8h] [rbp-630h] BYREF
  __int64 v62; // [rsp+E8h] [rbp-600h]
  __int64 v63; // [rsp+F0h] [rbp-5F8h]
  const unsigned __int16 *v64; // [rsp+F8h] [rbp-5F0h]
  _QWORD v65[7]; // [rsp+100h] [rbp-5E8h] BYREF
  __int128 v66; // [rsp+138h] [rbp-5B0h]
  __m128i v67; // [rsp+148h] [rbp-5A0h]
  __int128 v68; // [rsp+158h] [rbp-590h]
  _BYTE v69[792]; // [rsp+168h] [rbp-580h] BYREF
  __int64 v70; // [rsp+480h] [rbp-268h] BYREF
  int v71; // [rsp+488h] [rbp-260h]
  unsigned __int16 v72[16]; // [rsp+490h] [rbp-258h] BYREF
  WCHAR SourceString[256]; // [rsp+4B0h] [rbp-238h] BYREF

  v56 = a4;
  v8 = a3;
  v57 = a2;
  v62 = a3;
  v58 = a4;
  v11 = a7;
  memset(v61, 0, sizeof(v61));
  v70 = 0LL;
  v71 = 0;
  v59 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v54 = 0LL;
  BaseAddress = 0LL;
  memset(v65, 0, 48);
  v52 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a7 >= MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  v12 = *(_DWORD *)v11;
  v50 = *(_DWORD *)v11;
  LODWORD(v63) = *(_DWORD *)v11;
  v13 = *(const unsigned __int16 **)(v11 + 8);
  v64 = v13;
  if ( ((unsigned __int8)v13 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (unsigned __int16)v12;
  v15 = (ULONG64)v13 + (unsigned __int16)v12 + 2;
  v16 = (_BYTE **)MmUserProbeAddress;
  if ( v15 < MmUserProbeAddress && (unsigned __int16)v12 <= HIWORD(v50) )
  {
    if ( (v12 & 1) != 0 )
    {
LABEL_10:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress);
      v16 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_11;
    }
    if ( v15 > (unsigned __int64)v13 )
      goto LABEL_12;
  }
  if ( (v12 & 1) != 0 )
    goto LABEL_10;
LABEL_11:
  **v16 = 0;
LABEL_12:
  RtlStringCchCopyNW(v72, 9uLL, v13, v14 >> 1);
  v54 = (_DWORD *)Win32AllocPoolWithQuota(792LL, 1702064981LL);
  if ( !v54 )
  {
    v52 = 0LL;
    UserSetLastError(8LL, v17, v18, v19);
    goto LABEL_63;
  }
  v21 = (_OWORD *)a6;
  if ( a6 + 792 < a6 || a6 + 792 > MmUserProbeAddress )
    v21 = (_OWORD *)MmUserProbeAddress;
  v22 = v69;
  v23 = 6LL;
  v24 = 6LL;
  do
  {
    *v22 = *v21;
    v22[1] = v21[1];
    v22[2] = v21[2];
    v22[3] = v21[3];
    v22[4] = v21[4];
    v22[5] = v21[5];
    v22[6] = v21[6];
    v22 += 8;
    *(v22 - 1) = v21[7];
    v21 += 8;
    --v24;
  }
  while ( v24 );
  *v22 = *v21;
  *((_QWORD *)v22 + 2) = *((_QWORD *)v21 + 2);
  v25 = v54;
  v26 = v69;
  do
  {
    *v25 = *v26;
    v25[1] = v26[1];
    v25[2] = v26[2];
    v25[3] = v26[3];
    v25[4] = v26[4];
    v25[5] = v26[5];
    v25[6] = v26[6];
    v25 += 8;
    *(v25 - 1) = v26[7];
    v26 += 8;
    --v23;
  }
  while ( v23 );
  *v25 = *v26;
  *((_QWORD *)v25 + 2) = *((_QWORD *)v26 + 2);
  if ( *v54 < 8u )
  {
    if ( a1 + 48 < a1 || a1 + 48 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v66 = *(_OWORD *)a1;
    v67 = *(__m128i *)(a1 + 16);
    v68 = *(_OWORD *)(a1 + 32);
    v61[0] = v66;
    v61[1] = v67;
    v61[2] = v68;
    DWORD2(v61[1]) = _mm_cvtsi128_si32(_mm_srli_si128(v67, 8)) & 0xFFFFFDFF;
    v27 = (unsigned int *)v67.m128i_i64[0];
    if ( __PAIR128__(v67.m128i_u64[0], *((unsigned __int64 *)&v66 + 1)) == 0 )
    {
      ProcessLuid = GetProcessLuid(0LL, &v59);
      if ( ProcessLuid >= 0 )
      {
        RtlStringCchPrintfW(SourceString, 256LL, L"%ws\\Service-0x%x-%x$", szWindowStationDirectory, HIDWORD(v59), v59);
        RtlInitUnicodeString(&DestinationString, SourceString);
        *(_QWORD *)&v61[1] = &DestinationString;
      }
      v30 = 0;
      goto LABEL_46;
    }
    if ( v67.m128i_i64[0] >= MmUserProbeAddress )
      v27 = (unsigned int *)MmUserProbeAddress;
    v31 = *v27;
    v51 = *v27;
    *(_DWORD *)&DestinationString.Length = *v27;
    v32 = (WCHAR *)*((_QWORD *)v27 + 1);
    DestinationString.Buffer = v32;
    if ( ((unsigned __int8)v32 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v33 = (ULONG64)v32 + (unsigned __int16)v31 + 2;
    v34 = (_BYTE **)MmUserProbeAddress;
    if ( v33 < MmUserProbeAddress && (unsigned __int16)v31 <= HIWORD(v51) )
    {
      if ( (v31 & 1) != 0 )
        goto LABEL_39;
      if ( v33 > (unsigned __int64)v32 )
      {
LABEL_41:
        Length = 522;
        if ( DestinationString.Length < 0x20Au )
          Length = DestinationString.Length;
        DestinationString.Length = Length;
        RegionSize = Length;
        v36 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
        ProcessLuid = v36;
        if ( v36 < 0 )
          ExRaiseStatus(v36);
        memmove(BaseAddress, DestinationString.Buffer, DestinationString.Length);
        DestinationString.Buffer = (PWSTR)BaseAddress;
        *(_QWORD *)&v61[1] = &DestinationString;
        v30 = 1;
LABEL_46:
        if ( ProcessLuid >= 0 )
        {
          v37 = *((_QWORD *)&v61[2] + 1);
          if ( *((_QWORD *)&v61[2] + 1) )
          {
            v28 = *((_QWORD *)&v61[2] + 1) + 12LL;
            if ( (unsigned __int64)(*((_QWORD *)&v61[2] + 1) + 12LL) < *((_QWORD *)&v61[2] + 1)
              || v28 > MmUserProbeAddress )
            {
              v37 = MmUserProbeAddress;
            }
            v38 = *(_DWORD *)(v37 + 8);
            v70 = *(_QWORD *)v37;
            v71 = v38;
            *((_QWORD *)&v61[2] + 1) = &v70;
          }
          if ( *(_QWORD *)&v61[2] )
          {
            LOBYTE(v28) = 1;
            ProcessLuid = SeCaptureSecurityDescriptor(*(_QWORD *)&v61[2], v28);
            *(_QWORD *)&v61[2] = 0LL;
          }
        }
        v39 = v56;
        if ( ProcessLuid >= 0 )
        {
          v41 = v54;
          PushW32ThreadLock((__int64)v54, v65, (__int64)Win32FreePool);
          LOBYTE(v42) = v30;
          Status = xxxCreateWindowStation(
                     (unsigned int)v61,
                     v42,
                     a2,
                     v8,
                     v39,
                     a5,
                     (__int64)v41,
                     (__int64)v72,
                     a8,
                     (__int64)&v52);
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          *(_QWORD *)(ThreadWin32Thread + 16) = v65[0];
          v40 = Status;
          if ( Status >= 0 )
            goto LABEL_58;
        }
        else
        {
          v40 = ProcessLuid;
        }
        v52 = 0LL;
        v44 = RtlNtStatusToDosError(v40);
        UserSetLastError(v44, v45, v46, v47);
        goto LABEL_58;
      }
    }
    if ( (v31 & 1) == 0 )
    {
LABEL_40:
      **v34 = 0;
      goto LABEL_41;
    }
LABEL_39:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v31);
    v34 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_40;
  }
  v52 = 0LL;
  UserSetLastError(87LL, (__int64)v22, 0LL, 128LL);
LABEL_58:
  if ( v54 )
    Win32FreePool(v54);
  if ( BaseAddress )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  v20 = 0LL;
LABEL_63:
  UserSessionSwitchLeaveCrit(v20);
  return v52;
}
