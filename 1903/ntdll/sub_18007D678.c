/*
 * XREFs of sub_18007D678 @ 0x18007D678
 * Callers:
 *     sub_180071E6C @ 0x180071E6C (sub_180071E6C.c)
 * Callees:
 *     TpAllocTimer @ 0x180031BA0 (TpAllocTimer.c)
 */

void __fastcall sub_18007D678(__int64 a1)
{
  int v1; // [rsp+20h] [rbp-50h] BYREF
  __int64 v2; // [rsp+28h] [rbp-48h]
  __int64 v3; // [rsp+30h] [rbp-40h]
  __int64 v4; // [rsp+38h] [rbp-38h]
  __int128 v5; // [rsp+40h] [rbp-30h]
  __int64 v6; // [rsp+50h] [rbp-20h]
  int v7; // [rsp+58h] [rbp-18h]
  int v8; // [rsp+5Ch] [rbp-14h]
  int v9; // [rsp+60h] [rbp-10h]
  __int64 v10; // [rsp+88h] [rbp+18h] BYREF

  if ( (dword_180163534 & 0x40) != 0 )
  {
    v10 = 0LL;
    if ( a1 )
    {
      v3 = 0LL;
      v4 = 0LL;
      v6 = 0LL;
      v7 = 0;
      v2 = a1;
      v5 = 0LL;
      v1 = 3;
      v9 = 72;
      v8 = 2;
      if ( (int)TpAllocTimer((struct _PEB_LDR_DATA *)&v10, (__int64)sub_1800678D0, 0LL, (__int64)&v1) >= 0 )
      {
        qword_180166038 = v10;
        dword_180166364 = 1;
      }
    }
  }
}
