/*
 * XREFs of bAddAllFlEntry @ 0x1C004FC90
 * Callers:
 *     ?bInitializeEUDCInternal@@YAHXZ @ 0x1C004F8E4 (-bInitializeEUDCInternal@@YAHXZ.c)
 *     GreEnableEUDC @ 0x1C004FB8C (GreEnableEUDC.c)
 * Callees:
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C003E388 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z @ 0x1C003EBC0 (-bLoadAFont@PUBLIC_PFTOBJ@@QEAAHPEAGPEAKKPEAPEAVPFF@@PEAU_EUDCLOAD@@@Z.c)
 *     vLinkEudcPFEs @ 0x1C004FE00 (vLinkEudcPFEs.c)
 *     bReadUserSystemEUDCRegistry @ 0x1C004FE94 (bReadUserSystemEUDCRegistry.c)
 *     bNotIsKeySymbolicLink @ 0x1C004FFAC (bNotIsKeySymbolicLink.c)
 *     GetUserEUDCRegistryPath @ 0x1C0050044 (GetUserEUDCRegistryPath.c)
 *     AddAllFlEntryWorker @ 0x1C00500E8 (AddAllFlEntryWorker.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00C8894 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00CA2F0 (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00CB000 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x1C00E1CC8 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 */

__int64 __fastcall bAddAllFlEntry(int a1, unsigned int a2)
{
  wchar_t *v3; // rbx
  unsigned __int16 *v4; // rdi
  HSEMAPHORE v5; // rcx
  unsigned int v6; // r8d
  char v7; // al
  __int64 v9; // rax
  int v10; // esi
  PFTOBJ *v11; // rcx
  struct PFF *v12; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-28h] BYREF
  struct PFE *v14[2]; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+A8h] [rbp+38h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE v17; // [rsp+B8h] [rbp+48h] BYREF

  v15 = a2;
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v17, 0x208u);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Handle, 0x208u);
  v3 = (wchar_t *)v17;
  if ( !v17 )
  {
    if ( !Handle )
      return 0LL;
    Win32FreePool(Handle);
LABEL_34:
    if ( v3 )
      goto LABEL_35;
    return 0LL;
  }
  v4 = (unsigned __int16 *)Handle;
  if ( !Handle )
    goto LABEL_34;
  v5 = ghsemEUDC1;
  *(_WORD *)Handle = 0;
  *v3 = 0;
  GreAcquireSemaphore(v5);
  if ( gcEUDCCount > 0 )
  {
    EngSetLastError(0xA7u);
LABEL_18:
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    Win32FreePool(v4);
LABEL_35:
    Win32FreePool(v3);
    return 0LL;
  }
  if ( !a1 || *(_OWORD *)&gappfeSysEUDC != 0LL || !(unsigned int)bReadUserSystemEUDCRegistry(v3) )
    goto LABEL_7;
  if ( !(unsigned int)bAppendSysDirectory(v4, v3, v6) )
    goto LABEL_18;
  Handle = gpPFTPublic;
  v17 = (HANDLE)ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v9 = -1LL;
  do
    ++v9;
  while ( v4[v9] );
  if ( PUBLIC_PFTOBJ::pPFFGet((PUBLIC_PFTOBJ *)&Handle, v4, (int)v9 + 1, 1, 0LL, 0, 0LL, 1) )
  {
    v10 = 0;
  }
  else
  {
    v13[1] = 0LL;
    v13[0] = v14;
    v10 = PUBLIC_PFTOBJ::bLoadAFont((PUBLIC_PFTOBJ *)&Handle, v4, &v15, 8u, &v12, (struct _EUDCLOAD *)v13);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  if ( v10 )
  {
    if ( (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)&gqlEUDC, v14[0], 1) )
    {
      *(_OWORD *)&gappfeSysEUDC = *(_OWORD *)v14;
      wcscpy_s(&Dst, 0x105uLL, v4);
      ++dword_1C0327110;
      goto LABEL_7;
    }
    PFTOBJ::bUnloadEUDCFont(v11, v4);
  }
  Dst = 0;
  *(_OWORD *)&gappfeSysEUDC = 0uLL;
LABEL_7:
  v7 = dword_1C0327114;
  if ( (dword_1C0327114 & 1) != 0 )
  {
    AddAllFlEntryWorker(L"\\REGISTRY\\MACHINE\\SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\FontLink\\SystemLink");
    v7 = dword_1C0327114;
  }
  if ( (v7 & 4) != 0 )
  {
    Handle = 0LL;
    v17 = 0LL;
    v15 = 0;
    if ( (int)GetUserEUDCRegistryPath(v3) >= 0 && (unsigned int)bNotIsKeySymbolicLink(v3, &Handle, &v17) && v15 )
      AddAllFlEntryWorker(v3);
    if ( Handle )
      ZwClose(Handle);
    if ( v17 )
      ZwClose(v17);
  }
  vLinkEudcPFEs(0LL);
  EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  Win32FreePool(v4);
  Win32FreePool(v3);
  return 1LL;
}
