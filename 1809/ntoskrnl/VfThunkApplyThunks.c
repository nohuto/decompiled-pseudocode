/*
 * XREFs of VfThunkApplyThunks @ 0x140937B30
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x1409387A4 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     MmGetNextSession @ 0x140012740 (MmGetNextSession.c)
 *     MmIsSessionAddress @ 0x1400245B0 (MmIsSessionAddress.c)
 *     MmDetachSession @ 0x14011A630 (MmDetachSession.c)
 *     MmAttachSession @ 0x14011A6C0 (MmAttachSession.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MmQuitNextSession @ 0x1406D08F0 (MmQuitNextSession.c)
 *     MmIsDriverLoadedCurrentSession @ 0x14071F460 (MmIsDriverLoadedCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x140937D74 (ViThunkApplyThunksCurrentSession.c)
 */

__int64 __fastcall VfThunkApplyThunks(__int64 a1, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // edi
  _KPROCESS *i; // rcx
  _KPROCESS *NextSession; // rax
  _KPROCESS *v8; // rbx
  _BYTE v10[48]; // [rsp+20h] [rbp-48h] BYREF

  if ( !a2 )
    return ViThunkApplyThunksCurrentSession(a1, a2);
  LOBYTE(v4) = MmIsSessionAddress(*(_QWORD *)(a1 + 48));
  if ( !v4 )
    return ViThunkApplyThunksCurrentSession(a1, a2);
  v5 = 1;
  for ( i = 0LL; ; i = v8 )
  {
    NextSession = (_KPROCESS *)MmGetNextSession(i);
    v8 = NextSession;
    if ( !NextSession )
      break;
    if ( (int)MmAttachSession(NextSession, (__int64)v10) >= 0 )
    {
      v5 = 1;
      if ( MmIsDriverLoadedCurrentSession(*(_QWORD *)(a1 + 48)) )
        v5 = ViThunkApplyThunksCurrentSession(a1, a2);
      MmDetachSession((__int64)v8, (__int64)v10);
      if ( !v5 )
      {
        MmQuitNextSession(v8);
        return v5;
      }
    }
  }
  return v5;
}
