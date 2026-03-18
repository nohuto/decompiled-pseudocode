/*
 * XREFs of GreMakeFontDir @ 0x1C029CE1C
 * Callers:
 *     NtGdiMakeFontDir @ 0x1C0292D50 (NtGdiMakeFontDir.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C000246C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00024A0 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C008D590 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008FE00 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C0091440 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C009290C (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C0092A44 (EngMapFontFileFDInternal.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C0092C1C (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C00CABD8 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     EngUnmapFontFileFD @ 0x1C011F2C0 (EngUnmapFontFileFD.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     GreFillFontDir @ 0x1C029CA54 (GreFillFontDir.c)
 */

__int64 __fastcall GreMakeFontDir(int a1, __int64 a2, ULONG_PTR a3)
{
  struct PDEV *v3; // r14
  unsigned int v4; // ebx
  unsigned int v8; // esi
  __int64 v9; // rdi
  struct _IFIMETRICS *v10; // rax
  struct _IFIMETRICS *v11; // r15
  void (__fastcall *v12)(struct _IFIMETRICS *, unsigned __int64); // rax
  __int64 v13; // rcx
  struct PDEV *v15; // [rsp+48h] [rbp-79h] BYREF
  struct _FONTFILEVIEW *v16; // [rsp+50h] [rbp-71h] BYREF
  void *v17; // [rsp+58h] [rbp-69h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v19[16]; // [rsp+68h] [rbp-59h] BYREF
  ULONG_PTR iFile[16]; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v21; // [rsp+140h] [rbp+7Fh] BYREF

  v3 = qword_1C031DE98;
  v4 = 0;
  v8 = 0;
  if ( !qword_1C031DE98 || !UmfdHostLifeTimeManager::EnsureUmfdHost() )
    return 0LL;
  v15 = v3;
  memset(iFile, 0, 0x78uLL);
  iFile[10] = a3;
  v16 = (struct _FONTFILEVIEW *)iFile;
  if ( (unsigned int)EngMapFontFileFDInternal((__int64)iFile, &v17, &v21, 0) )
  {
    if ( (unsigned int)UmfdInsertFontFileViewForLookup(&v16, 1u) )
    {
      v9 = PDEVOBJ::LoadFontFile((PDEVOBJ *)&v15, 1u, (unsigned __int64 *)&v16, &v17, &v21, 0LL, gusLanguageID, 0);
      if ( v9 )
      {
        if ( v9 != 0xFFFFFFFFLL )
        {
          v10 = PDEVOBJ::QueryFont((PDEVOBJ *)&v15, 0LL, v9, 1u, &v18);
          v11 = v10;
          if ( v10 )
          {
            v8 = GreFillFontDir((__int64)v10, a1, a2);
            v12 = (void (__fastcall *)(struct _IFIMETRICS *, unsigned __int64))*((_QWORD *)v3 + 378);
            if ( v12 )
              v12(v11, v18);
          }
          v8 &= -((*((unsigned int (__fastcall **)(__int64))v3 + 382))(v9) != 0);
        }
      }
    }
    if ( LODWORD(iFile[8]) )
    {
      CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v19, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
      if ( UmfdFileviewLookup )
      {
        LODWORD(v15) = iFile[8];
        NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v13, &v15);
        LODWORD(iFile[8]) = 0;
      }
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v19);
    }
    EngUnmapFontFileFD((ULONG_PTR)iFile);
    vUnreferenceFileviewSection((struct _FILEVIEW *)iFile);
    return v8;
  }
  return v4;
}
