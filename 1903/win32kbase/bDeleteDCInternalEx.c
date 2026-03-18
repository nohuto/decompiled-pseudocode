/*
 * XREFs of bDeleteDCInternalEx @ 0x1C0021720
 * Callers:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C001631C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00200C0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003DDAC (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     bDeleteDCInternal @ 0x1C0064FC0 (bDeleteDCInternal.c)
 * Callees:
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C0019DB0 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 *     ?ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z @ 0x1C001D2B0 (-ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C001D470 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PEAI@Z @ 0x1C001EC70 (-_RetrieveTableAndTableEntryIndex@GdiHandleEntryDirectory@@AEAA_NIPEAPEAVGdiHandleEntryTable@@PE.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00200C0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C0077450 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     UserReleaseDC @ 0x1C008D650 (UserReleaseDC.c)
 *     EngSetLastError @ 0x1C0094990 (EngSetLastError.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0122994 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

_BOOL8 __fastcall bDeleteDCInternalEx(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rbx
  int *v5; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  GdiHandleManager *v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned int v11; // r10d
  __int64 v12; // rcx
  __int64 v13; // r9
  __int16 v14; // ax
  int v15; // edx
  GdiHandleManager *v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned int v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // r8
  _DWORD *v23; // rdx
  unsigned int v24; // eax
  GdiHandleEntryDirectory *v25; // rcx
  int v26; // ecx
  GdiHandleManager *v27; // r14
  unsigned int v28; // eax
  __int64 v29; // rsi
  unsigned int v30; // r9d
  unsigned int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // r10
  __int64 v34; // rdi
  unsigned int v35; // eax
  unsigned int v36; // r9d
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // rdx
  struct _DC_ATTR *v41; // rdx
  int v43; // ebx
  bool v44; // zf
  __int64 v45; // [rsp+30h] [rbp-30h] BYREF
  __int64 v46; // [rsp+38h] [rbp-28h]
  __int64 v47; // [rsp+40h] [rbp-20h] BYREF
  int v48; // [rsp+48h] [rbp-18h]
  unsigned int v49; // [rsp+A0h] [rbp+40h] BYREF
  int v50; // [rsp+B0h] [rbp+50h] BYREF
  GdiHandleEntryTable *v51; // [rsp+B8h] [rbp+58h] BYREF

  v50 = 0;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0;
  v4 = 0LL;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v47, (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000, 1, 0, 0);
  if ( v48 )
  {
    v5 = (int *)v47;
    if ( *(_BYTE *)(v47 + 14) == 1 && *(_WORD *)(v47 + 12) == WORD1(a1) )
    {
      CurrentThread = KeGetCurrentThread();
      v5 = (int *)v47;
      v7 = gpHandleManager;
      v8 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v47 & 0xFFFFFF);
      v9 = *((_QWORD *)v7 + 2);
      v10 = v8;
      v11 = *(_DWORD *)(v9 + 2056);
      if ( v8 >= v11 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
        goto LABEL_55;
      v12 = ((v8 - v11) >> 16) + 1;
      if ( v8 < v11 )
        v12 = 0LL;
      v13 = *(_QWORD *)(v9 + 8 * v12 + 8);
      if ( (_DWORD)v12 )
        v10 = v8 + ((1 - (_DWORD)v12) << 16) - v11;
      if ( (unsigned int)v10 >= *(_DWORD *)(v13 + 20) )
LABEL_55:
        v4 = 0LL;
      else
        v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
      v14 = *(_WORD *)(v4 + 12);
      if ( !v14 || *(struct _KTHREAD **)(v4 + 16) == CurrentThread )
      {
        *(_QWORD *)(v4 + 16) = CurrentThread;
        *(_WORD *)(v4 + 12) = v14 + 1;
      }
      else
      {
        v4 = 0LL;
      }
    }
    v15 = *v5;
    v16 = gpHandleManager;
    v17 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v15 & 0xFFFFFF);
    v18 = *((_QWORD *)v16 + 2);
    v19 = v17;
    v20 = *(_DWORD *)(v18 + 2056);
    if ( v17 >= v20 + ((*(unsigned __int16 *)(v18 + 2) + 0xFFFF) << 16) )
      goto LABEL_58;
    v21 = ((v17 - v20) >> 16) + 1;
    if ( v17 < v20 )
      v21 = 0LL;
    v22 = *(_QWORD *)(v18 + 8 * v21 + 8);
    if ( (_DWORD)v21 )
      v19 = ((1 - (_DWORD)v21) << 16) - v20 + v17;
    if ( (unsigned int)v19 >= *(_DWORD *)(v22 + 20) )
LABEL_58:
      v23 = 0LL;
    else
      v23 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v22 + 24) + 8 * (v19 >> 8)) + 16LL * (unsigned __int8)v19 + 8);
    v24 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v16,
            (unsigned __int16)*v23 | (*v23 >> 8) & 0xFF0000u);
    v25 = (GdiHandleEntryDirectory *)*((_QWORD *)v16 + 2);
    v51 = 0LL;
    v49 = 0;
    if ( GdiHandleEntryDirectory::_RetrieveTableAndTableEntryIndex(v25, v24, &v51, &v49) )
      GdiHandleEntryTable::ReleaseEntryLock(v51, v49);
    KeLeaveCriticalRegion();
  }
  v45 = v4;
  if ( !v4 )
  {
    if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      PsGetWin32KFilterSet();
    goto LABEL_72;
  }
  v26 = HIDWORD(v46);
  if ( HIDWORD(v46) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 48) + 40LL) & 0x8000) == 0
      || (v43 = *(_DWORD *)(v4 + 2096), v44 = v43 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC),
                                        v4 = v45,
                                        !v44) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 12));
      goto LABEL_63;
    }
    v26 = HIDWORD(v46);
  }
  if ( (*(_DWORD *)(v4 + 44) & 2) != 0 )
    goto LABEL_48;
  if ( !v26 )
  {
    v27 = gpHandleManager;
    v28 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)gpHandleManager,
            (unsigned __int16)*(_DWORD *)v4 | (*(_DWORD *)v4 >> 8) & 0xFF0000u);
    v29 = *((_QWORD *)v27 + 2);
    v30 = v28;
    v31 = *(_DWORD *)(v29 + 2056);
    if ( v28 >= v31 + ((*(unsigned __int16 *)(v29 + 2) + 0xFFFF) << 16) )
    {
      v34 = 0LL;
    }
    else
    {
      v32 = ((v28 - v31) >> 16) + 1;
      if ( v28 < v31 )
        v32 = 0LL;
      v33 = *(_QWORD *)(v29 + 8 * v32 + 8);
      if ( (_DWORD)v32 )
        v28 += ((1 - (_DWORD)v32) << 16) - v31;
      v34 = 0LL;
      if ( v28 < *(_DWORD *)(v33 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v33 + 24) + 8 * ((unsigned __int64)v28 >> 8))
                     + 16LL * (unsigned __int8)v28
                     + 8) )
      {
        v34 = *(_QWORD *)v33 + 24LL * v28;
      }
    }
    v35 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v27, v30);
    v36 = *(_DWORD *)(v29 + 2056);
    v37 = v35;
    if ( v35 >= v36 + ((*(unsigned __int16 *)(v29 + 2) + 0xFFFF) << 16) )
      goto LABEL_66;
    v38 = ((v35 - v36) >> 16) + 1;
    if ( (unsigned int)v37 < v36 )
      v38 = 0LL;
    v39 = *(_QWORD *)(v29 + 8 * v38 + 8);
    if ( (_DWORD)v38 )
      v37 = ((1 - (_DWORD)v38) << 16) - v36 + (unsigned int)v37;
    if ( (unsigned int)v37 >= *(_DWORD *)(v39 + 20) )
LABEL_66:
      v40 = 0LL;
    else
      v40 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v39 + 24) + 8 * (v37 >> 8)) + 16LL * (unsigned __int8)v37 + 8);
    if ( v40 == v4 )
    {
      if ( v34 )
      {
        v41 = *(struct _DC_ATTR **)(v34 + 16);
        if ( v41 )
        {
          if ( (unsigned int)DC::SaveAttributes((DC *)v4, v41) )
          {
            v4 = v45;
            goto LABEL_47;
          }
          _InterlockedDecrement((volatile signed __int32 *)(v45 + 12));
LABEL_63:
          v45 = 0LL;
LABEL_64:
          EngSetLastError(0xAAu);
          XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v45);
          return 0LL;
        }
      }
    }
  }
LABEL_47:
  *(_DWORD *)(v4 + 44) |= 2u;
  v4 = v45;
  LODWORD(v46) = 1;
LABEL_48:
  if ( (*(_DWORD *)(v4 + 520) & 4) != 0 )
  {
    DC::vMarkTransformDirty((DC *)v4);
LABEL_72:
    v4 = v45;
  }
  if ( !v4 || !(unsigned int)bDeleteDCOBJ((struct XDCOBJ *)&v45, a2, &v50) )
    goto LABEL_64;
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v45);
  return !v50 || (unsigned int)UserReleaseDC(a1);
}
