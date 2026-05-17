/*
 * XREFs of RtlApplyRXact @ 0x18008C520
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     RtlAbortRXact @ 0x180082D40 (RtlAbortRXact.c)
 *     RXactpCommit @ 0x180082D84 (RXactpCommit.c)
 *     ZwSetValueKey @ 0x1800A0ED0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1800A1CF0 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x1800A1F30 (ZwFlushKey.c)
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
      v4 = RXactpCommit(a1);
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
