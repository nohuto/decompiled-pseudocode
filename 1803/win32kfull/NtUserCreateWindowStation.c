/*
 * XREFs of NtUserCreateWindowStation @ 0x1C00B35A0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001B160 (PopAndFreeAlwaysW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     RtlStringCchCopyNW @ 0x1C00B3504 (RtlStringCchCopyNW.c)
 *     xxxCreateWindowStation @ 0x1C00B437C (xxxCreateWindowStation.c)
 *     RtlStringCchPrintfW @ 0x1C00B9E50 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  const wchar_t *v13; // rdi
  unsigned __int64 v14; // r15
  ULONG64 v15; // rdx
  _BYTE **v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _OWORD *v22; // rcx
  _OWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  _OWORD *v26; // rax
  _OWORD *v27; // rcx
  unsigned int *v28; // rdx
  ULONG64 v29; // rdx
  int ProcessLuid; // edi
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
  __int64 ThreadWin32Thread; // rax
  ULONG v46; // eax
  __int64 v47; // rdx
  NTSTATUS Status; // [rsp+54h] [rbp-684h]
  int v50; // [rsp+60h] [rbp-678h]
  int v51; // [rsp+60h] [rbp-678h]
  __int64 v52; // [rsp+68h] [rbp-670h] BYREF
  _DWORD *v53; // [rsp+70h] [rbp-668h]
  PVOID BaseAddress; // [rsp+78h] [rbp-660h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-658h] BYREF
  int v56; // [rsp+90h] [rbp-648h]
  int v57; // [rsp+98h] [rbp-640h]
  int v58; // [rsp+A0h] [rbp-638h]
  _DWORD v59[2]; // [rsp+A8h] [rbp-630h] BYREF
  ULONG_PTR RegionSize; // [rsp+B0h] [rbp-628h] BYREF
  __int128 v61; // [rsp+B8h] [rbp-620h] BYREF
  __m128i v62; // [rsp+C8h] [rbp-610h]
  __int128 v63; // [rsp+D8h] [rbp-600h]
  __int64 v64; // [rsp+E8h] [rbp-5F0h]
  int v65; // [rsp+F8h] [rbp-5E0h]
  const wchar_t *v66; // [rsp+100h] [rbp-5D8h]
  _QWORD v67[3]; // [rsp+108h] [rbp-5D0h] BYREF
  __int128 v68; // [rsp+138h] [rbp-5A0h]
  __m128i v69; // [rsp+148h] [rbp-590h]
  __int128 v70; // [rsp+158h] [rbp-580h]
  _BYTE v71[784]; // [rsp+168h] [rbp-570h] BYREF
  __int64 v72; // [rsp+478h] [rbp-260h] BYREF
  int v73; // [rsp+480h] [rbp-258h]
  wchar_t pszDest[12]; // [rsp+488h] [rbp-250h] BYREF
  wchar_t SourceString[256]; // [rsp+4A0h] [rbp-238h] BYREF

  v56 = a4;
  v8 = a3;
  v57 = a2;
  v64 = a3;
  v58 = a4;
  v11 = a7;
  v53 = 0LL;
  BaseAddress = 0LL;
  v52 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a7 >= MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  v12 = *(_DWORD *)v11;
  v50 = *(_DWORD *)v11;
  v65 = *(_DWORD *)v11;
  v13 = *(const wchar_t **)(v11 + 8);
  v66 = v13;
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
  RtlStringCchCopyNW(pszDest, 9uLL, v13, v14 >> 1);
  v53 = (_DWORD *)Win32AllocPoolWithQuota(784LL, 1702064981LL);
  if ( !v53 )
  {
    v52 = 0LL;
    UserSetLastError(8LL, v17);
    goto LABEL_63;
  }
  v22 = (_OWORD *)a6;
  if ( a6 + 784 < a6 || a6 + 784 > MmUserProbeAddress )
    v22 = (_OWORD *)MmUserProbeAddress;
  v23 = v71;
  v24 = 6LL;
  v25 = 6LL;
  do
  {
    *v23 = *v22;
    v23[1] = v22[1];
    v23[2] = v22[2];
    v23[3] = v22[3];
    v23[4] = v22[4];
    v23[5] = v22[5];
    v23[6] = v22[6];
    v23 += 8;
    *(v23 - 1) = v22[7];
    v22 += 8;
    --v25;
  }
  while ( v25 );
  *v23 = *v22;
  v26 = v53;
  v27 = v71;
  do
  {
    *v26 = *v27;
    v26[1] = v27[1];
    v26[2] = v27[2];
    v26[3] = v27[3];
    v26[4] = v27[4];
    v26[5] = v27[5];
    v26[6] = v27[6];
    v26 += 8;
    *(v26 - 1) = v27[7];
    v27 += 8;
    --v24;
  }
  while ( v24 );
  *v26 = *v27;
  if ( *v53 < 8u )
  {
    if ( a1 + 48 < a1 || a1 + 48 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v68 = *(_OWORD *)a1;
    v69 = *(__m128i *)(a1 + 16);
    v70 = *(_OWORD *)(a1 + 32);
    v61 = v68;
    v62 = v69;
    v63 = v70;
    v62.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v69, 8)) & 0xFFFFFDFF;
    v28 = (unsigned int *)v69.m128i_i64[0];
    if ( __PAIR128__(v69.m128i_u64[0], *((unsigned __int64 *)&v68 + 1)) == 0 )
    {
      ProcessLuid = GetProcessLuid(0LL, v59);
      if ( ProcessLuid >= 0 )
      {
        RtlStringCchPrintfW(SourceString, 0x100uLL, L"%ws\\Service-0x%x-%x$", szWindowStationDirectory, v59[1], v59[0]);
        RtlInitUnicodeString(&DestinationString, SourceString);
        v62.m128i_i64[0] = (__int64)&DestinationString;
      }
      v31 = 0;
      goto LABEL_46;
    }
    if ( v69.m128i_i64[0] >= MmUserProbeAddress )
      v28 = (unsigned int *)MmUserProbeAddress;
    v32 = *v28;
    v51 = *v28;
    *(_DWORD *)&DestinationString.Length = *v28;
    v33 = (WCHAR *)*((_QWORD *)v28 + 1);
    DestinationString.Buffer = v33;
    if ( ((unsigned __int8)v33 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v34 = (ULONG64)v33 + (unsigned __int16)v32 + 2;
    v35 = (_BYTE **)MmUserProbeAddress;
    if ( v34 < MmUserProbeAddress && (unsigned __int16)v32 <= HIWORD(v51) )
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
        v62.m128i_i64[0] = (__int64)&DestinationString;
        v31 = 1;
LABEL_46:
        if ( ProcessLuid >= 0 )
        {
          v38 = *((_QWORD *)&v63 + 1);
          if ( *((_QWORD *)&v63 + 1) )
          {
            v29 = *((_QWORD *)&v63 + 1) + 12LL;
            if ( (unsigned __int64)(*((_QWORD *)&v63 + 1) + 12LL) < *((_QWORD *)&v63 + 1) || v29 > MmUserProbeAddress )
              v38 = MmUserProbeAddress;
            v39 = *(_DWORD *)(v38 + 8);
            v72 = *(_QWORD *)v38;
            v73 = v39;
            *((_QWORD *)&v63 + 1) = &v72;
          }
          if ( (_QWORD)v63 )
          {
            LOBYTE(v29) = 1;
            ProcessLuid = SeCaptureSecurityDescriptor(v63, v29);
            *(_QWORD *)&v63 = 0LL;
          }
        }
        v40 = v56;
        if ( ProcessLuid >= 0 )
        {
          v42 = v53;
          PushW32ThreadLock((__int64)v53, v67, (__int64)Win32FreePool);
          LOBYTE(v43) = v31;
          Status = xxxCreateWindowStation(
                     (unsigned int)&v61,
                     v43,
                     a2,
                     v8,
                     v40,
                     a5,
                     (__int64)v42,
                     (__int64)pszDest,
                     a8,
                     (__int64)&v52);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44);
          *(_QWORD *)(ThreadWin32Thread + 16) = v67[0];
          v41 = Status;
          if ( Status >= 0 )
            goto LABEL_58;
        }
        else
        {
          v41 = ProcessLuid;
        }
        v52 = 0LL;
        v46 = RtlNtStatusToDosError(v41);
        UserSetLastError(v46, v47);
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
  v52 = 0LL;
  UserSetLastError(87LL, 0LL);
LABEL_58:
  if ( v53 )
    Win32FreePool(v53);
  if ( BaseAddress )
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  v19 = 0LL;
LABEL_63:
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  return v52;
}
