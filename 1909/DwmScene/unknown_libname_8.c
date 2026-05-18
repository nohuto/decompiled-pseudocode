/*
 * XREFs of unknown_libname_8 @ 0x18011C270
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011C1F8 @ 0x18011C1F8 (sub_18011C1F8.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Microsoft VisualC v7/14 64bit runtime
void __noreturn unknown_libname_8()
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_18011C1F8(pExceptionObject, (__int64)"Not implemented yet");
  throw (std::logic_error *)pExceptionObject;
}
