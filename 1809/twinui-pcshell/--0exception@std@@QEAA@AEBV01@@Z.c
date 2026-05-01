/*
 * XREFs of ??0exception@std@@QEAA@AEBV01@@Z @ 0x1800DE05C
 * Callers:
 *     ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x1800DDEF0 (--0ResultException@wil@@QEAA@AEBV01@@Z.c)
 *     ??0bad_optional_access@std@@QEAA@AEBV01@@Z @ 0x18017C81C (--0bad_optional_access@std@@QEAA@AEBV01@@Z.c)
 *     ??0bad_weak_ptr@std@@QEAA@AEBV01@@Z @ 0x18023B630 (--0bad_weak_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ??0invalid_operation@Concurrency@@QEAA@AEBV01@@Z @ 0x1802935B8 (--0invalid_operation@Concurrency@@QEAA@AEBV01@@Z.c)
 *     ??0runtime_error@std@@QEAA@AEBV01@@Z @ 0x180293630 (--0runtime_error@std@@QEAA@AEBV01@@Z.c)
 *     ??0task_canceled@Concurrency@@QEAA@AEBV01@@Z @ 0x180293658 (--0task_canceled@Concurrency@@QEAA@AEBV01@@Z.c)
 *     ??0bad_alloc@std@@QEAA@AEBV01@@Z @ 0x180384C84 (--0bad_alloc@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     _o___std_exception_copy_0 @ 0x180084F9E (_o___std_exception_copy_0.c)
 */

std::exception *__fastcall std::exception::exception(std::exception *this, const struct std::exception *a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  o___std_exception_copy_0((__int64)a2 + 8);
  return this;
}
