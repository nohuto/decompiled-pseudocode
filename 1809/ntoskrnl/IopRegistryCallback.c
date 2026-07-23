/*
 * XREFs of IopRegistryCallback @ 0x14074C9B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1401BA550 (ZwNotifyChangeKey.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     IopRegistryOpenDeepestPath @ 0x14074CAA0 (IopRegistryOpenDeepestPath.c)
 */

NTSTATUS __fastcall IopRegistryCallback(unsigned int a1)
{
  wchar_t *v1; // rbx
  __int64 v2; // rdi
  wchar_t **v3; // rsi
  struct _IO_STATUS_BLOCK *IoStatusBlock; // rbx
  bool v5; // zf
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  char v8; // [rsp+80h] [rbp+8h] BYREF
  wchar_t *v9; // [rsp+88h] [rbp+10h] BYREF

  v1 = (wchar_t *)a1;
  v2 = 14LL * a1;
  RtlInitUnicodeString(&DestinationString, (&IopRegistryRegisteredCallbacks)[v2]);
  v3 = &(&IopRegistryRegisteredCallbacks)[v2];
  v3[8] = 0LL;
  v3[10] = (wchar_t *)IopRegistryCallback;
  v3[11] = v1;
  if ( (*(_DWORD *)(&IopRegistryRegisteredCallbacks + v2 + 5) & 1) != 0 )
  {
    ((void (__fastcall *)(_QWORD))(&IopRegistryRegisteredCallbacks)[v2 + 1])(*(&IopRegistryRegisteredCallbacks + v2 + 3));
    IoStatusBlock = (struct _IO_STATUS_BLOCK *)&(&IopRegistryRegisteredCallbacks)[v2 + 6];
    result = ZwNotifyChangeKey(
               (&IopRegistryRegisteredCallbacks)[v2 + 2],
               0LL,
               (PIO_APC_ROUTINE)(v3 + 8),
               (PVOID)1,
               IoStatusBlock,
               *((_DWORD *)&IopRegistryRegisteredCallbacks + 2 * v2 + 2),
               1u,
               0LL,
               0,
               1u);
    if ( result >= 0 )
      return result;
  }
  else
  {
    IoStatusBlock = (struct _IO_STATUS_BLOCK *)&(&IopRegistryRegisteredCallbacks)[v2 + 6];
  }
  if ( (int)IopRegistryOpenDeepestPath(&DestinationString, &v9, &v8) < 0 )
    goto LABEL_10;
  ZwClose((&IopRegistryRegisteredCallbacks)[v2 + 2]);
  v5 = v8 == 1;
  (&IopRegistryRegisteredCallbacks)[v2 + 2] = v9;
  if ( v5 )
  {
    *((_DWORD *)&IopRegistryRegisteredCallbacks + 2 * v2 + 10) |= 1u;
    ((void (__fastcall *)(_QWORD))(&IopRegistryRegisteredCallbacks)[v2 + 1])(*(&IopRegistryRegisteredCallbacks + v2 + 3));
  }
  result = ZwNotifyChangeKey(
             (&IopRegistryRegisteredCallbacks)[v2 + 2],
             0LL,
             (PIO_APC_ROUTINE)(v3 + 8),
             (PVOID)1,
             IoStatusBlock,
             *((_DWORD *)&IopRegistryRegisteredCallbacks + 2 * v2 + 2),
             1u,
             0LL,
             0,
             1u);
  if ( result < 0 )
  {
LABEL_10:
    result = ZwClose((&IopRegistryRegisteredCallbacks)[v2 + 2]);
    *((_DWORD *)&IopRegistryRegisteredCallbacks + 2 * v2 + 2) = 0;
  }
  return result;
}
