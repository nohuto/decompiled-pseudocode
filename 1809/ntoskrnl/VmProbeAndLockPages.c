/*
 * XREFs of VmProbeAndLockPages @ 0x14030BB70
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 *     MiProbeAndLockPages @ 0x140040CF0 (MiProbeAndLockPages.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x1402A8F98 (MmUpdateMdlTrackerForMdlSwitch.c)
 */

__int64 __fastcall VmProbeAndLockPages(struct _MDL *BugCheckParameter3, char a2, unsigned int a3)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a2 || a3 > 1 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    if ( (char *)BugCheckParameter3->StartVa
       + BugCheckParameter3->ByteCount
       + (unsigned __int64)BugCheckParameter3->ByteOffset <= (PVOID)0x7FFFFFFEFFFFLL )
    {
      MiProbeAndLockPages((__int64)BugCheckParameter3, 0, a3 != 0);
      if ( (BugCheckParameter3->MdlFlags & 0xFFFFFF77) == 0x102 )
      {
        MmUpdateMdlTrackerForMdlSwitch((ULONG_PTR)BugCheckParameter3, 1);
        return v4;
      }
      MmUnlockPages(BugCheckParameter3);
    }
    return (unsigned int)-1073741637;
  }
}
