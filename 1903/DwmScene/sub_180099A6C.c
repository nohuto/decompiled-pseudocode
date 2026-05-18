/*
 * XREFs of sub_180099A6C @ 0x180099A6C
 * Callers:
 *     sub_1800EBCE0 @ 0x1800EBCE0 (sub_1800EBCE0.c)
 *     sub_180111550 @ 0x180111550 (sub_180111550.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180099A6C(__int64 a1, _QWORD *a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // r11
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rax
  _QWORD v15[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v16[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a1 + 104);
  if ( a3 >= (*(_QWORD *)(a1 + 112) - v5) / 88 )
  {
    sub_18000E498(v16);
    v14 = sub_18000E498(v15);
    sub_18006575C(pExceptionObject, v14, 178LL, (__int64)v16, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v6 = (_QWORD *)(v5 + 88 * a3);
  v7 = 0LL;
  *a2 = 0LL;
  switch ( a4 )
  {
    case 0:
      a2[1] = 0LL;
      v8 = v6[4];
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      *a2 = v6[3];
      v7 = v6[4];
      break;
    case 3:
      a2[1] = 0LL;
      v10 = v6[6];
      if ( v10 )
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      *a2 = v6[5];
      v11 = v6[6];
LABEL_12:
      a2[1] = v11;
      return a2;
    case 7:
      a2[1] = 0LL;
      v12 = v6[8];
      if ( v12 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      *a2 = v6[7];
      v11 = v6[8];
      goto LABEL_12;
    case 8:
      a2[1] = 0LL;
      v13 = v6[10];
      if ( v13 )
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
      *a2 = v6[9];
      v11 = v6[10];
      goto LABEL_12;
  }
  a2[1] = v7;
  return a2;
}
