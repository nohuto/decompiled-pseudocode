/*
 * XREFs of DxgkInitIoMmu @ 0x1C0156C50
 * Callers:
 *     DriverEntry @ 0x1C02A1904 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 DxgkInitIoMmu()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rax

  result = IoGetIommuInterface(1LL, &unk_1C008EC38);
  v2 = (int)result;
  if ( (int)result < 0 )
  {
    v3 = WdLogNewEntry5_WdError(v1);
    *(_QWORD *)(v3 + 24) = 1LL;
    *(_QWORD *)(v3 + 32) = v2;
    return WdLogEvent5_WdError(v3);
  }
  return result;
}
