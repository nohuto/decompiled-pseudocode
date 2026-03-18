/*
 * XREFs of DxgkInitIoMmu @ 0x1C015A5CC
 * Callers:
 *     DriverEntry @ 0x1C02D5158 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 DxgkInitIoMmu()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v5; // rax

  result = IoGetIommuInterface(1LL, &unk_1C00A2C40);
  v4 = (int)result;
  if ( (int)result < 0 )
  {
    v5 = WdLogNewEntry5_WdError(v2, v1, v3);
    *(_QWORD *)(v5 + 24) = 1LL;
    *(_QWORD *)(v5 + 32) = v4;
    return WdLogEvent5_WdError(v5);
  }
  return result;
}
