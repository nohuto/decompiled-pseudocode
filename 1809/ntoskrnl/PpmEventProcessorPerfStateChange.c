/*
 * XREFs of PpmEventProcessorPerfStateChange @ 0x14017594C
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x14017547C (PpmPerfApplyProcessorState.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PpmFireWmiEvent @ 0x1402E4748 (PpmFireWmiEvent.c)
 */

__int64 __fastcall PpmEventProcessorPerfStateChange(__int64 a1)
{
  _DWORD *v2; // r8
  __int64 v3; // rdx
  int v4; // esi
  int v5; // edi
  __int64 result; // rax
  unsigned int v7; // ecx
  bool v8; // cf
  __int64 v9; // [rsp+30h] [rbp-50h] BYREF
  __int64 v10; // [rsp+38h] [rbp-48h]
  int v11; // [rsp+40h] [rbp-40h]
  __int64 v12; // [rsp+48h] [rbp-38h] BYREF
  __int64 v13; // [rsp+50h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-28h]
  __int64 *v15; // [rsp+60h] [rbp-20h] BYREF
  int v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+6Ch] [rbp-14h]

  v2 = *(_DWORD **)(a1 + 24184);
  v3 = *(_QWORD *)(a1 + 24176);
  v4 = v2[16];
  v5 = v2[19];
  if ( (xmmword_140542350 & 0x8000) != 0 )
  {
    v16 = 24;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0LL;
    v7 = v2[18];
    if ( v7 >= *(_DWORD *)(v3 + 360) )
      v7 = *(_DWORD *)(v3 + 360);
    v8 = v7 < *(_DWORD *)(v3 + 316);
    HIDWORD(v12) = v5;
    v17 = 0;
    LODWORD(v12) = v8 + 1;
    LODWORD(v13) = v2[27];
    v14 = *(_QWORD *)(a1 + 200);
    v15 = &v12;
    EtwTraceKernelEvent((__int64)&v15, 1u, 0x80008000, 0x1233u, 0x401802u);
  }
  result = (unsigned int)WmiPerfStateEventEnabled;
  if ( WmiPerfStateEventEnabled )
  {
    v9 = 0LL;
    v10 = 0LL;
    v11 = *(_DWORD *)(a1 + 36);
    LODWORD(v9) = v4;
    HIDWORD(v10) = v5;
    return PpmFireWmiEvent(a1 + 24032, &PPM_PERFSTATE_CHANGE_GUID, 20LL, &v9);
  }
  return result;
}
