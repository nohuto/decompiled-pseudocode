/*
 * XREFs of HmgMarkLazyDelete @ 0x1C005D190
 * Callers:
 *     <none>
 * Callees:
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C002B100 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgMarkLazyDelete(struct HOBJ__ *a1, char a2, _DWORD *a3)
{
  unsigned int v4; // ebx
  int *v5; // rdi
  __int64 v6; // rbp
  unsigned int v7; // esi
  unsigned int v8; // eax
  unsigned __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // edx
  GdiHandleManager *v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  __int64 v20; // r9
  _DWORD *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // r10
  unsigned int v24; // edx
  unsigned int v25; // r8d
  unsigned int v26; // ecx
  __int64 v27; // r10
  int *v29; // [rsp+20h] [rbp-38h] BYREF
  int v30; // [rsp+28h] [rbp-30h]

  v4 = 0;
  v29 = 0LL;
  v30 = 0;
  HANDLELOCK::bLockHobj((HANDLELOCK *)&v29, a1, a2);
  if ( v30 )
  {
    v5 = v29;
    *a3 = 0;
    v6 = *((_QWORD *)gpHandleManager + 2);
    v7 = *(_DWORD *)(v6 + 2056);
    v8 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *v5 & 0xFFFFFF);
    v9 = v8;
    if ( v8 >= v7 + ((*(unsigned __int16 *)(v6 + 2) + 0xFFFF) << 16) )
      goto LABEL_27;
    if ( v8 >= v7 )
      v10 = ((v8 - v7) >> 16) + 1;
    else
      v10 = 0;
    v11 = *(_QWORD *)(v6 + 8LL * v10 + 8);
    if ( v10 )
      v9 = ((1 - v10) << 16) - v7 + v8;
    if ( (unsigned int)v9 >= *(_DWORD *)(v11 + 20) )
LABEL_27:
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
    v14 = gpHandleManager;
    v15 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, v13 & 0xFFFFFF);
    v16 = *((_QWORD *)v14 + 2);
    v17 = v15;
    v18 = *(_DWORD *)(v16 + 2056);
    if ( v15 >= v18 + ((*(unsigned __int16 *)(v16 + 2) + 0xFFFF) << 16) )
      goto LABEL_29;
    if ( v15 >= v18 )
      v19 = ((v15 - v18) >> 16) + 1;
    else
      v19 = 0;
    v20 = *(_QWORD *)(v16 + 8LL * v19 + 8);
    if ( v19 )
      v17 = ((1 - v19) << 16) - v18 + v15;
    if ( (unsigned int)v17 >= *(_DWORD *)(v20 + 20) )
LABEL_29:
      v21 = 0LL;
    else
      v21 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8 * (v17 >> 8)) + 16LL * (unsigned __int8)v17 + 8);
    v22 = GdiHandleManager::DecodeIndex(
            (GdiHandleEntryDirectory **)v14,
            (unsigned __int16)*v21 | (*v21 >> 8) & 0xFF0000u);
    v23 = *((_QWORD *)v14 + 2);
    v24 = v22;
    v25 = *(_DWORD *)(v23 + 2056);
    if ( v22 < v25 + ((*(unsigned __int16 *)(v23 + 2) + 0xFFFF) << 16) )
    {
      if ( v22 >= v25 )
        v26 = ((v22 - v25) >> 16) + 1;
      else
        v26 = 0;
      v27 = *(_QWORD *)(v23 + 8LL * v26 + 8);
      if ( v26 )
        v24 = ((1 - v26) << 16) - v25 + v22;
      *(_DWORD *)(*(_QWORD *)v27 + 24LL * v24 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v27 + 24) + 8 * ((unsigned __int64)v24 >> 8)) + 16LL * (unsigned __int8)v24,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
    return 1;
  }
  return v4;
}
