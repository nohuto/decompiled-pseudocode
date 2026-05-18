/*
 * XREFs of sub_180096948 @ 0x180096948
 * Callers:
 *     sub_180096464 @ 0x180096464 (sub_180096464.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180064574 @ 0x180064574 (sub_180064574.c)
 *     sub_180095020 @ 0x180095020 (sub_180095020.c)
 *     sub_180096C7C @ 0x180096C7C (sub_180096C7C.c)
 *     sub_180096E90 @ 0x180096E90 (sub_180096E90.c)
 *     sub_180096F9C @ 0x180096F9C (sub_180096F9C.c)
 *     sub_18009717C @ 0x18009717C (sub_18009717C.c)
 *     sub_1800972F4 @ 0x1800972F4 (sub_1800972F4.c)
 *     sub_180097434 @ 0x180097434 (sub_180097434.c)
 *     sub_180097568 @ 0x180097568 (sub_180097568.c)
 *     sub_1800977BC @ 0x1800977BC (sub_1800977BC.c)
 *     sub_1800978F0 @ 0x1800978F0 (sub_1800978F0.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180096948(__int64 a1, int a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 result; // rax
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rax
  _QWORD v12[4]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD v13[5]; // [rsp+60h] [rbp-29h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+88h] [rbp-1h] BYREF

  v13[4] = -2LL;
  if ( !a3 || !a2 )
  {
    sub_18000E498(v12);
    v10 = sub_18000E498(v13);
    sub_180095020(pExceptionObject, v10, 842, (__int64)v12, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  if ( *(_DWORD *)(a1 + 304) == 2 )
  {
    sub_18000E498(v13);
    v11 = sub_18000E498(v12);
    sub_180095020(pExceptionObject, v11, 847, (__int64)v13, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  if ( (a5 & 0x100) == 0 )
  {
    sub_18000E498(v12);
    v9 = sub_18000E498(v13);
    sub_180095020(pExceptionObject, v9, 852, (__int64)v12, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 304) = 2;
  sub_180064574(a1, 4, 1);
  *(_DWORD *)(a1 + 292) = a5;
  *(_DWORD *)(a1 + 296) = a5;
  *(_DWORD *)(a1 + 124) = a3;
  *(_DWORD *)(a1 + 120) = a3;
  *(_DWORD *)(a1 + 116) = a2;
  *(_DWORD *)(a1 + 112) = a2;
  *(_WORD *)(a1 + 308) = 0;
  result = sub_180097434(a1, 0LL, a3);
  if ( (a5 & 0x80u) != 0 )
    result = sub_180096C7C(a1, 0LL, *(unsigned int *)(a1 + 124));
  if ( (a5 & 1) != 0 )
    result = sub_1800977BC(a1, 0LL, *(unsigned int *)(a1 + 124));
  if ( (a5 & 2) != 0 )
    result = sub_1800978F0(a1, 0LL, *(unsigned int *)(a1 + 124));
  if ( (a5 & 0x10000000) != 0 )
  {
    *(_DWORD *)(a1 + 288) = 1;
    result = sub_180096F9C(a1, 0LL, *(unsigned int *)(a1 + 116));
  }
  else if ( (a5 & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 288) = 0;
    result = sub_180096E90(a1, 0LL, *(unsigned int *)(a1 + 116));
  }
  if ( (a5 & 0x10) != 0 )
    result = sub_1800972F4(a1, 0LL, *(unsigned int *)(a1 + 124), 0LL);
  if ( (a5 & 0x20) != 0 )
    result = sub_180097568(a1, 0LL, *(unsigned int *)(a1 + 124), 0LL);
  if ( (a5 & 0x400) != 0 )
    return sub_18009717C(a1, 0LL, 0LL, *(unsigned int *)(a1 + 124));
  return result;
}
