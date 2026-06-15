/*
 * XREFs of ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x1800077B8
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18002DE20 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x18000798C (-WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z.c)
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x1800079F4 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 */

__int64 __fastcall CAudioDGProcess::LaunchAndWaitForADGStartup(CAudioDGProcess *this, bool a2)
{
  ULONGLONG TickCount64; // rdi
  __int64 v4; // rax
  double v5; // xmm0_8
  __int64 result; // rax
  const struct _TlgProvider_t *v7; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  bool v10; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-51h] BYREF
  unsigned int v12; // [rsp+3Ch] [rbp-4Dh] BYREF
  int v13; // [rsp+40h] [rbp-49h] BYREF
  double v14; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  bool *v16; // [rsp+70h] [rbp-19h]
  int v17; // [rsp+78h] [rbp-11h]
  int v18; // [rsp+7Ch] [rbp-Dh]
  int *v19; // [rsp+80h] [rbp-9h]
  int v20; // [rsp+88h] [rbp-1h]
  int v21; // [rsp+8Ch] [rbp+3h]
  unsigned int *v22; // [rsp+90h] [rbp+7h]
  int v23; // [rsp+98h] [rbp+Fh]
  int v24; // [rsp+9Ch] [rbp+13h]
  unsigned int *v25; // [rsp+A0h] [rbp+17h]
  int v26; // [rsp+A8h] [rbp+1Fh]
  int v27; // [rsp+ACh] [rbp+23h]
  char *v28; // [rsp+B0h] [rbp+27h]
  int v29; // [rsp+B8h] [rbp+2Fh]
  int v30; // [rsp+BCh] [rbp+33h]
  double *v31; // [rsp+C0h] [rbp+37h]
  int v32; // [rsp+C8h] [rbp+3Fh]
  int v33; // [rsp+CCh] [rbp+43h]

  v10 = a2;
  v12 = 0;
  TickCount64 = GetTickCount64();
  v11 = 0;
  v13 = CAudioDGProcess::LaunchADGProcess(this, v10);
  if ( v13 >= 0 )
    v11 = CAudioDGProcess::WaitForADGStartup(this, &v12);
  v4 = GetTickCount64() - TickCount64;
  v5 = (double)(int)v4;
  if ( v4 < 0 )
    v5 = v5 + 1.844674407370955e19;
  v14 = v5 / 1000.0;
  if ( (unsigned int)dword_1801B14C0 > 4 && TlgKeywordOn((TraceLoggingHProvider)&dword_1801B14C0, 0x200000000000uLL) )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v33 = 0;
    v16 = &v10;
    v19 = &v13;
    v22 = &v11;
    v25 = &v12;
    v28 = (char *)this + 96;
    v31 = &v14;
    v17 = 1;
    v20 = (int)v9;
    v23 = (int)v9;
    v26 = (int)v9;
    v29 = (int)v9;
    v32 = 8;
    TlgWrite(v7, &unk_180177B33, v8, v9, 8u, &pData);
  }
  result = v11;
  if ( v13 < 0 )
    return (unsigned int)v13;
  return result;
}
