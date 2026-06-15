/*
 * XREFs of ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x180029B40
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180027D40 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x180029D08 (-WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z.c)
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x180029F94 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 */

__int64 __fastcall CAudioDGProcess::LaunchAndWaitForADGStartup(CAudioDGProcess *this, bool a2)
{
  ULONGLONG TickCount64; // rdi
  __int64 v4; // rax
  const GUID *v5; // r9
  double v6; // xmm0_8
  __int64 result; // rax
  bool v8; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v9; // [rsp+38h] [rbp-51h] BYREF
  unsigned int v10; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v11; // [rsp+40h] [rbp-49h] BYREF
  double v12; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  bool *v14; // [rsp+70h] [rbp-19h]
  int v15; // [rsp+78h] [rbp-11h]
  int v16; // [rsp+7Ch] [rbp-Dh]
  int *v17; // [rsp+80h] [rbp-9h]
  int v18; // [rsp+88h] [rbp-1h]
  int v19; // [rsp+8Ch] [rbp+3h]
  unsigned int *v20; // [rsp+90h] [rbp+7h]
  int v21; // [rsp+98h] [rbp+Fh]
  int v22; // [rsp+9Ch] [rbp+13h]
  unsigned int *v23; // [rsp+A0h] [rbp+17h]
  int v24; // [rsp+A8h] [rbp+1Fh]
  int v25; // [rsp+ACh] [rbp+23h]
  char *v26; // [rsp+B0h] [rbp+27h]
  int v27; // [rsp+B8h] [rbp+2Fh]
  int v28; // [rsp+BCh] [rbp+33h]
  double *v29; // [rsp+C0h] [rbp+37h]
  int v30; // [rsp+C8h] [rbp+3Fh]
  int v31; // [rsp+CCh] [rbp+43h]

  v8 = a2;
  v10 = 0;
  TickCount64 = GetTickCount64();
  v9 = 0;
  v11 = CAudioDGProcess::LaunchADGProcess(this, v8);
  if ( v11 >= 0 )
    v9 = CAudioDGProcess::WaitForADGStartup(this, &v10);
  v4 = GetTickCount64() - TickCount64;
  v6 = (double)(int)v4;
  if ( v4 < 0 )
    v6 = v6 + 1.844674407370955e19;
  v12 = v6 / 1000.0;
  if ( (unsigned int)dword_1801B64B8 > 4
    && (qword_1801B64C8 & 0x200000000000LL) != 0
    && (qword_1801B64D0 & 0x200000000000LL) == qword_1801B64D0 )
  {
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v14 = &v8;
    v17 = &v11;
    v20 = &v9;
    v23 = &v10;
    v26 = (char *)this + 96;
    v29 = &v12;
    v15 = 1;
    v18 = 4;
    v21 = 4;
    v24 = 4;
    v27 = 4;
    v30 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1801B64B8, &unk_18017CE52, (LPCGUID)0x200000000000LL, v5, 8u, &pData);
  }
  result = v9;
  if ( v11 < 0 )
    return (unsigned int)v11;
  return result;
}
