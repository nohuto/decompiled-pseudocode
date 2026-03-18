/*
 * XREFs of ToInteger @ 0x1C000BDD0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C000A8E0 (WriteObject.c)
 *     ValidateTarget @ 0x1C000AF3C (ValidateTarget.c)
 *     ConvertToInteger @ 0x1C000BE4C (ConvertToInteger.c)
 */

__int64 __fastcall ToInteger(struct _SLIST_ENTRY *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  result = ValidateArgTypes((__int64)a1, *(_QWORD *)(a2 + 80), 0, "E");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 40LL, 135LL, (__int64)&v6);
    if ( !(_DWORD)result )
    {
      result = ConvertToInteger(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
      if ( !(_DWORD)result )
        return WriteObject(a1, v6, *(_QWORD *)(a2 + 88), v5);
    }
  }
  return result;
}
