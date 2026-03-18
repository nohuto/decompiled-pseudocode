/*
 * XREFs of CmpDoReDoRenameKey @ 0x140807430
 * Callers:
 *     CmpDoReDoRecord @ 0x140807354 (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwRenameKey @ 0x1401BAED0 (ZwRenameKey.c)
 *     CmpDoReOpenTransKey @ 0x14080761C (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoRenameKey(__int64 a1, UNICODE_STRING *a2)
{
  NTSTATUS v3; // ebx
  HANDLE KeyHandle; // [rsp+38h] [rbp+10h] BYREF

  v3 = CmpDoReOpenTransKey(a1, &a2[2], 131078LL, &KeyHandle);
  if ( v3 >= 0 )
  {
    v3 = ZwRenameKey(KeyHandle, a2 + 3);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v3;
}
