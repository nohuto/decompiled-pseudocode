/*
 * XREFs of HvlpCheckTscSync @ 0x140278478
 * Callers:
 *     HvlPhase2Initialize @ 0x140193444 (HvlPhase2Initialize.c)
 *     HvlpPowerStateCallback @ 0x140271570 (HvlpPowerStateCallback.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 *     HvlpWriteEventLog @ 0x140278C28 (HvlpWriteEventLog.c)
 */

PSLIST_ENTRY HvlpCheckTscSync()
{
  _QWORD *v0; // rbx
  _QWORD *v1; // rdi
  PSLIST_ENTRY result; // rax
  PHYSICAL_ADDRESS v3[3]; // [rsp+20h] [rbp-E0h] BYREF
  PHYSICAL_ADDRESS v4[3]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v5; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v6; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v8; // [rsp+88h] [rbp-78h]
  __int64 v9; // [rsp+90h] [rbp-70h]
  _BYTE v10[16]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v11[2064]; // [rsp+A8h] [rbp-58h] BYREF

  v5 = 0uLL;
  v6 = 0LL;
  v0 = HvlpAcquireHypercallPage(v4, 1, (__int64)v10, 8LL);
  v1 = HvlpAcquireHypercallPage(v3, 2, (__int64)v11, 1032LL);
  *(_DWORD *)v0 = 14;
  if ( !(unsigned __int16)HvcallCodeVa() )
  {
    v5 = *(_OWORD *)v1;
    v6 = v1[2];
  }
  HvlpReleaseHypercallPage((unsigned int *)v3);
  result = HvlpReleaseHypercallPage((unsigned int *)v4);
  if ( BYTE1(v5) )
  {
    if ( (_BYTE)v5 )
    {
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v5 + 8;
      v9 = 8LL;
      v8 = &v6;
      return (PSLIST_ENTRY)HvlpWriteEventLog(&HV_EVENTLOG_TSC_SYNC_FAILED, 2u, &UserData);
    }
  }
  return result;
}
