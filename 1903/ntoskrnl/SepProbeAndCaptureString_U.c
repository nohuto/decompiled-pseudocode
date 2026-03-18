/*
 * XREFs of SepProbeAndCaptureString_U @ 0x140621690
 * Callers:
 *     NtPrivilegedServiceAuditAlarm @ 0x1406200C0 (NtPrivilegedServiceAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140620540 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtCloseObjectAuditAlarm @ 0x1406CF470 (NtCloseObjectAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140712CC0 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1407435A0 (NtPrivilegeObjectAuditAlarm.c)
 *     NtDeleteObjectAuditAlarm @ 0x1408DED00 (NtDeleteObjectAuditAlarm.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SepProbeAndCaptureString_U(unsigned __int64 a1, __int64 a2)
{
  int v3; // ebx
  const void *v4; // rdi
  unsigned __int64 v5; // rcx
  _WORD *PoolWithTag; // rax
  unsigned int v8; // [rsp+24h] [rbp-34h]

  *(_QWORD *)a2 = 0LL;
  v8 = 0;
  if ( a1 >= 0x7FFFFFFF0000LL )
    a1 = 0x7FFFFFFF0000LL;
  v3 = *(_DWORD *)a1;
  v4 = *(const void **)(a1 + 8);
  if ( (unsigned __int16)*(_DWORD *)a1 )
  {
    if ( ((unsigned __int8)v4 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = (unsigned __int64)v4 + (unsigned __int16)v3;
    if ( v5 > 0x7FFFFFFF0000LL || v5 < (unsigned __int64)v4 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( (v3 & 1) != 0 || (unsigned __int16)v3 == 65534 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v3 + 16LL, 0x73556553u);
    *(_QWORD *)a2 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = v3;
      *(_WORD *)(*(_QWORD *)a2 + 2LL) = v3;
      *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)a2 + 16LL;
      if ( (_WORD)v3 )
        memmove(*(void **)(*(_QWORD *)a2 + 8LL), v4, (unsigned __int16)v3);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v8;
}
