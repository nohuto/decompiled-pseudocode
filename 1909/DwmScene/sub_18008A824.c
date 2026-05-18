/*
 * XREFs of sub_18008A824 @ 0x18008A824
 * Callers:
 *     sub_180085C60 @ 0x180085C60 (sub_180085C60.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_18008DC04 @ 0x18008DC04 (sub_18008DC04.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008A824(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  volatile signed __int32 *v4; // rbx
  __int64 *v5; // rax
  _QWORD v6[3]; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v7[4]; // [rsp+48h] [rbp-90h] BYREF
  _QWORD v8[5]; // [rsp+68h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+90h] [rbp-48h] BYREF

  v6[1] = -2LL;
  v6[2] = a2;
  if ( !*a2 )
  {
    sub_18000E4E8(v8);
    v5 = sub_18000E4E8(v7);
    sub_180027880(pExceptionObject, v5, 936, (__int64)v8, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v6[0] = *(_QWORD *)(*a2 + 368LL);
  result = sub_18008DC04(a1 + 120, v6);
  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      result = (unsigned int)_InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  return result;
}
