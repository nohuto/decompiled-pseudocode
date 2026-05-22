/*
 * XREFs of ?ConvertInputTypeToPointerType@HitTestHelper@@CA?BHW4InputType@@@Z @ 0x1800C7F5C
 * Callers:
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x1800C5404 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 *     ?BuildRequestForPointerInputInfo@HitTestHelper@@CA?AUHitTestRequest@1@PEAUPointerInputInfo@@KPEAUHMONITOR__@@@Z @ 0x1800C7E7C (-BuildRequestForPointerInputInfo@HitTestHelper@@CA-AUHitTestRequest@1@PEAUPointerInputInfo@@KPEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HitTestHelper::ConvertInputTypeToPointerType(char a1)
{
  if ( (a1 & 8) != 0 )
    return 2LL;
  if ( (a1 & 0x20) != 0 )
    return 5LL;
  if ( (a1 & 0x10) != 0 )
    return 3LL;
  return (a1 & 2) != 0 ? 4 : 1;
}
