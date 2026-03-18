/*
 * XREFs of GreIntersectClipRect @ 0x1C0019B10
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0057430 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C001A750 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0025830 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002A7E0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002AB40 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002AD50 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002B0E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002C040 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0030D10 (bDeleteDCInternalEx.c)
 *     bCvtPts1 @ 0x1C0062918 (bCvtPts1.c)
 *     EngSetLastError @ 0x1C00689B0 (EngSetLastError.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0075BD4 (IsThreadCrossSessionAttached.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C48B0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 */

__int64 __fastcall GreIntersectClipRect(HDC a1, LONG left, LONG top, LONG right, LONG a5)
{
  int v6; // esi
  DC *v9; // r15
  __int64 v11; // rcx
  LONG bottom; // eax
  int v13; // ecx
  int v14; // edi
  DC *v15; // r14
  HDC v16; // r12
  unsigned int v17; // r15d
  GdiHandleManager *v18; // rbx
  unsigned int v19; // eax
  struct _ENTRY *v20; // rax
  struct _ENTRY *v21; // rcx
  DC *v22; // [rsp+20h] [rbp-60h] BYREF
  __int64 v23; // [rsp+28h] [rbp-58h]
  __int64 v24; // [rsp+30h] [rbp-50h] BYREF
  int v25; // [rsp+38h] [rbp-48h]
  int v26; // [rsp+3Ch] [rbp-44h]
  struct _ENTRY *v27; // [rsp+40h] [rbp-40h] BYREF
  int v28; // [rsp+48h] [rbp-38h]
  int v29; // [rsp+4Ch] [rbp-34h]
  _BYTE v30[8]; // [rsp+58h] [rbp-28h] BYREF
  struct _RECTL v31; // [rsp+60h] [rbp-20h] BYREF

  v6 = 0;
  v22 = 0LL;
  v23 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)&v22, a1);
  v9 = v22;
  if ( !v22 )
  {
    EngSetLastError(6u);
    return 0LL;
  }
  v11 = *((_QWORD *)v22 + 10);
  v25 = *(_DWORD *)(v11 + 68);
  v26 = *(_DWORD *)(v11 + 312) & 1;
  EXFORMOBJ::vInit((EXFORMOBJ *)&v24, (struct XDCOBJ *)&v22, 0x204u, 0x80000000);
  bottom = a5;
  v31.left = left;
  v31.top = top;
  v13 = *(_DWORD *)(v24 + 32);
  v31.right = right;
  v31.bottom = a5;
  if ( (v13 & 1) != 0 )
  {
    if ( (v13 & 0x43) != 0x43 )
    {
      bCvtPts1(v24, &v31, 2LL);
      bottom = v31.bottom;
      right = v31.right;
      top = v31.top;
      left = v31.left;
    }
    if ( v26 )
    {
      ++left;
      ++right;
      v31.left = left;
      v31.right = right;
    }
    if ( left > right )
    {
      v31.left = right;
      v31.right = left;
    }
    if ( top > bottom )
    {
      v31.top = bottom;
      v31.bottom = top;
    }
    v14 = DC::iCombine(v9, &v31, 1);
    if ( v14 > 1 )
      v14 = 3;
  }
  else if ( (((left & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
         || (((a5 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
         || (((right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
         || (((top & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    EngSetLastError(0x57u);
    v14 = 0;
  }
  else
  {
    v14 = DC::iCombine(v9, (struct EXFORMOBJ *)&v24, &v31, 1);
    if ( v14 > 1 )
      v14 = 3;
  }
  XDCOBJ::RestoreAttributes((XDCOBJ *)&v22);
  v15 = v22;
  v16 = *(HDC *)v22;
  v17 = (unsigned __int16)*(_QWORD *)v22 | ((unsigned int)*(_QWORD *)v22 >> 8) & 0xFF0000;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v30);
  v18 = gpHandleManager;
  v28 = 1;
  v19 = GdiHandleManager::DecodeIndex(gpHandleManager, v17);
  v20 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v18 + 2), v19, 0);
  v27 = v20;
  v21 = v20;
  if ( v20 )
  {
    _m_prefetchw((char *)v20 + 8);
    v29 = *((_DWORD *)v20 + 2);
    if ( !HIDWORD(v23) && (*((_BYTE *)v20 + 15) & 0x20) != 0 )
    {
      HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
      if ( !v28 )
        goto LABEL_36;
      v21 = v27;
    }
    if ( (*((_BYTE *)v21 + 15) & 8) != 0 && !*((_DWORD *)v15 + 2) && *((_WORD *)v15 + 6) == 1 )
      v6 = 1;
    _InterlockedDecrement((volatile signed __int32 *)v15 + 3);
    HANDLELOCK::vUnlock((HANDLELOCK *)&v27);
    goto LABEL_36;
  }
  v28 = 0;
  KeLeaveCriticalRegion();
LABEL_36:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v27);
  if ( v6 )
    bDeleteDCInternalEx(v16, 0LL);
  return (unsigned int)v14;
}
