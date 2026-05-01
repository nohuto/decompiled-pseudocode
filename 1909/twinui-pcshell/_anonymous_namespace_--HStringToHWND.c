/*
 * XREFs of _anonymous_namespace_::HStringToHWND @ 0x1801CC6C4
 * Callers:
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::HandleCallbackFormat @ 0x1801CC764 (_anonymous_namespace_--ScreenClipOpenUrlParser--HandleCallbackFormat.c)
 *     ?OpenInScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801CF788 (-OpenInScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundati.c)
 * Callees:
 *     _anonymous_namespace_::HStringToLong @ 0x1801CC6FC (_anonymous_namespace_--HStringToLong.c)
 */

char __fastcall anonymous_namespace_::HStringToHWND(__int64 a1, _QWORD *a2)
{
  char result; // al
  int v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  result = anonymous_namespace_::HStringToLong(a1, &v4);
  if ( result )
  {
    *a2 = ~v4;
    return 1;
  }
  return result;
}
