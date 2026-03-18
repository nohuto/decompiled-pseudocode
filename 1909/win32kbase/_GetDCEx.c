/*
 * XREFs of _GetDCEx @ 0x1C001BDF0
 * Callers:
 *     NtUserGetDC @ 0x1C002A0F0 (NtUserGetDC.c)
 *     UserGetMonitorDC @ 0x1C003A380 (UserGetMonitorDC.c)
 *     UserGetDesktopDC @ 0x1C003A4D0 (UserGetDesktopDC.c)
 *     _GetDC @ 0x1C0097010 (_GetDC.c)
 * Callees:
 *     SetEmptyRgn @ 0x1C000F1C0 (SetEmptyRgn.c)
 *     CreateCacheDC @ 0x1C000FDD0 (CreateCacheDC.c)
 *     DestroyCacheDC @ 0x1C000FFD0 (DestroyCacheDC.c)
 *     CreateEmptyRgnPublic @ 0x1C0016040 (CreateEmptyRgnPublic.c)
 *     CreateEmptyRgn @ 0x1C0016090 (CreateEmptyRgn.c)
 *     GreValidateVisrgn @ 0x1C0017B9C (GreValidateVisrgn.c)
 *     GreSelectVisRgn @ 0x1C0017C00 (GreSelectVisRgn.c)
 *     GreSetDCOwnerEx @ 0x1C001AF00 (GreSetDCOwnerEx.c)
 *     GreGetBounds @ 0x1C001D5B0 (GreGetBounds.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001F380 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001F810 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001FEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00200A0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0020A50 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreGetStockObject @ 0x1C0022DB0 (GreGetStockObject.c)
 *     GreCombineRgn @ 0x1C00247C0 (GreCombineRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     GreUnlockVisRgn @ 0x1C002A8A0 (GreUnlockVisRgn.c)
 *     DelayedDestroyCacheDC @ 0x1C002B920 (DelayedDestroyCacheDC.c)
 *     GreIsRendering @ 0x1C002DE90 (GreIsRendering.c)
 *     GreOffsetRgn @ 0x1C0049CF0 (GreOffsetRgn.c)
 *     GreSetLayout @ 0x1C0087A50 (GreSetLayout.c)
 *     IsThreadCrossSessionAttached @ 0x1C00B9DA8 (IsThreadCrossSessionAttached.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00BBF58 (--1DCOBJA@@QEAA@XZ.c)
 *     GreMarkUndeletableRgn @ 0x1C00BCCA0 (GreMarkUndeletableRgn.c)
 *     McTemplateK0pqz @ 0x1C012FEB8 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C012FF70 (McTemplateK0pz.c)
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
  __int64 v12; // rdx
  char v13; // al
  int v14; // ebp
  unsigned int v15; // edx
  _QWORD *v16; // r9
  char v17; // cl
  unsigned int v18; // eax
  int v19; // r8d
  __int64 v20; // rcx
  int v21; // ecx
  __int64 LayeredOrRedirectedParent; // rax
  _QWORD *v23; // rdi
  HRGN v24; // rdx
  _QWORD *v25; // rdx
  __int64 v26; // r8
  unsigned __int8 v27; // cl
  unsigned int v28; // edi
  __int64 **v29; // r14
  __int64 *v30; // rbx
  _QWORD *v31; // rsi
  __int64 v32; // rbp
  struct OBJECT *v33; // rsi
  GdiHandleManager *v34; // rdi
  unsigned int v35; // eax
  struct _ENTRY *v36; // rax
  struct _ENTRY *v37; // rcx
  char v38; // al
  struct OBJECT *EntryObject; // rax
  int v40; // edi
  int v41; // edx
  __int64 v42; // rdi
  __int64 v43; // rbx
  int v44; // eax
  bool v45; // zf
  int v46; // ebp
  HRGN v47; // rdi
  __int64 EmptyRgn; // rax
  __int64 v49; // rcx
  int v50; // ecx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  int v54; // ecx
  HRGN v55; // rax
  __int64 StockObject; // rax
  __int64 v58; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v60; // rcx
  _QWORD *v61; // [rsp+30h] [rbp-98h]
  __int64 v62; // [rsp+38h] [rbp-90h]
  HRGN v63; // [rsp+40h] [rbp-88h] BYREF
  __int64 RedirectionBitmap; // [rsp+48h] [rbp-80h]
  char v65[8]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v66[2]; // [rsp+58h] [rbp-70h] BYREF
  struct _ENTRY *v67; // [rsp+68h] [rbp-60h] BYREF
  int v68; // [rsp+70h] [rbp-58h]
  int v69; // [rsp+74h] [rbp-54h]
  HRGN EmptyRgnPublic; // [rsp+D8h] [rbp+10h]
  int v71; // [rsp+E0h] [rbp+18h]
  int v72; // [rsp+E8h] [rbp+20h]

  EmptyRgnPublic = a2;
  v4 = ghsemDynamicModeChange;
  v5 = a3;
  v61 = 0LL;
  v6 = a2;
  RedirectionBitmap = 0LL;
  v71 = 0;
  v72 = 0;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared();
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v4, &LockAcquireShared, a3, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
  v7 = ghsemGreLock;
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
      v12 = v11[5];
      v13 = *(_BYTE *)(v12 + 31);
      if ( (v13 & 0x10) == 0 || (v13 & 0x20) != 0 && v11 != a1 )
        break;
      if ( (*(_WORD *)(v12 + 42) & 0x3FFF) != 0x29D )
      {
        v11 = (_QWORD *)v11[13];
        if ( v11 )
          continue;
      }
      goto LABEL_24;
    }
    v14 = 0;
    v62 = 0LL;
  }
  else
  {
LABEL_24:
    v14 = 1;
    v62 = 1LL;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 12) & 0x200) != 0 )
    DelayedDestroyCacheDC(0LL);
  if ( (v5 & 0x10000) != 0 )
  {
    v15 = v5 & 0xFFFFFFC7;
    if ( (v5 & 1) != 0 )
    {
      v5 = v15 | 0x10;
      if ( (*(_BYTE *)(a1[5] + 31LL) & 4) == 0 )
        v5 = v15;
      goto LABEL_47;
    }
    v16 = (_QWORD *)a1[17];
    v17 = *(_BYTE *)(v16[1] + 8LL);
    v18 = v15 | 0x20;
    if ( v17 >= 0 )
      v18 = v5 & 0xFFFFFFC7;
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
          RedirectionBitmap = GetRedirectionBitmap(v23);
          if ( RedirectionBitmap )
          {
LABEL_58:
            v5 |= 0x4000u;
            v61 = v23;
            if ( a1 == v23 && (v5 & 0x20) != 0 )
              v5 = v5 & 0xFFFFFFDD | 2;
            if ( (unsigned __int64)v6 > 2 )
            {
              if ( (v5 & 0x40000) != 0 )
              {
                EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
                v24 = v6;
                v6 = EmptyRgnPublic;
                GreCombineRgn(EmptyRgnPublic, v24, 0LL);
                v5 &= ~0x40000u;
              }
              GreOffsetRgn(v6);
            }
            goto LABEL_65;
          }
        }
        if ( (*(_BYTE *)(v23[5] + 26LL) & 0x20) == 0 )
          goto LABEL_65;
        goto LABEL_58;
      }
    }
  }
LABEL_65:
  if ( (v5 & 0x20) != 0 )
  {
    v25 = (_QWORD *)a1[13];
    if ( !v25 )
      v25 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 24LL);
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
          v10 = v25;
          if ( (v27 & 4) != 0 )
            v5 |= 0x10u;
        }
      }
    }
  }
  if ( (v5 & 2) == 0 && (!a1 || a1[2] != W32GetThreadWin32Thread(KeGetCurrentThread())) )
    v5 |= 2u;
  v28 = v5 & 0x8080441F;
  if ( (v5 & 2) != 0 )
  {
    while ( 1 )
    {
      v29 = (__int64 **)(gpDispInfo + 24);
      v30 = *(__int64 **)(gpDispInfo + 24);
      if ( v30 )
        break;
LABEL_131:
      v29 = 0LL;
      v42 = gpDispInfo + 24;
      v43 = *(_QWORD *)(gpDispInfo + 24);
      if ( v43 )
      {
        do
        {
          if ( (*(_DWORD *)(v43 + 64) & 0x400002) == 2
            && !(unsigned int)GreIsRendering(*(HDC *)(v43 + 8))
            && !*(_QWORD *)(v43 + 88) )
          {
            v44 = *(_DWORD *)(v43 + 64);
            if ( (v44 & 0x800) != 0 )
              break;
            if ( (v44 & 0x1000) == 0 )
              v29 = (__int64 **)v42;
          }
          v42 = v43;
          v43 = *(_QWORD *)v43;
        }
        while ( v43 );
        v45 = v43 == 0;
        if ( v43 )
          goto LABEL_159;
      }
      if ( v29 )
      {
        v45 = v43 == 0;
LABEL_159:
        v31 = v61;
        if ( !v45 )
          v29 = (__int64 **)v42;
        v28 = v5 & 0x8080441F;
        v30 = *v29;
        goto LABEL_162;
      }
      if ( !CreateCacheDC((__int64)a1, v5 & 0x4000 | 0x802, 0LL) )
        goto LABEL_194;
    }
    while ( 1 )
    {
      if ( (_QWORD *)v30[3] != v10 || (_QWORD *)v30[4] != v61 || v30[11] )
        goto LABEL_130;
      v32 = v30[1];
      v66[1] = 0LL;
      v33 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached() )
        PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v65);
      v34 = gpHandleManager;
      v68 = 1;
      v35 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)v32 | ((unsigned int)v32 >> 8) & 0xFF0000);
      v36 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v34 + 2), v35, 0);
      v67 = v36;
      v37 = v36;
      if ( !v36 )
      {
        v68 = 0;
        KeLeaveCriticalRegion();
        goto LABEL_121;
      }
      _m_prefetchw((char *)v36 + 8);
      v69 = *((_DWORD *)v36 + 2);
      v38 = *((_BYTE *)v36 + 15);
      if ( (v38 & 0x20) != 0 )
        goto LABEL_115;
      if ( (v38 & 0x40) == 0 )
        goto LABEL_117;
      EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v37 & 0xFFFFFF);
      if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
      {
LABEL_115:
        HANDLELOCK::vUnlock((HANDLELOCK *)&v67);
        if ( !v68 )
          goto LABEL_121;
      }
      v37 = v67;
LABEL_117:
      if ( *((_BYTE *)v37 + 14) == 1 && *((_WORD *)v37 + 6) == WORD1(v32) )
      {
        v33 = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v37 & 0xFFFFFF);
        ++*((_DWORD *)v33 + 2);
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v67);
LABEL_121:
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v67);
      v66[0] = v33;
      if ( v33 )
        v40 = *((_DWORD *)v33 + 10) & 1;
      else
        v40 = 0;
      DCOBJA::~DCOBJA((DCOBJA *)v66);
      if ( !v40 )
      {
        v41 = *((_DWORD *)v30 + 16);
        v28 = v5 & 0x8080441F;
        if ( (v5 & 0x8080441F) == (v41 & 0x80C05C1F)
          && ((*(_BYTE *)(v10[5] + 31LL) & 0x20) == 0 || v30[2] == v30[3])
          && (!v62 || (v41 & 0x10000000) == 0) )
        {
          *((_DWORD *)v30 + 16) = v41 | 0x1000;
          if ( a1 != (_QWORD *)v30[2] )
          {
            if ( (int)IsSpbCheckDceSupported() >= 0 )
              SpbCheckDce(v30);
            v30[2] = (__int64)a1;
            ResetOrg(0LL, (struct tagDCE *)v30, 0);
          }
          v31 = v61;
          goto LABEL_148;
        }
      }
LABEL_130:
      v29 = (__int64 **)v30;
      v30 = (__int64 *)*v30;
      if ( !v30 )
        goto LABEL_131;
    }
  }
  v29 = (__int64 **)(gpDispInfo + 24);
  v30 = *(__int64 **)(gpDispInfo + 24);
  if ( !v30 )
  {
LABEL_194:
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
      goto LABEL_194;
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
  v31 = v61;
  if ( (_QWORD *)v30[2] == a1
    && (_QWORD *)v30[4] == v61
    && (_QWORD *)v30[3] == v10
    && v14
    && ((v5 ^ *((_DWORD *)v30 + 16)) & 0x4000) == 0
    && (v30[8] & 0x10000000) == 0 )
  {
LABEL_148:
    v46 = 0;
    goto LABEL_149;
  }
  do
  {
LABEL_162:
    v72 = 1;
    if ( (v30[8] & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 )
      SpbCheckDce(v30);
    v51 = v30[1];
    *((_DWORD *)v30 + 16) = v28 | 0x1000;
    GreValidateVisrgn(v51, 0LL);
    v63 = 0LL;
    if ( (int)IsCalcVisRgnSupported() < 0 || !(unsigned int)CalcVisRgn(&v63, a1, v10, v28) )
      *((_DWORD *)v30 + 16) |= 0x10000000u;
    v30[2] = (__int64)a1;
    v30[3] = (__int64)v10;
    v30[4] = (__int64)v31;
    v30[5] = 0LL;
    v30[6] = 0LL;
    ResetOrg(v63, (struct tagDCE *)v30, 1);
    v46 = v71;
    if ( !v63 )
      v46 = 1;
    v71 = v46;
LABEL_149:
    ;
  }
  while ( (v30[8] & 0x8080441F) != v28 );
  if ( v30 != *(__int64 **)(gpDispInfo + 24) )
  {
    *v29 = (__int64 *)*v30;
    *v30 = *(_QWORD *)(gpDispInfo + 24);
    *(_QWORD *)(gpDispInfo + 24) = v30;
  }
  GreValidateVisrgn(v30[1], 0LL);
  if ( (v5 & 0x80u) != 0 )
  {
    v47 = EmptyRgnPublic;
    if ( EmptyRgnPublic == (HRGN)1 )
      goto LABEL_182;
    SetEmptyRgn(ghrgnGDC);
    EmptyRgn = CreateEmptyRgn();
    v49 = v30[1];
    v30[7] = EmptyRgn;
    GreSelectVisRgn(v49, EmptyRgn, 4u);
    v50 = *((_DWORD *)v30 + 16);
    v30[5] = (__int64)EmptyRgnPublic;
    if ( (v5 & 0x40000) != 0 )
      v50 |= 0x40000u;
    *((_DWORD *)v30 + 16) = v50 | 0x80;
    if ( !EmptyRgnPublic )
    {
      v30[6] = 0LL;
LABEL_181:
      *((_DWORD *)v30 + 16) &= ~0x2000u;
      GreSelectVisRgn(v30[1], (__int64)ghrgnGDC, 4u);
      goto LABEL_182;
    }
    goto LABEL_178;
  }
  if ( (v5 & 0x40) != 0 )
  {
    v47 = EmptyRgnPublic;
    if ( EmptyRgnPublic )
    {
      SetEmptyRgn(ghrgnGDC);
      v52 = CreateEmptyRgn();
      v53 = v30[1];
      v30[7] = v52;
      GreSelectVisRgn(v53, v52, 4u);
      v54 = *((_DWORD *)v30 + 16);
      v30[5] = (__int64)EmptyRgnPublic;
      if ( (v5 & 0x40000) != 0 )
        v54 |= 0x40000u;
      *((_DWORD *)v30 + 16) = v54 | 0x40;
      if ( EmptyRgnPublic == (HRGN)1 )
      {
        v30[6] = 1LL;
        goto LABEL_181;
      }
LABEL_178:
      GreCombineRgn(ghrgnGDC, (HRGN)v30[7], v47);
      v55 = (HRGN)CreateEmptyRgnPublic();
      v30[6] = (__int64)v55;
      GreCombineRgn(v55, v47, 0LL);
      if ( (unsigned __int64)v47 > 2 && (v30[8] & 0x40000) == 0 )
        GreMarkUndeletableRgn(v47);
      goto LABEL_181;
    }
  }
LABEL_182:
  if ( (v30[8] & 0x4000) != 0 )
  {
    if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0
      && !(unsigned int)GreSelectRedirectionBitmap(v30[1], RedirectionBitmap) )
    {
      v46 = 1;
    }
    GreGetBounds(v30[1], 0LL, 5LL);
    if ( v46 )
      GreSelectVisRgn(v30[1], 0LL, 1u);
  }
  if ( (v30[8] & 2) == 0 )
    goto LABEL_195;
  if ( !(unsigned int)GreSetDCOwnerEx(v30[1], 0x80000002, 0, 0) )
  {
    *((_DWORD *)v30 + 16) &= ~0x1000u;
    DestroyCacheDC((__int64 *)(gpDispInfo + 24), 0LL);
    goto LABEL_194;
  }
  v30[9] = W32GetThreadWin32Thread(KeGetCurrentThread());
  v30[10] = 0LL;
  --gnDCECount;
  if ( v72 && (int)IsGreSelectFontSupported() >= 0 )
  {
    StockObject = GreGetStockObject(13LL);
    GreSelectFont(v30[1], StockObject);
  }
LABEL_195:
  if ( (*(_BYTE *)(a1[5] + 26LL) & 0x40) != 0 && (v5 & 0x40000000) == 0 )
    GreSetLayout((HDC)v30[1], -1, 1u);
  GreValidateVisrgn(v30[1], 1LL);
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
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v58);
    *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
    v30[9] = 0LL;
    v30[10] = PsGetCurrentProcessWin32Process(v60);
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  return v30[1];
}
