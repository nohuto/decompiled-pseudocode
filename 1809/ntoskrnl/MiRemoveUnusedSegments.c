/*
 * XREFs of MiRemoveUnusedSegments @ 0x1402A3220
 * Callers:
 *     MiProcessDereferenceList @ 0x140154150 (MiProcessDereferenceList.c)
 *     MiDereferenceSegmentThread @ 0x1401876E0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     MiProcessDereferenceList @ 0x140154150 (MiProcessDereferenceList.c)
 *     CcUnmapInactiveViews @ 0x14026AB50 (CcUnmapInactiveViews.c)
 *     MiDeleteCachedSegment @ 0x1402A1A54 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1402A1C08 (MiDeleteCachedSubsection.c)
 *     MiShouldTrimUnusedSegments @ 0x1402A35F4 (MiShouldTrimUnusedSegments.c)
 */

__int64 __fastcall MiRemoveUnusedSegments(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // r15d
  unsigned __int64 v6; // rdi
  int v7; // ebp
  ULONG_PTR v8; // r8
  unsigned __int64 v9; // r14
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r14

  v2 = 0;
  v3 = 0;
  if ( a2 )
  {
    if ( a2 >= qword_14043F7E8 )
      v6 = 0LL;
    else
      v6 = qword_14043F7E8 - a2;
    v7 = 0;
  }
  else
  {
    v7 = 32;
    v6 = 0LL;
  }
  v8 = 1000LL * *(_QWORD *)(a1 + 7120) / qword_14043F5D0;
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 1632);
    v10 = ((unsigned __int64)qword_140439C98 * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
    v11 = v9;
    v12 = v8 * (qword_140439C98 / 0x3E8uLL);
    if ( v12 <= v9 )
      v11 = v8 * (qword_140439C98 / 0x3E8uLL);
    if ( v11 )
    {
      v13 = v9 - v11;
      if ( v13 < 0x100000 )
        v13 = 0x100000LL;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( a2 )
          {
            if ( qword_14043F7E8 <= v6 )
              return v2;
          }
          else
          {
            if ( !v7 )
              return v2;
            v12 = qword_14043F868;
            v10 = qword_14043F868 / 0xAuLL;
            if ( qword_14043F7E8 < 9 * (qword_14043F868 / 0xAuLL) )
              return v2;
            --v7;
          }
          if ( !(unsigned int)MiShouldTrimUnusedSegments(v12, v10) || *(_QWORD *)(a1 + 1632) <= v13 )
            return v2;
          if ( (++v3 & 0x3F) == 0 )
          {
            MiProcessDereferenceList(a1, 0);
            if ( v3 >= 0x80 )
              CcUnmapInactiveViews(0LL);
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
          }
          if ( *(_QWORD *)(a1 + 1640) != a1 + 1640 )
            break;
          if ( *(_QWORD *)(a1 + 1656) == a1 + 1656 )
          {
            if ( *(_DWORD *)(a1 + 108) || !(unsigned int)CcUnmapInactiveViews(0LL) )
              return v2;
          }
          else if ( (int)MiDeleteCachedSubsection(a1) >= 0 )
          {
            goto LABEL_30;
          }
        }
        if ( (unsigned int)MiDeleteCachedSegment(a1) )
LABEL_30:
          v2 = 1;
      }
    }
  }
  return 0LL;
}
