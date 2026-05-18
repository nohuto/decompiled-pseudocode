/*
 * XREFs of sub_180095D8C @ 0x180095D8C
 * Callers:
 *     sub_180012100 @ 0x180012100 (sub_180012100.c)
 *     sub_1800EFE20 @ 0x1800EFE20 (sub_1800EFE20.c)
 *     sub_1800FBCBC @ 0x1800FBCBC (sub_1800FBCBC.c)
 *     sub_1800FBFB4 @ 0x1800FBFB4 (sub_1800FBFB4.c)
 *     sub_1801114D0 @ 0x1801114D0 (sub_1801114D0.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_1800642F0 @ 0x1800642F0 (sub_1800642F0.c)
 *     sub_180064574 @ 0x180064574 (sub_180064574.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     sub_18009570C @ 0x18009570C (sub_18009570C.c)
 *     sub_180095A3C @ 0x180095A3C (sub_180095A3C.c)
 *     sub_180095EDC @ 0x180095EDC (sub_180095EDC.c)
 *     sub_18011D988 @ 0x18011D988 (sub_18011D988.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180095D8C(__int64 a1, unsigned int a2)
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
    sub_18000E498(v11);
    v9 = sub_18000E498(v10);
    sub_18006575C(pExceptionObject, v9, 430LL, (__int64)v11, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  result = sub_180064574(a1, 4, 1);
  if ( *(_QWORD *)(a1 + 144) )
  {
    v5 = a2 & (*(_QWORD *)(a1 + 160) == 0LL);
    result = (a2 >> 1) & (*(_QWORD *)(a1 + 192) == 0LL);
    if ( result && !*(_QWORD *)(a1 + 240) )
    {
      sub_18011D988(
        &unk_18025C718,
        3LL,
        "Attempting to compute tangents for mesh without UV coordinates. Tangents will not be calculated.");
      result = 0;
    }
    if ( v5 )
    {
      if ( result )
      {
        v6 = sub_1800642F0(a1);
        return sub_180095A3C((_DWORD *)a1, v6, (a2 & 4) != 0);
      }
      else
      {
        sub_1800642F0(a1);
        return sub_18009570C((_DWORD *)a1);
      }
    }
    else if ( result )
    {
      v7 = sub_1800642F0(a1);
      LOBYTE(v8) = (a2 & 4) != 0;
      return sub_180095EDC(a1, v7, v8);
    }
  }
  return result;
}
