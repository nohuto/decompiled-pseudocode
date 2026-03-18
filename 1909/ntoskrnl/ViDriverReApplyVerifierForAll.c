/*
 * XREFs of ViDriverReApplyVerifierForAll @ 0x1409667B8
 * Callers:
 *     VfDriverInitSuccess @ 0x1409606C8 (VfDriverInitSuccess.c)
 * Callees:
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x14096043C (VfDriverLock.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140976078 (VfThunkApplyDriverAddedThunks.c)
 *     VfSuspectDriversIsLoaded @ 0x140A3E228 (VfSuspectDriversIsLoaded.c)
 */

void __fastcall ViDriverReApplyVerifierForAll(__int64 **a1)
{
  __int64 *i; // rbx

  if ( ViVerifierDriverAddedThunkListHead )
  {
    for ( i = *a1; i != (__int64 *)a1; i = (__int64 *)*i )
    {
      if ( !RtlEqualUnicodeString(&VfKernelImageName, (PCUNICODE_STRING)(i + 11), 1u) && (i[13] & 0x2000000) != 0 )
      {
        VfDriverLock();
        if ( (unsigned int)VfSuspectDriversIsLoaded(i + 11) )
          VfThunkApplyDriverAddedThunks(i);
        ViDriversLoadLockOwner = 0LL;
        KeReleaseMutex(&ViDriversLoadLock, 0);
      }
    }
  }
}
