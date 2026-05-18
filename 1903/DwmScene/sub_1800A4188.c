/*
 * XREFs of sub_1800A4188 @ 0x1800A4188
 * Callers:
 *     sub_1800A7F30 @ 0x1800A7F30 (sub_1800A7F30.c)
 *     sub_1800BE5E0 @ 0x1800BE5E0 (sub_1800BE5E0.c)
 *     sub_1800EB0A0 @ 0x1800EB0A0 (sub_1800EB0A0.c)
 *     sub_1800ED920 @ 0x1800ED920 (sub_1800ED920.c)
 *     sub_1800EE260 @ 0x1800EE260 (sub_1800EE260.c)
 *     sub_1800EE3F8 @ 0x1800EE3F8 (sub_1800EE3F8.c)
 *     sub_1800FF368 @ 0x1800FF368 (sub_1800FF368.c)
 *     sub_18010DCD0 @ 0x18010DCD0 (sub_18010DCD0.c)
 *     sub_180110C10 @ 0x180110C10 (sub_180110C10.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_18002BF78 @ 0x18002BF78 (sub_18002BF78.c)
 *     sub_18009FB30 @ 0x18009FB30 (sub_18009FB30.c)
 *     sub_1800A3FCC @ 0x1800A3FCC (sub_1800A3FCC.c)
 *     sub_1800A6058 @ 0x1800A6058 (sub_1800A6058.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800A4188(__int64 a1, _QWORD **a2)
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
    v7 = sub_1800A3FCC(a1, (__int64)(v6 + 4));
    if ( v7 == -1 )
    {
      v12 = sub_18009FB30(
              &Src,
              "ShaderManager::GetOptionGroup() -- option group contains a non-registered option name '",
              v6 + 4);
      v13 = sub_18002BF78((__int64)v18, v12, "'. ShaderManager::AddOption() must be called first.");
      v14 = sub_18000E498(v16);
      sub_180027770(pExceptionObject, v14, 641, v13, 0);
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
  sub_1800A6058(a2, v15, **a2, *a2);
  j_j__o_free(*a2);
  return v4;
}
