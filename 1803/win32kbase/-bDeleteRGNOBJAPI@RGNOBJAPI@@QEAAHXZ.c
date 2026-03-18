/*
 * XREFs of ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0024090
 * Callers:
 *     bDeleteRegion @ 0x1C001E150 (bDeleteRegion.c)
 *     NtGdiDeleteObjectApp @ 0x1C001EE60 (NtGdiDeleteObjectApp.c)
 *     EngDeleteRgn @ 0x1C00D9380 (EngDeleteRgn.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C0022060 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C002428C (-bDeleteHandle@RGNOBJAPI@@QEAAHXZ.c)
 *     HmgPentryFromPobj @ 0x1C0029460 (HmgPentryFromPobj.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002AD50 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002B0E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002BEC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002C040 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C003D2F0 (-bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEA.c)
 *     HmgFreeObjectAttr @ 0x1C00670CC (HmgFreeObjectAttr.c)
 *     IsThreadCrossSessionAttached @ 0x1C0075BD4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteRGNOBJAPI(__int64 **this)
{
  unsigned int v1; // ebp
  __int64 v2; // rsi
  __int64 v4; // rdi
  __int64 CurrentThreadWin32ThreadAndEnterCriticalRegion; // rax
  __int64 v6; // r12
  GdiHandleManager *v7; // rbx
  unsigned int v8; // eax
  struct _ENTRY *v9; // rax
  struct _ENTRY *v10; // rcx
  unsigned int v11; // edx
  char v12; // al
  struct OBJECT *EntryObject; // rcx
  __int64 v14; // rax
  struct _ENTRY *v16; // [rsp+30h] [rbp-48h] BYREF
  int v17; // [rsp+38h] [rbp-40h]
  int v18; // [rsp+3Ch] [rbp-3Ch]
  int v19; // [rsp+80h] [rbp+8h] BYREF

  v1 = 0;
  v2 = 0LL;
  if ( !*this )
    goto LABEL_28;
  v4 = **this;
  if ( !(unsigned int)IsThreadCrossSessionAttached()
    && (CurrentThreadWin32ThreadAndEnterCriticalRegion = PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v19)) != 0
    && *(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion )
  {
    v6 = *(_QWORD *)(*(_QWORD *)CurrentThreadWin32ThreadAndEnterCriticalRegion + 72LL);
  }
  else
  {
    v6 = 0LL;
  }
  v7 = gpHandleManager;
  v17 = 1;
  v8 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)v4 | ((unsigned int)v4 >> 8) & 0xFF0000);
  v9 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v7 + 2), v8, 0);
  v10 = v9;
  v16 = v9;
  if ( !v9 )
  {
    v17 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_26;
  }
  _m_prefetchw((char *)v9 + 8);
  v18 = *((_DWORD *)v9 + 2);
  v11 = v18 & 0xFFFFFFFE;
  if ( (v18 & 0xFFFFFFFE) != (v19 & 0xFFFFFFFC) && v11 && (!v6 || v11 != *(_DWORD *)(v6 + 8)) )
    goto LABEL_17;
  v12 = *((_BYTE *)v9 + 15);
  if ( (v12 & 0x20) != 0 )
    goto LABEL_17;
  if ( (v12 & 0x40) == 0 )
    goto LABEL_19;
  EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v10 & 0xFFFFFF);
  if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
  {
LABEL_17:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v16);
    if ( !v17 )
      goto LABEL_26;
  }
  v10 = v16;
LABEL_19:
  if ( *((_BYTE *)v10 + 14) != 4 || *((_WORD *)v10 + 6) != WORD1(v4) )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v16);
  if ( v17 )
  {
    v14 = HmgPentryFromPobj(*this);
    v2 = *(_QWORD *)(v14 + 16);
    if ( !v2 || (v1 = bPEBCacheHandle(&v16, 2LL, v2, v14, &v16, this)) == 0 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v16);
  }
LABEL_26:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v16);
  if ( v1 )
    return v1;
LABEL_28:
  if ( !(unsigned int)RGNOBJAPI::bDeleteHandle((RGNOBJAPI *)this) )
    return 0LL;
  RGNOBJ::vDeleteRGNOBJ((__int16 **)this);
  if ( v2 )
    HmgFreeObjectAttr(v2);
  return 1LL;
}
