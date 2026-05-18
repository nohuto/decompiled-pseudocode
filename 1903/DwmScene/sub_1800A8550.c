/*
 * XREFs of sub_1800A8550 @ 0x1800A8550
 * Callers:
 *     sub_1800A851C @ 0x1800A851C (sub_1800A851C.c)
 *     sub_1800A865C @ 0x1800A865C (sub_1800A865C.c)
 *     sub_1800EB0A0 @ 0x1800EB0A0 (sub_1800EB0A0.c)
 *     sub_1800EC130 @ 0x1800EC130 (sub_1800EC130.c)
 *     sub_1800EC680 @ 0x1800EC680 (sub_1800EC680.c)
 *     sub_1800ED920 @ 0x1800ED920 (sub_1800ED920.c)
 *     sub_1800EE3F8 @ 0x1800EE3F8 (sub_1800EE3F8.c)
 *     sub_1800F0340 @ 0x1800F0340 (sub_1800F0340.c)
 *     sub_18010DCD0 @ 0x18010DCD0 (sub_18010DCD0.c)
 *     sub_18010F854 @ 0x18010F854 (sub_18010F854.c)
 * Callees:
 *     sub_18006F95C @ 0x18006F95C (sub_18006F95C.c)
 *     sub_1800A727C @ 0x1800A727C (sub_1800A727C.c)
 *     sub_1800A74E8 @ 0x1800A74E8 (sub_1800A74E8.c)
 *     sub_1800F72E4 @ 0x1800F72E4 (sub_1800F72E4.c)
 *     sub_1800F8ACC @ 0x1800F8ACC (sub_1800F8ACC.c)
 *     sub_18011D988 @ 0x18011D988 (sub_18011D988.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A8550(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD v10[6]; // [rsp+30h] [rbp-40h] BYREF
  int v11; // [rsp+60h] [rbp-10h] BYREF

  v10[4] = -2LL;
  v10[5] = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  sub_1800A74E8(a2, a1);
  v10[0] = a3;
  v10[1] = a4;
  sub_1800F72E4(*a2, v10);
  if ( a5 )
  {
    v10[3] = 15LL;
    v10[2] = 0LL;
    LOBYTE(v10[0]) = 0;
    sub_1800F8ACC(*a2, v10);
  }
  v11 = *(_DWORD *)(a1 + 552);
  if ( !v11 )
    sub_18011D988(
      &unk_18025CBB8,
      2LL,
      "ShaderFamily::CreatePipeline() -- shaderModel is in invalid state. Pipeline creation must happen during a BeginSha"
      "derModel() / EndShaderModel() block.");
  sub_1800A727C((__int64 **)(a1 + 416), (__int64)v10, &v11);
  sub_18006F95C(v10[0] + 40LL, *(_QWORD *)(v10[0] + 40LL), a2);
  return a2;
}
