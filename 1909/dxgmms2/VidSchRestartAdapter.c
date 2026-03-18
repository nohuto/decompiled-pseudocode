/*
 * XREFs of VidSchRestartAdapter @ 0x1C00CBDF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0029C28 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0029C60 (_TlgWrite.c)
 *     VidSchResetFlipQueueTimeout @ 0x1C00C92BC (VidSchResetFlipQueueTimeout.c)
 *     VidSchResetGPUTimeout @ 0x1C00C9314 (VidSchResetGPUTimeout.c)
 */

__int64 __fastcall VidSchRestartAdapter(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned __int16 *v4; // rax
  LPCGUID v5; // r9
  unsigned int v6; // ecx
  __int64 v7; // rdx
  int v9; // [rsp+30h] [rbp-69h] BYREF
  __int64 v10; // [rsp+38h] [rbp-61h] BYREF
  __int64 v11; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  __int64 *v13; // [rsp+70h] [rbp-29h]
  __int64 v14; // [rsp+78h] [rbp-21h]
  _DWORD *v15; // [rsp+80h] [rbp-19h]
  __int64 v16; // [rsp+88h] [rbp-11h]
  __int64 v17; // [rsp+90h] [rbp-9h]
  _DWORD v18[2]; // [rsp+98h] [rbp-1h] BYREF
  __int64 *v19; // [rsp+A0h] [rbp+7h]
  __int64 v20; // [rsp+A8h] [rbp+Fh]
  int *v21; // [rsp+B0h] [rbp+17h]
  __int64 v22; // [rsp+B8h] [rbp+1Fh]
  __int64 v23; // [rsp+C0h] [rbp+27h]
  __int64 v24; // [rsp+C8h] [rbp+2Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp+37h] BYREF

  if ( (unsigned int)hProvider > 5
    && (qword_1C004E058 & 0x400000000010LL) != 0
    && (qword_1C004E060 & 0x400000000010LL) == qword_1C004E060 )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = *(_QWORD *)(a1 + 2408);
    v10 = *(_QWORD *)(v2 + 276);
    v13 = &v10;
    v14 = 8LL;
    v4 = *(unsigned __int16 **)(v2 + 1408);
    v15 = v18;
    v16 = 2LL;
    LODWORD(v2) = *v4;
    v17 = *((_QWORD *)v4 + 1);
    v19 = &v11;
    v9 = *(_DWORD *)(a1 + 2424);
    v21 = &v9;
    v18[0] = v2;
    v23 = v3 + 2808;
    v18[1] = 0;
    v11 = v3;
    v20 = 8LL;
    v22 = 4LL;
    v24 = 8LL;
    TlgCreateSz(&pDesc, *(LPCSTR *)(v3 + 96));
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C004103D, 0LL, v5, 9u, &pData);
  }
  *(_BYTE *)(a1 + 2428) &= ~4u;
  v6 = 0;
  *(_QWORD *)(a1 + 2408) = 0LL;
  *(_DWORD *)(a1 + 2404) = 0;
  *(_QWORD *)(a1 + 408) = 0LL;
  for ( *(_QWORD *)(a1 + 416) = 0LL; v6 < *(_DWORD *)(a1 + 68); *(_QWORD *)(*(_QWORD *)v7 + 40LL) = 0LL )
  {
    v7 = *(_QWORD *)(a1 + 616);
    if ( v6 < *(_DWORD *)(a1 + 688) )
      v7 += 8LL * v6;
    ++v6;
  }
  *(_QWORD *)(a1 + 2416) = 0LL;
  VidSchResetFlipQueueTimeout(a1);
  VidSchResetGPUTimeout(a1);
  DpiSetSchedulerCallbackState(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 192LL), 3LL);
  return 0LL;
}
