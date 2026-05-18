/*
 * XREFs of sub_1800F2AC4 @ 0x1800F2AC4
 * Callers:
 *     sub_1800919D8 @ 0x1800919D8 (sub_1800919D8.c)
 *     sub_180092E40 @ 0x180092E40 (sub_180092E40.c)
 *     sub_180093634 @ 0x180093634 (sub_180093634.c)
 *     sub_180093DA8 @ 0x180093DA8 (sub_180093DA8.c)
 *     sub_180093EDC @ 0x180093EDC (sub_180093EDC.c)
 *     sub_1800A589C @ 0x1800A589C (sub_1800A589C.c)
 *     sub_1800A8BB8 @ 0x1800A8BB8 (sub_1800A8BB8.c)
 *     sub_1800EA240 @ 0x1800EA240 (sub_1800EA240.c)
 *     sub_1800EC130 @ 0x1800EC130 (sub_1800EC130.c)
 *     sub_1800EC680 @ 0x1800EC680 (sub_1800EC680.c)
 *     sub_1800F0340 @ 0x1800F0340 (sub_1800F0340.c)
 *     sub_1800F5478 @ 0x1800F5478 (sub_1800F5478.c)
 *     sub_180132882 @ 0x180132882 (sub_180132882.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_1800A40C0 @ 0x1800A40C0 (sub_1800A40C0.c)
 *     sub_1800F2908 @ 0x1800F2908 (sub_1800F2908.c)
 *     sub_1800F3044 @ 0x1800F3044 (sub_1800F3044.c)
 *     sub_1800F30D8 @ 0x1800F30D8 (sub_1800F30D8.c)
 *     sub_1800F57F4 @ 0x1800F57F4 (sub_1800F57F4.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F2AC4(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rax
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx
  __int64 *v6; // rax
  _BYTE v7[16]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+40h] [rbp-A8h]
  __int64 v9; // [rsp+48h] [rbp-A0h] BYREF
  volatile signed __int32 *v10; // [rsp+50h] [rbp-98h]
  _QWORD v11[4]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD v12[5]; // [rsp+78h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+A0h] [rbp-48h] BYREF

  v8 = -2LL;
  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_18000E498(v12);
    v6 = sub_18000E498(v11);
    sub_180027770(pExceptionObject, v6, 526, (__int64)v12, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_BYTE *)(a1 + 1242) = *(_QWORD *)(a1 + 56) == *(_QWORD *)(a1 + 64);
  sub_1800F3044(a1, 16LL);
  sub_1800F2908(a1);
  result = sub_1800F3044(a1, 0LL);
  *(_DWORD *)(a1 + 1168) = 1;
  if ( *(_BYTE *)(a1 + 1241) )
  {
    v3 = sub_1800A40C0(*(_QWORD *)(a1 + 1152), &v9);
    v4 = sub_1800F57F4(*v3, v7);
    result = sub_1800F30D8(a1, v4);
    v5 = v10;
    if ( v10 )
    {
      result = (unsigned int)_InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
        result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
    }
  }
  return result;
}
