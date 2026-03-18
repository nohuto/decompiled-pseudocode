/*
 * XREFs of GreCreateDisplayDC @ 0x1C002D5C0
 * Callers:
 *     GreCreateCompatibleDC @ 0x1C002F610 (GreCreateCompatibleDC.c)
 *     hdcOpenDCW @ 0x1C0044DB0 (hdcOpenDCW.c)
 *     UserGetDesktopDC @ 0x1C004567C (UserGetDesktopDC.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C0058D90 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     CreateCacheDC @ 0x1C0062F20 (CreateCacheDC.c)
 *     NtGdiCreateMetafileDC @ 0x1C0068A50 (NtGdiCreateMetafileDC.c)
 *     InitUserScreen @ 0x1C00A67B0 (InitUserScreen.c)
 * Callees:
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0026A58 (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0026E40 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00271A0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C002FA68 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C002FCB0 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     ?GreSetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C0030D9C (-GreSetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z.c)
 *     HmgAllocateDcAttr @ 0x1C0030F9C (HmgAllocateDcAttr.c)
 *     HmgFreeDcAttr @ 0x1C0031308 (HmgFreeDcAttr.c)
 *     GreValidateVisrgn @ 0x1C0031910 (GreValidateVisrgn.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0031CD0 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0032010 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0032FFC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     McTemplateK0pz @ 0x1C00DA6C0 (McTemplateK0pz.c)
 */

HDC __fastcall GreCreateDisplayDC(__int64 a1, unsigned int a2, int a3, int a4)
{
  HDC v7; // rdi
  int v8; // ecx
  struct _DC_ATTR *DcAttr; // r8
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  _QWORD *v14; // rax
  int v15; // ecx
  unsigned int v16; // ecx
  int v17; // ecx
  unsigned int v18; // ecx
  int v19; // ecx
  unsigned int v20; // ecx
  DC *v21; // rcx
  int v22; // edx
  unsigned int v24; // edx
  __int64 v25; // rdx
  struct DC *v26[2]; // [rsp+48h] [rbp-30h] BYREF
  int v27; // [rsp+58h] [rbp-20h]
  __int64 v28; // [rsp+80h] [rbp+8h] BYREF
  __int64 v29; // [rsp+98h] [rbp+20h] BYREF

  v7 = 0LL;
  v8 = (int)ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared();
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(
      v8,
      (unsigned int)&LockAcquireShared,
      a3,
      (_DWORD)ghsemDynamicModeChange,
      (__int64)L"ghsemDynamicModeChange");
  v28 = a1;
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v26, a2, a3, a4);
  if ( v26[0] )
  {
    *((_QWORD *)v26[0] + 6) = a1;
    PDEVOBJ::vReferencePdev((PDEVOBJ *)&v28);
    *((_DWORD *)v26[0] + 18) = *(_DWORD *)(a1 + 1816);
    *((_DWORD *)v26[0] + 19) = *(_DWORD *)(a1 + 2120);
    *((_QWORD *)v26[0] + 3) = *(_QWORD *)(a1 + 1792);
    *((_QWORD *)v26[0] + 8) = *(_QWORD *)(a1 + 48);
    if ( a2 == 1 )
    {
      v29 = 0x100000001LL;
      *((_QWORD *)v26[0] + 65) = 0x100000001LL;
    }
    else
    {
      v14 = (_QWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v28);
      *((_QWORD *)v26[0] + 65) = *v14;
      if ( a2 )
        goto LABEL_8;
      v15 = *((_DWORD *)v26[0] + 9);
      v16 = (*(_DWORD *)(a1 + 40) & 1) != 0 ? v15 | 0x200 : v15 & 0xFFFFFDFF;
      *((_DWORD *)v26[0] + 9) = v16;
      v17 = *((_DWORD *)v26[0] + 9);
      v18 = (*(_DWORD *)(a1 + 40) & 1) != 0 ? v17 | 1 : v17 & 0xFFFFFFFE;
      *((_DWORD *)v26[0] + 9) = v18;
      v19 = *((_DWORD *)v26[0] + 9);
      v20 = (*(_DWORD *)(a1 + 40) & 0x400) != 0 ? v19 | 0x1000 : v19 & 0xFFFFEFFF;
      *((_DWORD *)v26[0] + 9) = v20;
      if ( (*(_DWORD *)(a1 + 40) & 0x80u) != 0 )
        goto LABEL_8;
      v21 = v26[0];
      *((_QWORD *)v26[0] + 63) = *(_QWORD *)(a1 + 2544);
      DC::vInheritSurfaceDpiScale(v21);
      v22 = *((_DWORD *)v26[0] + 9);
      if ( (v22 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(a1 + 2544) + 112LL) & 0x200) != 0 )
        v24 = v22 | 0x8000;
      else
        v24 = v22 & 0xFFFF7FFF;
      *((_DWORD *)v26[0] + 9) = v24;
    }
    *((_QWORD *)v26[0] + 8) = ghsemGreLock;
LABEL_8:
    if ( (unsigned int)DC::bSetDefaultRegion(v26[0]) )
    {
      if ( (int)IsXDCOBJ_vSetDefaultFontSupported() >= 0 )
        XDCOBJ_vSetDefaultFontWrap(v26, *(_DWORD *)(a1 + 40) & 1);
      DC::vUpdate_VisRect(v26[0], *((struct REGION **)v26[0] + 191));
      DcAttr = (struct _DC_ATTR *)HmgAllocateDcAttr();
      if ( DcAttr )
      {
        if ( a1 == *(_QWORD *)(gpDispInfo + 40) )
          *(_DWORD *)(*((_QWORD *)v26[0] + 10) + 12LL) |= 2u;
        v27 = 1;
        GreSetupDCAttributes(v26[0], DcAttr);
        v29 = *(_QWORD *)(a1 + 32);
        v10 = v29;
        *((_QWORD *)v26[0] + 7) = 0LL;
        if ( v10
          && (*(_DWORD *)(a1 + 40) & 0x20000) == 0
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v28)
          && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v29) )
        {
          *((_QWORD *)v26[0] + 7) = v25;
          PDEVOBJ::vReferencePdev((PDEVOBJ *)&v29);
        }
        v7 = *(HDC *)v26[0];
      }
    }
    if ( v7 )
      GreValidateVisrgn(v7);
  }
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v26);
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz(
      v11,
      (unsigned int)&LockRelease,
      v12,
      (_DWORD)ghsemDynamicModeChange,
      (__int64)L"ghsemDynamicModeChange");
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  return v7;
}
