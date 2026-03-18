/*
 * XREFs of ?ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z @ 0x1C001F5B0
 * Callers:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0018B70 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     HmgMarkLazyDelete @ 0x1C0019020 (HmgMarkLazyDelete.c)
 *     HmgLock @ 0x1C001DB10 (HmgLock.c)
 *     DEC_SHARE_REF_CNT @ 0x1C001DF00 (DEC_SHARE_REF_CNT.c)
 *     HmgShareLock @ 0x1C001F940 (HmgShareLock.c)
 * Callees:
 *     <none>
 */

void __fastcall GdiHandleEntryDirectory::ReleaseEntryLock(GdiHandleEntryDirectory *this, unsigned int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r9
  __int64 v4; // r10

  v2 = *((_DWORD *)this + 514);
  if ( a2 < v2 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
  {
    v3 = ((a2 - v2) >> 16) + 1;
    if ( a2 < v2 )
      v3 = 0LL;
    v4 = *((_QWORD *)this + v3 + 1);
    if ( (_DWORD)v3 )
      a2 += ((1 - (_DWORD)v3) << 16) - v2;
    *(_DWORD *)(*(_QWORD *)v4 + 24LL * a2 + 8) &= ~1u;
    ExReleasePushLockExclusiveEx(
      *(_QWORD *)(**(_QWORD **)(v4 + 24) + 8 * ((unsigned __int64)a2 >> 8)) + 16LL * (unsigned __int8)a2,
      0LL);
    KeLeaveCriticalRegion();
  }
}
