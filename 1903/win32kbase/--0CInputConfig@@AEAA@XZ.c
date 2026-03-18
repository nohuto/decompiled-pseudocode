/*
 * XREFs of ??0CInputConfig@@AEAA@XZ @ 0x1C0060860
 * Callers:
 *     ?Initialize@CInputConfig@@SAJXZ @ 0x1C00607BC (-Initialize@CInputConfig@@SAJXZ.c)
 * Callees:
 *     ??0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z @ 0x1C0065B08 (--0CInputSpace@@QEAA@AEBUINPUT_SPACE@@_N@Z.c)
 */

CInputConfig *__fastcall CInputConfig::CInputConfig(CInputConfig *this)
{
  CInputConfig *result; // rax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v3 = 0LL;
  v4 = 0;
  CInputSpace::CInputSpace((CInputConfig *)((char *)this + 32), (const struct INPUT_SPACE *)&v3, 0);
  *((_BYTE *)this + 1248) = 1;
  result = this;
  *((_QWORD *)this + 1) = this;
  *(_QWORD *)this = this;
  return result;
}
