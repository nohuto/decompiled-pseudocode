/*
 * XREFs of CmpDoReDoSetValueExisting @ 0x1408075B0
 * Callers:
 *     CmpDoReDoRecord @ 0x140807354 (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401B8D70 (ZwSetValueKey.c)
 *     CmpDoReOpenTransKey @ 0x14080761C (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoSetValueExisting(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF

  v3 = CmpDoReOpenTransKey(a1, a2 + 32, 2LL, &KeyHandle);
  if ( v3 >= 0 )
  {
    v3 = ZwSetValueKey(
           KeyHandle,
           (PUNICODE_STRING)(a2 + 48),
           0,
           *(_DWORD *)(a2 + 64),
           *(PVOID *)(a2 + 72),
           *(_DWORD *)(a2 + 68));
    ZwClose(KeyHandle);
  }
  return (unsigned int)v3;
}
