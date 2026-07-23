/*
 * XREFs of sub_18010E724 @ 0x18010E724
 * Callers:
 *     sub_180087200 @ 0x180087200 (sub_180087200.c)
 * Callees:
 *     ZwWriteFile @ 0x18009C7E0 (ZwWriteFile.c)
 */

__int64 __fastcall sub_18010E724(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _QWORD *v7; // rbp
  NTSTATUS v8; // edx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  *a2 = 0;
  *a3 = 0;
  if ( !*(_DWORD *)(a1 + 452) )
    return 0LL;
  v7 = (_QWORD *)(a1 + 360);
  v8 = ZwWriteFile(
         *(HANDLE *)(a1 + 144),
         0LL,
         0LL,
         0LL,
         &IoStatusBlock,
         *(PVOID *)(a1 + 440),
         *(_DWORD *)(a1 + 208),
         (PLARGE_INTEGER)(a1 + 360),
         0LL);
  if ( v8 >= 0 )
  {
    *v7 += *(unsigned int *)(a1 + 452);
    *a2 = *(_DWORD *)(a1 + 456);
  }
  else
  {
    *a3 = *(_DWORD *)(a1 + 456);
  }
  return (unsigned int)v8;
}
