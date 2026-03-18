/*
 * XREFs of _GetDCEx @ 0x1C0027880
 * Callers:
 *     NtUserGetDC @ 0x1C0030850 (NtUserGetDC.c)
 *     UserGetMonitorDC @ 0x1C0045330 (UserGetMonitorDC.c)
 *     UserGetDesktopDC @ 0x1C004567C (UserGetDesktopDC.c)
 *     _GetDC @ 0x1C00689E0 (_GetDC.c)
 * Callees:
 *     CreateEmptyRgnPublic @ 0x1C001CD20 (CreateEmptyRgnPublic.c)
 *     CreateEmptyRgn @ 0x1C001CD60 (CreateEmptyRgn.c)
 *     GreGetStockObject @ 0x1C001F590 (GreGetStockObject.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     GreCombineRgn @ 0x1C0023180 (GreCombineRgn.c)
 *     GreGetBounds @ 0x1C0028E20 (GreGetBounds.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002AD50 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002B0E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002BEC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002C040 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002D8E0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSetDCOwnerEx @ 0x1C002E880 (GreSetDCOwnerEx.c)
 *     GreSelectVisRgn @ 0x1C00315A0 (GreSelectVisRgn.c)
 *     GreValidateVisrgn @ 0x1C0031910 (GreValidateVisrgn.c)
 *     DelayedDestroyCacheDC @ 0x1C0033300 (DelayedDestroyCacheDC.c)
 *     GreUnlockVisRgn @ 0x1C0033460 (GreUnlockVisRgn.c)
 *     GreIsRendering @ 0x1C0033740 (GreIsRendering.c)
 *     GreOffsetRgn @ 0x1C00347B0 (GreOffsetRgn.c)
 *     DestroyCacheDC @ 0x1C0062BA0 (DestroyCacheDC.c)
 *     CreateCacheDC @ 0x1C0062F20 (CreateCacheDC.c)
 *     SetEmptyRgn @ 0x1C00647D0 (SetEmptyRgn.c)
 *     GreSetLayout @ 0x1C0064810 (GreSetLayout.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C0073C68 (--1DCOBJA@@QEAA@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0075BD4 (IsThreadCrossSessionAttached.c)
 *     GreMarkUndeletableRgn @ 0x1C0077A78 (GreMarkUndeletableRgn.c)
 *     McTemplateK0pqz @ 0x1C00DA608 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C00DA6C0 (McTemplateK0pz.c)
 */

__int64 __fastcall GetDCEx(_QWORD *a1, HRGN a2, unsigned int a3)
{
  int v4; // ecx
  unsigned int v5; // r12d
  HRGN v6; // r14
  struct _ERESOURCE *v7; // rbx
  struct _ERESOURCE *v8; // rbx
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  char v12; // al
  int v13; // ebp
  unsigned int v14; // r12d
  unsigned int v15; // edx
  _QWORD *v16; // r9
  char v17; // cl
  int v18; // eax
  int v19; // r8d
  __int64 v20; // rcx
  int v21; // ecx
  __int64 LayeredOrRedirectedParent; // rax
  _QWORD *v23; // rdi
  HRGN v24; // rdx
  _QWORD *v25; // rdx
  __int64 v26; // r8
  unsigned __int8 v27; // cl
  unsigned int v28; // r14d
  __int64 **v29; // r15
  __int64 *v30; // rbx
  _QWORD *v31; // rsi
  HDC v32; // rcx
  int v33; // ebp
  struct OBJECT *v34; // rbp
  __int64 v35; // rsi
  unsigned int v36; // r14d
  GdiHandleManager *v37; // rdi
  unsigned int v38; // eax
  struct _ENTRY *v39; // rax
  struct _ENTRY *v40; // rcx
  char v41; // al
  struct OBJECT *EntryObject; // rax
  int v43; // edi
  int v44; // edx
  __int64 v45; // rdi
  __int64 v46; // rbx
  int v47; // eax
  bool v48; // zf
  HRGN v49; // rdi
  __int64 EmptyRgn; // rax
  __int64 v51; // rcx
  int v52; // eax
  int v53; // r9d
  __int64 v54; // rax
  __int64 v55; // rcx
  int v56; // eax
  HRGN v57; // rax
  void *StockObject; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  _QWORD *v65; // [rsp+30h] [rbp-A8h]
  _QWORD *v66; // [rsp+38h] [rbp-A0h]
  __int64 v67; // [rsp+40h] [rbp-98h]
  HRGN v68; // [rsp+48h] [rbp-90h] BYREF
  __int64 RedirectionBitmap; // [rsp+50h] [rbp-88h]
  struct _ENTRY *v70; // [rsp+58h] [rbp-80h] BYREF
  int v71; // [rsp+60h] [rbp-78h]
  int v72; // [rsp+64h] [rbp-74h]
  _QWORD v73[2]; // [rsp+70h] [rbp-68h] BYREF
  char v74[24]; // [rsp+80h] [rbp-58h] BYREF
  HRGN EmptyRgnPublic; // [rsp+E8h] [rbp+10h]
  int v76; // [rsp+F0h] [rbp+18h]
  int v77; // [rsp+F8h] [rbp+20h]

  EmptyRgnPublic = a2;
  v4 = (int)ghsemDynamicModeChange;
  v5 = a3;
  v65 = 0LL;
  v6 = a2;
  RedirectionBitmap = 0LL;
  v76 = 0;
  v77 = 0;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared();
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(
      v4,
      (unsigned int)&LockAcquireShared,
      a3,
      (_DWORD)ghsemDynamicModeChange,
      (__int64)L"ghsemDynamicModeChange");
  v7 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz(v4, (_DWORD)a2, a3, (_DWORD)ghsemGreLock, 2, (__int64)L"ghsemGreLock");
  v8 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v8);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz(v4, (_DWORD)a2, a3, (_DWORD)ghsemDCVisRgn, 3, (__int64)L"ghsemDCVisRgn");
  if ( !a1 )
    a1 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448) + 8LL) + 24LL);
  v9 = 0LL;
  v66 = a1;
  v10 = a1;
  v11 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      a2 = (HRGN)v11[5];
      v12 = *((_BYTE *)a2 + 31);
      if ( (v12 & 0x10) == 0 || (v12 & 0x20) != 0 && v11 != a1 )
        break;
      if ( (*((_WORD *)a2 + 21) & 0x3FFF) != 0x29D )
      {
        v11 = (_QWORD *)v11[10];
        if ( v11 )
          continue;
      }
      goto LABEL_24;
    }
    v13 = 0;
    v67 = 0LL;
  }
  else
  {
LABEL_24:
    v13 = 1;
    v67 = 1LL;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11, a2) + 12) & 0x200) != 0 )
    DelayedDestroyCacheDC(0LL);
  if ( (v5 & 0x10000) != 0 )
  {
    v14 = v5 & 0xFFFFFFC7;
    v15 = v14;
    if ( (v14 & 1) != 0 )
    {
      v5 = v14 | 0x10;
      if ( (*(_BYTE *)(a1[5] + 31LL) & 4) == 0 )
        v5 = v15;
      goto LABEL_47;
    }
    v16 = (_QWORD *)a1[14];
    v17 = *(_BYTE *)(v16[1] + 8LL);
    v18 = v14 | 0x20;
    if ( v17 >= 0 )
      v18 = v14;
    v19 = v18;
    if ( (v18 & 2) == 0 && (v17 & 0x20) == 0 )
    {
      if ( (v17 & 0x40) != 0 )
      {
        v20 = v16[5];
        if ( v20 )
          v9 = *(_QWORD *)(v20 + 8);
      }
      else
      {
        v19 = v18 | 2;
      }
    }
    v21 = v19 | 8;
    if ( (*(_BYTE *)(a1[5] + 31LL) & 2) == 0 )
      v21 = v19;
    v5 = v21 | 0x10;
    if ( (*(_BYTE *)(a1[5] + 31LL) & 4) == 0 )
      v5 = v21;
    if ( (*(_BYTE *)(a1[5] + 31LL) & 0x20) != 0 )
    {
      v5 &= ~8u;
      if ( v16[10] )
LABEL_47:
        v5 |= 2u;
    }
  }
  if ( (v5 & 0x80000) != 0 )
    v5 = v5 & 0xFFFFFFD5 | 2;
  if ( (int)IsGetLayeredOrRedirectedParentSupported() >= 0 )
  {
    LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(a1);
    v23 = (_QWORD *)LayeredOrRedirectedParent;
    if ( LayeredOrRedirectedParent
      && (*(_DWORD *)(*(_QWORD *)(LayeredOrRedirectedParent + 40) + 24LL) & 0x20000000) != 0 )
    {
      if ( (int)IsGetRedirectionBitmapSupported() < 0 )
      {
        RedirectionBitmap = 0LL;
      }
      else
      {
        RedirectionBitmap = GetRedirectionBitmap(v23);
        if ( RedirectionBitmap )
          goto LABEL_58;
      }
      if ( (*(_BYTE *)(v23[5] + 26LL) & 0x20) != 0 )
      {
LABEL_58:
        v5 |= 0x4000u;
        v65 = v23;
        if ( a1 == v23 && (v5 & 0x20) != 0 )
          v5 = v5 & 0xFFFFFFDD | 2;
        if ( (unsigned __int64)v6 > 2 )
        {
          if ( (v5 & 0x40000) != 0 )
          {
            EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
            v24 = v6;
            v6 = EmptyRgnPublic;
            GreCombineRgn(EmptyRgnPublic, v24, 0LL, 5);
            v5 &= ~0x40000u;
          }
          GreOffsetRgn(v6);
        }
      }
    }
    v10 = a1;
  }
  if ( (v5 & 0x20) != 0 )
  {
    v25 = (_QWORD *)a1[10];
    if ( !v25 )
      v25 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 448) + 8LL)
                       + 24LL);
    v5 |= 2u;
    if ( (v5 & 0x18) == 0 )
    {
      v26 = a1[5];
      if ( (*(_BYTE *)(v26 + 21) & 1) != 0 || (*(_BYTE *)(v25[5] + 31LL) & 2) == 0 )
      {
        v27 = *(_BYTE *)(v25[5] + 31LL);
        if ( ((v27 ^ *(_BYTE *)(v26 + 31)) & 0x10) == 0 )
        {
          v5 &= 0xFFFFFFE7;
          v66 = v25;
          v10 = v25;
          if ( (v27 & 4) != 0 )
            v5 |= 0x10u;
        }
      }
    }
  }
  if ( (v5 & 2) == 0 && (!a1 || a1[2] != W32GetThreadWin32Thread((__int64)KeGetCurrentThread())) )
    v5 |= 2u;
  v28 = v5 & 0x8080441F;
  if ( (v5 & 2) != 0 )
  {
    v34 = 0LL;
    while ( 1 )
    {
      v29 = (__int64 **)(gpDispInfo + 24);
      v30 = *(__int64 **)(gpDispInfo + 24);
      if ( v30 )
        break;
LABEL_142:
      v29 = 0LL;
      v45 = gpDispInfo + 24;
      v46 = *(_QWORD *)(gpDispInfo + 24);
      if ( v46 )
      {
        do
        {
          if ( (*(_DWORD *)(v46 + 64) & 0x400002) == 2
            && !(unsigned int)GreIsRendering(*(HDC *)(v46 + 8))
            && !*(_QWORD *)(v46 + 88) )
          {
            v47 = *(_DWORD *)(v46 + 64);
            if ( (v47 & 0x800) != 0 )
              break;
            if ( (v47 & 0x1000) == 0 )
              v29 = (__int64 **)v45;
          }
          v45 = v46;
          v46 = *(_QWORD *)v46;
        }
        while ( v46 );
        v48 = v46 == 0;
        if ( v46 )
          goto LABEL_170;
      }
      if ( v29 )
      {
        v48 = v46 == 0;
LABEL_170:
        v31 = v65;
        if ( !v48 )
          v29 = (__int64 **)v45;
        v10 = v66;
        v30 = *v29;
        goto LABEL_103;
      }
      if ( !CreateCacheDC(a1, v5 & 0x4000 | 0x802, 0LL) )
        goto LABEL_209;
      v10 = v66;
    }
    while ( 1 )
    {
      if ( (_QWORD *)v30[3] != v10 || (_QWORD *)v30[4] != v65 || v30[11] )
        goto LABEL_141;
      v35 = v30[1];
      v36 = v35;
      v73[1] = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() && PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v74) )
        v36 = v35;
      v37 = gpHandleManager;
      v71 = 1;
      v38 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)v36 | (v36 >> 8) & 0xFF0000);
      v39 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v37 + 2), v38, 0);
      v70 = v39;
      v40 = v39;
      if ( !v39 )
      {
        v71 = 0;
        KeLeaveCriticalRegion();
        goto LABEL_132;
      }
      _m_prefetchw((char *)v39 + 8);
      v72 = *((_DWORD *)v39 + 2);
      v41 = *((_BYTE *)v39 + 15);
      if ( (v41 & 0x20) != 0 )
        goto LABEL_126;
      if ( (v41 & 0x40) == 0 )
        goto LABEL_128;
      EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v40 & 0xFFFFFF);
      if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
      {
LABEL_126:
        HANDLELOCK::vUnlock((HANDLELOCK *)&v70);
        if ( !v71 )
          goto LABEL_132;
      }
      v40 = v70;
LABEL_128:
      if ( *((_BYTE *)v40 + 14) == 1 && *((_WORD *)v40 + 6) == WORD1(v35) )
      {
        v34 = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v40 & 0xFFFFFF);
        ++*((_DWORD *)v34 + 2);
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v70);
LABEL_132:
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v70);
      v73[0] = v34;
      if ( v34 )
        v43 = *((_DWORD *)v34 + 10) & 1;
      else
        v43 = 0;
      DCOBJA::~DCOBJA((DCOBJA *)v73);
      v28 = v5 & 0x8080441F;
      v48 = v43 == 0;
      v10 = v66;
      if ( v48 )
      {
        v44 = *((_DWORD *)v30 + 16);
        if ( (v5 & 0x8080441F) == (v44 & 0x80C05C1F)
          && ((*(_BYTE *)(v66[5] + 31LL) & 0x20) == 0 || v30[2] == v30[3])
          && (!v67 || (v44 & 0x10000000) == 0) )
        {
          *((_DWORD *)v30 + 16) = v44 | 0x1000;
          if ( a1 != (_QWORD *)v30[2] )
          {
            if ( (int)IsSpbCheckDceSupported() >= 0 )
              SpbCheckDce(v30);
            v30[2] = (__int64)a1;
            ResetOrg(0LL, (struct tagDCE *)v30, 0);
          }
          v31 = v65;
          goto LABEL_159;
        }
      }
LABEL_141:
      v29 = (__int64 **)v30;
      v34 = 0LL;
      v30 = (__int64 *)*v30;
      if ( !v30 )
        goto LABEL_142;
    }
  }
  v29 = (__int64 **)(gpDispInfo + 24);
  v30 = *(__int64 **)(gpDispInfo + 24);
  if ( !v30 )
  {
LABEL_209:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
    return 0LL;
  }
  while ( (v30[8] & 0x400002) != 0
       || (unsigned int)GreIsRendering((HDC)v30[1])
       || (_QWORD *)v30[2] != a1 && v30[1] != v9 )
  {
    v29 = (__int64 **)v30;
    v30 = (__int64 *)*v30;
    if ( !v30 )
      goto LABEL_209;
  }
  if ( v30[7] && (v5 & 0xC0) != 0 && (int)IsDeleteHrgnClipSupported() >= 0 )
    DeleteHrgnClip(v30);
  if ( (v30[8] & 0x4000) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v30[4] + 40) + 27LL) & 2) != 0 && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0 )
      FlushWEFCOMPOSITEDDCEBounds(v30);
    if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
      GreSelectRedirectionBitmap(v30[1], 0LL);
  }
  v31 = v65;
  if ( (_QWORD *)v30[2] == a1
    && (_QWORD *)v30[4] == v65
    && (_QWORD *)v30[3] == v10
    && v13
    && ((v5 ^ *((_DWORD *)v30 + 16)) & 0x4000) == 0
    && (v30[8] & 0x10000000) == 0 )
  {
LABEL_159:
    v33 = 0;
    goto LABEL_160;
  }
  do
  {
LABEL_103:
    v77 = 1;
    if ( (v30[8] & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 )
      SpbCheckDce(v30);
    v32 = (HDC)v30[1];
    *((_DWORD *)v30 + 16) = v28 | 0x1000;
    GreValidateVisrgn(v32);
    v68 = 0LL;
    if ( (int)IsCalcVisRgnSupported() < 0 || !(unsigned int)CalcVisRgn(&v68, a1, v10, v28) )
      *((_DWORD *)v30 + 16) |= 0x10000000u;
    v30[2] = (__int64)a1;
    v30[3] = (__int64)v10;
    v30[4] = (__int64)v31;
    v30[5] = 0LL;
    v30[6] = 0LL;
    ResetOrg(v68, (struct tagDCE *)v30, 1);
    v33 = v76;
    if ( !v68 )
      v33 = 1;
    v76 = v33;
LABEL_160:
    ;
  }
  while ( (v30[8] & 0x8080441F) != v28 );
  if ( v30 != *(__int64 **)(gpDispInfo + 24) )
  {
    *v29 = (__int64 *)*v30;
    *v30 = *(_QWORD *)(gpDispInfo + 24);
    *(_QWORD *)(gpDispInfo + 24) = v30;
  }
  GreValidateVisrgn((HDC)v30[1]);
  if ( (v5 & 0x80u) != 0 )
  {
    v49 = EmptyRgnPublic;
    if ( EmptyRgnPublic == (HRGN)1 )
      goto LABEL_185;
    SetEmptyRgn(ghrgnGDC);
    EmptyRgn = CreateEmptyRgn();
    v51 = v30[1];
    v30[7] = EmptyRgn;
    GreSelectVisRgn(v51, EmptyRgn, 4LL);
    v52 = *((_DWORD *)v30 + 16);
    v30[5] = (__int64)EmptyRgnPublic;
    if ( (v5 & 0x40000) != 0 )
    {
      v52 |= 0x40000u;
      *((_DWORD *)v30 + 16) = v52;
    }
    *((_DWORD *)v30 + 16) = v52 | 0x80;
    if ( !EmptyRgnPublic )
    {
      v30[6] = 0LL;
LABEL_184:
      *((_DWORD *)v30 + 16) &= ~0x2000u;
      GreSelectVisRgn(v30[1], ghrgnGDC, 4LL);
      goto LABEL_185;
    }
    v53 = 1;
    goto LABEL_181;
  }
  if ( (v5 & 0x40) != 0 )
  {
    v49 = EmptyRgnPublic;
    if ( EmptyRgnPublic )
    {
      SetEmptyRgn(ghrgnGDC);
      v54 = CreateEmptyRgn();
      v55 = v30[1];
      v30[7] = v54;
      GreSelectVisRgn(v55, v54, 4LL);
      v56 = *((_DWORD *)v30 + 16);
      v30[5] = (__int64)EmptyRgnPublic;
      if ( (v5 & 0x40000) != 0 )
      {
        v56 |= 0x40000u;
        *((_DWORD *)v30 + 16) = v56;
      }
      *((_DWORD *)v30 + 16) = v56 | 0x40;
      if ( EmptyRgnPublic == (HRGN)1 )
      {
        v30[6] = 1LL;
        goto LABEL_184;
      }
      v53 = 4;
LABEL_181:
      GreCombineRgn(ghrgnGDC, (HRGN)v30[7], v49, v53);
      v57 = (HRGN)CreateEmptyRgnPublic();
      v30[6] = (__int64)v57;
      GreCombineRgn(v57, v49, 0LL, 5);
      if ( (unsigned __int64)v49 > 2 && (v30[8] & 0x40000) == 0 )
        GreMarkUndeletableRgn(v49);
      goto LABEL_184;
    }
  }
LABEL_185:
  if ( (v30[8] & 0x4000) != 0 )
  {
    if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0
      && !(unsigned int)GreSelectRedirectionBitmap(v30[1], RedirectionBitmap) )
    {
      v33 = 1;
    }
    GreGetBounds(v30[1], 0LL, 5LL);
    if ( v33 )
      GreSelectVisRgn(v30[1], 0LL, 1LL);
  }
  if ( (v30[8] & 2) == 0 )
    goto LABEL_196;
  if ( !(unsigned int)GreSetDCOwnerEx(v30[1], 2147483650LL, 0LL, 1LL) )
  {
    *((_DWORD *)v30 + 16) &= ~0x1000u;
    DestroyCacheDC(gpDispInfo + 24, 0LL);
    goto LABEL_209;
  }
  v30[9] = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v30[10] = 0LL;
  --gnDCECount;
  if ( v77 && (int)IsGreSelectFontSupported() >= 0 )
  {
    StockObject = GreGetStockObject(13);
    GreSelectFont(v30[1], StockObject);
  }
LABEL_196:
  if ( (*(_BYTE *)(a1[5] + 26LL) & 0x40) != 0 && (v5 & 0x40000000) == 0 )
    GreSetLayout((HDC)v30[1], -1, 1u);
  GreValidateVisrgn((HDC)v30[1]);
  if ( (int)IsGreHintDCWndSupported() >= 0 )
    GreHintDCWnd(v30[1], *a1, 0LL, 0LL, 0);
  if ( v31 && (*(_BYTE *)(v31[5] + 26LL) & 8) != 0 && (int)IsGreHintDCWndSupported() >= 0 )
    GreHintDCWnd(
      v30[1],
      *a1,
      *v31,
      ((unsigned __int8)~*(_BYTE *)(v31[5] + 27LL) >> 1) & 1,
      (*(_WORD *)(v31[5] + 42LL) & 0x3FFF) == 669);
  if ( *((int *)v30 + 16) < 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v60, v59);
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
    v30[9] = 0LL;
    v30[10] = PsGetCurrentProcessWin32Process(v63, v62);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  return v30[1];
}
