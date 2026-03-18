/*
 * XREFs of CmpDoReDoSetLastWriteTime @ 0x1408074EC
 * Callers:
 *     CmpDoReDoRecord @ 0x140807354 (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwSetInformationKey @ 0x1401BB390 (ZwSetInformationKey.c)
 *     CmpDoReOpenTransKey @ 0x14080761C (CmpDoReOpenTransKey.c)
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
