/*
 * XREFs of ToBuffer @ 0x1C006A280
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C001A610 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C001B6E0 (WriteObject.c)
 *     ValidateTarget @ 0x1C001BBA0 (ValidateTarget.c)
 *     ConvertToBuffer @ 0x1C006AD38 (ConvertToBuffer.c)
 */

__int64 __fastcall ToBuffer(struct _SLIST_ENTRY *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  result = ValidateArgTypes((__int64)a1, *(_QWORD *)(a2 + 80), 0, "D");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 40LL, 0x87u, (__int64)&v5);
    if ( !(_DWORD)result )
    {
      result = ConvertToBuffer(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
      if ( !(_DWORD)result )
        return WriteObject(a1, v5, *(_QWORD *)(a2 + 88));
    }
  }
  return result;
}
