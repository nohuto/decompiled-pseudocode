/*
 * XREFs of WerpCreateCrashDataSection @ 0x1800DC9B0
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DBAB0 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DBF80 (RtlReportExceptionHelper.c)
 * Callees:
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009D390 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009D3D0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009D7D0 (NtCreateSection.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

__int64 __fastcall WerpCreateCrashDataSection(_QWORD *a1, _QWORD *a2)
{
  int Section; // ebx

  if ( a1 )
    *a1 = 0LL;
  if ( a2 )
    *a2 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      Section = NtCreateSection();
      if ( Section >= 0 )
      {
        Section = ZwMapViewOfSection();
        if ( Section >= 0 )
        {
          memset(0LL, 0, 0xF0uLL);
          *a1 = 0LL;
          Section = 0;
          *a2 = 0LL;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741584;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)Section;
}
