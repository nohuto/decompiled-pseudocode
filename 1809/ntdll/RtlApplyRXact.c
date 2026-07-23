/*
 * XREFs of RtlApplyRXact @ 0x18008C530
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     RtlAbortRXact @ 0x180082D50 (RtlAbortRXact.c)
 *     RXactpCommit @ 0x180082D94 (RXactpCommit.c)
 *     ZwSetValueKey @ 0x1800A0EF0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1800A1D10 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x1800A1F50 (ZwFlushKey.c)
 */

NTSTATUS __fastcall RtlApplyRXact(__int64 a1)
{
  void *v1; // rbx
  NTSTATUS result; // eax
  int v4; // edi
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(void **)(a1 + 8);
  RtlInitUnicodeString(&DestinationString, L"Log");
  result = ZwSetValueKey(v1, &DestinationString, 0, 3u, *(PVOID *)(a1 + 24), *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL));
  if ( result >= 0 )
  {
    v4 = ZwFlushKey(v1);
    if ( v4 < 0 )
    {
      ZwDeleteValueKey(v1, &DestinationString);
    }
    else
    {
      v4 = RXactpCommit((__int64 *)a1);
      ZwDeleteValueKey(v1, &DestinationString);
      if ( v4 >= 0 )
      {
        RtlAbortRXact(a1);
        return 0;
      }
    }
    return v4;
  }
  return result;
}
