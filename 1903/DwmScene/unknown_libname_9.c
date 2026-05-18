/*
 * XREFs of unknown_libname_9 @ 0x18011C190
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011C0E8 @ 0x18011C0E8 (sub_18011C0E8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Microsoft VisualC v7/14 64bit runtime
void __noreturn unknown_libname_9()
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_18011C0E8(pExceptionObject, (__int64)"Not implemented yet");
  throw (std::logic_error *)pExceptionObject;
}
