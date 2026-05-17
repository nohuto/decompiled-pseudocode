/*
 * XREFs of RtlApplyRXact @ 0x1800895E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAbortRXact @ 0x18007E9E0 (RtlAbortRXact.c)
 *     sub_18007EA24 @ 0x18007EA24 (sub_18007EA24.c)
 *     ZwSetValueKey @ 0x18009D2D0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x18009E110 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x18009E350 (ZwFlushKey.c)
 */

__int64 __fastcall RtlApplyRXact(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  int v4; // edi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v1 = a1[1];
  RtlInitUnicodeString(&DestinationString, L"Log");
  result = ZwSetValueKey(v1, &DestinationString, 0LL, 3LL, a1[3], *(_DWORD *)(a1[3] + 8));
  if ( (int)result >= 0 )
  {
    v4 = ZwFlushKey(v1);
    if ( v4 < 0 )
    {
      ZwDeleteValueKey(v1, &DestinationString);
    }
    else
    {
      v4 = sub_18007EA24(a1);
      ZwDeleteValueKey(v1, &DestinationString);
      if ( v4 >= 0 )
      {
        RtlAbortRXact((__int64)a1);
        return 0LL;
      }
    }
    return (unsigned int)v4;
  }
  return result;
}
