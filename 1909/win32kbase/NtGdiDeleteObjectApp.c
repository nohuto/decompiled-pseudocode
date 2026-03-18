/*
 * XREFs of NtGdiDeleteObjectApp @ 0x1C00225E0
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteBrush @ 0x1C000DDC0 (bDeleteBrush.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C000E1A0 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     bDeleteDCInternal @ 0x1C0010100 (bDeleteDCInternal.c)
 *     bDeleteSurface @ 0x1C0015C30 (bDeleteSurface.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0016EF0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0018AE0 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     HmgPentryFromPobj @ 0x1C001F0B0 (HmgPentryFromPobj.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001F380 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001F810 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001FE60 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001FEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00200A0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0027430 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029FC8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029FFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C002A944 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     bDeletePalette @ 0x1C00699E0 (bDeletePalette.c)
 *     HmgFreeObjectAttr @ 0x1C0090E70 (HmgFreeObjectAttr.c)
 *     IsThreadCrossSessionAttached @ 0x1C00B9DA8 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall NtGdiDeleteObjectApp(struct HOBJ__ *a1)
{
  unsigned int v3; // r12d
  int v4; // ebx
  unsigned int v5; // edi
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  __int64 v8; // r8
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r10
  __int64 v12; // r8
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  __int64 v17; // rdx
  unsigned int v18; // ebx
  DYNAMICMODECHANGESHARELOCK *v19; // rcx
  __int16 *v20; // rdi
  _DWORD *v21; // rsi
  __int64 v22; // r13
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v24; // r12
  GdiHandleManager *v25; // rbx
  unsigned int v26; // eax
  struct _ENTRY *v27; // rax
  struct _ENTRY *v28; // rcx
  unsigned int v29; // edx
  char v30; // al
  struct OBJECT *EntryObject; // rax
  __int64 v32; // rax
  struct _ENTRY *v33; // [rsp+30h] [rbp-50h] BYREF
  int v34; // [rsp+38h] [rbp-48h]
  int v35; // [rsp+3Ch] [rbp-44h]
  __int16 *v36[3]; // [rsp+48h] [rbp-38h] BYREF
  char v37; // [rsp+A0h] [rbp+20h] BYREF
  int v38; // [rsp+A8h] [rbp+28h]
  int v39; // [rsp+B0h] [rbp+30h] BYREF

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v3 = (unsigned int)a1 >> 16;
  v4 = BYTE2(a1) & 0x1F;
  v5 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  if ( v5 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)a1,
                                  1)
           + 13) == ((unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000) >> 16 )
        v5 = (unsigned __int16)v5;
    }
    else
    {
      v5 = (unsigned __int16)a1;
    }
  }
  v6 = 0;
  v7 = 1;
  v8 = *((_QWORD *)gpHandleManager + 2);
  v9 = *(_DWORD *)(v8 + 2056);
  if ( v5 < v9 + ((*(unsigned __int16 *)(v8 + 2) + 0xFFFF) << 16) )
  {
    v10 = ((v5 - v9) >> 16) + 1;
    if ( v5 < v9 )
      v10 = 0LL;
    v11 = *(_QWORD *)(v8 + 8 * v10 + 8);
    if ( (_DWORD)v10 )
      v5 += ((1 - (_DWORD)v10) << 16) - v9;
    v12 = 0LL;
    if ( v5 < *(_DWORD *)(v11 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v5 >> 8))
                   + 16LL * (unsigned __int8)v5
                   + 8) )
    {
      v12 = *(_QWORD *)v11 + 24LL * v5;
    }
    if ( v12
      && *(unsigned __int8 *)(v12 + 14) == v4
      && *(_WORD *)(v12 + 12) == (_WORD)v3
      && (*(_DWORD *)(v12 + 8) & 0xFFFFFFFE) == 0 )
    {
      LOBYTE(v6) = a1 != 0LL;
      return v6;
    }
  }
  if ( v4 == 4 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v36, (HRGN)a1, 0);
    v20 = v36[0];
    if ( !v36[0] || *((_DWORD *)v36[0] + 8) )
      goto LABEL_63;
    v21 = 0LL;
    v22 = *(_QWORD *)v36[0];
    v38 = 0;
    if ( !(unsigned int)IsThreadCrossSessionAttached()
      && (CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v39)) != 0
      && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    {
      v24 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
    }
    else
    {
      v24 = 0LL;
    }
    v25 = gpHandleManager;
    v34 = 1;
    v26 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)gpHandleManager,
            (unsigned __int16)v22 | ((unsigned int)v22 >> 8) & 0xFF0000);
    v27 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v25 + 2), v26, 0);
    v33 = v27;
    v28 = v27;
    if ( !v27 )
    {
      v34 = 0;
      KeLeaveCriticalRegion();
LABEL_59:
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v33);
      if ( v38 )
      {
LABEL_64:
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v36);
        return v7;
      }
      if ( (unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)v36) )
      {
        RGNOBJ::vDeleteRGNOBJ(v36);
        if ( v21 )
          HmgFreeObjectAttr(v21);
        goto LABEL_64;
      }
LABEL_63:
      v7 = 0;
      goto LABEL_64;
    }
    _m_prefetchw((char *)v27 + 8);
    v35 = *((_DWORD *)v27 + 2);
    v29 = v35 & 0xFFFFFFFE;
    if ( (v35 & 0xFFFFFFFE) != (v39 & 0xFFFFFFFC) && v29 && (!v24 || v29 != *(_DWORD *)(v24 + 8)) )
      goto LABEL_50;
    v30 = *((_BYTE *)v27 + 15);
    if ( (v30 & 0x20) != 0 )
      goto LABEL_50;
    if ( (v30 & 0x40) == 0 )
      goto LABEL_52;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v28 & 0xFFFFFF);
    if ( !*((_WORD *)EntryObject + 6) || (v20 = v36[0], *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread()) )
    {
LABEL_50:
      HANDLELOCK::vUnlock((HANDLELOCK *)&v33);
      if ( !v34 )
        goto LABEL_59;
    }
    v28 = v33;
LABEL_52:
    if ( *((_BYTE *)v28 + 14) != 4 || *((_WORD *)v28 + 6) != WORD1(v22) )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v33);
    if ( v34 )
    {
      v32 = HmgPentryFromPobj(v20);
      v21 = *(_DWORD **)(v32 + 16);
      if ( !v21 || (v38 = bPEBCacheHandle(2, v21, (_DWORD *)v32, (__int64)&v33, (__int64)v36)) == 0 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v33);
    }
    goto LABEL_59;
  }
  v13 = v4 - 1;
  if ( !v13 )
    return bDeleteDCInternal((__int64)a1, 0, 0, 0);
  v14 = v13 - 4;
  if ( v14 )
  {
    v15 = v14 - 3;
    if ( v15 )
    {
      v16 = v15 - 2;
      if ( v16 )
      {
        if ( v16 == 6 )
          return bDeleteBrush(a1, 0);
        else
          return 0LL;
      }
      else
      {
        return bDeleteFont(a1, 0LL);
      }
    }
    else
    {
      return bDeletePalette((HPALETTE)a1);
    }
  }
  else
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v37);
    v18 = bDeleteSurface((__int64)a1, v17);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v19);
    return v18;
  }
}
