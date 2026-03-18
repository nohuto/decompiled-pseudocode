/*
 * XREFs of CmpDoReDoRenameKey @ 0x140840C70
 * Callers:
 *     CmpDoReDoRecord @ 0x140840B98 (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwRenameKey @ 0x1401C2E50 (ZwRenameKey.c)
 *     CmpDoReOpenTransKey @ 0x140840E5C (CmpDoReOpenTransKey.c)
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
