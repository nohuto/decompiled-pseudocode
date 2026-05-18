/*
 * XREFs of sub_1800F2BD4 @ 0x1800F2BD4
 * Callers:
 *     sub_180091AE8 @ 0x180091AE8 (sub_180091AE8.c)
 *     sub_180092F50 @ 0x180092F50 (sub_180092F50.c)
 *     sub_180093744 @ 0x180093744 (sub_180093744.c)
 *     sub_180093EB8 @ 0x180093EB8 (sub_180093EB8.c)
 *     sub_180093FEC @ 0x180093FEC (sub_180093FEC.c)
 *     sub_1800A59AC @ 0x1800A59AC (sub_1800A59AC.c)
 *     sub_1800A8CC8 @ 0x1800A8CC8 (sub_1800A8CC8.c)
 *     sub_1800EA350 @ 0x1800EA350 (sub_1800EA350.c)
 *     sub_1800EC240 @ 0x1800EC240 (sub_1800EC240.c)
 *     sub_1800EC790 @ 0x1800EC790 (sub_1800EC790.c)
 *     sub_1800F0450 @ 0x1800F0450 (sub_1800F0450.c)
 *     sub_1800F5588 @ 0x1800F5588 (sub_1800F5588.c)
 *     sub_180132992 @ 0x180132992 (sub_180132992.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_1800A41D0 @ 0x1800A41D0 (sub_1800A41D0.c)
 *     sub_1800F2A18 @ 0x1800F2A18 (sub_1800F2A18.c)
 *     sub_1800F3154 @ 0x1800F3154 (sub_1800F3154.c)
 *     sub_1800F31E8 @ 0x1800F31E8 (sub_1800F31E8.c)
 *     sub_1800F5904 @ 0x1800F5904 (sub_1800F5904.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F2BD4(__int64 a1)
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
    sub_18000E4E8(v12);
    v6 = sub_18000E4E8(v11);
    sub_180027880(pExceptionObject, v6, 526, (__int64)v12, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_BYTE *)(a1 + 1242) = *(_QWORD *)(a1 + 56) == *(_QWORD *)(a1 + 64);
  sub_1800F3154(a1, 16LL);
  sub_1800F2A18(a1);
  result = sub_1800F3154(a1, 0LL);
  *(_DWORD *)(a1 + 1168) = 1;
  if ( *(_BYTE *)(a1 + 1241) )
  {
    v3 = sub_1800A41D0(*(_QWORD *)(a1 + 1152), &v9);
    v4 = sub_1800F5904(*v3, v7);
    result = sub_1800F31E8(a1, v4);
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
