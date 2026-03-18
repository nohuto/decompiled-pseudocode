/*
 * XREFs of _GetDCEx @ 0x1C0026700
 * Callers:
 *     NtUserGetDC @ 0x1C00281A0 (NtUserGetDC.c)
 *     UserGetMonitorDC @ 0x1C00451E8 (UserGetMonitorDC.c)
 *     UserGetDesktopDC @ 0x1C005E630 (UserGetDesktopDC.c)
 *     _GetDC @ 0x1C0085CC0 (_GetDC.c)
 * Callees:
 *     CreateEmptyRgnPublic @ 0x1C0019D40 (CreateEmptyRgnPublic.c)
 *     GreOffsetRgn @ 0x1C001CB60 (GreOffsetRgn.c)
 *     GreSetRectRgn @ 0x1C001E010 (GreSetRectRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C001EC80 (GreCreateRectRgnIndirect.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002581C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00273C8 (--1DCOBJA@@QEAA@XZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00273F4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     GreValidateVisrgn @ 0x1C0027468 (GreValidateVisrgn.c)
 *     GreSetDCOwnerEx @ 0x1C0027700 (GreSetDCOwnerEx.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0027DBC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreUnlockVisRgn @ 0x1C0029B20 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0029D60 (GreLockVisRgn.c)
 *     GreSelectVisRgnShared @ 0x1C0029E90 (GreSelectVisRgnShared.c)
 *     GreIsRendering @ 0x1C002A550 (GreIsRendering.c)
 *     GreCombineRgn @ 0x1C003A8B0 (GreCombineRgn.c)
 *     HmgMarkUndeletable @ 0x1C0044AD0 (HmgMarkUndeletable.c)
 *     DestroyCacheDC @ 0x1C0045330 (DestroyCacheDC.c)
 *     GreSetLayout @ 0x1C0076940 (GreSetLayout.c)
 *     CreateCacheDC @ 0x1C0099470 (CreateCacheDC.c)
 *     McTemplateK0pqz @ 0x1C01082A8 (McTemplateK0pqz.c)
 *     McTemplateK0pz @ 0x1C0108360 (McTemplateK0pz.c)
 */

__int64 __fastcall GetDCEx(_QWORD *a1, HRGN a2, __int64 a3)
{
  unsigned int v4; // esi
  HRGN v5; // r12
  const wchar_t *v6; // rcx
  struct _ERESOURCE *v7; // rbx
  const wchar_t *v8; // rcx
  struct _ERESOURCE *v9; // rbx
  __int64 v10; // r13
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  char v13; // al
  int v14; // r14d
  unsigned int v15; // edx
  _QWORD *v16; // r10
  unsigned int v17; // r8d
  char v18; // r9
  int v19; // ecx
  __int64 LayeredOrRedirectedParent; // rax
  _QWORD *v21; // rdi
  _QWORD *v22; // rdi
  unsigned int v23; // ebp
  __int64 **v24; // r12
  __int64 *v25; // rbx
  __int64 v26; // r14
  __int64 v27; // rbx
  BOOL v28; // edi
  int v29; // eax
  bool v30; // zf
  _QWORD *v31; // r13
  unsigned int v32; // r14d
  HDC v33; // rcx
  _QWORD *v34; // rdi
  BOOL v35; // edi
  int v36; // edx
  int v37; // ebp
  __int64 v38; // rdx
  unsigned __int64 v39; // xmm0_8
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  int v43; // edx
  PERESOURCE v44; // rcx
  PERESOURCE v45; // rcx
  _QWORD *v47; // rdx
  __int64 v48; // r8
  unsigned __int8 v49; // cl
  int v50; // ebp
  __int64 v51; // rcx
  __int64 **v52; // rdi
  __int64 *v53; // rbx
  int v54; // eax
  __int64 *v55; // rax
  void *v56; // rdx
  HRGN v57; // rbp
  struct HOBJ__ *RectRgnIndirect; // rax
  HDC v59; // rcx
  int v60; // eax
  HRGN v61; // rax
  __int64 v62; // rdx
  __int64 CurrentProcessWin32Process; // rax
  HRGN v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  int v68; // eax
  struct HOBJ__ *v69; // rax
  HDC v70; // rcx
  int v71; // eax
  HRGN v72; // rax
  _QWORD *v73; // [rsp+30h] [rbp-F8h]
  __int64 v74; // [rsp+38h] [rbp-F0h]
  HRGN v75; // [rsp+40h] [rbp-E8h] BYREF
  __int64 RedirectionBitmap; // [rsp+48h] [rbp-E0h]
  _QWORD v77[6]; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD v78[6]; // [rsp+80h] [rbp-A8h] BYREF
  _QWORD v79[7]; // [rsp+B0h] [rbp-78h] BYREF
  int v80; // [rsp+130h] [rbp+8h]
  HRGN EmptyRgnPublic; // [rsp+138h] [rbp+10h]
  int v82; // [rsp+140h] [rbp+18h]
  _QWORD *v83; // [rsp+148h] [rbp+20h]

  EmptyRgnPublic = a2;
  v82 = 0;
  v4 = a3;
  v73 = 0LL;
  v5 = a2;
  RedirectionBitmap = 0LL;
  v80 = 0;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared();
  v6 = L"ghsemDynamicModeChange";
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(L"ghsemDynamicModeChange", &LockAcquireShared, a3, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
  v7 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion(v6);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v7);
  }
  v8 = L"ghsemGreLock";
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz((unsigned int)L"ghsemGreLock", (_DWORD)a2, a3, (_DWORD)ghsemGreLock, 2, (__int64)L"ghsemGreLock");
  v9 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion(v8);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v9);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz((unsigned int)L"ghsemDCVisRgn", (_DWORD)a2, a3, (_DWORD)ghsemDCVisRgn, 3, (__int64)L"ghsemDCVisRgn");
  if ( !a1 )
    a1 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL) + 24LL);
  v10 = 0LL;
  v83 = a1;
  v11 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v12 = v11[5];
      v13 = *(_BYTE *)(v12 + 31);
      if ( (v13 & 0x10) == 0 || (v13 & 0x20) != 0 && v11 != a1 )
        break;
      if ( (*(_WORD *)(v12 + 42) & 0x2FFF) != 0x29D )
      {
        v11 = (_QWORD *)v11[10];
        if ( v11 )
          continue;
      }
      goto LABEL_17;
    }
    v14 = 0;
    v74 = 0LL;
  }
  else
  {
LABEL_17:
    v14 = 1;
    v74 = 1LL;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 12) & 0x200) != 0 )
  {
    v50 = 1;
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
    v52 = (__int64 **)(gpDispInfo + 24);
    v53 = *(__int64 **)(gpDispInfo + 24);
    if ( !v53 )
      goto LABEL_167;
    do
    {
      v54 = *((_DWORD *)v53 + 16);
      if ( v54 < 0 )
      {
        if ( v53[10] == PsGetCurrentProcessWin32Process(v51) )
          v50 = 0;
      }
      else if ( (v54 & 0x400000) != 0 )
      {
        DestroyCacheDC(v52, v53[1]);
      }
      v55 = *v52;
      if ( v53 == *v52 )
      {
        v55 = (__int64 *)*v53;
        v52 = (__int64 **)v53;
      }
      v53 = v55;
    }
    while ( v55 );
    if ( v50 )
    {
LABEL_167:
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v51);
      *(_DWORD *)(CurrentProcessWin32Process + 12) &= ~0x200u;
    }
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  }
  if ( (v4 & 0x10000) != 0 )
  {
    v15 = v4 & 0xFFFFFFC7;
    if ( (v4 & 1) != 0 )
    {
      v4 = v15 | 0x10;
      if ( (*(_BYTE *)(a1[5] + 31LL) & 4) == 0 )
        v4 = v15;
    }
    else
    {
      v16 = (_QWORD *)a1[14];
      v17 = v15 | 0x20;
      v18 = *(_BYTE *)(v16[1] + 8LL);
      if ( v18 >= 0 )
        v17 = v4 & 0xFFFFFFC7;
      if ( (((v17 & 2) == 0) & (unsigned __int8)~((unsigned __int8)v18 >> 5)) != 0 )
      {
        if ( (v18 & 0x40) != 0 )
        {
          v67 = v16[5];
          if ( v67 )
            v10 = *(_QWORD *)(v67 + 8);
        }
        else
        {
          v17 |= 2u;
        }
      }
      v19 = v17 | 8;
      if ( (*(_BYTE *)(a1[5] + 31LL) & 2) == 0 )
        v19 = v17;
      v4 = v19 | 0x10;
      if ( (*(_BYTE *)(a1[5] + 31LL) & 4) == 0 )
        v4 = v19;
      if ( (*(_BYTE *)(a1[5] + 31LL) & 0x20) == 0 )
        goto LABEL_36;
      v4 &= ~8u;
      if ( !v16[10] )
        goto LABEL_36;
    }
    v4 |= 2u;
  }
LABEL_36:
  if ( (v4 & 0x80000) != 0 )
    v4 = v4 & 0xFFFFFFD5 | 2;
  if ( (int)IsGetLayeredOrRedirectedParentSupported() >= 0 )
  {
    LayeredOrRedirectedParent = GetLayeredOrRedirectedParent(a1);
    v21 = (_QWORD *)LayeredOrRedirectedParent;
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
          RedirectionBitmap = GetRedirectionBitmap(v21);
          if ( RedirectionBitmap )
          {
LABEL_43:
            v4 |= 0x4000u;
            v73 = v21;
            if ( a1 == v21 && (v4 & 0x20) != 0 )
              v4 = v4 & 0xFFFFFFDD | 2;
            if ( (unsigned __int64)v5 > 2 )
            {
              if ( (v4 & 0x40000) != 0 )
              {
                EmptyRgnPublic = (HRGN)CreateEmptyRgnPublic();
                v64 = v5;
                v5 = EmptyRgnPublic;
                GreCombineRgn(EmptyRgnPublic, v64, 0LL, 5);
                v4 &= ~0x40000u;
              }
              GreOffsetRgn(v5, -*(_DWORD *)(v21[5] + 88LL), -*(_DWORD *)(v21[5] + 92LL));
            }
            goto LABEL_47;
          }
        }
        if ( (*(_BYTE *)(v21[5] + 26LL) & 0x20) == 0 )
          goto LABEL_47;
        goto LABEL_43;
      }
    }
  }
LABEL_47:
  if ( (v4 & 0x20) == 0 )
    goto LABEL_48;
  v47 = (_QWORD *)a1[10];
  if ( !v47 )
    v47 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL)
                     + 24LL);
  if ( (v4 |= 2u, (v4 & 0x18) != 0)
    || (v48 = a1[5], (*(_BYTE *)(v48 + 21) & 1) == 0) && (*(_BYTE *)(v47[5] + 31LL) & 2) != 0
    || (v49 = *(_BYTE *)(v47[5] + 31LL), ((v49 ^ *(_BYTE *)(v48 + 31)) & 0x10) != 0) )
  {
LABEL_48:
    v22 = a1;
  }
  else
  {
    v4 &= 0xFFFFFFE7;
    v83 = v47;
    v22 = v47;
    if ( (v49 & 4) != 0 )
      v4 |= 0x10u;
  }
  if ( (v4 & 2) == 0 && (!a1 || a1[2] != W32GetThreadWin32Thread((__int64)KeGetCurrentThread())) )
    v4 |= 2u;
  v23 = v4 & 0x8080441F;
  if ( (v4 & 2) != 0 )
  {
    while ( 1 )
    {
      v24 = (__int64 **)(gpDispInfo + 24);
      v25 = *(__int64 **)(gpDispInfo + 24);
      if ( v25 )
        break;
LABEL_54:
      v24 = 0LL;
      v26 = gpDispInfo + 24;
      v27 = *(_QWORD *)(gpDispInfo + 24);
      if ( v27 )
      {
        do
        {
          if ( (*(_DWORD *)(v27 + 64) & 0x400002) == 2 )
          {
            DCOBJA::DCOBJA((DCOBJA *)v79, *(HDC *)(v27 + 8));
            v28 = v79[0] && *(_DWORD *)(v79[0] + 40LL) & 1;
            DCOBJA::~DCOBJA((DCOBJA *)v79);
            if ( !v28 && !*(_QWORD *)(v27 + 88) )
            {
              v29 = *(_DWORD *)(v27 + 64);
              if ( (v29 & 0x800) != 0 )
                break;
              if ( (v29 & 0x1000) == 0 )
                v24 = (__int64 **)v26;
            }
          }
          v26 = v27;
          v27 = *(_QWORD *)v27;
        }
        while ( v27 );
        v30 = v27 == 0;
        if ( v27 )
          goto LABEL_67;
      }
      if ( v24 )
      {
        v30 = v27 == 0;
LABEL_67:
        v31 = v83;
        if ( !v30 )
          v24 = (__int64 **)v26;
        v25 = *v24;
LABEL_70:
        v32 = 1;
        goto LABEL_71;
      }
      if ( !CreateCacheDC(a1, v4 & 0x4000 | 0x802, 0LL) )
        goto LABEL_232;
      v22 = v83;
    }
    while ( 1 )
    {
      if ( (_QWORD *)v25[3] == v22 && (_QWORD *)v25[4] == v73 && !v25[11] )
      {
        DCOBJA::DCOBJA((DCOBJA *)v78, (HDC)v25[1]);
        v35 = v78[0] && *(_DWORD *)(v78[0] + 40LL) & 1;
        DCOBJA::~DCOBJA((DCOBJA *)v78);
        v30 = !v35;
        v22 = v83;
        if ( v30 )
        {
          v36 = *((_DWORD *)v25 + 16);
          if ( v23 == (v36 & 0x80C05C1F)
            && ((*(_BYTE *)(v83[5] + 31LL) & 0x20) == 0 || v25[2] == v25[3])
            && (!v74 || (v36 & 0x10000000) == 0) )
          {
            break;
          }
        }
      }
      v24 = (__int64 **)v25;
      v25 = (__int64 *)*v25;
      if ( !v25 )
        goto LABEL_54;
    }
    *((_DWORD *)v25 + 16) = v36 | 0x1000;
    if ( a1 != (_QWORD *)v25[2] )
    {
      if ( (int)IsSpbCheckDceSupported() >= 0 )
        SpbCheckDce(v25);
      v25[2] = (__int64)a1;
      ResetOrg(0LL, (struct tagDCE *)v25, 0);
    }
    v34 = v73;
    v32 = 1;
    v31 = v83;
  }
  else
  {
    v24 = (__int64 **)(gpDispInfo + 24);
    v25 = *(__int64 **)(gpDispInfo + 24);
    if ( !v25 )
    {
LABEL_232:
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
      return 0LL;
    }
    while ( (v25[8] & 0x400002) != 0
         || (unsigned int)GreIsRendering((HDC)v25[1])
         || (_QWORD *)v25[2] != a1 && v25[1] != v10 )
    {
      v24 = (__int64 **)v25;
      v25 = (__int64 *)*v25;
      if ( !v25 )
        goto LABEL_232;
    }
    if ( v25[7] )
    {
      if ( (v4 & 0xC0) != 0 )
      {
        v68 = IsDeleteHrgnClipSupported();
        if ( v68 >= 0 )
          DeleteHrgnClip(v25);
      }
    }
    if ( (v25[8] & 0x4000) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v25[4] + 40) + 27LL) & 2) != 0 && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0 )
        FlushWEFCOMPOSITEDDCEBounds(v25);
      if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
        GreSelectRedirectionBitmap(v25[1], 0LL);
    }
    v31 = v83;
    if ( (_QWORD *)v25[2] != a1 )
      goto LABEL_70;
    v34 = v73;
    if ( (_QWORD *)v25[4] != v73 || (_QWORD *)v25[3] != v83 || !v14 || ((v4 ^ *((_DWORD *)v25 + 16)) & 0x4000) != 0 )
      goto LABEL_70;
    v32 = 1;
    if ( (v25[8] & 0x10000000) != 0 )
      goto LABEL_71;
  }
  while ( (v25[8] & 0x8080441F) != v23 )
  {
LABEL_71:
    v80 = 1;
    if ( (v25[8] & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 )
      SpbCheckDce(v25);
    v33 = (HDC)v25[1];
    *((_DWORD *)v25 + 16) = v23 | 0x1000;
    GreValidateVisrgn(v33);
    v75 = 0LL;
    if ( (int)IsCalcVisRgnSupported() < 0 || !(unsigned int)CalcVisRgn(&v75, a1, v31, v23) )
      *((_DWORD *)v25 + 16) |= 0x10000000u;
    v34 = v73;
    v25[4] = (__int64)v73;
    v25[2] = (__int64)a1;
    v25[3] = (__int64)v31;
    v25[5] = 0LL;
    v25[6] = 0LL;
    ResetOrg(v75, (struct tagDCE *)v25, 1);
    if ( !v75 )
      v82 = 1;
  }
  if ( v25 != *(__int64 **)(gpDispInfo + 24) )
  {
    *v24 = (__int64 *)*v25;
    *v25 = *(_QWORD *)(gpDispInfo + 24);
    *(_QWORD *)(gpDispInfo + 24) = v25;
  }
  GreValidateVisrgn((HDC)v25[1]);
  if ( (v4 & 0x80u) != 0 )
  {
    v57 = EmptyRgnPublic;
    if ( EmptyRgnPublic == (HRGN)1 )
      goto LABEL_94;
    GreSetRectRgn(ghrgnGDC, gZero.LowPart, gZero.HighPart, 0, 0);
    RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
    v59 = (HDC)v25[1];
    v25[7] = (__int64)RectRgnIndirect;
    GreSelectVisRgnShared(v59);
    v60 = *((_DWORD *)v25 + 16);
    v25[5] = (__int64)EmptyRgnPublic;
    if ( (v4 & 0x40000) != 0 )
    {
      v60 |= 0x40000u;
      *((_DWORD *)v25 + 16) = v60;
    }
    *((_DWORD *)v25 + 16) = v60 | 0x80;
    if ( !EmptyRgnPublic )
    {
      v25[6] = 0LL;
      goto LABEL_160;
    }
    GreCombineRgn(ghrgnGDC, (HRGN)v25[7], EmptyRgnPublic, 1);
    v61 = (HRGN)CreateEmptyRgnPublic();
    v25[6] = (__int64)v61;
    GreCombineRgn(v61, EmptyRgnPublic, 0LL, 5);
    if ( (unsigned __int64)EmptyRgnPublic <= 2 || (v25[8] & 0x40000) != 0 )
      goto LABEL_160;
LABEL_159:
    PsGetCurrentProcessId();
    LOBYTE(v62) = 4;
    HmgMarkUndeletable(v57, v62);
LABEL_160:
    *((_DWORD *)v25 + 16) &= ~0x2000u;
    GreSelectVisRgnShared((HDC)v25[1]);
    goto LABEL_94;
  }
  if ( (v4 & 0x40) != 0 )
  {
    v57 = EmptyRgnPublic;
    if ( EmptyRgnPublic )
    {
      GreSetRectRgn(ghrgnGDC, gZero.LowPart, gZero.HighPart, 0, 0);
      v69 = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
      v70 = (HDC)v25[1];
      v25[7] = (__int64)v69;
      GreSelectVisRgnShared(v70);
      v71 = *((_DWORD *)v25 + 16);
      v25[5] = (__int64)EmptyRgnPublic;
      if ( (v4 & 0x40000) != 0 )
      {
        v71 |= 0x40000u;
        *((_DWORD *)v25 + 16) = v71;
      }
      *((_DWORD *)v25 + 16) = v71 | 0x40;
      if ( EmptyRgnPublic == (HRGN)1 )
      {
        v25[6] = 1LL;
        goto LABEL_160;
      }
      GreCombineRgn(ghrgnGDC, (HRGN)v25[7], EmptyRgnPublic, 4);
      v72 = (HRGN)CreateEmptyRgnPublic();
      v25[6] = (__int64)v72;
      GreCombineRgn(v72, EmptyRgnPublic, 0LL, 5);
      if ( (unsigned __int64)EmptyRgnPublic <= 2 || (v25[8] & 0x40000) != 0 )
        goto LABEL_160;
      goto LABEL_159;
    }
  }
LABEL_94:
  if ( (v25[8] & 0x4000) != 0 )
  {
    if ( (int)IsGreSelectRedirectionBitmapSupported() < 0
      || (unsigned int)GreSelectRedirectionBitmap(v25[1], RedirectionBitmap) )
    {
      v37 = v82;
    }
    else
    {
      v37 = 1;
    }
    DCOBJA::DCOBJA((DCOBJA *)v77, (HDC)v25[1]);
    if ( v77[0] )
    {
      *(_DWORD *)(v77[0] + 36LL) |= 0x40u;
      v38 = *(_QWORD *)(v77[0] + 1080LL);
      v39 = _mm_srli_si128(*(__m128i *)(v77[0] + 1080LL), 8).m128i_u64[0];
      if ( (_DWORD)v38 != (_DWORD)v39
        && (int)v38 < (int)v39
        && HIDWORD(v38) != HIDWORD(v39)
        && SHIDWORD(v38) < SHIDWORD(v39) )
      {
        *(_DWORD *)(v77[0] + 1080LL) = 0x7FFFFFFF;
        *(_DWORD *)(v77[0] + 1084LL) = 0x7FFFFFFF;
        *(_DWORD *)(v77[0] + 1088LL) = 0x80000000;
        *(_DWORD *)(v77[0] + 1092LL) = 0x80000000;
      }
    }
    DCOBJA::~DCOBJA((DCOBJA *)v77);
    if ( v37 )
      GreSelectVisRgnShared((HDC)v25[1]);
  }
  if ( (v25[8] & 2) == 0 )
    goto LABEL_106;
  if ( !(unsigned int)GreSetDCOwnerEx(v25[1], 2147483650LL, 0LL, 1LL) )
  {
    *((_DWORD *)v25 + 16) &= ~0x1000u;
    DestroyCacheDC(gpDispInfo + 24, 0LL);
    goto LABEL_232;
  }
  v25[9] = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v25[10] = 0LL;
  --gnDCECount;
  if ( v80 && (int)IsGreSelectFontSupported() >= 0 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 || (v56 = gahStockObjects96[13]) == 0LL )
      v56 = gahStockObjects[13];
    GreSelectFont(v25[1], v56);
  }
LABEL_106:
  if ( (*(_BYTE *)(a1[5] + 26LL) & 0x40) != 0 && (v4 & 0x40000000) == 0 )
    GreSetLayout((HDC)v25[1], -1, 1u);
  GreValidateVisrgn((HDC)v25[1]);
  if ( (int)IsGreHintDCWndSupported() >= 0 )
    GreHintDCWnd(v25[1], *a1, 0LL, 0LL, 0);
  if ( v34 && (*(_BYTE *)(v34[5] + 26LL) & 8) != 0 && (int)IsGreHintDCWndSupported() >= 0 )
  {
    v42 = v34[5];
    v43 = 0;
    if ( (*(_BYTE *)(v42 + 27) & 2) != 0 )
      v32 = 0;
    LOBYTE(v43) = (*(_WORD *)(v42 + 42) & 0x2FFF) == 669;
    GreHintDCWnd(v25[1], *a1, *v34, v32, v43);
  }
  if ( *((int *)v25 + 16) < 0 )
  {
    v65 = PsGetCurrentProcessWin32Process(v40);
    *(_DWORD *)(v65 + 12) |= 0x200u;
    v25[9] = 0LL;
    v25[10] = PsGetCurrentProcessWin32Process(v66);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v40, &LockRelease, v41, ghsemDCVisRgn, L"ghsemDCVisRgn");
  v44 = ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDCVisRgn);
    PsLeavePriorityRegion();
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v44, &LockRelease, v41, ghsemGreLock, L"ghsemGreLock");
  v45 = ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemGreLock);
    PsLeavePriorityRegion();
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v45, &LockRelease, v41, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  return v25[1];
}
