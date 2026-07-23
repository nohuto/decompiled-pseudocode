/*
 * XREFs of CmpLogFlushPhaseEnd @ 0x1405B5C20
 * Callers:
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 * Callees:
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall CmpLogFlushPhaseEnd(__int64 a1, char a2, int a3)
{
  TLG_STATUS result; // eax
  char v4; // [rsp+30h] [rbp-68h] BYREF
  int v5; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-58h] BYREF
  char *v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  int *v10; // [rsp+70h] [rbp-28h]
  int v11; // [rsp+78h] [rbp-20h]
  int v12; // [rsp+7Ch] [rbp-1Ch]

  if ( stru_140400AA0.LevelPlus1 > 4 )
  {
    v4 = a2;
    v7 = &v4;
    v9 = 0;
    v8 = 1;
    v10 = &v5;
    v12 = 0;
    v11 = 4;
    v5 = a3;
    return TlgWrite(&stru_140400AA0, &unk_14036CF7C, 0LL, 0LL, 4u, &v6);
  }
  return result;
}
