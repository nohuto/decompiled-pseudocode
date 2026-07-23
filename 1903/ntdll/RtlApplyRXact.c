/*
 * XREFs of RtlApplyRXact @ 0x1800895E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlAbortRXact @ 0x18007E9E0 (RtlAbortRXact.c)
 *     sub_18007EA24 @ 0x18007EA24 (sub_18007EA24.c)
 *     ZwSetValueKey @ 0x18009D2D0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x18009E110 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x18009E350 (ZwFlushKey.c)
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
      v4 = sub_18007EA24((__int64 *)a1);
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
