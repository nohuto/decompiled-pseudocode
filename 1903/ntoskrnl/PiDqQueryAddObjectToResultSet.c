/*
 * XREFs of PiDqQueryAddObjectToResultSet @ 0x1406E9EA8
 * Callers:
 *     PiDqQueryEnumObject @ 0x1405BB144 (PiDqQueryEnumObject.c)
 *     PiDqQueryApplyObjectEvent @ 0x140713A14 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x140001F10 (RtlInsertElementGenericTableAvl.c)
 */

__int64 __fastcall PiDqQueryAddObjectToResultSet(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  BOOLEAN NewElement; // [rsp+30h] [rbp+8h] BYREF
  __int64 Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = a2;
  v2 = 0;
  if ( RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 72), &Buffer, 8u, &NewElement) )
  {
    if ( NewElement )
      _InterlockedIncrement((volatile signed __int32 *)(Buffer + 8));
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
