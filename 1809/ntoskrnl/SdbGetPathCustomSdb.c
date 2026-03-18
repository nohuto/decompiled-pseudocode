/*
 * XREFs of SdbGetPathCustomSdb @ 0x1408E8400
 * Callers:
 *     SdbResolveDatabaseEx @ 0x1408E84D0 (SdbResolveDatabaseEx.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     AslLogCallPrintf @ 0x140680C80 (AslLogCallPrintf.c)
 *     SdbpGetCustomSdbFileName @ 0x1408E886C (SdbpGetCustomSdbFileName.c)
 *     SdbpGetSystemSdbFilePath @ 0x1408E8DEC (SdbpGetSystemSdbFilePath.c)
 */

_BOOL8 __fastcall SdbGetPathCustomSdb(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdx
  int v8; // r9d
  int CustomSdbFileName; // ebx
  _BYTE v11[96]; // [rsp+30h] [rbp-88h] BYREF

  memset(v11, 0, 0x56uLL);
  if ( a3 && (CustomSdbFileName = SdbpGetCustomSdbFileName(v11, v7, a3), CustomSdbFileName < 0)
    || (CustomSdbFileName = SdbpGetSystemSdbFilePath(a1, v7, 7, v8, (__int64)v11, a4), CustomSdbFileName < 0) )
  {
    AslLogCallPrintf(1LL);
  }
  else
  {
    CustomSdbFileName = 0;
  }
  return CustomSdbFileName >= 0;
}
