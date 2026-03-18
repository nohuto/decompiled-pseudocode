/*
 * XREFs of ParseAndGetNameSpaceObject @ 0x1C001CFD4
 * Callers:
 *     ParseNameObj @ 0x1C0011FCC (ParseNameObj.c)
 * Callees:
 *     GetNameSpaceObject @ 0x1C001AD04 (GetNameSpaceObject.c)
 *     ParseName @ 0x1C001D054 (ParseName.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 */

__int64 __fastcall ParseAndGetNameSpaceObject(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, char a5)
{
  unsigned int NameSpaceObject; // ebx
  _BYTE Src[256]; // [rsp+30h] [rbp-138h] BYREF

  NameSpaceObject = ParseName(a1, a2, Src);
  if ( !NameSpaceObject )
  {
    NameSpaceObject = GetNameSpaceObject(Src, a3, a4, 0);
    if ( NameSpaceObject == -1073741772 )
    {
      if ( a5 )
      {
        NameSpaceObject = 0;
        *a4 = 0LL;
      }
      else
      {
        LogError(3221225524LL);
        AcpiDiagTraceAmlError(a1, 3221225524LL);
        PrintDebugMessage(120, (unsigned int)Src, 0, 0, 0LL);
      }
    }
  }
  return NameSpaceObject;
}
