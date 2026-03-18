/*
 * XREFs of bAddAllFlEntry @ 0x1C00C6838
 * Callers:
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x1C00C3AA8 (-bInitializeEUDCInternal@@YAHXZ.c)
 *     GreEnableEUDC @ 0x1C00C3D7C (GreEnableEUDC.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z @ 0x1C007D340 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@H@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C007D8D0 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C007F36C (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0080080 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00C61E8 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     AddAllFlEntryWorker @ 0x1C00C652C (AddAllFlEntryWorker.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C00C65B4 (bReadUserSystemEUDCRegistry.c)
 *     bNotIsKeySymbolicLink @ 0x1C00C66D8 (bNotIsKeySymbolicLink.c)
 *     GetUserEUDCRegistryPath @ 0x1C00C6774 (GetUserEUDCRegistryPath.c)
 *     vLinkEudcPFEs @ 0x1C00CA124 (vLinkEudcPFEs.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00CB1D8 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?ApplyFontInfEquivalentChangesOnServicingUpdate@@YAXXZ @ 0x1C01601A4 (-ApplyFontInfEquivalentChangesOnServicingUpdate@@YAXXZ.c)
 */

__int64 __fastcall bAddAllFlEntry(int a1, unsigned int a2)
{
  unsigned __int16 *v3; // rbx
  unsigned __int16 *v4; // rdi
  HSEMAPHORE v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int v11; // esi
  PFTOBJ *v12; // rcx
  char v13; // al
  struct PFF *v15; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-28h] BYREF
  struct PFE *v17[2]; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v18; // [rsp+A8h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE v20; // [rsp+B8h] [rbp+48h] BYREF

  v18 = a2;
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v20, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Handle, 0x208u);
  v3 = (unsigned __int16 *)v20;
  if ( !v20 )
  {
    if ( !Handle )
      return 0LL;
    Win32FreePool(Handle);
LABEL_36:
    if ( v3 )
      goto LABEL_37;
    return 0LL;
  }
  v4 = (unsigned __int16 *)Handle;
  if ( !Handle )
    goto LABEL_36;
  v5 = ghsemEUDC1;
  *(_WORD *)Handle = 0;
  *v3 = 0;
  GreAcquireSemaphore(v5);
  if ( gcEUDCCount > 0 )
  {
    EngSetLastError(0xA7u);
LABEL_5:
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    Win32FreePool(v4);
LABEL_37:
    Win32FreePool(v3);
    return 0LL;
  }
  if ( a1 && *(_OWORD *)&gappfeSysEUDC == 0LL && (unsigned int)bReadUserSystemEUDCRegistry(v3) )
  {
    if ( !(unsigned int)bAppendSysDirectory(v4, v3) )
      goto LABEL_5;
    Handle = gpPFTPublic;
    v20 = (HANDLE)ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v10 = -1LL;
    do
      ++v10;
    while ( v4[v10] );
    if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&Handle, v4, (int)v10 + 1, 1, 0LL, 0, 0LL, 1) )
    {
      v11 = 0;
    }
    else
    {
      v16[0] = v17;
      v16[1] = 0LL;
      v11 = PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&Handle, v4, &v18, 8u, &v15, (struct _EUDCLOAD *)v16, 0);
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v20);
    if ( v11 )
    {
      if ( (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlEUDC, v17[0], 1) )
      {
        *(_OWORD *)&gappfeSysEUDC = *(_OWORD *)v17;
        wcscpy_s(&Dst, 0x105uLL, v4);
        ++dword_1C03177D0;
        goto LABEL_19;
      }
      PFTOBJ::bUnloadEUDCFont(v12, v4);
    }
    Dst = 0;
    *(_OWORD *)&gappfeSysEUDC = 0uLL;
  }
LABEL_19:
  v13 = dword_1C03177D4;
  if ( (dword_1C03177D4 & 1) != 0 )
  {
    if ( gSessionId == (unsigned int)RtlGetCurrentServiceSessionId(v7, v6, v8, v9) )
      ApplyFontInfEquivalentChangesOnServicingUpdate();
    AddAllFlEntryWorker(
      L"\\REGISTRY\\MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\FontLink\\SystemLink",
      0);
    v13 = dword_1C03177D4;
  }
  if ( (v13 & 4) != 0 )
  {
    Handle = 0LL;
    v20 = 0LL;
    v18 = 0;
    if ( (int)GetUserEUDCRegistryPath(v3) >= 0 && bNotIsKeySymbolicLink(v3, &Handle, &v20) && v18 )
      AddAllFlEntryWorker(v3, 1);
    if ( Handle )
      ZwClose(Handle);
    if ( v20 )
      ZwClose(v20);
  }
  vLinkEudcPFEs(0LL);
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  Win32FreePool(v4);
  Win32FreePool(v3);
  return 1LL;
}
