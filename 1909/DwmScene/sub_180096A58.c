/*
 * XREFs of sub_180096A58 @ 0x180096A58
 * Callers:
 *     sub_180096574 @ 0x180096574 (sub_180096574.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180064684 @ 0x180064684 (sub_180064684.c)
 *     sub_180095130 @ 0x180095130 (sub_180095130.c)
 *     sub_180096D8C @ 0x180096D8C (sub_180096D8C.c)
 *     sub_180096FA0 @ 0x180096FA0 (sub_180096FA0.c)
 *     sub_1800970AC @ 0x1800970AC (sub_1800970AC.c)
 *     sub_18009728C @ 0x18009728C (sub_18009728C.c)
 *     sub_180097404 @ 0x180097404 (sub_180097404.c)
 *     sub_180097544 @ 0x180097544 (sub_180097544.c)
 *     sub_180097678 @ 0x180097678 (sub_180097678.c)
 *     sub_1800978CC @ 0x1800978CC (sub_1800978CC.c)
 *     sub_180097A00 @ 0x180097A00 (sub_180097A00.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180096A58(__int64 a1, int a2, unsigned int a3, __int64 a4, int a5)
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
    sub_18000E4E8(v12);
    v10 = sub_18000E4E8(v13);
    sub_180095130(pExceptionObject, v10, 842, (__int64)v12, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  if ( *(_DWORD *)(a1 + 304) == 2 )
  {
    sub_18000E4E8(v13);
    v11 = sub_18000E4E8(v12);
    sub_180095130(pExceptionObject, v11, 847, (__int64)v13, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  if ( (a5 & 0x100) == 0 )
  {
    sub_18000E4E8(v12);
    v9 = sub_18000E4E8(v13);
    sub_180095130(pExceptionObject, v9, 852, (__int64)v12, 0);
    throw (Spectre::Engine::EngineInvalidPointerException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 304) = 2;
  sub_180064684(a1, 4, 1);
  *(_DWORD *)(a1 + 292) = a5;
  *(_DWORD *)(a1 + 296) = a5;
  *(_DWORD *)(a1 + 124) = a3;
  *(_DWORD *)(a1 + 120) = a3;
  *(_DWORD *)(a1 + 116) = a2;
  *(_DWORD *)(a1 + 112) = a2;
  *(_WORD *)(a1 + 308) = 0;
  result = sub_180097544(a1, 0LL, a3);
  if ( (a5 & 0x80u) != 0 )
    result = sub_180096D8C(a1, 0LL, *(unsigned int *)(a1 + 124));
  if ( (a5 & 1) != 0 )
    result = sub_1800978CC(a1, 0LL, *(unsigned int *)(a1 + 124));
  if ( (a5 & 2) != 0 )
    result = sub_180097A00(a1, 0LL, *(unsigned int *)(a1 + 124));
  if ( (a5 & 0x10000000) != 0 )
  {
    *(_DWORD *)(a1 + 288) = 1;
    result = sub_1800970AC(a1, 0LL, *(unsigned int *)(a1 + 116));
  }
  else if ( (a5 & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 288) = 0;
    result = sub_180096FA0(a1, 0LL, *(unsigned int *)(a1 + 116));
  }
  if ( (a5 & 0x10) != 0 )
    result = sub_180097404(a1, 0LL, *(unsigned int *)(a1 + 124), 0LL);
  if ( (a5 & 0x20) != 0 )
    result = sub_180097678(a1, 0LL, *(unsigned int *)(a1 + 124), 0LL);
  if ( (a5 & 0x400) != 0 )
    return sub_18009728C(a1, 0LL, 0LL, *(unsigned int *)(a1 + 124));
  return result;
}
