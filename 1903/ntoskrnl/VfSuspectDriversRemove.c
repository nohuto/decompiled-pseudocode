/*
 * XREFs of VfSuspectDriversRemove @ 0x140977414
 * Callers:
 *     VfRemoveVerifierEntry @ 0x14098A3E0 (VfRemoveVerifierEntry.c)
 * Callees:
 *     KeReleaseMutex @ 0x14006B9F0 (KeReleaseMutex.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ViSuspectDriversLookupEntry @ 0x1409603F8 (ViSuspectDriversLookupEntry.c)
 *     VfDriverLock @ 0x14096043C (VfDriverLock.c)
 */

__int64 __fastcall VfSuspectDriversRemove(PCUNICODE_STRING String2)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  _QWORD *v4; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rdx

  v2 = 0;
  VfDriverLock();
  v3 = ViSuspectDriversLookupEntry(String2);
  v4 = (_QWORD *)v3;
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 16) == *(_DWORD *)(v3 + 20) )
    {
      v6 = *(_QWORD *)v3;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v7 = (_QWORD *)v4[1], (_QWORD *)*v7 != v4) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      ExFreePoolWithTag(v4, 0x44536656u);
    }
    else
    {
      v2 = -1073741554;
    }
  }
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return v2;
}
