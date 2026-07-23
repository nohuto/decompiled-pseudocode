/*
 * XREFs of PnpTraceSetDevNodeProblem @ 0x14070EC94
 * Callers:
 *     PipSetDevNodeProblem @ 0x1406F0800 (PipSetDevNodeProblem.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWriteAgg @ 0x140012A30 (_TlgWriteAgg.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PnpTraceSetDevNodeProblem(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, int a7)
{
  __int64 v7; // r9
  unsigned __int16 *v8; // r10
  unsigned __int16 *v9; // r11
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  int v12; // [rsp+38h] [rbp-C8h] BYREF
  int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  _DWORD *v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  __int64 v20; // [rsp+90h] [rbp-70h]
  _DWORD v21[2]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  __int64 v24; // [rsp+B0h] [rbp-50h]
  _DWORD v25[2]; // [rsp+B8h] [rbp-48h] BYREF
  int *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  int *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  int *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  int *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]

  if ( a4 != 1 && (a4 != 24 || a3 != 788) && stru_140400B90.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_140400B90, 0x800000000000uLL) )
    {
      v11 = a5;
      v12 = a6;
      v13 = a7;
      v16 = &v14;
      v18 = v21;
      v20 = *((_QWORD *)v9 + 1);
      v21[0] = *v9;
      v22 = v25;
      v24 = *((_QWORD *)v8 + 1);
      v25[0] = *v8;
      v26 = &v10;
      v28 = &v11;
      v30 = &v12;
      v32 = &v13;
      v14 = 1LL;
      v10 = v7;
      v17 = 8LL;
      v19 = 2LL;
      v21[1] = 0;
      v23 = 2LL;
      v25[1] = 0;
      v27 = 4LL;
      v29 = 4LL;
      v31 = 4LL;
      v33 = 4LL;
      TlgWriteAgg((__int64)&stru_140400B90, (unsigned __int8 *)dword_14036E745, 0LL, v7, 0xBu, &v15);
    }
  }
}
