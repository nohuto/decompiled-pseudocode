/*
 * XREFs of NtGdiDeleteObjectApp @ 0x1C0022090
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0011624 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00151C0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C0017470 (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     HmgPentryFromPobj @ 0x1C001CD20 (HmgPentryFromPobj.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001CFF0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001D5B0 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001EB20 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001EBB0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C001ED54 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0026F10 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0029D08 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     bDeleteBrush @ 0x1C0052910 (bDeleteBrush.c)
 *     ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C0052CF0 (-bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BA.c)
 *     HmgFreeObjectAttr @ 0x1C005400C (HmgFreeObjectAttr.c)
 *     bDeleteSurface @ 0x1C0054290 (bDeleteSurface.c)
 *     bDeletePalette @ 0x1C0058600 (bDeletePalette.c)
 *     bDeleteDCInternal @ 0x1C0064FC0 (bDeleteDCInternal.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C00777B0 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C00BCE08 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall NtGdiDeleteObjectApp(HPALETTE a1)
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
  unsigned int v17; // ebx
  DYNAMICMODECHANGESHARELOCK *v18; // rcx
  _DWORD *v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r13
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v23; // r12
  GdiHandleManager *v24; // rbx
  unsigned int v25; // eax
  struct _ENTRY *v26; // rax
  struct _ENTRY *v27; // rcx
  unsigned int v28; // edx
  char v29; // al
  struct OBJECT *EntryObject; // rax
  __int64 v31; // rax
  struct _ENTRY *v32; // [rsp+30h] [rbp-50h] BYREF
  int v33; // [rsp+38h] [rbp-48h]
  int v34; // [rsp+3Ch] [rbp-44h]
  _QWORD v35[3]; // [rsp+48h] [rbp-38h] BYREF
  char v36; // [rsp+A0h] [rbp+20h] BYREF
  int v37; // [rsp+A8h] [rbp+28h]
  int v38; // [rsp+B0h] [rbp+30h] BYREF

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
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v35, (HRGN)a1, 0);
    v19 = (_DWORD *)v35[0];
    if ( !v35[0] || *(_DWORD *)(v35[0] + 32LL) )
      goto LABEL_63;
    v20 = 0LL;
    v21 = *(_QWORD *)v35[0];
    v37 = 0;
    if ( !(unsigned int)IsThreadCrossSessionAttached()
      && (CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v38)) != 0
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
    v25 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)gpHandleManager,
            (unsigned __int16)v21 | ((unsigned int)v21 >> 8) & 0xFF0000);
    v26 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v24 + 2), v25, 0);
    v32 = v26;
    v27 = v26;
    if ( !v26 )
    {
      v33 = 0;
      KeLeaveCriticalRegion();
LABEL_59:
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v32);
      if ( v37 )
      {
LABEL_64:
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v35);
        return v7;
      }
      if ( (unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)v35) )
      {
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v35);
        if ( v20 )
          HmgFreeObjectAttr(v20);
        goto LABEL_64;
      }
LABEL_63:
      v7 = 0;
      goto LABEL_64;
    }
    _m_prefetchw((char *)v26 + 8);
    v34 = *((_DWORD *)v26 + 2);
    v28 = v34 & 0xFFFFFFFE;
    if ( (v34 & 0xFFFFFFFE) != (v38 & 0xFFFFFFFC) && v28 && (!v23 || v28 != *(_DWORD *)(v23 + 8)) )
      goto LABEL_50;
    v29 = *((_BYTE *)v26 + 15);
    if ( (v29 & 0x20) != 0 )
      goto LABEL_50;
    if ( (v29 & 0x40) == 0 )
      goto LABEL_52;
    EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v27 & 0xFFFFFF);
    if ( !*((_WORD *)EntryObject + 6)
      || (v19 = (_DWORD *)v35[0], *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread()) )
    {
LABEL_50:
      HANDLELOCK::vUnlock((HANDLELOCK *)&v32);
      if ( !v33 )
        goto LABEL_59;
    }
    v27 = v32;
LABEL_52:
    if ( *((_BYTE *)v27 + 14) != 4 || *((_WORD *)v27 + 6) != WORD1(v21) )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v32);
    if ( v33 )
    {
      v31 = HmgPentryFromPobj(v19);
      v20 = *(_QWORD *)(v31 + 16);
      if ( !v20 || (v37 = bPEBCacheHandle(2LL, v20, v31, &v32, v35)) == 0 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v32);
    }
    goto LABEL_59;
  }
  v13 = v4 - 1;
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
      return bDeletePalette(a1);
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
