/*
 * XREFs of GreMakeFontDir @ 0x1C0289210
 * Callers:
 *     NtGdiMakeFontDir @ 0x1C027FC50 (NtGdiMakeFontDir.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0004B8C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0004BC0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C007DA90 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C007EE54 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C00BED68 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C00BF054 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C00BF524 (EngMapFontFileFDInternal.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1C00CE0A0 (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C00CE13C (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?UnloadFontFile@PDEVOBJ@@QEAAH_K@Z @ 0x1C00CE1F8 (-UnloadFontFile@PDEVOBJ@@QEAAH_K@Z.c)
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C00CEF80 (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     EngUnmapFontFileFD @ 0x1C00FF9A0 (EngUnmapFontFileFD.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     GreFillFontDir @ 0x1C0288DF0 (GreFillFontDir.c)
 */

__int64 __fastcall GreMakeFontDir(int a1, __int64 a2, ULONG_PTR a3)
{
  struct PDEV *v3; // r15
  unsigned int v4; // ebx
  unsigned int v8; // esi
  __int64 v9; // rdi
  struct _IFIMETRICS *v10; // rax
  struct _IFIMETRICS *v11; // r14
  __int64 v12; // rcx
  struct PDEV *v14; // [rsp+48h] [rbp-79h] BYREF
  struct _FONTFILEVIEW *v15; // [rsp+50h] [rbp-71h] BYREF
  void *v16; // [rsp+58h] [rbp-69h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v18[16]; // [rsp+68h] [rbp-59h] BYREF
  ULONG_PTR iFile[16]; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v20; // [rsp+140h] [rbp+7Fh] BYREF

  v3 = qword_1C032FD38;
  v4 = 0;
  v8 = 0;
  if ( !qword_1C032FD38 || !UmfdHostLifeTimeManager::EnsureUmfdHost() )
    return 0LL;
  v14 = v3;
  memset(iFile, 0, 0x78uLL);
  LODWORD(iFile[5]) |= 0x20u;
  v15 = (struct _FONTFILEVIEW *)iFile;
  iFile[10] = a3;
  if ( (unsigned int)EngMapFontFileFDInternal((struct _FILEVIEW *)iFile, &v16, &v20, 0) )
  {
    if ( (unsigned int)UmfdInsertFontFileViewForLookup(&v15, 1u) )
    {
      v9 = PDEVOBJ::LoadFontFile((PDEVOBJ *)&v14, 1u, (unsigned __int64 *)&v15, &v16, &v20, 0LL, gusLanguageID, 0);
      if ( v9 )
      {
        if ( v9 != 0xFFFFFFFFLL )
        {
          v10 = PDEVOBJ::QueryFont((PDEVOBJ *)&v14, 0LL, v9, 1u, &v17);
          v11 = v10;
          if ( v10 )
          {
            v8 = GreFillFontDir((__int64)v10, a1, a2);
            if ( *((_QWORD *)v3 + 377) )
              PDEVOBJ::Free((PDEVOBJ *)&v14, v11, v17);
          }
          v8 &= -((unsigned int)PDEVOBJ::UnloadFontFile((PDEVOBJ *)&v14, v9) != 0);
        }
      }
    }
    if ( LODWORD(iFile[8]) )
    {
      CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v18, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
      if ( UmfdFileviewLookup )
      {
        LODWORD(v14) = iFile[8];
        NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v12, (unsigned int *)&v14);
        LODWORD(iFile[8]) = 0;
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v18);
    }
    EngUnmapFontFileFD((ULONG_PTR)iFile);
    vUnreferenceFileviewSection((struct _FILEVIEW *)iFile);
    return v8;
  }
  return v4;
}
