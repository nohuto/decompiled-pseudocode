/*
 * XREFs of HvpIsReadErrorTransient @ 0x140807FAC
 * Callers:
 *     HvAnalyzeLogFiles @ 0x1408072D4 (HvAnalyzeLogFiles.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWriteAgg @ 0x140012A30 (_TlgWriteAgg.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

char __fastcall HvpIsReadErrorTransient(int a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  int v4; // [rsp+30h] [rbp-68h] BYREF
  __int64 v5; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  int *v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  if ( a1 == -1073741807 )
    return 0;
  if ( a1 != -1073741801 && a1 != -1073741670 && a1 != -1073741663 )
  {
    if ( stru_140400AA0.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&stru_140400AA0, 0x400000000000uLL) )
      {
        v9 = 0;
        v12 = 0;
        v7 = &v5;
        v10 = &v4;
        v5 = 1LL;
        v4 = v2;
        v8 = 8;
        v11 = 4;
        TlgWriteAgg((__int64)&stru_140400AA0, (unsigned __int8 *)dword_14036D898, v1, v2, 4u, &v6);
      }
    }
    return 0;
  }
  return 1;
}
