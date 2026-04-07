/*
 * XREFs of ?v_ShouldIncludeInSnapshot@CDCompDesktopThumbnail@@UEAA_NPEAVCWindowData@@@Z @ 0x1800B04F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CDCompDesktopThumbnail::v_ShouldIncludeInSnapshot(CDCompDesktopThumbnail *this, struct CWindowData *a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r10
  __int64 v4; // r8
  __int64 v5; // rdx

  if ( *((char *)a2 + 607) >= 0 )
  {
    v2 = *((_DWORD *)a2 + 128);
    if ( !v2 )
      return 1;
    v3 = *((_QWORD *)a2 + 61);
    v4 = 0LL;
    while ( 1 )
    {
      v5 = *(_QWORD *)(v3 + 8 * v4);
      if ( *(_BYTE *)(v5 + 42) )
      {
        if ( *(_DWORD *)(v5 + 120) == 1 )
          break;
      }
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= v2 )
        return 1;
    }
  }
  return 0;
}
