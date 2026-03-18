/*
 * XREFs of PpmEventProcessorPerfStateChange @ 0x140176854
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x1401762A0 (PpmPerfApplyProcessorState.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PpmFireWmiEvent @ 0x140300E38 (PpmFireWmiEvent.c)
 */

__int64 __fastcall PpmEventProcessorPerfStateChange(__int64 a1)
{
  _DWORD *v1; // r8
  __int64 v3; // rdx
  int v4; // esi
  int v5; // edi
  __int64 result; // rax
  unsigned int v7; // eax
  unsigned int v8; // ecx
  bool v9; // cf
  int v10; // eax
  int v11; // [rsp+30h] [rbp-50h] BYREF
  __int64 v12; // [rsp+34h] [rbp-4Ch]
  int v13; // [rsp+3Ch] [rbp-44h]
  int v14; // [rsp+40h] [rbp-40h]
  __int64 v15; // [rsp+48h] [rbp-38h] BYREF
  __int64 v16; // [rsp+50h] [rbp-30h]
  __int64 v17; // [rsp+58h] [rbp-28h]
  __int64 *v18; // [rsp+60h] [rbp-20h] BYREF
  int v19; // [rsp+68h] [rbp-18h]
  int v20; // [rsp+6Ch] [rbp-14h]

  v1 = *(_DWORD **)(a1 + 24184);
  v3 = *(_QWORD *)(a1 + 24176);
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v4 = v1[16];
  v5 = v1[19];
  if ( (xmmword_140572410 & 0x8000) != 0 )
  {
    v16 = 0LL;
    v17 = 0LL;
    v7 = *(_DWORD *)(v3 + 360);
    v8 = v1[18];
    v19 = 24;
    if ( v8 >= v7 )
      v8 = v7;
    v9 = v8 < *(_DWORD *)(v3 + 316);
    HIDWORD(v15) = v5;
    v20 = 0;
    LODWORD(v15) = v9 + 1;
    LODWORD(v16) = v1[27];
    v17 = *(_QWORD *)(a1 + 200);
    v18 = &v15;
    EtwTraceKernelEvent((__int64)&v18, 1u, 0x80008000, 0x1233u, 0x401802u);
  }
  result = (unsigned int)WmiPerfStateEventEnabled;
  if ( WmiPerfStateEventEnabled )
  {
    v10 = *(_DWORD *)(a1 + 36);
    v12 = 0LL;
    v14 = v10;
    v11 = v4;
    v13 = v5;
    return PpmFireWmiEvent(a1 + 24032, &PPM_PERFSTATE_CHANGE_GUID, 20LL, &v11);
  }
  return result;
}
