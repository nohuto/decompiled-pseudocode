/*
 * XREFs of SetAppCompatFlags @ 0x1C000CEA0
 * Callers:
 *     <none>
 * Callees:
 *     SetAppImeCompatFlags @ 0x1C000D4E8 (SetAppImeCompatFlags.c)
 *     IsCurrentDesktopComposed @ 0x1C000D5F0 (IsCurrentDesktopComposed.c)
 *     ?TraceLoggingGDIScaledAppEvent@@YAXXZ @ 0x1C01574E4 (-TraceLoggingGDIScaledAppEvent@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C015AFA0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  _WORD *v20; // rcx
  size_t v21; // r8
  __int64 ThreadTeb; // rax
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int64 v33; // r14
  ULONG Value; // [rsp+40h] [rbp-1F8h] BYREF
  int v35; // [rsp+44h] [rbp-1F4h]
  unsigned int v36; // [rsp+48h] [rbp-1F0h]
  int v37; // [rsp+4Ch] [rbp-1ECh] BYREF
  _WORD *v38; // [rsp+50h] [rbp-1E8h]
  _WORD *v39; // [rsp+58h] [rbp-1E0h]
  int v40; // [rsp+60h] [rbp-1D8h] BYREF
  ULONG64 v41; // [rsp+68h] [rbp-1D0h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-1B8h] BYREF
  struct _UNICODE_STRING v43; // [rsp+90h] [rbp-1A8h] BYREF
  WCHAR v44[96]; // [rsp+A0h] [rbp-198h] BYREF
  WCHAR SourceString[80]; // [rsp+160h] [rbp-D8h] BYREF

  Value = 0;
  ThreadProcess = PsGetThreadProcess((PETHREAD)*a1);
  ProcessPeb = PsGetProcessPeb(ThreadProcess);
  v4 = a1[83];
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 640);
    *((_DWORD *)a1 + 160) = v5;
    a1[81] = *(_QWORD *)(v4 + 648);
    *(_DWORD *)(a1[60] + 20LL) = v5;
    *(_DWORD *)(a1[60] + 24LL) = *((_DWORD *)a1 + 162);
    return 0LL;
  }
  v7 = (unsigned __int16 *)a1[62];
  v8 = 1;
  if ( !v7 )
  {
    v9 = (unsigned int *)(*(_QWORD *)(ProcessPeb + 32) + 96LL);
    if ( (unsigned __int64)v9 >= MmUserProbeAddress )
      v9 = (unsigned int *)MmUserProbeAddress;
    v10 = *v9;
    v35 = v10;
    v40 = v10;
    v11 = *((_QWORD *)v9 + 1);
    v41 = v11;
    if ( (v11 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = v11 + (unsigned __int16)v10 + 2LL;
    v13 = (_BYTE **)MmUserProbeAddress;
    if ( v12 < MmUserProbeAddress && (unsigned __int16)v10 <= HIWORD(v35) )
    {
      if ( (v10 & 1) != 0 )
        goto LABEL_13;
      if ( v12 > v11 )
      {
LABEL_15:
        v7 = (unsigned __int16 *)&v40;
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
  v39 = v14;
  v15 = v14;
  v38 = v14;
  while ( 1 )
  {
    v16 = (_WORD *)*((_QWORD *)v7 + 1);
    if ( v14 == v16 )
      break;
    if ( *v14 == 46 )
      goto LABEL_20;
    v39 = --v14;
  }
  v14 = v15;
  v39 = v15;
LABEL_20:
  v17 = v14;
  v38 = v14;
  while ( v17 != v16 )
  {
    if ( *v17 == 92 || *v17 == 58 )
    {
      v38 = ++v17;
      break;
    }
    v38 = --v17;
  }
  v18 = 2 * (v14 - v17);
  v36 = v18;
  if ( v18 >= 0xA4 )
    v18 = 162;
  v36 = v18;
  v19 = v18;
  memmove(v44, v17, v18);
  v20 = (_WORD *)(a1[53] + 992LL);
  if ( !*v20 )
  {
    v21 = 30LL;
    if ( v18 < 0x1E )
      v21 = v18;
    memmove(v20, v17, v21);
    *(_WORD *)(a1[53] + 1022LL) = 0;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 12) & 0x80u) == 0 )
  {
    v25 = *(_QWORD *)(ProcessPeb + 720);
  }
  else
  {
    ThreadTeb = PsGetThreadTeb(*a1);
    v23 = ThreadTeb + 0x2000;
    ProbeForRead((volatile void *)(ThreadTeb + 8240), 4uLL, 4u);
    v24 = *(unsigned int *)(v23 + 48);
    ProbeForRead((volatile void *)(unsigned int)v24, 0x480uLL, 4u);
    v25 = *(_QWORD *)(v24 + 480);
  }
  a1[81] = v25;
  if ( (v25 & 0x800000000000000LL) != 0 )
  {
    FastGetProfileDwordEx(0LL, 4LL, L"ForceDisableGDIScaling", 0LL, 4, &v37, 0LL);
    if ( v37 )
    {
      a1[81] &= ~0x800000000000000uLL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26);
      *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x20000000u;
    }
    else
    {
      v28 = PsGetCurrentProcessWin32Process(v26);
      *(_DWORD *)(v28 + 12) |= 0x20000000u;
      TraceLoggingGDIScaledAppEvent();
    }
  }
  *(_DWORD *)(a1[60] + 24LL) = *((_DWORD *)a1 + 162);
  if ( (a1[81] & 0x2000000) == 0 && (unsigned int)IsCurrentDesktopComposed() )
    v8 = 0;
  if ( (*(_DWORD *)(a1[53] + 820LL) & 0x30) == 0x10 )
    *(_QWORD *)a1[60] |= 0x10000000uLL;
  if ( v8 )
  {
LABEL_48:
    *(_QWORD *)a1[60] |= 0x20000000uLL;
    goto LABEL_51;
  }
  if ( (a1[81] & 0x880000000000000LL) == 0 )
  {
    v29 = a1[53];
    if ( (*(_DWORD *)(v29 + 820) & 0x30) != 0x10 )
    {
      if ( (unsigned int)IsImmersiveBroker(v29) )
        *(_QWORD *)(a1[60] + 224LL) |= 0x80uLL;
      goto LABEL_51;
    }
    goto LABEL_48;
  }
  *(_QWORD *)(a1[60] + 224LL) |= 0x10uLL;
LABEL_51:
  v30 = a1[81];
  v31 = 0x100000000000000LL;
  if ( (v30 & 0x100000000000000LL) != 0 )
  {
    *(_QWORD *)(a1[60] + 224LL) |= 0x20uLL;
    LODWORD(v30) = *((_DWORD *)a1 + 162);
  }
  if ( (v30 & 0x10000000) == 0 )
  {
    v31 = 1536LL;
    if ( *((_WORD *)a1 + 316) < 0x600u )
    {
      *((_DWORD *)a1 + 162) = v30 | 0x20000000;
      *(_DWORD *)(a1[60] + 24LL) |= 0x20000000u;
    }
  }
  if ( (v19 & 0xFFFFFFFFFFFFFFFEuLL) >= 0xB4 )
    goto LABEL_62;
  *(WCHAR *)((char *)v44 + (v19 & 0xFFFFFFFFFFFFFFFEuLL)) = 0;
  v32 = PsGetCurrentProcessWin32Process(v31);
  if ( (unsigned int)FastGetProfileStringW(
                       0LL,
                       (*(_DWORD *)(v32 + 12) & 0x80u) != 0 ? 43 : 33,
                       v44,
                       0LL,
                       SourceString,
                       80,
                       0) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
  }
  *(_DWORD *)(a1[60] + 20LL) = Value;
  *((_DWORD *)a1 + 160) = Value;
  v33 = v19 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v33 >= 0xB4 )
LABEL_62:
    _report_rangecheckfailure();
  *(WCHAR *)((char *)v44 + v33) = 0;
  RtlInitUnicodeString(&v43, v44);
  return SetAppImeCompatFlags(a1, &v43);
}
