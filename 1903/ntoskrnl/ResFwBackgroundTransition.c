/*
 * XREFs of ResFwBackgroundTransition @ 0x1409903B0
 * Callers:
 *     BgpFwLibraryEnable @ 0x140178FE0 (BgpFwLibraryEnable.c)
 *     ResFwFreeContext @ 0x14098E218 (ResFwFreeContext.c)
 *     BgpFwLibraryDestroy @ 0x140990EAC (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x140990F84 (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x1401784AC (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x1401785F0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140178A60 (BgpFwAcquireLock.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ResFwpPageOutBackground @ 0x14098E460 (ResFwpPageOutBackground.c)
 *     ResFwpPageInBackground @ 0x1409903F4 (ResFwpPageInBackground.c)
 */

void __fastcall ResFwBackgroundTransition(int a1)
{
  int v1; // ecx
  void *v2; // rcx
  PVOID v3; // rbx

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      if ( v1 == 1 && (dword_14042C030 & 0xC00) != 0xC00 )
      {
        v2 = qword_14042C078;
        if ( qword_14042C078 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_14042C078, 0LL);
          BgpFwFreeMemory((__int64)v2);
        }
        v3 = qword_14042C080;
        if ( qword_14042C080 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_14042C080, 0LL);
          BgpFwReleaseLock();
          ExFreePoolWithTag(v3, 0x4B494742u);
          BgpFwAcquireLock();
        }
        LODWORD(Size) = 0;
      }
    }
    else
    {
      ResFwpPageOutBackground();
    }
  }
  else
  {
    ResFwpPageInBackground();
  }
}
