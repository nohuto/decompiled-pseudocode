/*
 * XREFs of sub_18011814C @ 0x18011814C
 * Callers:
 *     sub_1801167D4 @ 0x1801167D4 (sub_1801167D4.c)
 *     sub_180116CF8 @ 0x180116CF8 (sub_180116CF8.c)
 *     sub_18011746C @ 0x18011746C (sub_18011746C.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     sub_180116368 @ 0x180116368 (sub_180116368.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011814C(unsigned int a1, int a2)
{
  __int64 result; // rax
  _QWORD v3[5]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+50h] [rbp-48h] BYREF

  if ( a2 )
  {
    if ( a2 == 1 && a1 < 3 )
    {
      sub_18000E4E8(v3);
      sub_180116368(pExceptionObject, (__int64)v3);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
  }
  else
  {
    result = 3 * (a1 / 3);
    if ( a1 != (_DWORD)result )
    {
      sub_18000E4E8(v3);
      sub_180116368(pExceptionObject, (__int64)v3);
      throw (Spectre::Framework::GeometryProcessingException *)pExceptionObject;
    }
  }
  return result;
}
