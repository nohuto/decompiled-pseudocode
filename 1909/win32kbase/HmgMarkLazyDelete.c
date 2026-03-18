/*
 * XREFs of HmgMarkLazyDelete @ 0x1C0019020
 * Callers:
 *     <none>
 * Callees:
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C001BC60 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z @ 0x1C001F5B0 (-ReleaseEntryLock@GdiHandleEntryDirectory@@QEAAXI@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgMarkLazyDelete(struct HOBJ__ *a1, unsigned __int8 a2, _DWORD *a3)
{
  _DWORD *v4; // rbx
  int *v5; // rdi
  __int64 v6; // rbp
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // edx
  GdiHandleEntryDirectory **v14; // rdi
  unsigned int v15; // eax
  GdiHandleEntryDirectory *v16; // r9
  unsigned __int64 v17; // rdx
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  __int64 v20; // r9
  unsigned int v21; // eax
  int *v23; // [rsp+20h] [rbp-28h] BYREF
  int v24; // [rsp+28h] [rbp-20h]

  v4 = 0LL;
  v23 = 0LL;
  v24 = 0;
  HANDLELOCK::bLockHobj((HANDLELOCK *)&v23, a1, a2);
  if ( v24 )
  {
    v5 = v23;
    *a3 = 0;
    v6 = *((_QWORD *)gpHandleManager + 2);
    v7 = *(_DWORD *)(v6 + 2056);
    v8 = GdiHandleManager::DecodeIndex(gpHandleManager, *v5 & 0xFFFFFF);
    v9 = v8;
    if ( v8 >= v7 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
      goto LABEL_21;
    if ( v8 >= v7 )
      v10 = ((v8 - v7) >> 16) + 1;
    else
      v10 = 0;
    v11 = *(_QWORD *)(v6 + 8LL * v10 + 8);
    if ( v10 )
      v9 = ((1 - v10) << 16) - v7 + v8;
    if ( (unsigned int)v9 >= *(_DWORD *)(v11 + 20) )
LABEL_21:
      v12 = 0LL;
    else
      v12 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * (v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8);
    if ( *(_DWORD *)(v12 + 8) )
    {
      *((_BYTE *)v5 + 15) |= 2u;
      *a3 = 1;
    }
    *((_QWORD *)v5 + 2) = 0LL;
    v13 = *v5;
    v14 = (GdiHandleEntryDirectory **)gpHandleManager;
    v15 = GdiHandleManager::DecodeIndex(gpHandleManager, v13 & 0xFFFFFF);
    v16 = v14[2];
    v17 = v15;
    v18 = *((_DWORD *)v16 + 514);
    if ( v15 < v18 + ((*((unsigned __int16 *)v16 + 1) + 0xFFFF) << 16) )
    {
      if ( v15 >= v18 )
        v19 = ((v15 - v18) >> 16) + 1;
      else
        v19 = 0;
      v20 = *((_QWORD *)v16 + v19 + 1);
      if ( v19 )
        v17 = ((1 - v19) << 16) - v18 + v15;
      if ( (unsigned int)v17 < *(_DWORD *)(v20 + 20) )
        v4 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * (v17 >> 8)) + 16LL * (unsigned __int8)v17 + 8);
    }
    v21 = GdiHandleManager::DecodeIndex((GdiHandleManager *)v14, (unsigned __int16)*v4 | (*v4 >> 8) & 0xFF0000);
    GdiHandleEntryDirectory::ReleaseEntryLock(v14[2], v21);
    KeLeaveCriticalRegion();
    LODWORD(v4) = 1;
  }
  return (unsigned int)v4;
}
