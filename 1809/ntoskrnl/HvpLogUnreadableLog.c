/*
 * XREFs of HvpLogUnreadableLog @ 0x1408082B0
 * Callers:
 *     HvAnalyzeLogFiles @ 0x1408072D4 (HvAnalyzeLogFiles.c)
 * Callees:
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall HvpLogUnreadableLog(char a1, int a2)
{
  TLG_STATUS result; // eax
  char v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-58h] BYREF
  char *v6; // [rsp+60h] [rbp-38h]
  int v7; // [rsp+68h] [rbp-30h]
  int v8; // [rsp+6Ch] [rbp-2Ch]
  int *v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  if ( stru_140400AA0.LevelPlus1 > 5 )
  {
    v3 = a1;
    v6 = &v3;
    v8 = 0;
    v7 = 1;
    v9 = &v4;
    v11 = 0;
    v10 = 4;
    v4 = a2;
    return TlgWrite(&stru_140400AA0, &unk_14036D860, 0LL, 0LL, 4u, &v5);
  }
  return result;
}
