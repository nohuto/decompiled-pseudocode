/*
 * XREFs of sub_18009ECD4 @ 0x18009ECD4
 * Callers:
 *     sub_180065610 @ 0x180065610 (sub_180065610.c)
 *     sub_18009DF60 @ 0x18009DF60 (sub_18009DF60.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_18006575C @ 0x18006575C (sub_18006575C.c)
 *     sub_18009EC2C @ 0x18009EC2C (sub_18009EC2C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18009ECD4(__int64 a1, __int64 a2)
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
    sub_18000E498(v11);
    v9 = sub_18000E498(v10);
    sub_18006575C(pExceptionObject, v9, 931LL, (__int64)v11, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  *(_DWORD *)(a1 + 144) = a2;
  *(_DWORD *)(a1 + 148) = v3;
  v4 = *(_QWORD **)(a1 + 112);
  v5 = (_QWORD *)*v4;
  while ( v5 != v4 )
  {
    sub_18009EC2C(v5[5], a2);
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
