/*
 * XREFs of FreeTmpBuffer @ 0x1C0043E70
 * Callers:
 *     NtGdiGetRegionData @ 0x1C001E410 (NtGdiGetRegionData.c)
 *     NtGdiOpenDCW @ 0x1C0043B40 (NtGdiOpenDCW.c)
 *     NtGdiExtCreateRegion @ 0x1C0043D50 (NtGdiExtCreateRegion.c)
 *     NtGdiPolyPolyDraw @ 0x1C0072440 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     <none>
 */

void **__fastcall FreeTmpBuffer(char *a1)
{
  void **result; // rax
  char *v2; // rbx
  __int64 v3; // rax
  char **v4; // rcx

  if ( a1 == gpTmpGlobal )
  {
    result = gpTmpGlobalFree;
    *gpTmpGlobalFree = a1;
  }
  else
  {
    v2 = a1 - 32;
    if ( a1 != (char *)32 )
    {
      KeEnterCriticalRegion();
      v3 = *(_QWORD *)v2;
      if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = (char **)*((_QWORD *)v2 + 1), *v4 != v2) )
        __fastfail(3u);
      *v4 = (char *)v3;
      *(_QWORD *)(v3 + 8) = v4;
      *((_QWORD *)v2 + 1) = v2;
      *(_QWORD *)v2 = v2;
      KeLeaveCriticalRegion();
    }
    result = (void **)IsWin32FreePoolImplSupported();
    if ( (int)result >= 0 )
      return (void **)Win32FreePoolImpl(v2);
  }
  return result;
}
