/*
 * XREFs of sub_180062CD8 @ 0x180062CD8
 * Callers:
 *     sub_180063288 @ 0x180063288 (sub_180063288.c)
 *     sub_1800636EC @ 0x1800636EC (sub_1800636EC.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180062B88 @ 0x180062B88 (sub_180062B88.c)
 *     sub_180063064 @ 0x180063064 (sub_180063064.c)
 *     sub_1800633E0 @ 0x1800633E0 (sub_1800633E0.c)
 *     sub_1800636FC @ 0x1800636FC (sub_1800636FC.c)
 *     sub_18011E1DC @ 0x18011E1DC (sub_18011E1DC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180062CD8(__int64 a1, char a2)
{
  __int64 *result; // rax
  char *v5; // rdx
  unsigned int v6; // eax
  _QWORD v7[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF
  char v11; // [rsp+D8h] [rbp+10h] BYREF

  v11 = a2;
  v7[1] = -2LL;
  if ( (unsigned __int8)sub_1800636FC() )
  {
    sub_18000E4E8(v9);
    v6 = (unsigned int)sub_18000E4E8(v8);
    sub_180063064((unsigned int)pExceptionObject, v6, 33, (unsigned int)v9, 0);
    throw (Spectre::Engine::EngineAccessDeniedException *)pExceptionObject;
  }
  sub_18011E1DC(a1);
  v7[0] = a1;
  result = (__int64 *)sub_1800633E0();
  v5 = (char *)result[1];
  if ( (char *)result[2] == v5 )
    return (__int64 *)sub_180062B88(result, v5, v7, &v11);
  *(_QWORD *)v5 = a1;
  v5[8] = a2;
  result[1] += 16LL;
  return result;
}
