/*
 * XREFs of VfThunkApplyMandatoryThunks @ 0x14097613C
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x1409770B4 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     MmGetNextSession @ 0x14008CB70 (MmGetNextSession.c)
 *     MmDetachSession @ 0x14008CE30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008CED0 (MmAttachSession.c)
 *     MmIsSessionAddress @ 0x1400C6CC0 (MmIsSessionAddress.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MmQuitNextSession @ 0x1406F04A0 (MmQuitNextSession.c)
 *     MmIsDriverLoadedCurrentSession @ 0x14070A378 (MmIsDriverLoadedCurrentSession.c)
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x1409763F4 (ViThunkApplyMandatoryThunksCurrentSession.c)
 */

__int64 __fastcall VfThunkApplyMandatoryThunks(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  void *i; // rcx
  ULONG_PTR NextSession; // rax
  void *v7; // rbx
  _BYTE v9[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( !a2 || !MmIsSessionAddress(*(_QWORD *)(a1 + 48)) )
    return ViThunkApplyMandatoryThunksCurrentSession(a1, a2);
  v4 = 1;
  for ( i = 0LL; ; i = v7 )
  {
    NextSession = MmGetNextSession(i);
    v7 = (void *)NextSession;
    if ( !NextSession )
      break;
    if ( (int)MmAttachSession(NextSession) >= 0 )
    {
      v4 = 1;
      if ( MmIsDriverLoadedCurrentSession(*(_QWORD *)(a1 + 48)) )
        v4 = ViThunkApplyMandatoryThunksCurrentSession(a1, a2);
      MmDetachSession((__int64)v7, (__int64)v9);
      if ( !v4 )
      {
        MmQuitNextSession(v7);
        return v4;
      }
    }
  }
  return v4;
}
