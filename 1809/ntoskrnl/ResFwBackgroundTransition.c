/*
 * XREFs of ResFwBackgroundTransition @ 0x140950360
 * Callers:
 *     BgpFwLibraryEnable @ 0x14016F7C0 (BgpFwLibraryEnable.c)
 *     ResFwFreeContext @ 0x14094E218 (ResFwFreeContext.c)
 *     BgpFwLibraryDestroy @ 0x140950E4C (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x140950F24 (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14016ECCC (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14016F1E8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14016F238 (BgpFwAcquireLock.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ResFwpPageOutBackground @ 0x14094E460 (ResFwpPageOutBackground.c)
 *     ResFwpPageInBackground @ 0x1409503A4 (ResFwpPageInBackground.c)
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
      if ( v1 == 1 && (dword_140405AD0 & 0xC00) != 0xC00 )
      {
        v2 = qword_140405B18;
        if ( qword_140405B18 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140405B18, 0LL);
          BgpFwFreeMemory((__int64)v2);
        }
        v3 = qword_140405B20;
        if ( qword_140405B20 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140405B20, 0LL);
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
