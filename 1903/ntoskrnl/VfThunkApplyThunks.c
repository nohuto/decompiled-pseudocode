/*
 * XREFs of VfThunkApplyThunks @ 0x140976220
 * Callers:
 *     VfSuspectDriversLoadCallback @ 0x1409770B4 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     MmGetNextSession @ 0x14008B870 (MmGetNextSession.c)
 *     MmDetachSession @ 0x14008BB30 (MmDetachSession.c)
 *     MmAttachSession @ 0x14008BBD0 (MmAttachSession.c)
 *     MmIsSessionAddress @ 0x14009EE80 (MmIsSessionAddress.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MmQuitNextSession @ 0x1406EE950 (MmQuitNextSession.c)
 *     MmIsDriverLoadedCurrentSession @ 0x140708598 (MmIsDriverLoadedCurrentSession.c)
 *     ViThunkApplyThunksCurrentSession @ 0x14097647C (ViThunkApplyThunksCurrentSession.c)
 */

__int64 __fastcall VfThunkApplyThunks(__int64 a1, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // edi
  void *i; // rcx
  ULONG_PTR NextSession; // rax
  void *v8; // rbx
  _BYTE v10[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  if ( !a2 )
    return ViThunkApplyThunksCurrentSession(a1, a2);
  LOBYTE(v4) = MmIsSessionAddress(*(_QWORD *)(a1 + 48));
  if ( !v4 )
    return ViThunkApplyThunksCurrentSession(a1, a2);
  v5 = 1;
  for ( i = 0LL; ; i = v8 )
  {
    NextSession = MmGetNextSession(i);
    v8 = (void *)NextSession;
    if ( !NextSession )
      break;
    if ( (int)MmAttachSession(NextSession) >= 0 )
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
