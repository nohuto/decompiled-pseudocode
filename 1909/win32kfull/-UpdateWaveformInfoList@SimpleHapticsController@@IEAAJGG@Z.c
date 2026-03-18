/*
 * XREFs of ?UpdateWaveformInfoList@SimpleHapticsController@@IEAAJGG@Z @ 0x1C0257DE8
 * Callers:
 *     ?InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ @ 0x1C025679C (-InitializeSupportedWaveformList@SimpleHapticsController@@IEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall SimpleHapticsController::UpdateWaveformInfoList(
        SimpleHapticsController *this,
        __int16 a2,
        __int16 a3)
{
  unsigned int v3; // r10d
  unsigned int v5; // eax
  __int64 v6; // r8
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-9h] BYREF
  const char *v9; // [rsp+50h] [rbp+17h]
  __int64 v10; // [rsp+58h] [rbp+1Fh]
  __int16 *v11; // [rsp+60h] [rbp+27h]
  __int64 v12; // [rsp+68h] [rbp+2Fh]
  __int16 *v13; // [rsp+70h] [rbp+37h]
  __int64 v14; // [rsp+78h] [rbp+3Fh]
  __int16 v15; // [rsp+A8h] [rbp+6Fh] BYREF
  __int16 v16; // [rsp+B0h] [rbp+77h] BYREF

  v16 = a3;
  v15 = a2;
  v3 = *((_DWORD *)this + 22);
  v5 = 0;
  if ( v3 )
  {
    v6 = *((_QWORD *)this + 10);
    while ( *(_WORD *)(v6 + 8LL * v5) != a2 )
    {
      if ( ++v5 >= v3 )
        goto LABEL_5;
    }
    *(_WORD *)(v6 + 8LL * v5 + 2) = a3;
    return 0LL;
  }
  else
  {
LABEL_5:
    if ( (unsigned int)dword_1C031F2D0 > 4 )
    {
      v10 = 66LL;
      v9 = "SimpleHapticsController::UpdateWaveformInfoList Ordinal not found";
      v11 = &v15;
      v13 = &v16;
      v12 = 2LL;
      v14 = 2LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C031F2D0, &unk_1C02E8E04, 0LL, 0LL, 5u, &pData);
    }
    return 3221226021LL;
  }
}
