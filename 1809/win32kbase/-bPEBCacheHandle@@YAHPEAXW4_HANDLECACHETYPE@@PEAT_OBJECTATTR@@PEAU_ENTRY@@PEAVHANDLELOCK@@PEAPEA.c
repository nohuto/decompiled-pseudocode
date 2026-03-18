/*
 * XREFs of ?bPEBCacheHandle@@YAHPEAXW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C001E630
 * Callers:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C001CCF0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C00207E0 (NtGdiDeleteObjectApp.c)
 *     bDeleteBrush @ 0x1C007DE80 (bDeleteBrush.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0023700 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C007CA54 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 */

__int64 __fastcall bPEBCacheHandle(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  int v8; // esi
  _QWORD *CurrentProcessWin32Process; // r12
  unsigned int v10; // ebx
  GdiHandleManager *v11; // rdi
  __int64 v12; // rcx
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct OBJECT *v16; // r13
  unsigned int v17; // ebx
  unsigned int v18; // r14d
  __int64 v19; // rdi
  unsigned int v20; // r11d
  unsigned int v21; // esi
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // edx
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct OBJECT *v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 ProcessPeb; // rax
  __int64 v31; // rdi
  __int64 v32; // r8
  _QWORD *v33; // rdx
  _QWORD *v34; // rcx
  unsigned int v35; // ebx
  GdiHandleManager *v36; // rsi
  __int64 v37; // rcx
  unsigned int v38; // r8d
  unsigned int v39; // edx
  __int64 v40; // rcx
  _DWORD *v41; // rdx
  unsigned int v42; // ebx
  __int64 v43; // rcx
  unsigned int v44; // r9d
  unsigned int v45; // r8d
  __int64 v46; // rdx
  int v48; // ecx
  unsigned int v49; // eax
  signed __int32 v50[8]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned int v51; // [rsp+20h] [rbp-A8h]
  unsigned int v52; // [rsp+28h] [rbp-A0h]
  unsigned int v53; // [rsp+30h] [rbp-98h]
  int v54; // [rsp+38h] [rbp-90h]
  _DWORD *v55; // [rsp+40h] [rbp-88h]
  _QWORD *v56; // [rsp+48h] [rbp-80h]
  struct OBJECT *v57; // [rsp+50h] [rbp-78h]
  __int64 v58; // [rsp+58h] [rbp-70h]
  __int64 v59; // [rsp+60h] [rbp-68h]
  __int64 v60; // [rsp+68h] [rbp-60h]
  struct _NT_TIB *Self; // [rsp+70h] [rbp-58h]
  __int64 v62; // [rsp+78h] [rbp-50h]
  __int64 v63; // [rsp+80h] [rbp-48h]
  __int64 v64; // [rsp+88h] [rbp-40h]

  v8 = a2;
  v51 = 0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v10 = *a4 & 0xFFFFFF;
  if ( v10 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v10,
                                  1)
           + 13) == HIWORD(v10) )
        v10 = (unsigned __int16)v10;
    }
    else
    {
      v10 = (unsigned __int16)v10;
    }
  }
  v11 = gpHandleManager;
  v12 = *((_QWORD *)gpHandleManager + 2);
  v13 = *(_DWORD *)(v12 + 2056);
  if ( v10 >= v13 + ((*(unsigned __int16 *)(v12 + 2) + 0xFFFF) << 16) )
    goto LABEL_89;
  if ( v10 >= v13 )
    v14 = ((v10 - v13) >> 16) + 1;
  else
    v14 = 0LL;
  v15 = *(_QWORD *)(v12 + 8 * v14 + 8);
  v58 = v15;
  if ( (_DWORD)v14 )
    v10 += ((1 - (_DWORD)v14) << 16) - v13;
  if ( v10 >= *(_DWORD *)(v15 + 20) )
LABEL_89:
    v16 = 0LL;
  else
    v16 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8LL * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8);
  v57 = v16;
  v17 = (unsigned __int16)*(_DWORD *)v16 | (*(_DWORD *)v16 >> 8) & 0xFF0000;
  if ( v17 < 0x10000 )
  {
    v18 = (unsigned __int16)*(_DWORD *)v16 | (*(_DWORD *)v16 >> 8) & 0xFF0000;
  }
  else
  {
    v18 = (unsigned __int16)*(_DWORD *)v16;
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      v48 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                   *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                   (unsigned __int16)*(_DWORD *)v16,
                                   1)
            + 13);
      v49 = v17;
      if ( v48 == HIWORD(v17) )
        v49 = (unsigned __int16)v17;
      v18 = v49;
    }
  }
  if ( v18 < 0x10000 && *(_DWORD *)v11 <= 0x10000u )
  {
    if ( v17 >= 0x10000 )
      v17 = (unsigned __int16)v17;
    v19 = *((_QWORD *)v11 + 2);
    v20 = *(_DWORD *)(v19 + 2056);
    v21 = v20 + ((*(unsigned __int16 *)(v19 + 2) + 0xFFFF) << 16);
    if ( v17 >= v21 )
    {
      v25 = 0LL;
    }
    else
    {
      if ( v17 >= v20 )
        v22 = ((v17 - v20) >> 16) + 1;
      else
        v22 = 0LL;
      v23 = *(_QWORD *)(v19 + 8 * v22 + 8);
      v59 = v23;
      if ( (_DWORD)v22 )
        v24 = v17 + ((1 - (_DWORD)v22) << 16) - v20;
      else
        v24 = v17;
      v25 = 0LL;
      if ( v24 < *(_DWORD *)(v23 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v23 + 24) + 8LL * (v24 >> 8)) + 16LL * (unsigned __int8)v24 + 8) )
      {
        v25 = *(_QWORD *)v23 + 24LL * v24;
      }
    }
    if ( v17 >= v21 )
      goto LABEL_97;
    if ( v17 >= v20 )
      v26 = ((v17 - v20) >> 16) + 1;
    else
      v26 = 0LL;
    v27 = *(_QWORD *)(v19 + 8 * v26 + 8);
    v60 = v27;
    if ( (_DWORD)v26 )
      v17 += ((1 - (_DWORD)v26) << 16) - v20;
    if ( v17 >= *(_DWORD *)(v27 + 20) )
LABEL_97:
      v28 = 0LL;
    else
      v28 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v27 + 24) + 8LL * (v17 >> 8)) + 16LL * (unsigned __int8)v17 + 8);
    if ( v28 != v16 )
      v25 = 0LL;
    ++*(_BYTE *)(v25 + 13);
    v29 = v18 | ((unsigned __int64)*(unsigned __int16 *)(v25 + 12) << 16);
    *(_QWORD *)v16 = v29;
    *(_QWORD *)v25 = *(_QWORD *)v25 & 0xFFFFFFFFFF000000uLL | (unsigned __int16)v29 | (unsigned __int64)(((unsigned int)v29 >> 8) & 0xFF0000);
    v8 = a2;
  }
  ProcessPeb = PsGetProcessPeb(*CurrentProcessWin32Process);
  v31 = ProcessPeb;
  if ( ProcessPeb )
  {
    v54 = 0;
    if ( !*(_QWORD *)(ProcessPeb + 320) )
    {
      Self = KeGetPcr()->NtTib.Self;
      if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(ProcessPeb + 320), (signed __int64)Self, 0LL) )
      {
        v54 = 1;
        v32 = (unsigned int)gCacheHandleEntries[v8];
        if ( *(_DWORD *)(ProcessPeb + 4LL * v8 + 328) < (unsigned int)v32 )
        {
          v33 = (_QWORD *)(ProcessPeb + 8 * (*((unsigned int *)&gCacheHandleOffsets + v8) + 43LL));
          v56 = v33;
          v34 = &v33[v32];
          while ( 1 )
          {
            if ( v33 == v34 )
              goto LABEL_65;
            if ( !*v33 )
              break;
            v56 = ++v33;
          }
          v62 = *(_QWORD *)v16;
          *v33 = v62;
          ++*(_DWORD *)(ProcessPeb + 4LL * v8 + 328);
          *a3 &= 0xFFFFFFF5;
          *a3 |= 1u;
          _InterlockedOr(v50, 0);
          v51 = 1;
          v35 = **(_DWORD **)a5 & 0xFFFFFF;
          v52 = v35;
          if ( v35 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager <= 0x10000u )
            {
              v35 = (unsigned __int16)v35;
              v52 = (unsigned __int16)v35;
              goto LABEL_45;
            }
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                        (unsigned __int16)v35,
                                        1)
                 + 13) == HIWORD(v35) )
              v35 = (unsigned __int16)v35;
          }
          v52 = v35;
LABEL_45:
          v36 = gpHandleManager;
          v37 = *((_QWORD *)gpHandleManager + 2);
          v38 = *(_DWORD *)(v37 + 2056);
          if ( v35 >= v38 + ((*(unsigned __int16 *)(v37 + 2) + 0xFFFF) << 16) )
          {
            v41 = 0LL;
          }
          else
          {
            if ( v35 >= v38 )
              v39 = ((v35 - v38) >> 16) + 1;
            else
              v39 = 0;
            v40 = *(_QWORD *)(v37 + 8LL * v39 + 8);
            v63 = v40;
            if ( v39 )
              v35 += ((1 - v39) << 16) - v38;
            if ( v35 >= *(_DWORD *)(v40 + 20) )
              v41 = 0LL;
            else
              v41 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v40 + 24) + 8LL * (v35 >> 8))
                               + 16LL * (unsigned __int8)v35
                               + 8);
          }
          v55 = v41;
          v42 = (unsigned __int16)*v41 | (*v41 >> 8) & 0xFF0000;
          if ( v42 >= 0x10000 )
          {
            if ( *(_DWORD *)gpHandleManager > 0x10000u )
            {
              if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                          *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                          (unsigned __int16)*v41,
                                          1)
                   + 13) == HIWORD(v42) )
                v42 = (unsigned __int16)v42;
            }
            else
            {
              v42 = (unsigned __int16)*v41;
            }
          }
          v53 = v42;
          if ( v42 >= 0x10000 )
          {
            if ( *(_DWORD *)v36 <= 0x10000u )
            {
              v53 = (unsigned __int16)v42;
              goto LABEL_57;
            }
            if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                        *((GdiHandleEntryDirectory **)v36 + 2),
                                        (unsigned __int16)v42,
                                        1)
                 + 13) == HIWORD(v42) )
            {
              v53 = (unsigned __int16)v42;
              goto LABEL_57;
            }
          }
          v53 = v42;
LABEL_57:
          v43 = *((_QWORD *)v36 + 2);
          v44 = *(_DWORD *)(v43 + 2056);
          if ( v42 < v44 + ((*(unsigned __int16 *)(v43 + 2) + 0xFFFF) << 16) )
          {
            if ( v42 >= v44 )
              v45 = ((v42 - v44) >> 16) + 1;
            else
              v45 = 0;
            v46 = *(_QWORD *)(v43 + 8LL * v45 + 8);
            v64 = v46;
            if ( v45 )
              v42 += ((1 - v45) << 16) - v44;
            *(_DWORD *)(*(_QWORD *)v46 + 24LL * v42 + 8) &= ~1u;
            ExReleasePushLockExclusiveEx(
              *(_QWORD *)(**(_QWORD **)(v46 + 24) + 8LL * (v42 >> 8)) + 16LL * (unsigned __int8)v42,
              0LL);
            KeLeaveCriticalRegion();
          }
          *(_DWORD *)(a5 + 8) = 0;
          *(_QWORD *)a5 = 0LL;
          KeLeaveCriticalRegion();
          if ( a6 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)a6 + 12LL));
            *(_QWORD *)a6 = 0LL;
          }
        }
LABEL_65:
        *(_QWORD *)(v31 + 320) = 0LL;
      }
    }
  }
  if ( !v51 )
    GdiHandleManager::_IncrementOrDecrementUniqueness(gpHandleManager, v16, 0);
  return v51;
}
