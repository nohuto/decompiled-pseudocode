/*
 * XREFs of sub_1800D9678 @ 0x1800D9678
 * Callers:
 *     sub_1800D16F0 @ 0x1800D16F0 (sub_1800D16F0.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     sub_1800D977C @ 0x1800D977C (sub_1800D977C.c)
 */

__int64 __fastcall sub_1800D9678(unsigned __int16 *a1)
{
  __int64 result; // rax
  int v3; // ecx
  __int64 v4; // rax
  int v5; // edx
  _QWORD v6[2]; // [rsp+20h] [rbp-50h] BYREF
  __int16 v7; // [rsp+30h] [rbp-40h] BYREF
  __int64 v8; // [rsp+38h] [rbp-38h]
  int v9; // [rsp+40h] [rbp-30h]
  __int64 v10; // [rsp+48h] [rbp-28h]
  _QWORD *v11; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+58h] [rbp-18h]
  __int128 v13; // [rsp+60h] [rbp-10h]

  v6[0] = 82051072LL;
  v6[1] = &unk_1801649C0;
  result = RtlAppendUnicodeToString((unsigned __int16 *)v6, L"\\REGISTRY\\USER\\");
  if ( (int)result >= 0 )
  {
    result = sub_1800D977C(v6);
    if ( (int)result >= 0 )
    {
      result = RtlAppendUnicodeStringToString((unsigned __int16 *)v6, word_180119478);
      if ( (int)result >= 0 )
      {
        v3 = *a1;
        v4 = *((_QWORD *)a1 + 1) + *a1;
        if ( *a1 )
        {
          do
          {
            if ( *(_WORD *)(v4 - 2) == 92 )
              break;
            v4 -= 2LL;
            v3 -= 2;
          }
          while ( v3 );
        }
        v5 = *a1 - v3;
        v8 = v4;
        v7 = v5;
        if ( (unsigned __int16)v5 == v5 )
        {
          result = RtlAppendUnicodeStringToString((unsigned __int16 *)v6, &v7);
          if ( (int)result >= 0 )
          {
            v10 = 0LL;
            v11 = v6;
            v9 = 48;
            v12 = 64;
            v13 = 0LL;
            return ZwOpenKey();
          }
        }
        else
        {
          return 3221225507LL;
        }
      }
    }
  }
  return result;
}
