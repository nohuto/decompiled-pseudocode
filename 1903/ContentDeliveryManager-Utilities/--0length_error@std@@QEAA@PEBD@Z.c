/*
 * XREFs of ??0length_error@std@@QEAA@PEBD@Z @ 0x1800ADE60
 * Callers:
 *     ?_Xinvalid_argument@std@@YAXPEBD@Z @ 0x1800ADF88 (-_Xinvalid_argument@std@@YAXPEBD@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1800ADFB4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x1800ADFE0 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 * Callees:
 *     ??0exception@@QEAA@AEBQEBD@Z_0 @ 0x1800CB01C (--0exception@@QEAA@AEBQEBD@Z_0.c)
 */

std::length_error *__fastcall std::length_error::length_error(std::length_error *this, char *a2)
{
  char *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  exception::exception(this, (const char *const *)&v4);
  *(_QWORD *)this = &std::length_error::`vftable';
  return this;
}
