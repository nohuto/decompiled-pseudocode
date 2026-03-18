/*
 * XREFs of ParseAndGetNameSpaceObject @ 0x1C0021208
 * Callers:
 *     ParseNameObj @ 0x1C0021368 (ParseNameObj.c)
 * Callees:
 *     ParseName @ 0x1C0020F94 (ParseName.c)
 *     GetNameSpaceObject @ 0x1C0021288 (GetNameSpaceObject.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 */

__int64 __fastcall ParseAndGetNameSpaceObject(__int64 a1, char **a2, __int64 a3, _QWORD *a4, char a5)
{
  unsigned int NameSpaceObject; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  char Src[256]; // [rsp+30h] [rbp-138h] BYREF

  NameSpaceObject = ParseName(a1, a2, Src);
  if ( !NameSpaceObject )
  {
    NameSpaceObject = GetNameSpaceObject(Src);
    if ( NameSpaceObject == -1073741772 )
    {
      if ( a5 )
      {
        NameSpaceObject = 0;
        *a4 = 0LL;
      }
      else
      {
        LogError(3221225524LL, v8, v9, v10);
        AcpiDiagTraceAmlError(a1, 3221225524LL);
        PrintDebugMessage(120, (unsigned int)Src, 0, 0, 0LL);
      }
    }
  }
  return NameSpaceObject;
}
