/*
 * XREFs of HvlpLogGuestStateScrubbingStatus @ 0x14028C68C
 * Callers:
 *     HvlPhase2Initialize @ 0x14019D5EC (HvlPhase2Initialize.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 *     HvlpWriteEventLog @ 0x14028CD0C (HvlpWriteEventLog.c)
 */

PSLIST_ENTRY HvlpLogGuestStateScrubbingStatus()
{
  _QWORD *v0; // rbx
  int *v1; // rdi
  PSLIST_ENTRY result; // rax
  int v3; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v4; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned int v5; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v6; // [rsp+34h] [rbp-D4h] BYREF
  unsigned int v7; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v8; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v9; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v10; // [rsp+44h] [rbp-C4h] BYREF
  PHYSICAL_ADDRESS v11[4]; // [rsp+48h] [rbp-C0h] BYREF
  PHYSICAL_ADDRESS v12[4]; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  unsigned int *v14; // [rsp+98h] [rbp-70h]
  __int64 v15; // [rsp+A0h] [rbp-68h]
  unsigned int *v16; // [rsp+A8h] [rbp-60h]
  __int64 v17; // [rsp+B0h] [rbp-58h]
  unsigned int *v18; // [rsp+B8h] [rbp-50h]
  __int64 v19; // [rsp+C0h] [rbp-48h]
  unsigned int *v20; // [rsp+C8h] [rbp-40h]
  __int64 v21; // [rsp+D0h] [rbp-38h]
  unsigned int *v22; // [rsp+D8h] [rbp-30h]
  __int64 v23; // [rsp+E0h] [rbp-28h]
  unsigned int *v24; // [rsp+E8h] [rbp-20h]
  __int64 v25; // [rsp+F0h] [rbp-18h]
  unsigned int *v26; // [rsp+F8h] [rbp-10h]
  __int64 v27; // [rsp+100h] [rbp-8h]
  _BYTE v28[16]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v29[2064]; // [rsp+118h] [rbp+10h] BYREF

  memset(v12, 0, sizeof(v12));
  memset(v11, 0, sizeof(v11));
  HvlpGuestStateScrubbingStatus = 0;
  v0 = HvlpAcquireHypercallPage(v12, 1, (__int64)v28, 8LL);
  v1 = (int *)HvlpAcquireHypercallPage(v11, 2, (__int64)v29, 1032LL);
  *(_DWORD *)v0 = 25;
  if ( !(unsigned __int16)HvcallCodeVa() )
    HvlpGuestStateScrubbingStatus = *v1;
  HvlpReleaseHypercallPage((unsigned int *)v11);
  result = HvlpReleaseHypercallPage((unsigned int *)v12);
  if ( HvlpGuestStateScrubbingStatus )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    v15 = 4LL;
    v3 = HvlpGuestStateScrubbingStatus & 1;
    v17 = 4LL;
    UserData.Ptr = (ULONGLONG)&v3;
    v19 = 4LL;
    v21 = 4LL;
    v4 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 1) & 1;
    v14 = &v4;
    v23 = 4LL;
    v5 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 2) & 1;
    v16 = &v5;
    v25 = 4LL;
    v6 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 3) & 1;
    v18 = &v6;
    v27 = 4LL;
    v7 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 4) & 1;
    v20 = &v7;
    v8 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 5) & 1;
    v22 = &v8;
    v9 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 7) & 1;
    v10 = ((unsigned int)HvlpGuestStateScrubbingStatus >> 8) & 1;
    v24 = &v9;
    v26 = &v10;
    HvlpWriteEventLog(&HV_EVENTLOG_GUEST_STATE_SCRUBBING, 8u, &UserData);
    result = (PSLIST_ENTRY)(unsigned int)HvlpGuestStateScrubbingStatus;
    if ( (HvlpGuestStateScrubbingStatus & 0x40) != 0 )
      return (PSLIST_ENTRY)HvlpWriteEventLog(&HV_EVENTLOG_GUEST_STATE_SCRUBBING_DISABLED_CORE_SCHEDULER, 0, 0LL);
  }
  return result;
}
