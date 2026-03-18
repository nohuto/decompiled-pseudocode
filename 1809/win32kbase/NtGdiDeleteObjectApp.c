/*
 * XREFs of NtGdiDeleteObjectApp @ 0x1C00207E0
 * Callers:
 *     <none>
 * Callees:
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C001D5A4 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C001D720 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C001E630 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C001F7F0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     HmgPentryFromPobj @ 0x1C00229F0 (HmgPentryFromPobj.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0023220 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00235A0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0023670 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0023700 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0023820 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0023860 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029C14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029C48 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     bDeleteDCInternal @ 0x1C00427D0 (bDeleteDCInternal.c)
 *     bDeleteSurface @ 0x1C0044990 (bDeleteSurface.c)
 *     bDeletePalette @ 0x1C00713D0 (bDeletePalette.c)
 *     bDeleteBrush @ 0x1C007DE80 (bDeleteBrush.c)
 *     HmgFreeObjectAttr @ 0x1C007FCDC (HmgFreeObjectAttr.c)
 *     IsThreadCrossSessionAttached @ 0x1C00A8330 (IsThreadCrossSessionAttached.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00A9FE0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall NtGdiDeleteObjectApp(HRGN a1)
{
  unsigned int v3; // r15d
  unsigned int v4; // edi
  int v5; // ebx
  unsigned int v6; // ebp
  __int64 v7; // r8
  unsigned int v8; // r14d
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // r10
  __int64 v12; // r8
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  unsigned int v17; // ebx
  DYNAMICMODECHANGESHARELOCK *v18; // rcx
  __int64 v19; // r15
  _DWORD *v20; // rdi
  int v21; // r12d
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v23; // rsi
  GdiHandleManager *v24; // rbx
  unsigned int v25; // eax
  struct _ENTRY *v26; // rax
  struct _ENTRY *v27; // rcx
  unsigned int v28; // edx
  char v29; // al
  struct OBJECT *EntryObject; // rax
  __int64 v31; // rax
  struct _ENTRY *v32; // [rsp+30h] [rbp-78h] BYREF
  int v33; // [rsp+38h] [rbp-70h]
  int v34; // [rsp+3Ch] [rbp-6Ch]
  __int16 *v35[7]; // [rsp+48h] [rbp-60h] BYREF
  char v36; // [rsp+B0h] [rbp+8h] BYREF
  int v37; // [rsp+B8h] [rbp+10h] BYREF

  if ( ((unsigned int)a1 & 0x800000) != 0 )
    return 1LL;
  v3 = (unsigned int)a1 >> 16;
  v4 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v5 = BYTE2(a1) & 0x1F;
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)a1,
                                  1)
           + 13) == ((unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000) >> 16 )
        v4 = (unsigned __int16)v4;
    }
    else
    {
      v4 = (unsigned __int16)a1;
    }
  }
  v6 = 0;
  v7 = *((_QWORD *)gpHandleManager + 2);
  v8 = 1;
  v9 = *(_DWORD *)(v7 + 2056);
  if ( v4 < v9 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
  {
    v10 = ((v4 - v9) >> 16) + 1;
    if ( v4 < v9 )
      v10 = 0LL;
    v11 = *(_QWORD *)(v7 + 8 * v10 + 8);
    if ( (_DWORD)v10 )
      v4 += ((1 - (_DWORD)v10) << 16) - v9;
    v12 = 0LL;
    if ( v4 < *(_DWORD *)(v11 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * ((unsigned __int64)v4 >> 8))
                   + 16LL * (unsigned __int8)v4
                   + 8) )
    {
      v12 = *(_QWORD *)v11 + 24LL * v4;
    }
    if ( v12
      && *(unsigned __int8 *)(v12 + 14) == v5
      && *(_WORD *)(v12 + 12) == (_WORD)v3
      && (*(_DWORD *)(v12 + 8) & 0xFFFFFFFE) == 0 )
    {
      LOBYTE(v6) = a1 != 0LL;
      return v6;
    }
  }
  if ( v5 == 4 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v35, a1, 0, 0);
    if ( !v35[0] || *((_DWORD *)v35[0] + 8) )
      goto LABEL_63;
    v19 = *(_QWORD *)v35[0];
    v20 = 0LL;
    v21 = 0;
    if ( !(unsigned int)IsThreadCrossSessionAttached()
      && (CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v37)) != 0
      && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
    {
      v23 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
    }
    else
    {
      v23 = 0LL;
    }
    v24 = gpHandleManager;
    v33 = 1;
    v25 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)v19 | ((unsigned int)v19 >> 8) & 0xFF0000);
    v26 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v24 + 2), v25, 0);
    v32 = v26;
    v27 = v26;
    if ( !v26 )
    {
      v33 = 0;
      KeLeaveCriticalRegion();
LABEL_59:
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v32);
      if ( v21 )
      {
LABEL_64:
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v35);
        return v8;
      }
      if ( (unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)v35) )
      {
        RGNOBJ::vDeleteRGNOBJ(v35);
        if ( v20 )
          HmgFreeObjectAttr(v20);
        goto LABEL_64;
      }
LABEL_63:
      v8 = 0;
      goto LABEL_64;
    }
    _m_prefetchw((char *)v26 + 8);
    v34 = *((_DWORD *)v26 + 2);
    v28 = v34 & 0xFFFFFFFE;
    if ( (v34 & 0xFFFFFFFE) != (v37 & 0xFFFFFFFC) && v28 && (!v23 || v28 != *(_DWORD *)(v23 + 8)) )
      goto LABEL_50;
    v29 = *((_BYTE *)v26 + 15);
    if ( (v29 & 0x20) != 0 )
      goto LABEL_50;
    if ( (v29 & 0x40) == 0 )
      goto LABEL_52;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v27 & 0xFFFFFF);
    if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
    {
LABEL_50:
      HANDLELOCK::vUnlock((HANDLELOCK *)&v32);
      if ( !v33 )
        goto LABEL_59;
    }
    v27 = v32;
LABEL_52:
    if ( *((_BYTE *)v27 + 14) != 4 || *((_WORD *)v27 + 6) != WORD1(v19) )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v32);
    if ( v33 )
    {
      v31 = HmgPentryFromPobj(v35[0]);
      v20 = *(_DWORD **)(v31 + 16);
      if ( !v20 || (v21 = bPEBCacheHandle((__int64)&v32, 2, v20, (_DWORD *)v31, (__int64)&v32, (__int64)v35)) == 0 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v32);
    }
    goto LABEL_59;
  }
  v13 = v5 - 1;
  if ( !v13 )
    return bDeleteDCInternal(a1, 0LL, 0LL, 0LL);
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
          return bDeleteBrush((HBRUSH)a1);
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
      return bDeletePalette(a1, 0LL, 0LL);
    }
  }
  else
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v36);
    v17 = bDeleteSurface(a1);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v18);
    return v17;
  }
}
