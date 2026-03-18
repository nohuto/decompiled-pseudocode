/*
 * XREFs of ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001D5B0
 * Callers:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00170E0 (--1SURFMEM@@QEAA@XZ.c)
 *     GreGetDeviceCaps @ 0x1C0018CC0 (GreGetDeviceCaps.c)
 *     hbmSelectBitmap @ 0x1C001A230 (hbmSelectBitmap.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C001A950 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     _GetDCEx @ 0x1C001AAA0 (_GetDCEx.c)
 *     GreGetBounds @ 0x1C001BE60 (GreGetBounds.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001D470 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001D6E0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     HmgLockEx @ 0x1C001E960 (HmgLockEx.c)
 *     ReleaseCacheDC @ 0x1C001ED70 (ReleaseCacheDC.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C001F930 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0020440 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C0021110 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z @ 0x1C0021B94 (-ReleaseLockAndEntry@GdiHandleManager@@QEAAXPEAVOBJECT@@@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C0022090 (NtGdiDeleteObjectApp.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0025390 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C0077450 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 * Callees:
 *     <none>
 */

struct _ENTRY *__fastcall GdiHandleEntryDirectory::AcquireEntryLock(
        GdiHandleEntryDirectory *this,
        unsigned int a2,
        char a3)
{
  unsigned int v4; // edx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rsi
  unsigned __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // r13

  v4 = *((_DWORD *)this + 514);
  if ( a2 >= v4 + ((*((unsigned __int16 *)this + 1) + 0xFFFF) << 16) )
    return 0LL;
  v6 = 0LL;
  v7 = ((a2 - v4) >> 16) + 1;
  if ( a2 < v4 )
    v7 = 0LL;
  v8 = *((_QWORD *)this + v7 + 1);
  if ( (_DWORD)v7 )
    a2 += ((1 - (_DWORD)v7) << 16) - v4;
  if ( a2 < *(_DWORD *)(v8 + 20) )
  {
    v10 = 8 * ((unsigned __int64)a2 >> 8);
    v11 = 16LL * (unsigned __int8)a2;
    v12 = v11 + *(_QWORD *)(**(_QWORD **)(v8 + 24) + v10);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v12, 0LL);
    if ( a3 || a2 < *(_DWORD *)(v8 + 20) && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + v10) + v11 + 8) )
    {
      *(_DWORD *)(24LL * a2 + *(_QWORD *)v8 + 8) |= 1u;
      return (struct _ENTRY *)(24LL * a2 + *(_QWORD *)v8);
    }
    else
    {
      ExReleasePushLockExclusiveEx(v12, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  return (struct _ENTRY *)v6;
}
