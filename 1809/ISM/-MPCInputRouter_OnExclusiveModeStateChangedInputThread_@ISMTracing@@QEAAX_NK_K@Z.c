/*
 * XREFs of ?MPCInputRouter_OnExclusiveModeStateChangedInputThread_@ISMTracing@@QEAAX_NK_K@Z @ 0x180009640
 * Callers:
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x180007EE8 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCInputRouter_OnExclusiveModeStateChangedInputThread_(
        ISMTracing *this,
        char a2,
        int a3,
        __int64 a4)
{
  _DWORD *v4; // rcx
  __int64 v5; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  char *v7; // [rsp+58h] [rbp+17h]
  int v8; // [rsp+60h] [rbp+1Fh]
  int v9; // [rsp+64h] [rbp+23h]
  int *v10; // [rsp+68h] [rbp+27h]
  int v11; // [rsp+70h] [rbp+2Fh]
  int v12; // [rsp+74h] [rbp+33h]
  __int64 *v13; // [rsp+78h] [rbp+37h]
  int v14; // [rsp+80h] [rbp+3Fh]
  int v15; // [rsp+84h] [rbp+43h]
  char v16; // [rsp+B0h] [rbp+6Fh] BYREF
  int v17; // [rsp+B8h] [rbp+77h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+7Fh] BYREF

  v18 = a4;
  v17 = a3;
  v16 = a2;
  v4 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v4 )
  {
    if ( *v4 )
    {
      v5 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 1) != 0 && (*(_QWORD *)(v5 + 24) & 1LL) == *(_QWORD *)(v5 + 24) )
      {
        v9 = 0;
        v12 = 0;
        v15 = 0;
        v7 = &v16;
        v10 = &v17;
        v13 = &v18;
        v8 = 1;
        v11 = 4;
        v14 = 8;
        TlgWrite((TraceLoggingHProvider)v5, &unk_180165EB5, 0LL, 0LL, 5u, &pData);
      }
    }
  }
}
