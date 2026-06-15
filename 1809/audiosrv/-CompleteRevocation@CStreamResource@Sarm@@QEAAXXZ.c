/*
 * XREFs of ?CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ @ 0x1801177D8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_afaf78576840e78fa8c7f1d1d7e112d3__void_::_Do_call @ 0x180116010 (std--_Func_impl_no_alloc__lambda_afaf78576840e78fa8c7f1d1d7e112d3__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_c4f40eb4128b796d78dc595c2797cc70__void_::_Do_call @ 0x1801160C0 (std--_Func_impl_no_alloc__lambda_c4f40eb4128b796d78dc595c2797cc70__void_--_Do_call.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x180116F30 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x1801170A4 (-AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z.c)
 */

void __fastcall Sarm::CStreamResource::CompleteRevocation(Sarm::CStreamResource *this)
{
  const GUID *v2; // r9
  unsigned int v3; // edx
  int v4; // [rsp+38h] [rbp-59h] BYREF
  int v5; // [rsp+3Ch] [rbp-55h] BYREF
  __int64 v6; // [rsp+40h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-49h] BYREF
  const CHAR *v8; // [rsp+68h] [rbp-29h]
  int v9; // [rsp+70h] [rbp-21h]
  int v10; // [rsp+74h] [rbp-1Dh]
  int *v11; // [rsp+78h] [rbp-19h]
  int v12; // [rsp+80h] [rbp-11h]
  int v13; // [rsp+84h] [rbp-Dh]
  char *v14; // [rsp+88h] [rbp-9h]
  int v15; // [rsp+90h] [rbp-1h]
  int v16; // [rsp+94h] [rbp+3h]
  char *v17; // [rsp+98h] [rbp+7h]
  int v18; // [rsp+A0h] [rbp+Fh]
  int v19; // [rsp+A4h] [rbp+13h]
  char *v20; // [rsp+A8h] [rbp+17h]
  int v21; // [rsp+B0h] [rbp+1Fh]
  int v22; // [rsp+B4h] [rbp+23h]
  int *v23; // [rsp+B8h] [rbp+27h]
  int v24; // [rsp+C0h] [rbp+2Fh]
  int v25; // [rsp+C4h] [rbp+33h]
  __int64 *v26; // [rsp+C8h] [rbp+37h]
  int v27; // [rsp+D0h] [rbp+3Fh]
  int v28; // [rsp+D4h] [rbp+43h]

  SarmTraceLoggingTracer("Sarm::CStreamResource::CompleteRevocation", 129);
  v3 = *((_DWORD *)this + 21);
  if ( v3 )
  {
    if ( (unsigned int)dword_1801B1350 > 4 )
    {
      v10 = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v28 = 0;
      v11 = &v4;
      v14 = (char *)this + 40;
      v17 = (char *)this + 16;
      v5 = *((_DWORD *)this + 13);
      v23 = &v5;
      v6 = *((_QWORD *)this + 1);
      v26 = &v6;
      v8 = "Sarm::CStreamResource::CompleteRevocation";
      v9 = 42;
      v4 = 141;
      v12 = 4;
      v15 = 8;
      v18 = 16;
      v20 = (char *)this + 84;
      v21 = 4;
      v24 = 4;
      v27 = 8;
      TlgWrite((TraceLoggingHProvider)&dword_1801B1350, &unk_180175813, (LPCGUID)4, v2, 9u, &pData);
      v3 = *((_DWORD *)this + 21);
    }
    Sarm::CEndpointResourcePool::AddToDynamicPool(*((Sarm::CEndpointResourcePool **)this + 1), v3);
    *((_DWORD *)this + 21) = 0;
  }
}
