/*
 * XREFs of ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0088DC8
 * Callers:
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0086C60 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     bUnloadEudcFont @ 0x1C00CAC68 (bUnloadEudcFont.c)
 *     RFONTOBJ_vDeleteRFONTWrap @ 0x1C0110B90 (RFONTOBJ_vDeleteRFONTWrap.c)
 *     vKillRFONTList @ 0x1C023FC1C (vKillRFONTList.c)
 *     ?vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z @ 0x1C0268970 (-vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z.c)
 *     ?RestartInactiveHelper@@YAXPEAVRFONT@@@Z @ 0x1C0277A90 (-RestartInactiveHelper@@YAXPEAVRFONT@@@Z.c)
 *     ?vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z @ 0x1C0278590 (-vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C0278678 (vRemoveAllInactiveRFONTs.c)
 * Callees:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0081170 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?vDeleteCache@RFONTOBJ@@QEAAXXZ @ 0x1C0084934 (-vDeleteCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0088CB4 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C00B18E4 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00B192C (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C00CCD0C (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C00CE28C (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00CE3B0 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00CEF40 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C00CEF60 (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C013C200 (--$FreeIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 */

void __fastcall RFONTOBJ::vDeleteRFONT(struct _FONTOBJ **this, struct PDEVOBJ *a2, struct PFFOBJ *a3, int a4)
{
  struct _FONTOBJ *v6; // rdx
  struct _FONTOBJ *v9; // rcx
  ULONG_PTR iFile; // rax
  bool v11; // si
  ULONG_PTR v12; // rdx
  struct _FONTOBJ *v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-10h] BYREF
  struct RFONT *iTTUniq; // [rsp+60h] [rbp+30h] BYREF
  ULONG_PTR v19; // [rsp+68h] [rbp+38h] BYREF
  char v20; // [rsp+70h] [rbp+40h] BYREF

  v6 = *this;
  v9 = v6;
  v17 = *(_QWORD *)&v6[1].ulStyleSize;
  iTTUniq = (struct RFONT *)v6[1].iTTUniq;
  if ( *((_QWORD *)iTTUniq + 378) && a4 )
  {
    PDEVOBJ::DestroyFont((PDEVOBJ *)&iTTUniq, v6);
    v9 = *this;
  }
  iFile = v9[1].iFile;
  if ( iFile )
  {
    v19 = v9[1].iFile;
    v11 = (*(_DWORD *)(iFile + 40) & 1) != 0 && *(_DWORD *)(iFile + 8);
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
      (NEEDDYNAMICMODECHANGESHARELOCK *)&iTTUniq,
      *(_DWORD *)(iFile + 40) & 1);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v20, (struct PDEVOBJ *)&v19);
    if ( v11 )
    {
      GreAcquireSemaphore(*(_QWORD *)(v19 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoCon.hsemDevLock()", *(_QWORD *)(v19 + 48), 11LL);
    }
    v12 = v19;
    if ( *(_QWORD *)(v19 + 3024) && a4 )
    {
      PDEVOBJ::DestroyFont((PDEVOBJ *)&v19, *this);
      v12 = v19;
    }
    if ( v11 )
    {
      EtwTraceGreLockReleaseSemaphore(L"pdoCon.hsemDevLock()", *(_QWORD *)(v12 + 48));
      GreReleaseSemaphoreInternal(*(_QWORD *)(v19 + 48));
    }
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v20);
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&iTTUniq);
  }
  v19 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  if ( a2 )
  {
    iTTUniq = PDEVOBJ::prfntInactive(a2);
    RFONTOBJ::vRemove((__int64)this, (unsigned __int64 *)&iTTUniq, 1);
    PDEVOBJ::prfntInactive(a2, iTTUniq);
    v14 = PDEVOBJ::cInactive(a2);
    v15 = *(_QWORD *)a2;
    v16 = v14 - 1;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x800000) != 0 )
      *(_DWORD *)(*(_QWORD *)(v15 + 3512) + 1528LL) = v16;
    else
      *(_DWORD *)(v15 + 1528) = v16;
  }
  if ( a3 )
  {
    iTTUniq = *(struct RFONT **)(*(_QWORD *)a3 + 72LL);
    RFONTOBJ::vRemove((__int64)this, (unsigned __int64 *)&iTTUniq, 0);
    *(_QWORD *)(*(_QWORD *)a3 + 72LL) = iTTUniq;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v19);
  PFEOBJ::vFreepfdg((PFEOBJ *)&v17);
  if ( a3 )
    PFFOBJ::vDeleteRFONTRef(a3);
  RFONTOBJ::vDeleteCache((RFONTOBJ *)this);
  v13 = *this;
  if ( (*this)[10].sizLogResPpi )
  {
    Win32FreePool(*(_QWORD *)&(*this)[10].sizLogResPpi);
    v13 = *this;
  }
  if ( *(_QWORD *)&v13[13].iUniq )
  {
    GreDeleteSemaphore(*(_QWORD *)&v13[13].iUniq);
    v13 = *this;
  }
  GreDeleteSemaphore(v13[7].pvConsumer);
  FreeIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>(*this);
  *this = 0LL;
}
