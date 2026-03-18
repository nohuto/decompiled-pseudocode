/*
 * XREFs of GreMakeFontDir @ 0x1C02B36F4
 * Callers:
 *     NtGdiMakeFontDir @ 0x1C02A8920 (NtGdiMakeFontDir.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C002AA9C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002AAD0 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C0047C40 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C007C6C0 (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C007CB9C (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C007E4B8 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C007F61C (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C007F6D4 (EngMapFontFileFDInternal.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C007F980 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     EngUnmapFontFileFD @ 0x1C0080BA0 (EngUnmapFontFileFD.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     GreFillFontDir @ 0x1C02B332C (GreFillFontDir.c)
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

  v3 = qword_1C0332E90;
  v4 = 0;
  v8 = 0;
  if ( !qword_1C0332E90 || !UmfdHostLifeTimeManager::EnsureUmfdHost() )
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
      PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v19, (struct _EX_PUSH_LOCK *)&UmfdLookupPushLock);
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
