/*
 * XREFs of CmpDoReDoDeleteValue @ 0x140807300
 * Callers:
 *     CmpDoReDoRecord @ 0x140807354 (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1401B9B90 (ZwDeleteValueKey.c)
 *     CmpDoReOpenTransKey @ 0x14080761C (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoDeleteValue(__int64 a1, UNICODE_STRING *a2)
{
  NTSTATUS v3; // ebx
  HANDLE KeyHandle; // [rsp+38h] [rbp+10h] BYREF

  v3 = CmpDoReOpenTransKey(a1, &a2[2], 2LL, &KeyHandle);
  if ( v3 >= 0 )
  {
    v3 = ZwDeleteValueKey(KeyHandle, a2 + 3);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v3;
}
