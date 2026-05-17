/*
 * XREFs of sub_180007D24 @ 0x180007D24
 * Callers:
 *     RtlpQueryDefaultUILanguage @ 0x180007B50 (RtlpQueryDefaultUILanguage.c)
 *     sub_18000EC54 @ 0x18000EC54 (sub_18000EC54.c)
 *     sub_180015318 @ 0x180015318 (sub_180015318.c)
 * Callees:
 *     sub_180008C14 @ 0x180008C14 (sub_180008C14.c)
 *     sub_1800151CC @ 0x1800151CC (sub_1800151CC.c)
 *     sub_18001564C @ 0x18001564C (sub_18001564C.c)
 */

__int64 __fastcall sub_180007D24(__int64 a1, unsigned int a2, __int64 *a3, int a4, char a5)
{
  __int64 v8; // rdx
  __int64 v10; // rax
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0;
  if ( a3 && a1 && a2 <= 1 && (unsigned int)(a4 - 2) <= 1 )
  {
    if ( a5 && a4 == 3 )
    {
      LODWORD(v8) = sub_1800151CC();
      if ( (int)v8 >= 0 )
      {
        if ( a2 == 1 )
        {
          *a3 = *(_QWORD *)(a1 + 64);
        }
        else if ( !a2 )
        {
          *a3 = *(_QWORD *)(a1 + 56);
        }
      }
      return (unsigned int)v8;
    }
    v8 = (unsigned int)sub_180008C14(a1, a2, a2, a4, (__int64)&v11, (__int64)a3);
    if ( !*a3 )
    {
      LOBYTE(v8) = a2 != 1;
      v10 = sub_18001564C(1LL, v8, a1);
      *a3 = v10;
      if ( !v10 )
      {
        LODWORD(v8) = -1073741801;
        return (unsigned int)v8;
      }
      LODWORD(v8) = 0;
    }
    if ( (_DWORD)v8 && (_DWORD)v8 != -1073741801 && v11 )
      LODWORD(v8) = 0;
    return (unsigned int)v8;
  }
  return 3221225485LL;
}
