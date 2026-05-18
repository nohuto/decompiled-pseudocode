/*
 * XREFs of sub_1800A4298 @ 0x1800A4298
 * Callers:
 *     sub_1800A8040 @ 0x1800A8040 (sub_1800A8040.c)
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 *     sub_1800EB1B0 @ 0x1800EB1B0 (sub_1800EB1B0.c)
 *     sub_1800EDA30 @ 0x1800EDA30 (sub_1800EDA30.c)
 *     sub_1800EE370 @ 0x1800EE370 (sub_1800EE370.c)
 *     sub_1800EE508 @ 0x1800EE508 (sub_1800EE508.c)
 *     sub_1800FF478 @ 0x1800FF478 (sub_1800FF478.c)
 *     sub_18010DDE0 @ 0x18010DDE0 (sub_18010DDE0.c)
 *     sub_180110D20 @ 0x180110D20 (sub_180110D20.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_18002C088 @ 0x18002C088 (sub_18002C088.c)
 *     sub_18009FC40 @ 0x18009FC40 (sub_18009FC40.c)
 *     sub_1800A40DC @ 0x1800A40DC (sub_1800A40DC.c)
 *     sub_1800A6168 @ 0x1800A6168 (sub_1800A6168.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800A4298(__int64 a1, _QWORD **a2)
{
  __int64 v4; // r14
  _QWORD **v5; // rdi
  _QWORD *v6; // rbx
  int v7; // eax
  __int64 **v8; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  const void **v12; // rax
  __int64 v13; // rbx
  __int64 *v14; // rax
  _QWORD v15[2]; // [rsp+38h] [rbp-89h] BYREF
  _QWORD v16[4]; // [rsp+48h] [rbp-79h] BYREF
  const void *Src; // [rsp+68h] [rbp-59h] BYREF
  _BYTE v18[32]; // [rsp+88h] [rbp-39h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+A8h] [rbp-19h] BYREF

  v15[1] = -2LL;
  pExceptionObject[8] = a2;
  v4 = 0LL;
  v5 = (_QWORD **)*a2;
  v6 = (_QWORD *)**a2;
  while ( v6 != v5 )
  {
    v7 = sub_1800A40DC(a1, (__int64)(v6 + 4));
    if ( v7 == -1 )
    {
      v12 = sub_18009FC40(
              &Src,
              "ShaderManager::GetOptionGroup() -- option group contains a non-registered option name '",
              v6 + 4);
      v13 = sub_18002C088((__int64)v18, v12, "'. ShaderManager::AddOption() must be called first.");
      v14 = sub_18000E4E8(v16);
      sub_180027880(pExceptionObject, v14, 641, v13, 0);
      throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
    }
    v4 |= 1LL << v7;
    v8 = (__int64 **)v6[2];
    if ( *((_BYTE *)v8 + 25) )
    {
      for ( i = v6[1]; !*(_BYTE *)(i + 25) && v6 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v6 = (_QWORD *)i;
      v6 = (_QWORD *)i;
    }
    else
    {
      v6 = (_QWORD *)v6[2];
      for ( j = *v8; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v6 = j;
    }
  }
  sub_1800A6168(a2, v15, **a2, *a2);
  j_j__o_free(*a2);
  return v4;
}
