/*
 * XREFs of WerpAllocateAndInitializeSid @ 0x1C025CF44
 * Callers:
 *     WerKernelSubmitReportForHungProcess @ 0x1C025C9B4 (WerKernelSubmitReportForHungProcess.c)
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall WerpAllocateAndInitializeSid(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        _QWORD *a11)
{
  ULONG v12; // eax
  NTSTATUS v13; // edi
  size_t v14; // rbp
  PVOID PoolWithTag; // rax
  void *v17; // rbx

  v12 = RtlLengthRequiredSid(1u);
  v13 = -1073741823;
  v14 = v12;
  if ( a11 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (int)v12, 0x7765726Bu);
    v17 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v14);
      v13 = RtlInitializeSid(v17, IdentifierAuthority, 1u);
      if ( v13 >= 0 )
      {
        v13 = 0;
        *RtlSubAuthoritySid(v17, 0) = 18;
      }
      else
      {
        DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR RtlInitializeSid failed\n", 263);
      }
      if ( v13 < 0 )
      {
        ExFreePoolWithTag(v17, 0);
        v17 = 0LL;
      }
    }
    else
    {
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR NtAllocateVirtualMemory failed\n", 253);
    }
    *a11 = v17;
    return (unsigned int)v13;
  }
  else
  {
    DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Invalid params\n", 245);
    return 3221225485LL;
  }
}
