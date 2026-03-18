/*
 * XREFs of CmpDoReDoRenameKey @ 0x1408402D0
 * Callers:
 *     CmpDoReDoRecord @ 0x1408401F8 (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwRenameKey @ 0x1401C39D0 (ZwRenameKey.c)
 *     CmpDoReOpenTransKey @ 0x1408404BC (CmpDoReOpenTransKey.c)
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
