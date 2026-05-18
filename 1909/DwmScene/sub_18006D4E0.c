/*
 * XREFs of sub_18006D4E0 @ 0x18006D4E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180017DCC @ 0x180017DCC (sub_180017DCC.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006D4E0(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 result; // rax
  __int64 *v6; // rax
  _QWORD v7[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v8[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+80h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a2 + 28) > *(_DWORD *)(a2 + 32) )
  {
    sub_18000E4E8(v8);
    v6 = sub_18000E4E8(v7);
    sub_18006586C(pExceptionObject, v6, 396LL, (__int64)v8, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_180017DCC(a1 + 288, a2);
  *(_OWORD *)(a1 + 384) = *a3;
  *(_OWORD *)(a1 + 400) = a3[1];
  *(_DWORD *)(a1 + 416) = *(_DWORD *)(a1 + 308);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1);
  *(_BYTE *)(a1 + 3976) = 1;
  return result;
}
