/*
 * XREFs of ?ReceivePointerFrame@ISM@InputTraceLogging@@SAX_K0KK@Z @ 0x180081568
 * Callers:
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180083E6C (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800527F0 (-Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::ISM::ReceivePointerFrame(__int64 a1, __int64 a2, int a3, int a4)
{
  const struct _TlgProvider_t *v6; // rax
  __int64 v7; // [rsp+38h] [rbp-29h] BYREF
  __int64 v8; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-19h] BYREF
  __int64 *v10; // [rsp+68h] [rbp+7h]
  __int64 v11; // [rsp+70h] [rbp+Fh]
  __int64 *v12; // [rsp+78h] [rbp+17h]
  __int64 v13; // [rsp+80h] [rbp+1Fh]
  int *v14; // [rsp+88h] [rbp+27h]
  __int64 v15; // [rsp+90h] [rbp+2Fh]
  int *v16; // [rsp+98h] [rbp+37h]
  __int64 v17; // [rsp+A0h] [rbp+3Fh]
  int v18; // [rsp+D8h] [rbp+77h] BYREF
  int v19; // [rsp+E0h] [rbp+7Fh] BYREF

  v19 = a4;
  v18 = a3;
  v6 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v6 > 4u
    && (*((_DWORD *)v6 + 4) & 0x200LL) != 0
    && (*((_QWORD *)v6 + 3) & 0x200LL) == *((_QWORD *)v6 + 3) )
  {
    v7 = a1;
    v10 = &v7;
    v12 = &v8;
    v14 = &v18;
    v16 = &v19;
    v11 = 8LL;
    v8 = a2;
    v13 = 8LL;
    v15 = 4LL;
    v17 = 4LL;
    TlgWrite(v6, &unk_180168ACB, 0LL, 0LL, 6u, &pData);
  }
}
