/*
 * XREFs of NtUserCreateWindowStation @ 0x1C00DF4E0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00DF460 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     xxxCreateWindowStation @ 0x1C00DFC88 (xxxCreateWindowStation.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00E0380 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v30; // r9
  char v31; // r14
  __int64 v32; // rcx
  WCHAR *v33; // r8
  ULONG64 v34; // rdx
  _BYTE **v35; // rax
  USHORT Length; // ax
  int v37; // eax
  ULONG64 v38; // rcx
  int v39; // eax
  int v40; // r15d
  NTSTATUS v41; // ecx
  _DWORD *v42; // rdi
  int v43; // edx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 ThreadWin32Thread; // rax
  ULONG v48; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  NTSTATUS Status; // [rsp+54h] [rbp-694h]
  int v54; // [rsp+60h] [rbp-688h]
  int v55; // [rsp+60h] [rbp-688h]
  __int64 v56; // [rsp+68h] [rbp-680h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-678h] BYREF
  _DWORD *v58; // [rsp+80h] [rbp-668h]
  PVOID BaseAddress; // [rsp+88h] [rbp-660h] BYREF
  int v60; // [rsp+90h] [rbp-658h]
  int v61; // [rsp+98h] [rbp-650h]
  int v62; // [rsp+A0h] [rbp-648h]
  __int64 v63; // [rsp+A8h] [rbp-640h] BYREF
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp-638h] BYREF
  _OWORD v65[3]; // [rsp+B8h] [rbp-630h] BYREF
  __int64 v66; // [rsp+E8h] [rbp-600h]
  __int64 v67; // [rsp+F0h] [rbp-5F8h]
  const unsigned __int16 *v68; // [rsp+F8h] [rbp-5F0h]
  _QWORD v69[7]; // [rsp+100h] [rbp-5E8h] BYREF
  __int128 v70; // [rsp+138h] [rbp-5B0h]
  __m128i v71; // [rsp+148h] [rbp-5A0h]
  __int128 v72; // [rsp+158h] [rbp-590h]
  _BYTE v73[792]; // [rsp+168h] [rbp-580h] BYREF
  __int64 v74; // [rsp+480h] [rbp-268h] BYREF
  int v75; // [rsp+488h] [rbp-260h]
  unsigned __int16 v76[16]; // [rsp+490h] [rbp-258h] BYREF
  WCHAR SourceString[256]; // [rsp+4B0h] [rbp-238h] BYREF

  v60 = a4;
  v8 = a3;
  v61 = a2;
  v66 = a3;
  v62 = a4;
  v11 = a7;
  memset(v65, 0, sizeof(v65));
  v74 = 0LL;
  v75 = 0;
  v63 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v58 = 0LL;
  BaseAddress = 0LL;
  memset(v69, 0, 48);
  v56 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a7 >= MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  v12 = *(_DWORD *)v11;
  v54 = *(_DWORD *)v11;
  LODWORD(v67) = *(_DWORD *)v11;
  v13 = *(const unsigned __int16 **)(v11 + 8);
  v68 = v13;
  if ( ((unsigned __int8)v13 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (unsigned __int16)v12;
  v15 = (ULONG64)v13 + (unsigned __int16)v12 + 2;
  v16 = (_BYTE **)MmUserProbeAddress;
  if ( v15 < MmUserProbeAddress && (unsigned __int16)v12 <= HIWORD(v54) )
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
  RtlStringCchCopyNW(v76, 9uLL, v13, v14 >> 1);
  v58 = (_DWORD *)Win32AllocPoolWithQuota(792LL, 1702064981LL);
  if ( !v58 )
  {
    v56 = 0LL;
    UserSetLastError(8LL, v17, v18, v19);
    goto LABEL_63;
  }
  v21 = (_OWORD *)a6;
  if ( a6 + 792 < a6 || a6 + 792 > MmUserProbeAddress )
    v21 = (_OWORD *)MmUserProbeAddress;
  v22 = v73;
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
  v25 = v58;
  v26 = v73;
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
  if ( *v58 < 8u )
  {
    if ( a1 + 48 < a1 || a1 + 48 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v70 = *(_OWORD *)a1;
    v71 = *(__m128i *)(a1 + 16);
    v72 = *(_OWORD *)(a1 + 32);
    v65[0] = v70;
    v65[1] = v71;
    v65[2] = v72;
    DWORD2(v65[1]) = _mm_cvtsi128_si32(_mm_srli_si128(v71, 8)) & 0xFFFFFDFF;
    v27 = (unsigned int *)v71.m128i_i64[0];
    if ( __PAIR128__(v71.m128i_u64[0], *((unsigned __int64 *)&v70 + 1)) == 0 )
    {
      ProcessLuid = GetProcessLuid(0LL, &v63);
      if ( ProcessLuid >= 0 )
      {
        RtlStringCchPrintfW(SourceString, 256LL, L"%ws\\Service-0x%x-%x$", szWindowStationDirectory, HIDWORD(v63), v63);
        RtlInitUnicodeString(&DestinationString, SourceString);
        *(_QWORD *)&v65[1] = &DestinationString;
      }
      v31 = 0;
      goto LABEL_46;
    }
    if ( v71.m128i_i64[0] >= MmUserProbeAddress )
      v27 = (unsigned int *)MmUserProbeAddress;
    v32 = *v27;
    v55 = *v27;
    *(_DWORD *)&DestinationString.Length = *v27;
    v33 = (WCHAR *)*((_QWORD *)v27 + 1);
    DestinationString.Buffer = v33;
    if ( ((unsigned __int8)v33 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v34 = (ULONG64)v33 + (unsigned __int16)v32 + 2;
    v35 = (_BYTE **)MmUserProbeAddress;
    if ( v34 < MmUserProbeAddress && (unsigned __int16)v32 <= HIWORD(v55) )
    {
      if ( (v32 & 1) != 0 )
        goto LABEL_39;
      if ( v34 > (unsigned __int64)v33 )
      {
LABEL_41:
        Length = 522;
        if ( DestinationString.Length < 0x20Au )
          Length = DestinationString.Length;
        DestinationString.Length = Length;
        RegionSize = Length;
        v37 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
        ProcessLuid = v37;
        if ( v37 < 0 )
          ExRaiseStatus(v37);
        memmove(BaseAddress, DestinationString.Buffer, DestinationString.Length);
        DestinationString.Buffer = (PWSTR)BaseAddress;
        *(_QWORD *)&v65[1] = &DestinationString;
        v31 = 1;
LABEL_46:
        if ( ProcessLuid >= 0 )
        {
          v38 = *((_QWORD *)&v65[2] + 1);
          if ( *((_QWORD *)&v65[2] + 1) )
          {
            v28 = *((_QWORD *)&v65[2] + 1) + 12LL;
            if ( (unsigned __int64)(*((_QWORD *)&v65[2] + 1) + 12LL) < *((_QWORD *)&v65[2] + 1)
              || v28 > MmUserProbeAddress )
            {
              v38 = MmUserProbeAddress;
            }
            v39 = *(_DWORD *)(v38 + 8);
            v74 = *(_QWORD *)v38;
            v75 = v39;
            *((_QWORD *)&v65[2] + 1) = &v74;
          }
          if ( *(_QWORD *)&v65[2] )
          {
            LOBYTE(v28) = 1;
            ProcessLuid = SeCaptureSecurityDescriptor(*(_QWORD *)&v65[2], v28);
            *(_QWORD *)&v65[2] = 0LL;
          }
        }
        v40 = v60;
        if ( ProcessLuid >= 0 )
        {
          v42 = v58;
          PushW32ThreadLock((__int64)v58, v69, (__int64)Win32FreePool, v30);
          LOBYTE(v43) = v31;
          Status = xxxCreateWindowStation(
                     (unsigned int)v65,
                     v43,
                     a2,
                     v8,
                     v40,
                     a5,
                     (__int64)v42,
                     (__int64)v76,
                     a8,
                     (__int64)&v56);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v45, v46);
          *(_QWORD *)(ThreadWin32Thread + 16) = v69[0];
          v41 = Status;
          if ( Status >= 0 )
            goto LABEL_58;
        }
        else
        {
          v41 = ProcessLuid;
        }
        v56 = 0LL;
        v48 = RtlNtStatusToDosError(v41);
        UserSetLastError(v48, v49, v50, v51);
        goto LABEL_58;
      }
    }
    if ( (v32 & 1) == 0 )
    {
LABEL_40:
      **v35 = 0;
      goto LABEL_41;
    }
LABEL_39:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v32);
    v35 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_40;
  }
  v56 = 0LL;
  UserSetLastError(87LL, (__int64)v22, 0LL, 128LL);
LABEL_58:
  if ( v58 )
    Win32FreePool(v58);
  if ( BaseAddress )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  v20 = 0LL;
LABEL_63:
  UserSessionSwitchLeaveCrit(v20);
  return v56;
}
