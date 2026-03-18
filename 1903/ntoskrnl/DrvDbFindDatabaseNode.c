/*
 * XREFs of DrvDbFindDatabaseNode @ 0x1406F2DE0
 * Callers:
 *     DrvDbDispatchDriverDatabase @ 0x1406F1A00 (DrvDbDispatchDriverDatabase.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1406F2228 (DrvDbGetObjectDatabaseNode.c)
 *     DrvDbRegisterDatabase @ 0x1407559BC (DrvDbRegisterDatabase.c)
 *     DrvDbSuspendDatabase @ 0x1407563B4 (DrvDbSuspendDatabase.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140756900 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbOpenDriverDatabaseRegKey @ 0x140756E68 (DrvDbOpenDriverDatabaseRegKey.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x14093F7FC (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x140940FC0 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbUnregisterDatabase @ 0x140942088 (DrvDbUnregisterDatabase.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall DrvDbFindDatabaseNode(__int64 a1, const WCHAR *a2, const UNICODE_STRING **a3)
{
  NTSTATUS inited; // edi
  const UNICODE_STRING **v6; // rsi
  const UNICODE_STRING *i; // rbx
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  *a3 = 0LL;
  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
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
