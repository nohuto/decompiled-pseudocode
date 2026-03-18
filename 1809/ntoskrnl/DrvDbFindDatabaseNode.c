/*
 * XREFs of DrvDbFindDatabaseNode @ 0x1406D3B98
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1406D27A0 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1406D307C (DrvDbGetObjectDatabaseNode.c)
 *     DrvDbSuspendDatabase @ 0x14073A9D4 (DrvDbSuspendDatabase.c)
 *     DrvDbRegisterDatabase @ 0x14073B374 (DrvDbRegisterDatabase.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x14075395C (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140753ADC (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x1409014C8 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140902ADC (DrvDbSetDriverDatabaseMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x140625D40 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall DrvDbFindDatabaseNode(__int64 a1, const WCHAR *a2, const UNICODE_STRING **a3)
{
  NTSTATUS inited; // edi
  const UNICODE_STRING **v6; // rsi
  const UNICODE_STRING *i; // rbx
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  *a3 = 0LL;
  inited = RtlInitUnicodeStringEx(&String2, a2);
  if ( inited >= 0 )
  {
    v6 = (const UNICODE_STRING **)(a1 + 16);
    inited = -1073741772;
    for ( i = *v6; i != (const UNICODE_STRING *)v6; i = *(const UNICODE_STRING **)&i->Length )
    {
      if ( RtlEqualUnicodeString(i + 1, &String2, 1u) )
      {
        inited = 0;
        *a3 = i;
        return (unsigned int)inited;
      }
    }
  }
  return (unsigned int)inited;
}
