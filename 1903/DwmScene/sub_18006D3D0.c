/*
 * XREFs of sub_18006D3D0 @ 0x18006D3D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180017D5C @ 0x180017D5C (sub_180017D5C.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006D3D0(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 result; // rax
  __int64 *v6; // rax
  _QWORD v7[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v8[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a2 + 28) > *(_DWORD *)(a2 + 32) )
  {
    sub_18000E498(v8);
    v6 = sub_18000E498(v7);
    sub_18006575C(pExceptionObject, v6, 396LL, (__int64)v8, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_180017D5C(a1 + 288, a2);
  *(_OWORD *)(a1 + 384) = *a3;
  *(_OWORD *)(a1 + 400) = a3[1];
  *(_DWORD *)(a1 + 416) = *(_DWORD *)(a1 + 308);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1);
  *(_BYTE *)(a1 + 3976) = 1;
  return result;
}
