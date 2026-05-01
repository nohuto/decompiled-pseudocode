/*
 * XREFs of CrmGlobalsRundown @ 0x18003226C
 * Callers:
 *     CrmGlobalsPeriodicRundown @ 0x1800071C0 (CrmGlobalsPeriodicRundown.c)
 *     PsmCrmSessionUserNotification @ 0x180040360 (PsmCrmSessionUserNotification.c)
 * Callees:
 *     CrmLogStateMonitorRundown @ 0x18003235C (CrmLogStateMonitorRundown.c)
 *     CrmGlobalsRegistrationRundownHelper @ 0x1800339E8 (CrmGlobalsRegistrationRundownHelper.c)
 */

__int64 CrmGlobalsRundown()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  char v3; // dl
  unsigned __int64 v4; // rcx
  PVOID *v5; // rbx
  __int64 v6; // rdi

  RtlAcquireSRWLockShared(&unk_18009BC58);
  v0 = xmmword_18009BC68;
  if ( (_QWORD)xmmword_18009BC68 )
  {
    while ( 1 )
    {
LABEL_2:
      if ( (int)CrmGlobalsRegistrationRundownHelper(v0, 0LL) < 0 )
        goto LABEL_15;
      v1 = *(_QWORD *)v0;
      if ( !*(_QWORD *)v0 )
      {
        v1 = *(_QWORD *)(v0 + 8);
        if ( !v1 )
          break;
      }
      if ( (BYTE8(xmmword_18009BC68) & 1) != 0 )
        v0 ^= v1;
      else
        v0 = v1;
    }
    v2 = v0;
    v3 = BYTE8(xmmword_18009BC68) & 1;
    while ( 1 )
    {
      v2 = *(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v3 )
      {
        if ( !v2 )
          break;
        v2 ^= v0;
      }
      if ( !v2 )
        break;
      v4 = *(_QWORD *)(v2 + 8);
      if ( v3 )
      {
        if ( !v4 )
          goto LABEL_14;
        v4 ^= v2;
      }
      if ( v4 && v4 != v0 )
      {
        v0 = v4;
        goto LABEL_2;
      }
LABEL_14:
      v0 = v2;
    }
  }
LABEL_15:
  RtlReleaseSRWLockShared(&unk_18009BC58);
  RtlAcquireSRWLockShared(CrmGlobals);
  v5 = &qword_18009BB70;
  v6 = 27LL;
  do
  {
    if ( *v5 )
      CrmLogStateMonitorRundown();
    ++v5;
    --v6;
  }
  while ( v6 );
  return RtlReleaseSRWLockShared(CrmGlobals);
}
