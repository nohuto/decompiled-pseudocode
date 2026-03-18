/*
 * XREFs of ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C01216FC
 * Callers:
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C011DC44 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C0121510 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0122650 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0166A9C (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02987E0 (-UmfdEscEngGetFileChangeTime@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02988AC (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00EDD28 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 *     ?LowerBound@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z @ 0x1C01217A4 (-LowerBound@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEBA_KAEBI@Z.c)
 */

char __fastcall NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  volatile signed __int32 *v3; // rbx
  char v6; // di
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v3 = (volatile signed __int32 *)UmfdFileviewLookup;
  v6 = 1;
  while ( 1 )
  {
    _InterlockedAdd(v3 + 6, 1u);
    if ( !*((_DWORD *)v3 + 7) )
      break;
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v3);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v3, 0LL);
    ExReleasePushLockSharedEx(v3, 0LL, v11, v12);
    KeLeaveCriticalRegion();
  }
  v7 = *((_QWORD *)v3 + 5);
  if ( !v7 )
    goto LABEL_7;
  v8 = NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LowerBound(v3, a2);
  if ( v8 >= v7 || (v9 = *((_QWORD *)v3 + 6) + 16 * v8, *(_DWORD *)v9 != *a2) )
    v9 = 0LL;
  if ( v9 )
    *a3 = *(_QWORD *)(v9 + 8);
  else
LABEL_7:
    v6 = 0;
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v3);
  return v6;
}
