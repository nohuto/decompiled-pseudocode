/*
 * XREFs of FreeTmpBuffer @ 0x1C0039D50
 * Callers:
 *     NtGdiOpenDCW @ 0x1C0039A20 (NtGdiOpenDCW.c)
 *     NtGdiExtCreateRegion @ 0x1C0039C30 (NtGdiExtCreateRegion.c)
 *     NtGdiGetRegionData @ 0x1C003A7E0 (NtGdiGetRegionData.c)
 *     NtGdiPolyPolyDraw @ 0x1C00AD960 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     <none>
 */

void __fastcall FreeTmpBuffer(char *a1)
{
  char *v1; // rbx
  __int64 v2; // rax
  char **v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  if ( a1 == gpTmpGlobal )
  {
    *gpTmpGlobalFree = a1;
  }
  else
  {
    v1 = a1 - 32;
    if ( a1 != (char *)32 )
    {
      KeEnterCriticalRegion();
      v2 = *(_QWORD *)v1;
      if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || (v3 = (char **)*((_QWORD *)v1 + 1), *v3 != v1) )
        __fastfail(3u);
      *v3 = (char *)v2;
      *(_QWORD *)(v2 + 8) = v3;
      *((_QWORD *)v1 + 1) = v1;
      *(_QWORD *)v1 = v1;
      KeLeaveCriticalRegion();
      if ( (int)IsWin32FreePoolImplSupported(v5, v4, v6) >= 0 )
        Win32FreePoolImpl(v1);
    }
  }
}
