/*
 * XREFs of sub_18011803C @ 0x18011803C
 * Callers:
 *     sub_1801166C4 @ 0x1801166C4 (sub_1801166C4.c)
 *     sub_180116BE8 @ 0x180116BE8 (sub_180116BE8.c)
 *     sub_18011735C @ 0x18011735C (sub_18011735C.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180116258 @ 0x180116258 (sub_180116258.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011803C(unsigned int a1, int a2)
{
  __int64 result; // rax
  _QWORD v3[5]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+50h] [rbp-48h] BYREF

  if ( a2 )
  {
    if ( a2 == 1 && a1 < 3 )
    {
      sub_18000E498(v3);
      sub_180116258(pExceptionObject, (__int64)v3);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
  }
  else
  {
    result = 3 * (a1 / 3);
    if ( a1 != (_DWORD)result )
    {
      sub_18000E498(v3);
      sub_180116258(pExceptionObject, (__int64)v3);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
  }
  return result;
}
