/*
 * XREFs of Divide @ 0x1C0068D40
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C001A610 (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C001BBA0 (ValidateTarget.c)
 *     PushPost @ 0x1C0067DB8 (PushPost.c)
 */

__int64 __fastcall Divide(struct _SLIST_ENTRY *a1, __int64 a2)
{
  __int64 result; // rax
  char v5; // [rsp+48h] [rbp+10h] BYREF

  result = ValidateArgTypes((__int64)a1, *(_QWORD *)(a2 + 80), 0, "II");
  if ( !(_DWORD)result )
  {
    result = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 80LL, 0x87u, (__int64)&v5);
    if ( !(_DWORD)result )
    {
      result = ValidateTarget((__int64)a1, *(_QWORD *)(a2 + 80) + 120LL, 0x87u, (__int64)&v5);
      if ( !(_DWORD)result )
        return PushPost(a1, (__int64)ProcessDivide, a2, 0LL, *(_QWORD *)(a2 + 88));
    }
  }
  return result;
}
