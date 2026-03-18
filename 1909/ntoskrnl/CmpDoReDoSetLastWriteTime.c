/*
 * XREFs of CmpDoReDoSetLastWriteTime @ 0x14084038C
 * Callers:
 *     CmpDoReDoRecord @ 0x1408401F8 (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwSetInformationKey @ 0x1401C3E90 (ZwSetInformationKey.c)
 *     CmpDoReOpenTransKey @ 0x1408404BC (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoSetLastWriteTime(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  HANDLE KeyHandle; // [rsp+38h] [rbp+10h] BYREF
  __int64 KeySetInformation; // [rsp+40h] [rbp+18h] BYREF

  v3 = CmpDoReOpenTransKey(a1, a2 + 32, 2LL, &KeyHandle);
  if ( v3 >= 0 )
  {
    KeySetInformation = *(_QWORD *)(a2 + 48);
    v3 = ZwSetInformationKey(KeyHandle, KeyWriteTimeInformation, &KeySetInformation, 8u);
    ZwClose(KeyHandle);
  }
  return (unsigned int)v3;
}
