/*
 * XREFs of CmpDoReDoSetEntireSecurityDescriptor @ 0x1405818F0
 * Callers:
 *     CmpDoReDoRecord @ 0x140807334 (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     ZwSetSecurityObject @ 0x1401BB590 (ZwSetSecurityObject.c)
 *     CmpDoReOpenTransKey @ 0x1408075FC (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoSetEntireSecurityDescriptor(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  v3 = CmpDoReOpenTransKey(a1, a2 + 32, 17563648LL, &Handle);
  if ( v3 >= 0 )
  {
    v3 = ZwSetSecurityObject(Handle, 0x10180u, *(PSECURITY_DESCRIPTOR *)(a2 + 56));
    ZwClose(Handle);
  }
  return (unsigned int)v3;
}
