/*
 * XREFs of _GetDCEx @ 0x1C001AAA0
 * Callers:
 *     NtUserGetDC @ 0x1C0029560 (NtUserGetDC.c)
 *     UserGetMonitorDC @ 0x1C003C430 (UserGetMonitorDC.c)
 *     UserGetDesktopDC @ 0x1C003E02C (UserGetDesktopDC.c)
 *     _GetDC @ 0x1C0098810 (_GetDC.c)
 * Callees:
 *     GreOffsetRgn @ 0x1C0015600 (GreOffsetRgn.c)
 *     GreValidateVisrgn @ 0x1C0016244 (GreValidateVisrgn.c)
 *     GreSelectVisRgn @ 0x1C00162B0 (GreSelectVisRgn.c)
 *     DelayedDestroyCacheDC @ 0x1C001788C (DelayedDestroyCacheDC.c)
 *     GreUnlockVisRgn @ 0x1C0017990 (GreUnlockVisRgn.c)
 *     GreSetDCOwnerEx @ 0x1C0019340 (GreSetDCOwnerEx.c)
 *     GreGetBounds @ 0x1C001BE60 (GreGetBounds.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001CFF0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001D5B0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001EBB0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C001ED54 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C001F930 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreGetStockObject @ 0x1C0022890 (GreGetStockObject.c)
 *     GreCombineRgn @ 0x1C00242A0 (GreCombineRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     CreateEmptyRgnPublic @ 0x1C002CD20 (CreateEmptyRgnPublic.c)
 *     CreateEmptyRgn @ 0x1C002CD70 (CreateEmptyRgn.c)
 *     GreSetLayout @ 0x1C003C0D0 (GreSetLayout.c)
 *     GreIsRendering @ 0x1C003C970 (GreIsRendering.c)
 *     CreateCacheDC @ 0x1C003D880 (CreateCacheDC.c)
 *     SetEmptyRgn @ 0x1C0053AC0 (SetEmptyRgn.c)
 *     DestroyCacheDC @ 0x1C0064E90 (DestroyCacheDC.c)
 *     IsThreadCrossSessionAttached @ 0x1C00BCE08 (IsThreadCrossSessionAttached.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00BE474 (--1DCOBJA@@QEAA@XZ.c)
 *     GreMarkUndeletableRgn @ 0x1C00BF1BC (GreMarkUndeletableRgn.c)
 *     McTemplateK0pqz @ 0x1C0132558 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C0132610 (McTemplateK0pz.c)
 */

__int64 __fastcall GetDCEx(_QWORD *a1, HRGN a2, __int64 a3)
{
  PERESOURCE v4; // rcx
  unsigned int v5; // r15d
  HRGN v6; // r14
  struct _ERESOURCE *v7; // rbx
  struct _ERESOURCE *v8; // rbx
  __int64 v9; // rsi
  _QWORD *v10; // r13
  _QWORD *v11; // rcx
  char v12; // al
  int v13; // ebp
  unsigned int v14; // edx
  _QWORD *v15; // r9
  char v16; // cl
  unsigned int v17; // eax
  int v18; // r8d
  __int64 v19; // rcx
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 LayeredOrRedirectedParent; // rax
  _QWORD *v24; // rdi
  HRGN v25; // rdx
  unsigned __int8 v26; // cl
  unsigned int v27; // edi
  __int64 **v28; // r14
  __int64 *v29; // rbx
  _QWORD *v30; // rsi
  __int64 v31; // rbp
  struct OBJECT *v32; // rsi
  GdiHandleManager *v33; // rdi
  unsigned int v34; // eax
  struct _ENTRY *v35; // rax
  struct _ENTRY *v36; // rcx
  char v37; // al
  struct OBJECT *EntryObject; // rax
  int v39; // edi
  int v40; // edx
  __int64 v41; // rdi
  __int64 v42; // rbx
  int v43; // eax
  bool v44; // zf
  int v45; // ebp
  HRGN v46; // rdi
  __int64 EmptyRgn; // rax
  __int64 v48; // rcx
  int v49; // ecx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  int v53; // ecx
  HRGN v54; // rax
  __int64 StockObject; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  _QWORD *v63; // [rsp+30h] [rbp-98h]
  __int64 v64; // [rsp+38h] [rbp-90h]
  HRGN v65; // [rsp+40h] [rbp-88h] BYREF
  __int64 RedirectionBitmap; // [rsp+48h] [rbp-80h]
  _BYTE v67[8]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v68[2]; // [rsp+58h] [rbp-70h] BYREF
  struct _ENTRY *v69; // [rsp+68h] [rbp-60h] BYREF
  int v70; // [rsp+70h] [rbp-58h]
  int v71; // [rsp+74h] [rbp-54h]
  HRGN EmptyRgnPublic; // [rsp+D8h] [rbp+10h]
  int v73; // [rsp+E0h] [rbp+18h]
  int v74; // [rsp+E8h] [rbp+20h]

  EmptyRgnPublic = a2;
  v4 = ghsemDynamicModeChange;
  v5 = a3;
  v63 = 0LL;
  v6 = a2;
  RedirectionBitmap = 0LL;
  v73 = 0;
  v74 = 0;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared();
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v4, &LockAcquireShared, a3, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
  v7 = (struct _ERESOURCE *)ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz((_DWORD)v4, (_DWORD)a2, a3, (_DWORD)ghsemGreLock, 2, (__int64)L"ghsemGreLock");
  v8 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v8);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz((_DWORD)v4, (_DWORD)a2, a3, (_DWORD)ghsemDCVisRgn, 3, (__int64)L"ghsemDCVisRgn");
  if ( !a1 )
    a1 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 24LL);
  v9 = 0LL;
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
        v11 = (_QWORD *)v11[13];
        if ( v11 )
          continue;
      }
      goto LABEL_24;
    }
    v13 = 0;
    v64 = 0LL;
  }
  else
  {
LABEL_24:
    v13 = 1;
    v64 = 1LL;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11, a2) + 12) & 0x200) != 0 )
    DelayedDestroyCacheDC(0);
  if ( (v5 & 0x10000) != 0 )
  {
    v14 = v5 & 0xFFFFFFC7;
    if ( (v5 & 1) != 0 )
    {
      v5 = v14 | 0x10;
      if ( (*(_BYTE *)(a1[5] + 31LL) & 4) == 0 )
        v5 = v14;
      goto LABEL_47;
    }
    v15 = (_QWORD *)a1[17];
    v16 = *(_BYTE *)(v15[1] + 8LL);
    v17 = v14 | 0x20;
    if ( v16 >= 0 )
      v17 = v5 & 0xFFFFFFC7;
    v18 = v17;
    if ( (v17 & 2) == 0 && (v16 & 0x20) == 0 )
    {
      if ( (v16 & 0x40) != 0 )
      {
        v19 = v15[5];
        if ( v19 )
          v9 = *(_QWORD *)(v19 + 8);
      }
      else
      {
        v18 = v17 | 2;
      }
    }
    v20 = v18 | 8;
    if ( (*(_BYTE *)(a1[5] + 31LL) & 2) == 0 )
      v20 = v18;
    v5 = v20 | 0x10;
    if ( (*(_BYTE *)(a1[5] + 31LL) & 4) == 0 )
      v5 = v20;
    if ( (*(_BYTE *)(a1[5] + 31LL) & 0x20) != 0 )
    {
      v5 &= ~8u;
      if ( v15[10] )
LABEL_47:
        v5 |= 2u;
    }
  }
  if ( (v5 & 0x80000) != 0 )
    v5 = v5 & 0xFFFFFFD5 | 2;
  if ( (int)IsGetLayeredOrRedirectedParentSupported() >= 0 )
  {
    LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(a1);
    v24 = (_QWORD *)LayeredOrRedirectedParent;
    if ( LayeredOrRedirectedParent )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(LayeredOrRedirectedParent + 40) + 24LL) & 0x20000000) != 0 )
      {
        if ( (int)IsGetRedirectionBitmapSupported() < 0 )
        {
          RedirectionBitmap = 0LL;
        }
        else
        {
          RedirectionBitmap = GetRedirectionBitmap(v24);
          if ( RedirectionBitmap )
          {
LABEL_58:
            v5 |= 0x4000u;
            v63 = v24;
            if ( a1 == v24 && (v5 & 0x20) != 0 )
              v5 = v5 & 0xFFFFFFDD | 2;
            if ( (unsigned __int64)v6 > 2 )
            {
              if ( (v5 & 0x40000) != 0 )
              {
                EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
                v25 = v6;
                v6 = EmptyRgnPublic;
                GreCombineRgn(EmptyRgnPublic, v25, 0LL);
                v5 &= ~0x40000u;
              }
              GreOffsetRgn(v6, -*(_DWORD *)(v24[5] + 88LL), -*(_DWORD *)(v24[5] + 92LL));
            }
            goto LABEL_65;
          }
        }
        if ( (*(_BYTE *)(v24[5] + 26LL) & 0x20) == 0 )
          goto LABEL_65;
        goto LABEL_58;
      }
    }
  }
LABEL_65:
  if ( (v5 & 0x20) != 0 )
  {
    v21 = a1[13];
    if ( !v21 )
      v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 24LL);
    v5 |= 2u;
    if ( (v5 & 0x18) == 0 )
    {
      v22 = a1[5];
      if ( (*(_BYTE *)(v22 + 21) & 1) != 0 || (*(_BYTE *)(*(_QWORD *)(v21 + 40) + 31LL) & 2) == 0 )
      {
        v26 = *(_BYTE *)(*(_QWORD *)(v21 + 40) + 31LL);
        if ( ((v26 ^ *(_BYTE *)(v22 + 31)) & 0x10) == 0 )
        {
          v5 &= 0xFFFFFFE7;
          v10 = (_QWORD *)v21;
          if ( (v26 & 4) != 0 )
            v5 |= 0x10u;
        }
      }
    }
  }
  if ( (v5 & 2) == 0 && (!a1 || a1[2] != W32GetThreadWin32Thread(KeGetCurrentThread())) )
    v5 |= 2u;
  v27 = v5 & 0x8080441F;
  if ( (v5 & 2) != 0 )
  {
    while ( 1 )
    {
      v28 = (__int64 **)(gpDispInfo + 24);
      v29 = *(__int64 **)(gpDispInfo + 24);
      if ( v29 )
        break;
LABEL_131:
      v28 = 0LL;
      v41 = gpDispInfo + 24;
      v42 = *(_QWORD *)(gpDispInfo + 24);
      if ( v42 )
      {
        do
        {
          if ( (*(_DWORD *)(v42 + 64) & 0x400002) == 2
            && !(unsigned int)GreIsRendering(*(HDC *)(v42 + 8))
            && !*(_QWORD *)(v42 + 88) )
          {
            v43 = *(_DWORD *)(v42 + 64);
            if ( (v43 & 0x800) != 0 )
              break;
            if ( (v43 & 0x1000) == 0 )
              v28 = (__int64 **)v41;
          }
          v41 = v42;
          v42 = *(_QWORD *)v42;
        }
        while ( v42 );
        v44 = v42 == 0;
        if ( v42 )
          goto LABEL_159;
      }
      if ( v28 )
      {
        v44 = v42 == 0;
LABEL_159:
        v30 = v63;
        if ( !v44 )
          v28 = (__int64 **)v41;
        v27 = v5 & 0x8080441F;
        v29 = *v28;
        goto LABEL_162;
      }
      if ( !CreateCacheDC(a1, v5 & 0x4000 | 0x802, 0LL) )
        goto LABEL_194;
    }
    while ( 1 )
    {
      if ( (_QWORD *)v29[3] != v10 || (_QWORD *)v29[4] != v63 || v29[11] )
        goto LABEL_130;
      v31 = v29[1];
      v68[1] = 0LL;
      v32 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
        PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v67);
      v33 = gpHandleManager;
      v70 = 1;
      v34 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)v31 | ((unsigned int)v31 >> 8) & 0xFF0000);
      v35 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v33 + 2), v34, 0);
      v69 = v35;
      v36 = v35;
      if ( !v35 )
      {
        v70 = 0;
        KeLeaveCriticalRegion();
        goto LABEL_121;
      }
      _m_prefetchw((char *)v35 + 8);
      v71 = *((_DWORD *)v35 + 2);
      v37 = *((_BYTE *)v35 + 15);
      if ( (v37 & 0x20) != 0 )
        goto LABEL_115;
      if ( (v37 & 0x40) == 0 )
        goto LABEL_117;
      EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v36 & 0xFFFFFF);
      if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
      {
LABEL_115:
        HANDLELOCK::vUnlock((HANDLELOCK *)&v69);
        if ( !v70 )
          goto LABEL_121;
      }
      v36 = v69;
LABEL_117:
      if ( *((_BYTE *)v36 + 14) == 1 && *((_WORD *)v36 + 6) == WORD1(v31) )
      {
        v32 = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v36 & 0xFFFFFF);
        ++*((_DWORD *)v32 + 2);
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v69);
LABEL_121:
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v69);
      v68[0] = v32;
      if ( v32 )
        v39 = *((_DWORD *)v32 + 10) & 1;
      else
        v39 = 0;
      DCOBJA::~DCOBJA((DCOBJA *)v68);
      if ( !v39 )
      {
        v40 = *((_DWORD *)v29 + 16);
        v27 = v5 & 0x8080441F;
        if ( (v5 & 0x8080441F) == (v40 & 0x80C05C1F)
          && ((*(_BYTE *)(v10[5] + 31LL) & 0x20) == 0 || v29[2] == v29[3])
          && (!v64 || (v40 & 0x10000000) == 0) )
        {
          *((_DWORD *)v29 + 16) = v40 | 0x1000;
          if ( a1 != (_QWORD *)v29[2] )
          {
            if ( (int)IsSpbCheckDceSupported() >= 0 )
              SpbCheckDce(v29);
            v29[2] = (__int64)a1;
            ResetOrg(0LL, (struct tagDCE *)v29, 0);
          }
          v30 = v63;
          goto LABEL_148;
        }
      }
LABEL_130:
      v28 = (__int64 **)v29;
      v29 = (__int64 *)*v29;
      if ( !v29 )
        goto LABEL_131;
    }
  }
  v28 = (__int64 **)(gpDispInfo + 24);
  v29 = *(__int64 **)(gpDispInfo + 24);
  if ( !v29 )
  {
LABEL_194:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v21, v22);
    return 0LL;
  }
  while ( (v29[8] & 0x400002) != 0
       || (unsigned int)GreIsRendering((HDC)v29[1])
       || (_QWORD *)v29[2] != a1 && v29[1] != v9 )
  {
    v28 = (__int64 **)v29;
    v29 = (__int64 *)*v29;
    if ( !v29 )
      goto LABEL_194;
  }
  if ( v29[7] && (v5 & 0xC0) != 0 && (int)IsDeleteHrgnClipSupported() >= 0 )
    DeleteHrgnClip(v29);
  if ( (v29[8] & 0x4000) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v29[4] + 40) + 27LL) & 2) != 0 && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0 )
      FlushWEFCOMPOSITEDDCEBounds(v29);
    if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
      GreSelectRedirectionBitmap(v29[1], 0LL);
  }
  v30 = v63;
  if ( (_QWORD *)v29[2] == a1
    && (_QWORD *)v29[4] == v63
    && (_QWORD *)v29[3] == v10
    && v13
    && ((v5 ^ *((_DWORD *)v29 + 16)) & 0x4000) == 0
    && (v29[8] & 0x10000000) == 0 )
  {
LABEL_148:
    v45 = 0;
    goto LABEL_149;
  }
  do
  {
LABEL_162:
    v74 = 1;
    if ( (v29[8] & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 )
      SpbCheckDce(v29);
    v50 = v29[1];
    *((_DWORD *)v29 + 16) = v27 | 0x1000;
    GreValidateVisrgn(v50, 0LL);
    v65 = 0LL;
    if ( (int)IsCalcVisRgnSupported() < 0 || !(unsigned int)CalcVisRgn(&v65, a1, v10, v27) )
      *((_DWORD *)v29 + 16) |= 0x10000000u;
    v29[2] = (__int64)a1;
    v29[3] = (__int64)v10;
    v29[4] = (__int64)v30;
    v29[5] = 0LL;
    v29[6] = 0LL;
    ResetOrg(v65, (struct tagDCE *)v29, 1);
    v45 = v73;
    if ( !v65 )
      v45 = 1;
    v73 = v45;
LABEL_149:
    ;
  }
  while ( (v29[8] & 0x8080441F) != v27 );
  if ( v29 != *(__int64 **)(gpDispInfo + 24) )
  {
    *v28 = (__int64 *)*v29;
    *v29 = *(_QWORD *)(gpDispInfo + 24);
    *(_QWORD *)(gpDispInfo + 24) = v29;
  }
  GreValidateVisrgn(v29[1], 0LL);
  if ( (v5 & 0x80u) != 0 )
  {
    v46 = EmptyRgnPublic;
    if ( EmptyRgnPublic == (HRGN)1 )
      goto LABEL_182;
    SetEmptyRgn(ghrgnGDC);
    EmptyRgn = CreateEmptyRgn();
    v48 = v29[1];
    v29[7] = EmptyRgn;
    GreSelectVisRgn(v48, EmptyRgn, 4u);
    v49 = *((_DWORD *)v29 + 16);
    v29[5] = (__int64)EmptyRgnPublic;
    if ( (v5 & 0x40000) != 0 )
      v49 |= 0x40000u;
    *((_DWORD *)v29 + 16) = v49 | 0x80;
    if ( !EmptyRgnPublic )
    {
      v29[6] = 0LL;
LABEL_181:
      *((_DWORD *)v29 + 16) &= ~0x2000u;
      GreSelectVisRgn(v29[1], (__int64)ghrgnGDC, 4u);
      goto LABEL_182;
    }
    goto LABEL_178;
  }
  if ( (v5 & 0x40) != 0 )
  {
    v46 = EmptyRgnPublic;
    if ( EmptyRgnPublic )
    {
      SetEmptyRgn(ghrgnGDC);
      v51 = CreateEmptyRgn();
      v52 = v29[1];
      v29[7] = v51;
      GreSelectVisRgn(v52, v51, 4u);
      v53 = *((_DWORD *)v29 + 16);
      v29[5] = (__int64)EmptyRgnPublic;
      if ( (v5 & 0x40000) != 0 )
        v53 |= 0x40000u;
      *((_DWORD *)v29 + 16) = v53 | 0x40;
      if ( EmptyRgnPublic == (HRGN)1 )
      {
        v29[6] = 1LL;
        goto LABEL_181;
      }
LABEL_178:
      GreCombineRgn(ghrgnGDC, (HRGN)v29[7], v46);
      v54 = (HRGN)CreateEmptyRgnPublic();
      v29[6] = (__int64)v54;
      GreCombineRgn(v54, v46, 0LL);
      if ( (unsigned __int64)v46 > 2 && (v29[8] & 0x40000) == 0 )
        GreMarkUndeletableRgn(v46);
      goto LABEL_181;
    }
  }
LABEL_182:
  if ( (v29[8] & 0x4000) != 0 )
  {
    if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0
      && !(unsigned int)GreSelectRedirectionBitmap(v29[1], RedirectionBitmap) )
    {
      v45 = 1;
    }
    GreGetBounds(v29[1], 0LL, 5LL);
    if ( v45 )
      GreSelectVisRgn(v29[1], 0LL, 1u);
  }
  if ( (v29[8] & 2) == 0 )
    goto LABEL_195;
  if ( !(unsigned int)GreSetDCOwnerEx(v29[1], 0x80000002, 0, 0) )
  {
    *((_DWORD *)v29 + 16) &= ~0x1000u;
    DestroyCacheDC(gpDispInfo + 24, 0LL);
    goto LABEL_194;
  }
  v29[9] = W32GetThreadWin32Thread(KeGetCurrentThread());
  v29[10] = 0LL;
  --gnDCECount;
  if ( v74 && (int)IsGreSelectFontSupported() >= 0 )
  {
    StockObject = GreGetStockObject(13LL);
    GreSelectFont(v29[1], StockObject);
  }
LABEL_195:
  if ( (*(_BYTE *)(a1[5] + 26LL) & 0x40) != 0 && (v5 & 0x40000000) == 0 )
    GreSetLayout((HDC)v29[1], -1, 1u);
  GreValidateVisrgn(v29[1], 1LL);
  if ( (int)IsGreHintDCWndSupported() >= 0 )
    GreHintDCWnd(v29[1], *a1, 0LL, 0LL, 0);
  if ( v30 && (*(_BYTE *)(v30[5] + 26LL) & 8) != 0 && (int)IsGreHintDCWndSupported() >= 0 )
    GreHintDCWnd(
      v29[1],
      *a1,
      *v30,
      ((unsigned __int8)~*(_BYTE *)(v30[5] + 27LL) >> 1) & 1,
      (*(_WORD *)(v30[5] + 42LL) & 0x3FFF) == 669);
  if ( *((int *)v29 + 16) < 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v58, v57);
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
    v29[9] = 0LL;
    v29[10] = PsGetCurrentProcessWin32Process(v62, v61);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v57, v59);
  return v29[1];
}
