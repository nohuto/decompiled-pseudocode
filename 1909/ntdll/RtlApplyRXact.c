/*
 * XREFs of RtlApplyRXact @ 0x180089C80
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAbortRXact @ 0x18007F080 (RtlAbortRXact.c)
 *     RXactpCommit @ 0x18007F0C4 (RXactpCommit.c)
 *     ZwSetValueKey @ 0x18009DA80 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x18009E8C0 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x18009EB00 (ZwFlushKey.c)
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
