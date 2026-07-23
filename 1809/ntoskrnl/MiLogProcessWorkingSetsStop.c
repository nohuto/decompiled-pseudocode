/*
 * XREFs of MiLogProcessWorkingSetsStop @ 0x140012974
 * Callers:
 *     MiProcessWorkingSets @ 0x14006CEC0 (MiProcessWorkingSets.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void MiLogProcessWorkingSetsStop()
{
  ULONG64 v0; // r8
  const struct _TlgProvider_t *v1; // r9
  _QWORD *v2; // r10
  const GUID *v3; // [rsp+20h] [rbp-49h]
  const GUID *v4; // [rsp+28h] [rbp-41h]
  __int64 v5; // [rsp+40h] [rbp-29h] BYREF
  __int64 v6; // [rsp+48h] [rbp-21h] BYREF
  __int64 v7; // [rsp+50h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-9h] BYREF
  __int64 *v9; // [rsp+80h] [rbp+17h]
  __int64 v10; // [rsp+88h] [rbp+1Fh]
  __int64 *v11; // [rsp+90h] [rbp+27h]
  __int64 v12; // [rsp+98h] [rbp+2Fh]
  __int64 *v13; // [rsp+A0h] [rbp+37h]
  __int64 v14; // [rsp+A8h] [rbp+3Fh]

  if ( hProvider && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 1uLL) )
    {
      v5 = v2[912];
      v6 = v2[960];
      v7 = v2[974];
      v9 = &v5;
      v11 = &v6;
      v13 = &v7;
      v10 = 8LL;
      v12 = 8LL;
      v14 = 8LL;
      TlgWriteEx(v1, &unk_14036F06F, v0, (ULONG)v1, v3, v4, 5u, &pData);
    }
  }
}
