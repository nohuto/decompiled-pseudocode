/*
 * XREFs of ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800C7138
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800C6D80 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800C7960 (-DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x180014604 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x18005300C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

void __fastcall InputETW::InputTarget::DeliverInputReport(struct InputInfo *a1)
{
  __int64 v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  LARGE_INTEGER v5; // rax
  __int64 v6; // rcx
  LPVOID v7; // rax
  const struct _TlgProvider_t *v8; // rsi
  __int64 v9; // rbx
  LARGE_INTEGER v10; // rdi
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-39h] BYREF
  LARGE_INTEGER Frequency; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  LARGE_INTEGER *p_PerformanceCount; // [rsp+78h] [rbp+7h]
  int v16; // [rsp+80h] [rbp+Fh]
  int v17; // [rsp+84h] [rbp+13h]
  LARGE_INTEGER *p_Frequency; // [rsp+88h] [rbp+17h]
  int v19; // [rsp+90h] [rbp+1Fh]
  int v20; // [rsp+94h] [rbp+23h]
  char *v21; // [rsp+98h] [rbp+27h]
  int v22; // [rsp+A0h] [rbp+2Fh]
  int v23; // [rsp+A4h] [rbp+33h]
  char *v24; // [rsp+A8h] [rbp+37h]
  int v25; // [rsp+B0h] [rbp+3Fh]
  int v26; // [rsp+B4h] [rbp+43h]

  if ( InputETW::IsVerboseEnabled(1uLL) )
  {
    v3 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<InputETW>::get(
                                                      v2,
                                                      lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_)
                                        + 1);
    if ( *(_DWORD *)v3 > 5u && TlgKeywordOn(v3, 1uLL) )
    {
      v5.QuadPart = *((unsigned int *)a1 + 1);
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v26 = 0;
      PerformanceCount = v5;
      p_PerformanceCount = &PerformanceCount;
      Frequency.QuadPart = *(int *)a1;
      p_Frequency = &Frequency;
      v21 = (char *)a1 + 8;
      v24 = (char *)a1 + 16;
      v16 = 8;
      v19 = 8;
      v22 = 4;
      v25 = 8;
      TlgWrite(v4, &unk_18019DDC5, 0LL, 0LL, 6u, &pData);
    }
    if ( InputETW::IsVerboseEnabled(2uLL) )
    {
      v7 = wil::details::static_lazy<InputETW>::get(
             v6,
             lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
      v8 = (const struct _TlgProvider_t *)*((_QWORD *)v7 + 1);
      if ( *(_DWORD *)v8 > 5u )
      {
        if ( TlgKeywordOn(*((TraceLoggingHProvider *)v7 + 1), 1uLL) )
        {
          v9 = *((_QWORD *)a1 + 2);
          QueryPerformanceFrequency(&Frequency);
          v10 = Frequency;
          QueryPerformanceCounter(&PerformanceCount);
          v16 = 8;
          v17 = 0;
          v13 = (unsigned __int64)(1000000 * (PerformanceCount.QuadPart - v9)) / v10.QuadPart;
          p_PerformanceCount = (LARGE_INTEGER *)&v13;
          TlgWrite(v8, &unk_18019DE18, 0LL, 0LL, 3u, &pData);
        }
      }
    }
  }
}
