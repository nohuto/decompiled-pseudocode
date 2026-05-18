/*
 * XREFs of sub_18009EDE4 @ 0x18009EDE4
 * Callers:
 *     sub_180065720 @ 0x180065720 (sub_180065720.c)
 *     sub_18009E070 @ 0x18009E070 (sub_18009E070.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_18006586C @ 0x18006586C (sub_18006586C.c)
 *     sub_18009ED3C @ 0x18009ED3C (sub_18009ED3C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18009EDE4(__int64 a1, __int64 a2)
{
  int v3; // xmm0_4
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  __int64 **v6; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  __int64 *v9; // rax
  _QWORD v10[4]; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD v11[5]; // [rsp+58h] [rbp-90h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v13; // [rsp+C0h] [rbp-28h]

  v13 = a2;
  if ( *(float *)&a2 < 0.0 || (v3 = HIDWORD(v13), *((float *)&v13 + 1) < 0.0) )
  {
    sub_18000E4E8(v11);
    v9 = sub_18000E4E8(v10);
    sub_18006586C(pExceptionObject, v9, 931LL, (__int64)v11, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 144) = a2;
  *(_DWORD *)(a1 + 148) = v3;
  v4 = *(_QWORD **)(a1 + 112);
  v5 = (_QWORD *)*v4;
  while ( v5 != v4 )
  {
    sub_18009ED3C(v5[5], a2);
    v6 = (__int64 **)v5[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = v5[1]; !*(_BYTE *)(i + 25) && v5 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v5 = (_QWORD *)i;
      v5 = (_QWORD *)i;
    }
    else
    {
      v5 = (_QWORD *)v5[2];
      for ( j = *v6; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v5 = j;
    }
  }
}
