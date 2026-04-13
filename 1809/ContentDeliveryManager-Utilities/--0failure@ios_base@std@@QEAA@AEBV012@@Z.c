/*
 * XREFs of ??0failure@ios_base@std@@QEAA@AEBV012@@Z @ 0x180024938
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

std::ios_base::failure *__fastcall std::ios_base::failure::failure(
        std::ios_base::failure *this,
        const struct std::ios_base::failure *a2)
{
  __int128 v4; // xmm0
  std::ios_base::failure *result; // rax

  exception::exception(this, a2);
  *(_QWORD *)this = &std::range_error::`vftable';
  v4 = *(_OWORD *)((char *)a2 + 24);
  *(_QWORD *)this = &std::range_error::`vftable';
  result = this;
  *(_OWORD *)((char *)this + 24) = v4;
  return result;
}
