/*
 * XREFs of ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0016D80
 * Callers:
 *     EngCreatePalette @ 0x1C005BD40 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C0128C5C (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     GreCreatePalette @ 0x1C012FED0 (GreCreatePalette.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C0132BF8 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C0268990 (bInitPALOBJ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C0016FD0 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x1C00174C0 (HmgRemoveObject.c)
 *     ?ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z @ 0x1C001D220 (-ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001D470 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022748 (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z @ 0x1C0125860 (-RECALTUNLOCKSTACKBACKTRACE@@YAXI@Z.c)
 */

void __fastcall PALMEMOBJ::~PALMEMOBJ(struct _SLIST_ENTRY **this)
{
  struct _SLIST_ENTRY *v1; // rbx
  struct _SLIST_ENTRY *v3; // rax
  unsigned __int8 *v4; // rcx
  struct _SLIST_ENTRY *v5; // rbp
  struct _SLIST_ENTRY *Next; // rbx
  unsigned __int8 *v7; // rbx
  unsigned __int8 *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // r14
  char v11; // al
  GdiHandleEntryDirectory **v12; // rbx
  unsigned int v13; // eax
  GdiHandleEntryDirectory *v14; // r9
  unsigned __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rax
  _DWORD *v19; // rdx
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // [rsp+30h] [rbp-38h] BYREF
  int v24; // [rsp+38h] [rbp-30h]
  __int64 v25; // [rsp+70h] [rbp+8h] BYREF

  v1 = *this;
  if ( *this )
  {
    if ( !*((_DWORD *)this + 2) )
    {
      v3 = *this;
      if ( v1 != *(&v1[7].Next + 1) )
      {
        v25 = *((_QWORD *)&v1[7].Next + 1);
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v25);
        v1 = *this;
        v3 = *this;
      }
      v4 = (unsigned __int8 *)*((_QWORD *)&v1[6].Next + 1);
      if ( v4 )
      {
        if ( v4 != gpRGBXlate )
        {
          Win32FreePool((__int64)v4);
          v1 = *this;
        }
        *((_QWORD *)&v1[6].Next + 1) = 0LL;
        v3 = *this;
      }
      if ( HmgRemoveObject((int)v3->Next, 0, 1, 1, 8, 0LL) )
      {
        v5 = *this;
        Next = (*this)[8].Next;
        if ( Next && (int)IsWin32FreePoolImplSupported() >= 0 )
          Win32FreePoolImpl(Next);
        v7 = gpTypeIsolation[1];
        if ( v7 )
        {
          memset(v5, 0, 0x90uLL);
          ++*((_DWORD *)v7 + 19);
          v8 = v7 + 48;
          if ( ExQueryDepthSList((PSLIST_HEADER)v8) >= *((_WORD *)v8 + 8) )
          {
            ++*((_DWORD *)v8 + 8);
            (*((void (__fastcall **)(struct _SLIST_ENTRY *, unsigned __int8 *))v8 + 7))(v5, v8);
          }
          else
          {
            ExpInterlockedPushEntrySList((PSLIST_HEADER)v8, v5);
          }
        }
      }
      goto LABEL_13;
    }
    v9 = (unsigned int)v1->Next;
    v23 = 0LL;
    v24 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v23, (unsigned __int16)v9 | (v9 >> 8) & 0xFF0000, 0, 0, 1);
    if ( !v24 )
    {
LABEL_13:
      *this = 0LL;
      return;
    }
    v10 = v23;
    v11 = *(_BYTE *)(v23 + 14);
    if ( v11 != 5
      || gbGdiHmgrAltStacks
      && gpentHmgrAltStacks
      && (RECALTUNLOCKSTACKBACKTRACE((unsigned __int16)LODWORD(v1->Next)), v11 = *(_BYTE *)(v10 + 14), v11 != 5) )
    {
      if ( v11 != 16 )
        goto LABEL_18;
      v21 = *((_QWORD *)&v1[8].Next + 1);
      v22 = 2LL;
    }
    else
    {
      v21 = *((_QWORD *)&v1[42].Next + 1);
      v22 = 0LL;
    }
    TrackObjectReferenceDecrement(v22, v21);
LABEL_18:
    --*((_DWORD *)&v1->Next + 2);
    v12 = (GdiHandleEntryDirectory **)gpHandleManager;
    v13 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v10 & 0xFFFFFF);
    v14 = v12[2];
    v15 = v13;
    v16 = *((_DWORD *)v14 + 514);
    if ( v13 >= v16 + ((*((unsigned __int16 *)v14 + 1) + 0xFFFF) << 16) )
      goto LABEL_30;
    if ( v13 >= v16 )
      v17 = ((v13 - v16) >> 16) + 1;
    else
      v17 = 0LL;
    v18 = *((_QWORD *)v14 + v17 + 1);
    if ( (_DWORD)v17 )
      v15 = ((1 - (_DWORD)v17) << 16) - v16 + (unsigned int)v15;
    if ( (unsigned int)v15 >= *(_DWORD *)(v18 + 20) )
LABEL_30:
      v19 = 0LL;
    else
      v19 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * (v15 >> 8)) + 16LL * (unsigned __int8)v15 + 8);
    v20 = GdiHandleManager::DecodeIndex((GdiHandleManager *)v12, (unsigned __int16)*v19 | (*v19 >> 8) & 0xFF0000);
    GdiHandleEntryDirectory::ReleaseEntryLock(v12[2], v20);
    KeLeaveCriticalRegion();
    goto LABEL_13;
  }
}
