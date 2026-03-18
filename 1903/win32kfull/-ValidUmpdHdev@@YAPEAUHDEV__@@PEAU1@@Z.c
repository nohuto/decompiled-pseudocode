/*
 * XREFs of ?ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z @ 0x1C012F51C
 * Callers:
 *     NtGdiEngAssociateSurface @ 0x1C012F230 (NtGdiEngAssociateSurface.c)
 *     NtGdiGetDhpdev @ 0x1C02AD860 (NtGdiGetDhpdev.c)
 * Callees:
 *     <none>
 */

struct PDEV *__fastcall ValidUmpdHdev(HDEV a1)
{
  struct PDEV *i; // rbx
  struct PDEV *v4; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0LL;
  GreAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
  for ( i = gppdevList; i; i = *(struct PDEV **)i )
  {
    v4 = i;
    if ( (*((_DWORD *)i + 10) & 0x8000) != 0 && *((HDEV *)i + 2) == a1 )
    {
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v4);
      break;
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  return i;
}
