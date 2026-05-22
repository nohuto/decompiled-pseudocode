/*
 * XREFs of ??$make_shared@VMPCButtonHoldHelper@@AEAM@std@@YA?AV?$shared_ptr@VMPCButtonHoldHelper@@@0@AEAM@Z @ 0x180140AB0
 * Callers:
 *     ??0MPCSlateDeadzoneHelper@@QEAA@MM@Z @ 0x180140B28 (--0MPCSlateDeadzoneHelper@@QEAA@MM@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002C79C (--2@YAPEAX_K@Z.c)
 *     ??0MPCButtonHoldHelper@@QEAA@M@Z @ 0x180140960 (--0MPCButtonHoldHelper@@QEAA@M@Z.c)
 */

_QWORD *__fastcall std::make_shared<MPCButtonHoldHelper,float &>(_QWORD *a1, float *a2)
{
  __int64 v4; // r8
  const char *v5; // r9
  _QWORD *result; // rax
  _DWORD *v7; // [rsp+30h] [rbp+8h]

  v7 = operator new(0x38uLL);
  v7[2] = 1;
  v7[3] = 1;
  *(_QWORD *)v7 = &std::_Ref_count_obj<MPCButtonHoldHelper>::`vftable';
  MPCButtonHoldHelper::MPCButtonHoldHelper((MPCButtonHoldHelper *)(v7 + 4), *a2, v4, v5);
  result = a1;
  *a1 = v7 + 4;
  a1[1] = v7;
  return result;
}
