/*
 * XREFs of GreCreateDisplayDC @ 0x1C0017D80
 * Callers:
 *     GreCreateCompatibleDC @ 0x1C0018460 (GreCreateCompatibleDC.c)
 *     hdcOpenDCW @ 0x1C003BC90 (hdcOpenDCW.c)
 *     CreateCacheDC @ 0x1C003D880 (CreateCacheDC.c)
 *     UserGetDesktopDC @ 0x1C003E02C (UserGetDesktopDC.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C006494C (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     InitUserScreen @ 0x1C00761B4 (InitUserScreen.c)
 *     NtGdiCreateMetafileDC @ 0x1C0099500 (NtGdiCreateMetafileDC.c)
 * Callees:
 *     GreValidateVisrgn @ 0x1C0016244 (GreValidateVisrgn.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0019670 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00196B0 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001EB20 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C001FD50 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C0020440 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x1C00215A0 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 *     HmgAllocateDcAttr @ 0x1C0027304 (HmgAllocateDcAttr.c)
 *     HmgFreeDcAttr @ 0x1C0027468 (HmgFreeDcAttr.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003DF84 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C003E23C (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C007AE90 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C007B630 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     McTemplateK0pz @ 0x1C0132610 (McTemplateK0pz.c)
 */

__int64 __fastcall GreCreateDisplayDC(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  char v4; // di
  __int64 v7; // rbx
  PERESOURCE v8; // rcx
  struct _DC_ATTR *DcAttr; // r15
  DC *v10; // r12
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // r14
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // r13
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // r8
  DC *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v27; // rax
  int v28; // edx
  unsigned int v29; // edx
  unsigned int v30; // edi
  __int64 v31; // rdx
  _QWORD v32[3]; // [rsp+38h] [rbp-70h] BYREF
  DC *v33[2]; // [rsp+58h] [rbp-50h] BYREF
  int v34; // [rsp+68h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp+20h] BYREF

  v4 = a3;
  v7 = 0LL;
  v8 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared();
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v8, &LockAcquireShared, a3, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
  v35 = a1;
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v33, a2, v4 & 1, a4);
  if ( v33[0] )
  {
    *((_QWORD *)v33[0] + 6) = a1;
    PDEVOBJ::vReferencePdev((PDEVOBJ *)&v35);
    *((_DWORD *)v33[0] + 18) = *(_DWORD *)(a1 + 1824);
    *((_DWORD *)v33[0] + 19) = *(_DWORD *)(a1 + 2128);
    *((_QWORD *)v33[0] + 3) = *(_QWORD *)(a1 + 1800);
    *((_QWORD *)v33[0] + 8) = *(_QWORD *)(a1 + 48);
    if ( a2 == 1 )
    {
      *((_QWORD *)v33[0] + 64) = 0x100000001LL;
    }
    else
    {
      v27 = (_QWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v35);
      *((_QWORD *)v33[0] + 64) = *v27;
      if ( a2 )
        goto LABEL_8;
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
        *((_DWORD *)v33[0] + 9) |= 0x200u;
      else
        *((_DWORD *)v33[0] + 9) &= ~0x200u;
      if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
        *((_DWORD *)v33[0] + 9) |= 1u;
      else
        *((_DWORD *)v33[0] + 9) &= ~1u;
      if ( (*(_DWORD *)(a1 + 40) & 0x400) != 0 )
        *((_DWORD *)v33[0] + 9) |= 0x1000u;
      else
        *((_DWORD *)v33[0] + 9) &= ~0x1000u;
      if ( (*(_DWORD *)(a1 + 40) & 0x80u) != 0 )
        goto LABEL_8;
      DC::pSurface(v33[0], *(struct SURFACE **)(a1 + 2552));
      v28 = *((_DWORD *)v33[0] + 9);
      if ( (v28 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 2552) + 112LL) & 0x200) != 0 )
        v29 = v28 | 0x8000;
      else
        v29 = v28 & 0xFFFF7FFF;
      *((_DWORD *)v33[0] + 9) = v29;
    }
    *((_QWORD *)v33[0] + 8) = ghsemGreLock;
LABEL_8:
    if ( (unsigned int)DC::bSetDefaultRegion(v33[0]) )
    {
      if ( (int)IsXDCOBJ_vSetDefaultFontSupported() >= 0 )
        XDCOBJ_vSetDefaultFontWrap(v33, *(_DWORD *)(a1 + 40) & 1);
      DC::vUpdate_VisRect(v33[0], *((struct REGION **)v33[0] + 140));
      DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr();
      v32[2] = DcAttr;
      if ( DcAttr )
      {
        if ( a1 == *(_QWORD *)(gpDispInfo + 40) )
          **((_DWORD **)v33[0] + 122) |= 2u;
        v34 = 1;
        if ( (v4 & 2) != 0 )
          *((_DWORD *)v33[0] + 9) |= 8u;
        v10 = v33[0];
        v11 = (unsigned __int16)*(_DWORD *)v33[0];
        v12 = v11 | (*(_DWORD *)v33[0] >> 8) & 0xFF0000;
        if ( v12 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            v30 = (unsigned __int16)v11;
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v11,
                                        1)
                 + 13) == HIWORD(v12) )
              v12 = v30;
          }
          else
          {
            v12 = (unsigned __int16)v11;
          }
        }
        v13 = *((_QWORD *)gpHandleManager + 2);
        v14 = *(_DWORD *)(v13 + 2056);
        if ( v12 >= v14 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
        {
          v18 = 0LL;
        }
        else
        {
          if ( v12 >= v14 )
            v15 = ((v12 - v14) >> 16) + 1;
          else
            v15 = 0LL;
          v16 = *(_QWORD *)(v13 + 8 * v15 + 8);
          if ( (_DWORD)v15 )
            v17 = v12 + ((1 - (_DWORD)v15) << 16) - v14;
          else
            v17 = v12;
          v18 = 0LL;
          if ( v17 < *(_DWORD *)(v16 + 20)
            && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * ((unsigned __int64)v17 >> 8))
                         + 16LL * (unsigned __int8)v17
                         + 8) )
          {
            v18 = *(_QWORD *)v16 + 24LL * v17;
          }
        }
        if ( v12 >= 0x10000 )
        {
          if ( *(_DWORD *)gpHandleManager > 0x10000u )
          {
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v12,
                                        1)
                 + 13) == HIWORD(v12) )
              v12 = (unsigned __int16)v12;
          }
          else
          {
            v12 = (unsigned __int16)v12;
          }
        }
        v19 = *(_DWORD *)(v13 + 2056);
        if ( v12 >= v19 + ((*(unsigned __int16 *)(v13 + 2) + 0xFFFF) << 16) )
          goto LABEL_75;
        if ( v12 >= v19 )
          v20 = ((v12 - v19) >> 16) + 1;
        else
          v20 = 0LL;
        v21 = *(_QWORD *)(v13 + 8 * v20 + 8);
        if ( (_DWORD)v20 )
          v12 += ((1 - (_DWORD)v20) << 16) - v19;
        if ( v12 >= *(_DWORD *)(v21 + 20) )
LABEL_75:
          v22 = 0LL;
        else
          v22 = *(DC **)(*(_QWORD *)(**(_QWORD **)(v21 + 24) + 8 * ((unsigned __int64)v12 >> 8))
                       + 16LL * (unsigned __int8)v12
                       + 8);
        if ( v22 != v10 )
          v18 = 0LL;
        DC::RestoreAttributes(v10, DcAttr);
        *(_QWORD *)(v18 + 16) = DcAttr;
        v32[0] = *(_QWORD *)(a1 + 32);
        v23 = v32[0];
        *((_QWORD *)v33[0] + 7) = 0LL;
        if ( v23
          && (*(_DWORD *)(a1 + 40) & 0x20000) == 0
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v35)
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)v32) )
        {
          *((_QWORD *)v33[0] + 7) = v31;
          PDEVOBJ::vReferencePdev((PDEVOBJ *)v32);
        }
        v7 = *(_QWORD *)v33[0];
      }
    }
    if ( v7 )
      GreValidateVisrgn(v7, 1LL);
  }
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v33);
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(v24, &LockRelease, v25, ghsemDynamicModeChange, L"ghsemDynamicModeChange");
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  return v7;
}
