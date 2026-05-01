/*
 * XREFs of ?SetFrameStyle@WindowWrapperBase@@UEAAXW4ApplicationWindowFrameStyleInternal@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1802C7170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::SetFrameStyle(__int64 a1, int a2)
{
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 272) + 192LL))(*(_QWORD *)(a1 + 272), &SRWLock);
  *(_DWORD *)(a1 + 464) = a2;
  *(_BYTE *)(a1 + 468) = 1;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
