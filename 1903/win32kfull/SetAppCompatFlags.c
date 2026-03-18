/*
 * XREFs of SetAppCompatFlags @ 0x1C008EDB0
 * Callers:
 *     <none>
 * Callees:
 *     SetAppImeCompatFlags @ 0x1C008F424 (SetAppImeCompatFlags.c)
 *     WPP_RECORDER_SF_DS @ 0x1C008F538 (WPP_RECORDER_SF_DS.c)
 *     IsCurrentDesktopComposed @ 0x1C008F610 (IsCurrentDesktopComposed.c)
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0162AF0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall SetAppCompatFlags(_QWORD *a1)
{
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessPeb; // r13
  __int64 v4; // rax
  int v5; // ecx
  unsigned __int16 *v7; // rdx
  int v8; // r15d
  unsigned int *v9; // rdx
  __int64 v10; // rcx
  ULONG64 v11; // r8
  ULONG64 v12; // rdx
  _BYTE **v13; // rax
  _WORD *v14; // rbx
  _WORD *v15; // rax
  _WORD *v16; // rcx
  _WORD *v17; // rsi
  unsigned int v18; // ebx
  __int64 v19; // r14
  __int64 v20; // rdx
  _WORD *v21; // rcx
  size_t v22; // r8
  __int64 v23; // rdx
  __int64 ThreadTeb; // rax
  __int64 v25; // rbx
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rax
  int v36; // edx
  int v37; // r8d
  int v38; // r9d
  unsigned __int64 v39; // r14
  ULONG Value; // [rsp+40h] [rbp-238h] BYREF
  int v41; // [rsp+44h] [rbp-234h]
  unsigned int v42; // [rsp+48h] [rbp-230h]
  int v43; // [rsp+4Ch] [rbp-22Ch] BYREF
  _WORD *v44; // [rsp+50h] [rbp-228h]
  _WORD *v45; // [rsp+58h] [rbp-220h]
  __int64 v46; // [rsp+60h] [rbp-218h] BYREF
  ULONG64 v47; // [rsp+68h] [rbp-210h]
  __int64 v48; // [rsp+70h] [rbp-208h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-200h] BYREF
  struct _UNICODE_STRING v50; // [rsp+88h] [rbp-1F0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-1D0h] BYREF
  __int64 *v52; // [rsp+C8h] [rbp-1B0h]
  __int64 v53; // [rsp+D0h] [rbp-1A8h]
  WCHAR v54[96]; // [rsp+E0h] [rbp-198h] BYREF
  WCHAR SourceString[80]; // [rsp+1A0h] [rbp-D8h] BYREF

  Value = 0;
  *(_QWORD *)&v50.Length = 0LL;
  v50.Buffer = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  ThreadProcess = PsGetThreadProcess((PETHREAD)*a1);
  ProcessPeb = PsGetProcessPeb(ThreadProcess);
  v4 = a1[82];
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 632);
    *((_DWORD *)a1 + 158) = v5;
    a1[80] = *(_QWORD *)(v4 + 640);
    *(_DWORD *)(a1[59] + 20LL) = v5;
    *(_DWORD *)(a1[59] + 24LL) = *((_DWORD *)a1 + 160);
    return 0LL;
  }
  v7 = (unsigned __int16 *)a1[61];
  v8 = 1;
  if ( !v7 )
  {
    v9 = (unsigned int *)(*(_QWORD *)(ProcessPeb + 32) + 96LL);
    if ( (unsigned __int64)v9 >= MmUserProbeAddress )
      v9 = (unsigned int *)MmUserProbeAddress;
    v10 = *v9;
    v41 = v10;
    LODWORD(v46) = v10;
    v11 = *((_QWORD *)v9 + 1);
    v47 = v11;
    if ( (v11 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = v11 + (unsigned __int16)v10 + 2LL;
    v13 = (_BYTE **)MmUserProbeAddress;
    if ( v12 < MmUserProbeAddress && (unsigned __int16)v10 <= HIWORD(v41) )
    {
      if ( (v10 & 1) != 0 )
        goto LABEL_13;
      if ( v12 > v11 )
      {
LABEL_15:
        v7 = (unsigned __int16 *)&v46;
        goto LABEL_16;
      }
    }
    if ( (v10 & 1) == 0 )
    {
LABEL_14:
      **v13 = 0;
      goto LABEL_15;
    }
LABEL_13:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
    v13 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_14;
  }
LABEL_16:
  v14 = (_WORD *)(*((_QWORD *)v7 + 1) + 2 * ((unsigned __int64)*v7 >> 1));
  v45 = v14;
  v15 = v14;
  v44 = v14;
  while ( 1 )
  {
    v16 = (_WORD *)*((_QWORD *)v7 + 1);
    if ( v14 == v16 )
      break;
    if ( *v14 == 46 )
      goto LABEL_20;
    v45 = --v14;
  }
  v14 = v15;
  v45 = v15;
LABEL_20:
  v17 = v14;
  v44 = v14;
  while ( v17 != v16 )
  {
    if ( *v17 == 92 || *v17 == 58 )
    {
      v44 = ++v17;
      break;
    }
    v44 = --v17;
  }
  v18 = 2 * (v14 - v17);
  v42 = v18;
  if ( v18 >= 0xA4 )
    v18 = 162;
  v42 = v18;
  v19 = v18;
  memmove(v54, v17, v18);
  v21 = (_WORD *)(a1[52] + 984LL);
  if ( !*v21 )
  {
    v22 = 30LL;
    if ( v18 < 0x1E )
      v22 = v18;
    memmove(v21, v17, v22);
    *(_WORD *)(a1[52] + 1014LL) = 0;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21, v20) + 12) & 0x80u) == 0 )
  {
    v27 = *(_QWORD *)(ProcessPeb + 720);
  }
  else
  {
    ThreadTeb = PsGetThreadTeb(*a1);
    v25 = ThreadTeb + 0x2000;
    ProbeForRead((volatile void *)(ThreadTeb + 8240), 4uLL, 4u);
    v26 = *(unsigned int *)(v25 + 48);
    ProbeForRead((volatile void *)(unsigned int)v26, 0x480uLL, 4u);
    v27 = *(_QWORD *)(v26 + 480);
  }
  a1[80] = v27;
  if ( (v27 & 0x800000000000000LL) != 0 )
  {
    FastGetProfileDwordEx(0LL, 4LL, L"ForceDisableGDIScaling", 0LL, 4, &v43, 0LL);
    if ( v43 )
    {
      a1[80] &= ~0x800000000000000uLL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29, v28);
      *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x20000000u;
    }
    else
    {
      v31 = PsGetCurrentProcessWin32Process(v29, v28);
      *(_DWORD *)(v31 + 12) |= 0x20000000u;
      if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        v48 = 0x1000000LL;
        v52 = &v48;
        v53 = 8LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E613A, 0LL, 0LL, 3u, &pData);
      }
    }
  }
  *(_DWORD *)(a1[59] + 24LL) = *((_DWORD *)a1 + 160);
  if ( (a1[80] & 0x2000000) == 0 && (unsigned int)IsCurrentDesktopComposed() )
    v8 = 0;
  if ( (*(_DWORD *)(a1[52] + 812LL) & 0x30) == 0x10 )
    *(_QWORD *)a1[59] |= 0x10000000uLL;
  if ( v8 )
  {
LABEL_50:
    *(_QWORD *)a1[59] |= 0x20000000uLL;
    goto LABEL_53;
  }
  if ( (a1[80] & 0x880000000000000LL) == 0 )
  {
    v32 = a1[52];
    if ( (*(_DWORD *)(v32 + 812) & 0x30) != 0x10 )
    {
      if ( (unsigned int)IsImmersiveBroker(v32) )
        *(_QWORD *)(a1[59] + 224LL) |= 0x80uLL;
      goto LABEL_53;
    }
    goto LABEL_50;
  }
  *(_QWORD *)(a1[59] + 224LL) |= 0x10uLL;
LABEL_53:
  v33 = 0x100000000000000LL;
  if ( (a1[80] & 0x100000000000000LL) != 0 )
    *(_QWORD *)(a1[59] + 224LL) |= 0x20uLL;
  v34 = *((_DWORD *)a1 + 160);
  if ( (v34 & 0x10000000) == 0 )
  {
    v33 = 1536LL;
    if ( *((_WORD *)a1 + 312) < 0x600u )
    {
      *((_DWORD *)a1 + 160) = v34 | 0x20000000;
      *(_DWORD *)(a1[59] + 24LL) |= 0x20000000u;
    }
  }
  if ( (v19 & 0xFFFFFFFFFFFFFFFEuLL) >= 0xB4 )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)v54 + (v19 & 0xFFFFFFFFFFFFFFFEuLL)) = 0;
  v35 = PsGetCurrentProcessWin32Process(v33, v23);
  if ( (unsigned int)FastGetProfileStringW(0LL, (*(_DWORD *)(v35 + 12) & 0x80u) != 0 ? 43 : 33, v54, 0LL) )
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DS(
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      v36,
      v37,
      v38,
      (unsigned int)SourceString,
      Value,
      (__int64)v54);
  *(_DWORD *)(a1[59] + 20LL) = Value;
  *((_DWORD *)a1 + 158) = Value;
  v39 = v19 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v39 >= 0xB4 )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)v54 + v39) = 0;
  RtlInitUnicodeString(&v50, v54);
  return SetAppImeCompatFlags(a1, &v50);
}
