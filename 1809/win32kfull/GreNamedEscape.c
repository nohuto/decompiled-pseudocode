/*
 * XREFs of GreNamedEscape @ 0x1C028A520
 * Callers:
 *     NtGdiExtEscape @ 0x1C008BDD0 (NtGdiExtEscape.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     AtmDrvEscapeRedirector @ 0x1C0283A60 (AtmDrvEscapeRedirector.c)
 */

__int64 __fastcall GreNamedEscape(wchar_t *Str1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  int v18; // r9d
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v24; // [rsp+60h] [rbp-A0h]
  int v25; // [rsp+68h] [rbp-98h]
  int v26; // [rsp+6Ch] [rbp-94h]
  int *v27; // [rsp+70h] [rbp-90h]
  int v28; // [rsp+78h] [rbp-88h]
  int v29; // [rsp+7Ch] [rbp-84h]
  int *v30; // [rsp+80h] [rbp-80h]
  int v31; // [rsp+88h] [rbp-78h]
  int v32; // [rsp+8Ch] [rbp-74h]
  _BYTE v33[520]; // [rsp+90h] [rbp-70h] BYREF

  memset(v33, 0, sizeof(v33));
  if ( !EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_Servicing_MonitorATMAPIsAndBackDoorEvents_57188203_FeatureDescriptorDetails) )
  {
    if ( _wcsicmp(Str1, L"atmfd.dll") )
      return 0LL;
    return AtmDrvEscapeRedirector(v10, a2, a3, a4, a5, a6);
  }
  if ( !_wcsicmp(Str1, L"atmlib.dll") )
    return AtmDrvEscapeRedirector(v10, a2, a3, a4, a5, a6);
  if ( !_wcsicmp(Str1, L"atmfd.dll") )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11);
    v14 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      LODWORD(v10) = a2 - 9473;
      if ( (unsigned int)(a2 - 9473) <= 0x13 )
      {
        v15 = (unsigned int)(1 << v10);
        _m_prefetchw((const void *)(CurrentProcessWin32Process + 324));
        v16 = *(_DWORD *)(CurrentProcessWin32Process + 324);
        do
        {
          v10 = (unsigned int)v15 | v16;
          v17 = v16;
          v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 324), v10, v16);
        }
        while ( v17 != v16 );
        if ( (v16 & (unsigned int)v15) == 0 )
        {
          RtlGetCurrentServiceSessionId(v10, v14, v15, v13);
          if ( hProvider > 5u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
            {
              v26 = 0;
              v29 = 0;
              v32 = 0;
              v24 = &v22;
              v27 = &v20;
              v30 = &v21;
              v22 = 0x1000000LL;
              v25 = 8;
              v20 = a2;
              v28 = 4;
              v21 = v18;
              v31 = 4;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D71F6, 0LL, 0LL, 5u, &pData);
            }
          }
        }
      }
    }
    return AtmDrvEscapeRedirector(v10, a2, a3, a4, a5, a6);
  }
  return 0LL;
}
