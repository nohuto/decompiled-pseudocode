/*
 * XREFs of sub_180095E9C @ 0x180095E9C
 * Callers:
 *     sub_180012150 @ 0x180012150 (sub_180012150.c)
 *     sub_1800EFF30 @ 0x1800EFF30 (sub_1800EFF30.c)
 *     sub_1800FBDCC @ 0x1800FBDCC (sub_1800FBDCC.c)
 *     sub_1800FC0C4 @ 0x1800FC0C4 (sub_1800FC0C4.c)
 *     sub_1801115E0 @ 0x1801115E0 (sub_1801115E0.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180064400 @ 0x180064400 (sub_180064400.c)
 *     sub_180064684 @ 0x180064684 (sub_180064684.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     sub_18009581C @ 0x18009581C (sub_18009581C.c)
 *     sub_180095B4C @ 0x180095B4C (sub_180095B4C.c)
 *     sub_180095FEC @ 0x180095FEC (sub_180095FEC.c)
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180095E9C(__int64 a1, unsigned int a2)
{
  char result; // al
  char v5; // bp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 *v9; // rax
  _QWORD v10[4]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v11[4]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD pExceptionObject[11]; // [rsp+80h] [rbp-58h] BYREF

  if ( *(_BYTE *)(a1 + 310) )
  {
    sub_18000E4E8(v11);
    v9 = sub_18000E4E8(v10);
    sub_18006586C(pExceptionObject, v9, 430LL, (__int64)v11, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  result = sub_180064684(a1, 4, 1);
  if ( *(_QWORD *)(a1 + 144) )
  {
    v5 = a2 & (*(_QWORD *)(a1 + 160) == 0LL);
    result = (a2 >> 1) & (*(_QWORD *)(a1 + 192) == 0LL);
    if ( result && !*(_QWORD *)(a1 + 240) )
    {
      sub_18011DA98(
        &unk_18025D718,
        3LL,
        "Attempting to compute tangents for mesh without UV coordinates. Tangents will not be calculated.");
      result = 0;
    }
    if ( v5 )
    {
      if ( result )
      {
        v6 = sub_180064400(a1);
        return sub_180095B4C((_DWORD *)a1, v6, (a2 & 4) != 0);
      }
      else
      {
        sub_180064400(a1);
        return sub_18009581C((_DWORD *)a1);
      }
    }
    else if ( result )
    {
      v7 = sub_180064400(a1);
      LOBYTE(v8) = (a2 & 4) != 0;
      return sub_180095FEC(a1, v7, v8);
    }
  }
  return result;
}
