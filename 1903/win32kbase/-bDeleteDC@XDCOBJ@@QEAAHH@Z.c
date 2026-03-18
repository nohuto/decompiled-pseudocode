/*
 * XREFs of ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C0021110
 * Callers:
 *     GreRestoreDC @ 0x1C0018550 (GreRestoreDC.c)
 *     ?vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z @ 0x1C0020A10 (-vDeleteDCInternalWorker@@YAXPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     ?FreePaletteMemory@@YAXPEAVPALETTE@@@Z @ 0x1C001664C (-FreePaletteMemory@@YAXPEAVPALETTE@@@Z.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     FreeObject @ 0x1C0016BA0 (FreeObject.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0018270 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001CFF0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C001D340 (HmgDecrementShareReferenceCountEx.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001D5B0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001EBB0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C001ED54 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlockAndRelease@HANDLELOCK@@QEAAXXZ @ 0x1C0021C70 (-vUnlockAndRelease@HANDLELOCK@@QEAAXXZ.c)
 *     ?vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z @ 0x1C0054910 (-vFreeOrCacheRBrush@RBRUSH@@QEAAXW4RBTYPE@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0055128 (--1RFONTOBJ@@QEAA@XZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00B0E50 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C00B0E98 (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C00BCE08 (IsThreadCrossSessionAttached.c)
 *     McTemplateK0pqz @ 0x1C0132558 (McTemplateK0pqz.c)
 */

__int64 __fastcall XDCOBJ::bDeleteDC(__int64 **this, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rsi
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rcx
  __int64 *v9; // rsi
  volatile signed __int32 *v10; // rcx
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rcx
  __int64 *v13; // rsi
  volatile signed __int32 *v14; // rcx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rcx
  __int64 *v17; // rsi
  volatile signed __int32 *v18; // rcx
  __int64 v19; // rcx
  volatile signed __int32 *v20; // rcx
  __int64 *v21; // rbx
  struct HPATH__ *v22; // rdx
  int v23; // r8d
  __int64 *v24; // rax
  _QWORD *v25; // rsi
  _QWORD *v26; // rbx
  unsigned int v27; // ebp
  __int64 v28; // rcx
  __int64 *v29; // rdx
  struct _ERESOURCE *v30; // rbx
  unsigned __int8 v31; // bp
  __int64 v32; // r14
  struct _SLIST_ENTRY *v33; // rsi
  GdiHandleManager *v34; // rbx
  unsigned int v35; // eax
  struct _ENTRY *v36; // rax
  struct _ENTRY *v37; // rbx
  char v38; // al
  struct OBJECT *EntryObject; // rax
  struct OBJECT *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  struct _ENTRY *v45; // [rsp+30h] [rbp-C8h] BYREF
  int v46; // [rsp+38h] [rbp-C0h]
  int v47; // [rsp+3Ch] [rbp-BCh]
  _BYTE v48[8]; // [rsp+50h] [rbp-A8h] BYREF
  struct OBJECT *v49; // [rsp+58h] [rbp-A0h]
  __int64 v50; // [rsp+100h] [rbp+8h] BYREF
  struct PFT *v51; // [rsp+110h] [rbp+18h] BYREF
  char v52; // [rsp+118h] [rbp+20h] BYREF

  v4 = (*this)[218];
  v50 = 0LL;
  if ( (int)IsRFONTOBJ_vConstructPRFONTSupported() >= 0 )
    RFONTOBJ_vConstructPRFONTWrap(&v50, v4);
  v5 = *this;
  v6 = (volatile signed __int32 *)(*this)[152];
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v6, 1LL);
    v5[152] = 0LL;
  }
  v7 = v5[149];
  if ( v7 )
  {
    v8 = (volatile signed __int32 *)(v7 - 16);
    if ( _InterlockedExchangeAdd(v8, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v8, 0LL);
    v5[149] = 0LL;
  }
  v9 = *this;
  v10 = (volatile signed __int32 *)(*this)[169];
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v10, 1LL);
    v9[169] = 0LL;
  }
  v11 = v9[166];
  if ( v11 )
  {
    v12 = (volatile signed __int32 *)(v11 - 16);
    if ( _InterlockedExchangeAdd(v12, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v12, 0LL);
    v9[166] = 0LL;
  }
  v13 = *this;
  v14 = (volatile signed __int32 *)(*this)[186];
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v14, 1LL);
    v13[186] = 0LL;
  }
  v15 = v13[183];
  if ( v15 )
  {
    v16 = (volatile signed __int32 *)(v15 - 16);
    if ( _InterlockedExchangeAdd(v16, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v16, 0LL);
    v13[183] = 0LL;
  }
  v17 = *this;
  v18 = (volatile signed __int32 *)(*this)[203];
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd(v18, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v18, 1LL);
    v17[203] = 0LL;
  }
  v19 = v17[200];
  if ( v19 )
  {
    v20 = (volatile signed __int32 *)(v19 - 16);
    if ( _InterlockedExchangeAdd(v20, 0xFFFFFFFF) == 1 )
      RBRUSH::vFreeOrCacheRBrush(v20, 0LL);
    v17[200] = 0LL;
  }
  v21 = *this;
  v22 = (struct HPATH__ *)(*this)[25];
  if ( v22 )
  {
    XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v48, v22);
    if ( v49 && (*((_DWORD *)v49 + 21) & 1) == 0 )
      HmgDecrementShareReferenceCountEx(v49, 0LL);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v48);
    v21[25] = 0LL;
  }
  if ( (int)IsXDCOBJ_vCleanupColorTransformSupported() >= 0 )
    XDCOBJ_vCleanupColorTransformWrap(this, a2);
  v24 = *this;
  v25 = (_QWORD *)(*this)[257];
  if ( v25 )
  {
    do
    {
      v26 = v25;
      v25 = (_QWORD *)v25[1];
      EngAcquireSemaphore(ghsemPublicPFT);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
      v27 = 32;
      v51 = *(struct PFT **)(*v26 + 128LL);
      if ( v51 == gpPFTPrivate )
        v27 = 64;
      --*(_DWORD *)(*v26 + 64LL);
      if ( (int)IsPFTOBJ_bUnloadWorkhorseSupported() >= 0 )
        PFTOBJ_bUnloadWorkhorseWrap(&v51, *v26, 0LL, v27);
      Win32FreePool((__int64)v26);
    }
    while ( v25 );
    v24 = *this;
  }
  v28 = v24[37];
  v29 = v24;
  if ( v28 && (__int64 *)v28 != v24 + 33 )
  {
    Win32FreePool(v28);
    (*this)[37] = 0LL;
    v29 = *this;
  }
  v30 = ghsemHmgr;
  v31 = 0;
  v32 = *v29;
  v33 = 0LL;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v30);
  }
  if ( gbLockEtw && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz(v28, (_DWORD)v29, v23, (_DWORD)ghsemHmgr, 17, (__int64)L"ghsemHmgr");
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v52);
  v34 = gpHandleManager;
  v46 = 1;
  v35 = GdiHandleManager::DecodeIndex(
          (GdiHandleEntryDirectory **)gpHandleManager,
          (unsigned __int16)v32 | ((unsigned int)v32 >> 8) & 0xFF0000);
  v36 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v34 + 2), v35, 0);
  v45 = v36;
  v37 = v36;
  if ( !v36 )
  {
    v46 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_68;
  }
  _m_prefetchw((char *)v36 + 8);
  v47 = *((_DWORD *)v36 + 2);
  v38 = *((_BYTE *)v36 + 15);
  if ( (v38 & 0x20) != 0 )
    goto LABEL_65;
  if ( (v38 & 0x40) != 0 )
  {
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v37 & 0xFFFFFF);
    if ( *((_WORD *)EntryObject + 6) && *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() )
    {
LABEL_66:
      v37 = v45;
      goto LABEL_67;
    }
LABEL_65:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v45);
    if ( !v46 )
      goto LABEL_68;
    goto LABEL_66;
  }
LABEL_67:
  v40 = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v37 & 0xFFFFFF);
  v31 = *((_BYTE *)v37 + 14);
  v33 = (struct _SLIST_ENTRY *)v40;
  HANDLELOCK::vUnlockAndRelease((HANDLELOCK *)&v45);
LABEL_68:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v45);
  GreReleaseHmgrSemaphore(v42, v41, v43);
  if ( v33 )
  {
    if ( v31 == 8 )
      FreePaletteMemory(v33);
    else
      FreeObject((__int64)v33, v31);
  }
  *this = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v50);
  return 1LL;
}
