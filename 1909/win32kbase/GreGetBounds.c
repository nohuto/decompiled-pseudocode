/*
 * XREFs of GreGetBounds @ 0x1C001D5B0
 * Callers:
 *     CreateCacheDC @ 0x1C000FDD0 (CreateCacheDC.c)
 *     _GetDCEx @ 0x1C001BDF0 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C002E29C (GetMonitorDC.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C001F380 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001F810 (-AcquireEntryLock@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C001FEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C00200A0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00773A4 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C00776C4 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C00B9DA8 (IsThreadCrossSessionAttached.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C00BBF58 (--1DCOBJA@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBounds(unsigned int a1, _OWORD *a2, char a3)
{
  unsigned int v3; // esi
  struct OBJECT *v5; // rdi
  GdiHandleManager *v8; // rbx
  unsigned int v9; // eax
  struct _ENTRY *v10; // rax
  struct _ENTRY *v11; // rcx
  char v12; // al
  struct OBJECT *EntryObject; // rcx
  int v14; // eax
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rax
  __int128 v18; // xmm0
  int v19; // edx
  char *v20; // rcx
  int v21; // eax
  int v22; // eax
  __int128 v24; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v25[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _ENTRY *v26; // [rsp+40h] [rbp-20h] BYREF
  int v27; // [rsp+48h] [rbp-18h]
  int v28; // [rsp+4Ch] [rbp-14h]
  char v29; // [rsp+90h] [rbp+30h] BYREF

  v3 = 0;
  v25[1] = 0LL;
  v5 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached() )
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(&v29);
  v8 = gpHandleManager;
  v27 = 1;
  v9 = GdiHandleManager::DecodeIndex(gpHandleManager, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  v10 = GdiHandleEntryDirectory::AcquireEntryLock(*((GdiHandleEntryDirectory **)v8 + 2), v9, 0);
  v26 = v10;
  v11 = v10;
  if ( !v10 )
  {
    v27 = 0;
    KeLeaveCriticalRegion();
    goto LABEL_15;
  }
  _m_prefetchw((char *)v10 + 8);
  v28 = *((_DWORD *)v10 + 2);
  v12 = *((_BYTE *)v10 + 15);
  if ( (v12 & 0x20) != 0 )
    goto LABEL_9;
  if ( (v12 & 0x40) == 0 )
    goto LABEL_11;
  EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v11 & 0xFFFFFF);
  if ( !*((_WORD *)EntryObject + 6) || *((struct _KTHREAD **)EntryObject + 2) != KeGetCurrentThread() )
  {
LABEL_9:
    HANDLELOCK::vUnlock((HANDLELOCK *)&v26);
    if ( !v27 )
      goto LABEL_15;
  }
  v11 = v26;
LABEL_11:
  if ( *((_BYTE *)v11 + 14) == 1 && *((_WORD *)v11 + 6) == HIWORD(a1) )
  {
    v5 = GdiHandleManager::GetEntryObject(gpHandleManager, *(_DWORD *)v11 & 0xFFFFFF);
    ++*((_DWORD *)v5 + 2);
  }
  HANDLELOCK::vUnlock((HANDLELOCK *)&v26);
LABEL_15:
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v26);
  v25[0] = v5;
  v24 = 0LL;
  if ( !v5 )
    goto LABEL_40;
  if ( (a3 & 1) != 0 )
  {
    v14 = 64;
    if ( (a3 & 4) == 0 )
      v14 = 32;
    *((_DWORD *)v5 + 9) |= v14;
  }
  else if ( (a3 & 2) != 0 )
  {
    v15 = *((_DWORD *)v5 + 9);
    if ( (a3 & 4) != 0 )
      v16 = v15 & 0xFFFFFFBF;
    else
      v16 = v15 & 0xFFFFFFDF;
    *((_DWORD *)v5 + 9) = v16;
  }
  if ( (a3 & 4) != 0 )
  {
    v17 = *((_QWORD *)v5 + 146);
    if ( v17 && (a3 & 3) == 0 )
      v24 = *(_OWORD *)(v17 + 88);
    if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v24) )
      goto LABEL_33;
    v18 = *(_OWORD *)((char *)v5 + 1080);
  }
  else
  {
    v18 = *(_OWORD *)((char *)v5 + 1064);
  }
  v24 = v18;
LABEL_33:
  if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v24) && !(unsigned int)ERECTL::bWrapped((ERECTL *)&v24) )
  {
    if ( a2 )
    {
      v20 = (char *)v5 + 8 * (*((_DWORD *)v5 + 10) & 1);
      v21 = *((_DWORD *)v20 + 254);
      LODWORD(v24) = v21 + v24;
      DWORD2(v24) += v21;
      v22 = *((_DWORD *)v20 + 255);
      DWORD1(v24) += v22;
      HIDWORD(v24) += v22;
      *a2 = v24;
    }
    v3 = 1;
    if ( v19 )
    {
      *((_DWORD *)v5 + 270) = 0x7FFFFFFF;
      *((_DWORD *)v5 + 271) = 0x7FFFFFFF;
      *((_DWORD *)v5 + 272) = 0x80000000;
      *((_DWORD *)v5 + 273) = 0x80000000;
    }
    else
    {
      *((_DWORD *)v5 + 266) = 0x7FFFFFFF;
      *((_DWORD *)v5 + 267) = 0x7FFFFFFF;
      *((_DWORD *)v5 + 268) = 0x80000000;
      *((_DWORD *)v5 + 269) = 0x80000000;
    }
  }
LABEL_40:
  DCOBJA::~DCOBJA((DCOBJA *)v25);
  return v3;
}
