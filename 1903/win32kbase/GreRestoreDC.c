/*
 * XREFs of GreRestoreDC @ 0x1C0018550
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C001D6E0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0016B30 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     GreUnlockVisRgn @ 0x1C0017990 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0017A40 (GreLockVisRgn.c)
 *     ?vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0017B78 (-vCopyTo@DC@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreDCSelectBrush @ 0x1C00182F0 (GreDCSelectBrush.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00196B0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     hbmSelectBitmap @ 0x1C001A230 (hbmSelectBitmap.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C001B750 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C001BD10 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001C0F0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001D470 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001EB20 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C001FD50 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00200C0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C0021110 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022748 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C003E140 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0058824 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     HmgLockAllOwners @ 0x1C00785A0 (HmgLockAllOwners.c)
 *     GreSelectPalette @ 0x1C007AAB0 (GreSelectPalette.c)
 *     GreDCSelectPen @ 0x1C0081CC0 (GreDCSelectPen.c)
 *     EngSetLastError @ 0x1C0094990 (EngSetLastError.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C00BDB10 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C0125860 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 *     McTemplateK0pz @ 0x1C0132610 (McTemplateK0pz.c)
 */

__int64 __fastcall GreRestoreDC(HDC a1, int a2)
{
  __int64 v4; // r8
  DC *v5; // rsi
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v8; // rdi
  int v9; // r15d
  __int64 v10; // rsi
  __int64 v11; // rbx
  char v12; // al
  unsigned int v13; // ebx
  GdiHandleManager *v14; // rsi
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // r9
  _DWORD *v19; // rdx
  unsigned int v20; // ebx
  __int64 v21; // rdx
  unsigned int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // r10
  REGION *v25; // rcx
  REGION *v26; // rcx
  __int64 v27; // rcx
  struct _ERESOURCE *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned int v32; // r13d
  unsigned int v33; // eax
  unsigned int v34; // ebx
  unsigned int v35; // ebx
  __int64 v36; // r14
  unsigned int v37; // edx
  __int64 v38; // rcx
  __int64 v39; // r9
  unsigned int v40; // eax
  __int64 v41; // r15
  unsigned int v42; // edx
  __int64 v43; // rcx
  __int64 v44; // rax
  DC *v45; // rdx
  DC *v46; // rdx
  int v47; // r8d
  __int64 v48; // r9
  DC *v49; // rdx
  __int64 v50; // r8
  int v51; // ecx
  int v52; // ecx
  int v54; // eax
  int v55; // ecx
  unsigned int v56; // ecx
  bool v57; // zf
  int v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  struct OBJECT *v61; // rcx
  DC *v62[2]; // [rsp+30h] [rbp-50h] BYREF
  DC *v63[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v64; // [rsp+50h] [rbp-30h] BYREF
  int v65; // [rsp+58h] [rbp-28h]
  int v66; // [rsp+C0h] [rbp+40h]
  struct OBJECT *v67; // [rsp+C8h] [rbp+48h] BYREF

  v62[0] = 0LL;
  v62[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v62, a1);
  v5 = v62[0];
  if ( !v62[0] )
  {
    EngSetLastError(6u);
    v32 = 0;
    goto LABEL_90;
  }
  v6 = *((_QWORD *)v62[0] + 122);
  v7 = *(_DWORD *)(v6 + 152);
  if ( (v7 & 0x1000) != 0 )
  {
    GreDCSelectBrush((__int64)v62[0], *(_QWORD *)(v6 + 160));
    v5 = v62[0];
  }
  if ( (v7 & 0x2000) != 0 )
  {
    GreDCSelectPen(v5);
    v5 = v62[0];
  }
  if ( a2 < 0 )
    a2 += *((_DWORD *)v5 + 26);
  if ( a2 < 1 || a2 >= *((_DWORD *)v5 + 26) )
  {
    EngSetLastError(0x57u);
    v32 = 0;
    goto LABEL_90;
  }
  v8 = *((_QWORD *)v5 + 6);
  if ( (*(_DWORD *)(v8 + 40) & 1) != 0 )
  {
    GreLockVisRgn(v8, v6, v4);
    v5 = v62[0];
  }
  v9 = *((_DWORD *)v5 + 9) & 0x800;
  if ( v9 )
  {
    DC::bMakeInfoDC(v5, 0);
    v5 = v62[0];
  }
  v66 = *(_DWORD *)(*((_QWORD *)v5 + 122) + 104LL);
  while ( 1 )
  {
    LOBYTE(v6) = 1;
    v63[1] = 0LL;
    v63[0] = 0LL;
    v63[0] = (DC *)HmgLockAllOwners(*((_QWORD *)v5 + 14), v6);
    if ( !v63[0] )
      break;
    DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)v62[0] + 17));
    DEC_SHARE_REF_CNT_LAZY0(*((struct BRUSH **)v62[0] + 18));
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*((struct LFONT **)v62[0] + 19));
    v64 = 0LL;
    v65 = 0;
    v10 = *((_QWORD *)v62[0] + 12);
    HANDLELOCK::vLockHandle(
      (HANDLELOCK *)&v64,
      (unsigned __int16)*(_DWORD *)v10 | (*(_DWORD *)v10 >> 8) & 0xFF0000,
      0,
      0,
      1);
    if ( v65 )
    {
      v11 = v64;
      v12 = *(_BYTE *)(v64 + 14);
      if ( v12 == 5 )
      {
        if ( !gbGdiHmgrAltStacks
          || !gpentHmgrAltStacks
          || (RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)*(_DWORD *)v10), v12 = *(_BYTE *)(v11 + 14), v12 == 5) )
        {
          v59 = *(_QWORD *)(v10 + 680);
          v60 = 0LL;
          goto LABEL_112;
        }
      }
      if ( v12 == 16 )
      {
        v59 = *(_QWORD *)(v10 + 136);
        v60 = 2LL;
LABEL_112:
        TrackObjectReferenceDecrement(v60, v59);
      }
      --*(_DWORD *)(v10 + 8);
      v13 = *(_DWORD *)v11 & 0xFFFFFF;
      if ( v13 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      (unsigned __int16)v13,
                                      1)
               + 13) == HIWORD(v13) )
            v13 = (unsigned __int16)v13;
        }
        else
        {
          v13 = (unsigned __int16)v13;
        }
      }
      v14 = gpHandleManager;
      v15 = *((_QWORD *)gpHandleManager + 2);
      v16 = *(_DWORD *)(v15 + 2056);
      if ( v13 >= v16 + ((*(unsigned __int16 *)(v15 + 2) + 0xFFFF) << 16) )
        goto LABEL_118;
      v17 = ((v13 - v16) >> 16) + 1;
      if ( v13 < v16 )
        v17 = 0LL;
      v18 = *(_QWORD *)(v15 + 8 * v17 + 8);
      if ( (_DWORD)v17 )
        v13 += ((1 - (_DWORD)v17) << 16) - v16;
      if ( v13 >= *(_DWORD *)(v18 + 20) )
LABEL_118:
        v19 = 0LL;
      else
        v19 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * ((unsigned __int64)v13 >> 8))
                         + 16LL * (unsigned __int8)v13
                         + 8);
      v20 = (unsigned __int16)*v19 | (*v19 >> 8) & 0xFF0000;
      if ( v20 >= 0x10000 )
      {
        if ( *(_DWORD *)gpHandleManager > 0x10000u )
        {
          if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                      *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                      (unsigned __int16)*v19,
                                      1)
               + 13) == HIWORD(v20) )
            v20 = (unsigned __int16)v20;
        }
        else
        {
          v20 = (unsigned __int16)*v19;
        }
      }
      v21 = *((_QWORD *)v14 + 2);
      v22 = *(_DWORD *)(v21 + 2056);
      if ( v20 < v22 + ((*(unsigned __int16 *)(v21 + 2) + 0xFFFF) << 16) )
      {
        v23 = ((v20 - v22) >> 16) + 1;
        if ( v20 < v22 )
          v23 = 0LL;
        v24 = *(_QWORD *)(v21 + 8 * v23 + 8);
        if ( (_DWORD)v23 )
          v20 += ((1 - (_DWORD)v23) << 16) - v22;
        *(_DWORD *)(*(_QWORD *)v24 + 24LL * v20 + 8) &= ~1u;
        ExReleasePushLockExclusiveEx(
          *(_QWORD *)(**(_QWORD **)(v24 + 24) + 8 * ((unsigned __int64)v20 >> 8)) + 16LL * (unsigned __int8)v20,
          0LL);
        KeLeaveCriticalRegion();
      }
      KeLeaveCriticalRegion();
    }
    v25 = (REGION *)*((_QWORD *)v62[0] + 21);
    if ( v25 )
    {
      v57 = (*((_DWORD *)v25 + 8))-- == 1;
      if ( v57 )
        REGION::vDeleteREGION(v25);
    }
    v26 = (REGION *)*((_QWORD *)v62[0] + 20);
    if ( v26 )
    {
      v57 = (*((_DWORD *)v26 + 8))-- == 1;
      if ( v57 )
        REGION::vDeleteREGION(v26);
    }
    if ( (int)IsvRestorePathSupported() >= 0 )
      vRestorePathWrap(v62, (unsigned int)(*((_DWORD *)v62[0] + 26) - 1));
    v27 = *((_QWORD *)v62[0] + 62);
    if ( v27 )
    {
      if ( *((_DWORD *)v62[0] + 8) == 1 )
      {
        hbmSelectBitmap(a1, gahStockObjects[21], 1LL, 0LL);
      }
      else
      {
        v58 = *(_DWORD *)(v27 + 112);
        if ( (v58 & 0x800) != 0 )
        {
          HmgDecrementShareReferenceCountEx((struct OBJECT *)v27);
        }
        else if ( v58 >= 0 )
        {
          SURFACE::vDec_cRef((SURFACE *)v27);
        }
      }
    }
    v28 = ghsemPalette;
    if ( ghsemPalette )
    {
      PsEnterPriorityRegion();
      ExEnterCriticalRegionAndAcquireResourceExclusive(v28);
    }
    if ( *((_QWORD *)v62[0] + 10) != *((_QWORD *)v63[0] + 10) )
      GreSelectPalette(a1);
    if ( *((_QWORD *)v62[0] + 11) != *((_QWORD *)v63[0] + 11) )
    {
      EPALOBJ::EPALOBJ((EPALOBJ *)&v67, *((HPALETTE *)v62[0] + 10));
      v61 = v67;
      *((_QWORD *)v63[0] + 11) = v67;
      if ( v61 )
        HmgDecrementShareReferenceCountEx(v61);
    }
    v29 = *((_QWORD *)v63[0] + 11);
    if ( (struct PALETTE *)v29 != ppalDefault )
      _InterlockedDecrement((volatile signed __int32 *)(v29 + 56));
    DC::vCopyTo(v63[0], (struct XDCOBJ *)v62);
    XDCOBJ::bDeleteDC((XDCOBJ *)v63, 0);
    if ( v28 )
    {
      if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz(v30, &LockRelease, v31, v28, L"hsem");
      ExReleaseResourceAndLeaveCriticalRegion(v28);
      PsLeavePriorityRegion();
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v63);
    v5 = v62[0];
    if ( a2 >= *((_DWORD *)v62[0] + 26) )
    {
      v32 = 1;
      goto LABEL_54;
    }
  }
  EngSetLastError(6u);
  v32 = 0;
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v63);
  v5 = v62[0];
LABEL_54:
  if ( v66 != *(_DWORD *)(*((_QWORD *)v5 + 122) + 104LL) )
  {
    *((_DWORD *)v5 + 63) |= 1u;
    v5 = v62[0];
  }
  if ( v9 )
  {
    DC::bMakeInfoDC(v5, 1);
    v5 = v62[0];
  }
  v33 = *(_DWORD *)v5;
  v34 = *(_DWORD *)v5;
  *((_DWORD *)v5 + 9) |= 0x10u;
  v35 = (unsigned __int16)v33 | (v34 >> 8) & 0xFF0000;
  if ( v35 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v35,
                                  1)
           + 13) == HIWORD(v35) )
        v35 = (unsigned __int16)v35;
    }
    else
    {
      v35 = (unsigned __int16)v35;
    }
  }
  v36 = *((_QWORD *)gpHandleManager + 2);
  v37 = *(_DWORD *)(v36 + 2056);
  if ( v35 >= v37 + ((*(unsigned __int16 *)(v36 + 2) + 0xFFFF) << 16) )
  {
    v41 = 0LL;
  }
  else
  {
    v38 = ((v35 - v37) >> 16) + 1;
    if ( v35 < v37 )
      v38 = 0LL;
    v39 = *(_QWORD *)(v36 + 8 * v38 + 8);
    if ( (_DWORD)v38 )
      v40 = v35 + ((1 - (_DWORD)v38) << 16) - v37;
    else
      v40 = v35;
    v41 = 0LL;
    if ( v40 < *(_DWORD *)(v39 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v39 + 24) + 8 * ((unsigned __int64)v40 >> 8))
                   + 16LL * (unsigned __int8)v40
                   + 8) )
    {
      v41 = *(_QWORD *)v39 + 24LL * v40;
    }
  }
  if ( v35 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v35,
                                  1)
           + 13) == HIWORD(v35) )
        v35 = (unsigned __int16)v35;
    }
    else
    {
      v35 = (unsigned __int16)v35;
    }
  }
  v42 = *(_DWORD *)(v36 + 2056);
  if ( v35 >= v42 + ((*(unsigned __int16 *)(v36 + 2) + 0xFFFF) << 16) )
    goto LABEL_139;
  v43 = ((v35 - v42) >> 16) + 1;
  if ( v35 < v42 )
    v43 = 0LL;
  v44 = *(_QWORD *)(v36 + 8 * v43 + 8);
  if ( (_DWORD)v43 )
    v35 += ((1 - (_DWORD)v43) << 16) - v42;
  if ( v35 >= *(_DWORD *)(v44 + 20) )
LABEL_139:
    v45 = 0LL;
  else
    v45 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v44 + 24) + 8 * ((unsigned __int64)v35 >> 8))
                 + 16LL * (unsigned __int8)v35
                 + 8);
  if ( v45 != v5 )
    v41 = 0LL;
  *(_BYTE *)(v41 + 15) |= 4u;
  DC::vUpdate_VisRect(v62[0], *((struct REGION **)v62[0] + 140));
  *(_DWORD *)(*((_QWORD *)v62[0] + 122) + 152LL) |= 0x12001Fu;
  v46 = v62[0];
  if ( *((_DWORD *)v62[0] + 8) == 1 )
  {
    DC::bSetDefaultRegion(v62[0]);
    v46 = v62[0];
  }
  v47 = *((_DWORD *)v46 + 9);
  v48 = *((_QWORD *)v46 + 62);
  if ( (v47 & 1) != 0
    || *((_DWORD *)v46 + 8) == 1
    && v48
    && ((v54 = *(_DWORD *)(v48 + 112), (v54 & 0x4000) != 0) || (*(_BYTE *)(v8 + 40) & 1) != 0 && (v54 & 0x800000) != 0) )
  {
    *((_DWORD *)v46 + 9) = v47 | 0x200;
    v55 = *((_DWORD *)v62[0] + 9);
    if ( (*(_DWORD *)(v48 + 112) & 0x200) != 0 )
      v56 = v55 | 0x8000;
    else
      v56 = v55 & 0xFFFF7FFF;
    *((_DWORD *)v62[0] + 9) = v56;
  }
  else
  {
    *((_DWORD *)v46 + 9) = v47 & 0xFFFFFDFF;
  }
  v49 = v62[0];
  v50 = *((_DWORD *)v62[0] + 10) & 1;
  if ( (*((_DWORD *)v62[0] + 10) & 1) != 0 )
    v51 = *((_DWORD *)v62[0] + 256);
  else
    v51 = *((_DWORD *)v62[0] + 254);
  *((_DWORD *)v62[0] + 294) = *((_DWORD *)v62[0] + 31) + v51;
  if ( (_DWORD)v50 )
    v52 = *((_DWORD *)v49 + 257);
  else
    v52 = *((_DWORD *)v49 + 255);
  *((_DWORD *)v49 + 295) = *((_DWORD *)v49 + 32) + v52;
  if ( (*(_DWORD *)(v8 + 40) & 1) != 0 )
    GreUnlockVisRgn(v8, (__int64)v49, v50);
LABEL_90:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v62);
  return v32;
}
