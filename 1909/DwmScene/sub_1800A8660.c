/*
 * XREFs of sub_1800A8660 @ 0x1800A8660
 * Callers:
 *     sub_1800A862C @ 0x1800A862C (sub_1800A862C.c)
 *     sub_1800A876C @ 0x1800A876C (sub_1800A876C.c)
 *     sub_1800EB1B0 @ 0x1800EB1B0 (sub_1800EB1B0.c)
 *     sub_1800EC240 @ 0x1800EC240 (sub_1800EC240.c)
 *     sub_1800EC790 @ 0x1800EC790 (sub_1800EC790.c)
 *     sub_1800EDA30 @ 0x1800EDA30 (sub_1800EDA30.c)
 *     sub_1800EE508 @ 0x1800EE508 (sub_1800EE508.c)
 *     sub_1800F0450 @ 0x1800F0450 (sub_1800F0450.c)
 *     sub_18010DDE0 @ 0x18010DDE0 (sub_18010DDE0.c)
 *     sub_18010F964 @ 0x18010F964 (sub_18010F964.c)
 * Callees:
 *     sub_18006FA6C @ 0x18006FA6C (sub_18006FA6C.c)
 *     sub_1800A738C @ 0x1800A738C (sub_1800A738C.c)
 *     sub_1800A75F8 @ 0x1800A75F8 (sub_1800A75F8.c)
 *     sub_1800F73F4 @ 0x1800F73F4 (sub_1800F73F4.c)
 *     sub_1800F8BDC @ 0x1800F8BDC (sub_1800F8BDC.c)
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A8660(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD v10[6]; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+60h] [rbp-10h] BYREF

  v10[4] = -2LL;
  v10[5] = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_1800A75F8(a2, a1);
  v10[0] = a3;
  v10[1] = a4;
  sub_1800F73F4(*a2, v10);
  if ( a5 )
  {
    v10[3] = 15LL;
    v10[2] = 0LL;
    LOBYTE(v10[0]) = 0;
    sub_1800F8BDC(*a2, v10);
  }
  v11 = *(_DWORD *)(a1 + 552);
  if ( !v11 )
    sub_18011DA98(
      &unk_18025DBB8,
      2LL,
      "ShaderFamily::CreatePipeline() -- shaderModel is in invalid state. Pipeline creation must happen during a BeginSha"
      "derModel() / EndShaderModel() block.");
  sub_1800A738C((__int64 **)(a1 + 416), (__int64)v10, &v11);
  sub_18006FA6C(v10[0] + 40LL, *(_QWORD *)(v10[0] + 40LL), a2);
  return a2;
}
