/*
 * XREFs of PpmEventArbitratorPerfStateChange @ 0x140175708
 * Callers:
 *     PpmPerfArbitratorApplyProcessorState @ 0x1401755E0 (PpmPerfArbitratorApplyProcessorState.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PpmEventArbitratorPerfStateChange(__int64 a1, int a2)
{
  __int64 v2; // rbx
  BOOLEAN result; // al
  int v5; // [rsp+48h] [rbp-C0h] BYREF
  int v6; // [rsp+4Ch] [rbp-BCh] BYREF
  int v7; // [rsp+50h] [rbp-B8h] BYREF
  int v8; // [rsp+54h] [rbp-B4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  int *v10; // [rsp+68h] [rbp-A0h]
  __int64 v11; // [rsp+70h] [rbp-98h]
  int *v12; // [rsp+78h] [rbp-90h]
  __int64 v13; // [rsp+80h] [rbp-88h]
  __int64 v14; // [rsp+88h] [rbp-80h]
  __int64 v15; // [rsp+90h] [rbp-78h]
  __int64 v16; // [rsp+98h] [rbp-70h]
  __int64 v17; // [rsp+A0h] [rbp-68h]
  __int64 v18; // [rsp+A8h] [rbp-60h]
  __int64 v19; // [rsp+B0h] [rbp-58h]
  __int64 v20; // [rsp+B8h] [rbp-50h]
  __int64 v21; // [rsp+C0h] [rbp-48h]
  __int64 v22; // [rsp+C8h] [rbp-40h]
  __int64 v23; // [rsp+D0h] [rbp-38h]
  __int64 v24; // [rsp+D8h] [rbp-30h]
  __int64 v25; // [rsp+E0h] [rbp-28h]
  __int64 v26; // [rsp+E8h] [rbp-20h]
  __int64 v27; // [rsp+F0h] [rbp-18h]
  int *v28; // [rsp+F8h] [rbp-10h]
  __int64 v29; // [rsp+100h] [rbp-8h]
  int *v30; // [rsp+108h] [rbp+0h]
  __int64 v31; // [rsp+110h] [rbp+8h]
  __int64 v32; // [rsp+118h] [rbp+10h]
  __int64 v33; // [rsp+120h] [rbp+18h]
  int v34; // [rsp+150h] [rbp+48h] BYREF

  v34 = a2;
  v2 = *(_QWORD *)(a1 + 24184);
  v6 = *(_DWORD *)(v2 + 64);
  v7 = *(_DWORD *)(v2 + 76);
  if ( PpmEtwRegistered || (result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PERF_STATE_CHANGE)) != 0 )
  {
    LOWORD(v5) = *(unsigned __int8 *)(a1 + 208);
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v6;
    v10 = &v7;
    v12 = &v5;
    v14 = a1 + 209;
    v16 = v2 + 72;
    v18 = v2 + 88;
    v20 = v2 + 80;
    v22 = v2 + 84;
    v24 = v2 + 92;
    v26 = v2 + 96;
    v11 = 4LL;
    v13 = 2LL;
    v15 = 1LL;
    v17 = 4LL;
    v19 = 4LL;
    v21 = 4LL;
    v23 = 4LL;
    v25 = 4LL;
    v27 = 4LL;
    v8 = *(unsigned __int8 *)(v2 + 100);
    v28 = &v8;
    v30 = &v34;
    v32 = a1 + 24308;
    v29 = 4LL;
    v31 = 4LL;
    v33 = 4LL;
    return EtwWriteEx(PpmEtwHandle, &PPM_ETW_PROCESSOR_PERF_STATE_CHANGE, 0LL, 0, 0LL, 0LL, 0xDu, &UserData);
  }
  return result;
}
