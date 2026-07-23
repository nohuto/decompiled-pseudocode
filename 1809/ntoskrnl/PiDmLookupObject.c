/*
 * XREFs of PiDmLookupObject @ 0x140599A58
 * Callers:
 *     PiDmGetObject @ 0x1405999C8 (PiDmGetObject.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1406FA9D0 (PiDmRemoveCacheReferenceForObject.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x140006BF0 (RtlLookupElementGenericTableAvl.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PiDmInitializeComparisonObject @ 0x140599AE8 (PiDmInitializeComparisonObject.c)
 */

__int64 __fastcall PiDmLookupObject(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  PVOID v4; // rax
  _BYTE *Buffer; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v7[112]; // [rsp+30h] [rbp-88h] BYREF

  v3 = 0LL;
  Buffer = v7;
  if ( a2 )
  {
    if ( (int)PiDmInitializeComparisonObject(a2, *(unsigned int *)(a1 + 208), v7) >= 0 )
    {
      v4 = RtlLookupElementGenericTableAvl((PRTL_AVL_TABLE)(a1 + 104), &Buffer);
      if ( v4 )
        return *(_QWORD *)v4;
    }
  }
  return v3;
}
