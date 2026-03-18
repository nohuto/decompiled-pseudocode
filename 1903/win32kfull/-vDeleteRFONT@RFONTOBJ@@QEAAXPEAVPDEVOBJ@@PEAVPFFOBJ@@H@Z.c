/*
 * XREFs of ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0074EF8
 * Callers:
 *     bUnloadEudcFont @ 0x1C0049C14 (bUnloadEudcFont.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C006E370 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     RFONTOBJ_vDeleteRFONTWrap @ 0x1C0139870 (RFONTOBJ_vDeleteRFONTWrap.c)
 *     vKillRFONTList @ 0x1C02709EC (vKillRFONTList.c)
 *     ?vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z @ 0x1C0270AA0 (-vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z.c)
 *     ?RestartInactiveHelper@@YAXPEAVRFONT@@@Z @ 0x1C02A1080 (-RestartInactiveHelper@@YAXPEAVRFONT@@@Z.c)
 *     ?vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z @ 0x1C02A1D00 (-vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C02A1DD0 (vRemoveAllInactiveRFONTs.c)
 * Callees:
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C004F340 (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C0074E24 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0075168 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0075210 (--$FreeIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?vDeleteCache@RFONTOBJ@@QEAAXXZ @ 0x1C0075240 (-vDeleteCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00752FC (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ??1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007536C (--1NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z @ 0x1C00753B4 (--0NEEDDYNAMICMODECHANGESHARELOCK@@QEAA@H@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0105594 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?cInactive@PDEVOBJ@@QEAAIXZ @ 0x1C01056CC (-cInactive@PDEVOBJ@@QEAAIXZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C01056EC (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vDeleteRFONT(struct _FONTOBJ **this, struct PDEVOBJ *a2, struct PFFOBJ *a3, int a4)
{
  struct _FONTOBJ *v6; // rdx
  struct _FONTOBJ *v9; // rcx
  __int64 v10; // rax
  bool v11; // si
  __int64 v12; // rdx
  struct _FONTOBJ *v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 *pvProducer; // [rsp+20h] [rbp-10h] BYREF
  struct RFONT *sizLogResPpi; // [rsp+60h] [rbp+30h] BYREF
  __int64 v19; // [rsp+68h] [rbp+38h] BYREF
  char v20; // [rsp+70h] [rbp+40h] BYREF

  v6 = *this;
  v9 = v6;
  pvProducer = (__int64 *)v6[1].pvProducer;
  sizLogResPpi = (struct RFONT *)v6[1].sizLogResPpi;
  if ( *((_QWORD *)sizLogResPpi + 379) && a4 )
  {
    PDEVOBJ::DestroyFont((PDEVOBJ *)&sizLogResPpi, v6);
    v9 = *this;
  }
  v10 = *(_QWORD *)&v9[1].ulStyleSize;
  if ( v10 )
  {
    v19 = *(_QWORD *)&v9[1].ulStyleSize;
    v11 = (*(_DWORD *)(v10 + 40) & 1) != 0 && *(_DWORD *)(v10 + 8);
    NEEDDYNAMICMODECHANGESHARELOCK::NEEDDYNAMICMODECHANGESHARELOCK(
      (NEEDDYNAMICMODECHANGESHARELOCK *)&sizLogResPpi,
      *(_DWORD *)(v10 + 40) & 1);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v20, (struct PDEVOBJ *)&v19);
    if ( v11 )
    {
      GreAcquireSemaphore(*(_QWORD *)(v19 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"pdoCon.hsemDevLock()", *(_QWORD *)(v19 + 48), 11LL);
    }
    v12 = v19;
    if ( *(_QWORD *)(v19 + 3032) && a4 )
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
    NEEDDYNAMICMODECHANGESHARELOCK::~NEEDDYNAMICMODECHANGESHARELOCK((NEEDDYNAMICMODECHANGESHARELOCK *)&sizLogResPpi);
  }
  v19 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  if ( a2 )
  {
    sizLogResPpi = PDEVOBJ::prfntInactive(a2);
    RFONTOBJ::vRemove(this, &sizLogResPpi, 1LL);
    PDEVOBJ::prfntInactive(a2, sizLogResPpi);
    v14 = PDEVOBJ::cInactive(a2);
    v15 = *(_QWORD *)a2;
    v16 = v14 - 1;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x800000) != 0 )
      *(_DWORD *)(*(_QWORD *)(v15 + 3520) + 1536LL) = v16;
    else
      *(_DWORD *)(v15 + 1536) = v16;
  }
  if ( a3 )
  {
    sizLogResPpi = *(struct RFONT **)(*(_QWORD *)a3 + 72LL);
    RFONTOBJ::vRemove(this, &sizLogResPpi, 0LL);
    *(_QWORD *)(*(_QWORD *)a3 + 72LL) = sizLogResPpi;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v19);
  PFEOBJ::vFreepfdg(&pvProducer);
  if ( a3 )
    PFFOBJ::vDeleteRFONTRef(a3);
  RFONTOBJ::vDeleteCache((RFONTOBJ *)this);
  v13 = *this;
  if ( (*this)[10].pvConsumer )
  {
    Win32FreePool((*this)[10].pvConsumer);
    v13 = *this;
  }
  if ( v13[13].iTTUniq )
  {
    GreDeleteSemaphore(v13[13].iTTUniq);
    v13 = *this;
  }
  GreDeleteSemaphore(v13[7].pvProducer);
  FreeIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>(*this);
  *this = 0LL;
}
