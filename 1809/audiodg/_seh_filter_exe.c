/*
 * XREFs of _seh_filter_exe @ 0x14001CB88
 * Callers:
 *     __scrt_common_main_seh @ 0x14001BA90 (__scrt_common_main_seh.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl seh_filter_exe(unsigned int ExceptionNum, struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  return _o__seh_filter_exe(ExceptionNum, ExceptionPtr);
}
