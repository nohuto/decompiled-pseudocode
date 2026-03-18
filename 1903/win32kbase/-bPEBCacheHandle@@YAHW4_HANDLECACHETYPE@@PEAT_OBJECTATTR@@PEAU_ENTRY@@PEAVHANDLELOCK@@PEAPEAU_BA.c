/*
 * XREFs of ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C0052CF0
 * Callers:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0017500 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C0022090 (NtGdiDeleteObjectApp.c)
 *     bDeleteBrush @ 0x1C0052910 (bDeleteBrush.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001EB20 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0021EDC (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C00834E8 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     McTemplateK0ppqqq @ 0x1C01105E8 (McTemplateK0ppqqq.c)
 */

__int64 __fastcall bPEBCacheHandle(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // edi
  GdiHandleManager *v8; // r14
  __int64 v9; // rcx
  unsigned int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct OBJECT *v13; // rbx
  __int64 v14; // r11
  unsigned int v15; // edi
  unsigned int v16; // r12d
  __int64 v17; // rsi
  unsigned int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // ecx
  __int64 v22; // r15
  unsigned int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct OBJECT *v26; // rdx
  unsigned __int64 v27; // rcx
  int v28; // eax
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  __int64 v32; // r10
  __int64 v33; // r11
  __int64 ProcessPeb; // rax
  __int64 v35; // r14
  __int64 v36; // r9
  _QWORD *v37; // rdx
  _QWORD *v38; // rcx
  unsigned int v39; // edi
  GdiHandleManager *v40; // rsi
  __int64 v41; // rcx
  unsigned int v42; // r8d
  __int64 v43; // rdx
  __int64 v44; // rcx
  _DWORD *v45; // rdx
  int v46; // eax
  __int64 v47; // rbx
  __int64 v48; // rcx
  unsigned int v49; // r9d
  unsigned int v50; // r8d
  __int64 v51; // rdx
  unsigned int v52; // edi
  int v53; // eax
  int v54; // ecx
  unsigned int v56; // ebx
  unsigned int v57; // ebx
  int EtwGdiHandleType; // eax
  signed __int32 v59[8]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v60; // [rsp+20h] [rbp-D8h]
  int v61; // [rsp+28h] [rbp-D0h]
  int v62; // [rsp+30h] [rbp-C8h]
  int v63; // [rsp+38h] [rbp-C0h]
  unsigned int v64; // [rsp+40h] [rbp-B8h]
  unsigned int v65; // [rsp+48h] [rbp-B0h]
  int v66; // [rsp+50h] [rbp-A8h]
  struct OBJECT *v67; // [rsp+58h] [rbp-A0h]
  int v68; // [rsp+60h] [rbp-98h]
  _DWORD *v69; // [rsp+68h] [rbp-90h]
  _DWORD *v70; // [rsp+70h] [rbp-88h]
  _QWORD *v71; // [rsp+78h] [rbp-80h]
  struct OBJECT *v72; // [rsp+80h] [rbp-78h]
  __int64 v73; // [rsp+88h] [rbp-70h]
  __int64 v74; // [rsp+90h] [rbp-68h]
  __int64 v75; // [rsp+98h] [rbp-60h]
  struct _NT_TIB *Self; // [rsp+A0h] [rbp-58h]
  __int64 v77; // [rsp+A8h] [rbp-50h]
  __int64 v78; // [rsp+B0h] [rbp-48h]
  __int64 v79; // [rsp+B8h] [rbp-40h]
  int v80; // [rsp+100h] [rbp+8h]
  _QWORD *CurrentProcessWin32Process; // [rsp+110h] [rbp+18h]

  v80 = a1;
  v64 = 0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v7 = *a3 & 0xFFFFFF;
  if ( v7 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      v56 = *(unsigned __int16 *)a3;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v7,
                                  1)
           + 13) == HIWORD(v7) )
        v7 = v56;
    }
    else
    {
      v7 = *(unsigned __int16 *)a3;
    }
  }
  v8 = gpHandleManager;
  v9 = *((_QWORD *)gpHandleManager + 2);
  v10 = *(_DWORD *)(v9 + 2056);
  if ( v7 >= v10 + ((*(unsigned __int16 *)(v9 + 2) + 0xFFFF) << 16) )
    goto LABEL_94;
  if ( v7 >= v10 )
    v11 = ((v7 - v10) >> 16) + 1;
  else
    v11 = 0LL;
  v12 = *(_QWORD *)(v9 + 8 * v11 + 8);
  v73 = v12;
  if ( (_DWORD)v11 )
    v7 += ((1 - (_DWORD)v11) << 16) - v10;
  if ( v7 >= *(_DWORD *)(v12 + 20) )
LABEL_94:
    v13 = 0LL;
  else
    v13 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8LL * (v7 >> 8)) + 16LL * (unsigned __int8)v7 + 8);
  v67 = v13;
  v72 = v13;
  v14 = *(_QWORD *)v13;
  v15 = (unsigned __int16)v14 | ((unsigned int)v14 >> 8) & 0xFF0000;
  if ( v15 < 0x10000 )
  {
    v16 = (unsigned __int16)v14 | ((unsigned int)v14 >> 8) & 0xFF0000;
  }
  else if ( *(_DWORD *)gpHandleManager > 0x10000u )
  {
    v57 = (unsigned __int16)v14;
    v16 = (unsigned __int16)v14 | ((unsigned int)v14 >> 8) & 0xFF0000;
    if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                (unsigned __int16)v14,
                                1)
         + 13) == HIWORD(v15) )
      v16 = v57;
    v13 = v67;
  }
  else
  {
    v16 = (unsigned __int16)v14;
  }
  if ( v15 >= 0x10000 )
  {
    if ( *(_DWORD *)v8 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)v8 + 2),
                                  (unsigned __int16)v15,
                                  1)
           + 13) == HIWORD(v15) )
        v15 = (unsigned __int16)v15;
      v13 = v67;
    }
    else
    {
      v15 = (unsigned __int16)v15;
    }
  }
  v17 = *((_QWORD *)v8 + 2);
  v18 = *(_DWORD *)(v17 + 2056);
  if ( v15 >= v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
  {
    v22 = 0LL;
  }
  else
  {
    if ( v15 >= v18 )
      v19 = ((v15 - v18) >> 16) + 1;
    else
      v19 = 0LL;
    v20 = *(_QWORD *)(v17 + 8 * v19 + 8);
    v74 = v20;
    if ( (_DWORD)v19 )
      v21 = v15 + ((1 - (_DWORD)v19) << 16) - v18;
    else
      v21 = v15;
    v22 = 0LL;
    if ( v21 < *(_DWORD *)(v20 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8LL * (v21 >> 8)) + 16LL * (unsigned __int8)v21 + 8) )
    {
      v22 = *(_QWORD *)v20 + 24LL * v21;
    }
  }
  if ( v15 >= 0x10000 )
  {
    if ( *(_DWORD *)v8 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  (GdiHandleEntryDirectory *)v17,
                                  (unsigned __int16)v15,
                                  1)
           + 13) == HIWORD(v15) )
        v15 = (unsigned __int16)v15;
      v13 = v67;
    }
    else
    {
      v15 = (unsigned __int16)v15;
    }
  }
  v23 = *(_DWORD *)(v17 + 2056);
  if ( v15 >= v23 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
    goto LABEL_110;
  if ( v15 >= v23 )
    v24 = ((v15 - v23) >> 16) + 1;
  else
    v24 = 0LL;
  v25 = *(_QWORD *)(v17 + 8 * v24 + 8);
  v75 = v25;
  if ( (_DWORD)v24 )
    v15 += ((1 - (_DWORD)v24) << 16) - v23;
  if ( v15 >= *(_DWORD *)(v25 + 20) )
LABEL_110:
    v26 = 0LL;
  else
    v26 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v25 + 24) + 8LL * (v15 >> 8)) + 16LL * (unsigned __int8)v15 + 8);
  if ( v26 != v13 )
    v22 = 0LL;
  if ( v16 >= 0x10000 || *(_DWORD *)v8 > 0x10000u )
  {
    EtwGdiHandleType = GetEtwGdiHandleType(*(_BYTE *)(v22 + 14));
    if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 4) == 0 )
      goto LABEL_38;
    v63 = v31;
    v61 = EtwGdiHandleType;
    v60 = v33;
LABEL_114:
    McTemplateK0ppqqq(v30, v29, v31, v33, v60, v61, v62, v63);
    goto LABEL_38;
  }
  ++*(_BYTE *)(v22 + 13);
  v27 = v16 | ((unsigned __int64)*(unsigned __int16 *)(v22 + 12) << 16);
  *(_QWORD *)v13 = v27;
  *(_QWORD *)v22 = *(_QWORD *)v22 & 0xFFFFFFFFFF000000uLL | (unsigned __int16)v27 | (unsigned __int64)(((unsigned int)v27 >> 8) & 0xFF0000);
  v28 = GetEtwGdiHandleType(*(_BYTE *)(v22 + 14));
  if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 4) != 0 )
  {
    v63 = v31;
    v61 = v28;
    v60 = v32;
    goto LABEL_114;
  }
LABEL_38:
  ProcessPeb = PsGetProcessPeb(*CurrentProcessWin32Process);
  v35 = ProcessPeb;
  if ( ProcessPeb )
  {
    v68 = 0;
    if ( !*(_QWORD *)(ProcessPeb + 320) )
    {
      Self = KeGetPcr()->NtTib.Self;
      if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(ProcessPeb + 320), (signed __int64)Self, 0LL) )
      {
        v68 = 1;
        v36 = (unsigned int)gCacheHandleEntries[v80];
        if ( *(_DWORD *)(ProcessPeb + 4LL * v80 + 328) < (unsigned int)v36 )
        {
          v37 = (_QWORD *)(ProcessPeb + 8 * (*((unsigned int *)&gCacheHandleOffsets + v80) + 43LL));
          v71 = v37;
          v38 = &v37[v36];
          while ( v37 != v38 )
          {
            if ( !*v37 )
            {
              v77 = *(_QWORD *)v13;
              *v37 = v77;
              ++*(_DWORD *)(ProcessPeb + 4LL * v80 + 328);
              *a2 &= 0xFFFFFFF5;
              *a2 |= 1u;
              _InterlockedOr(v59, 0);
              v64 = 1;
              v39 = **(_DWORD **)a4 & 0xFFFFFF;
              v65 = v39;
              if ( v39 >= 0x10000 )
              {
                if ( *(_DWORD *)gpHandleManager > 0x10000u )
                {
                  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                              *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                              (unsigned __int16)v39,
                                              1)
                       + 13) == HIWORD(v39) )
                    v39 = (unsigned __int16)v39;
                }
                else
                {
                  v39 = (unsigned __int16)v39;
                }
              }
              v65 = v39;
              v40 = gpHandleManager;
              v41 = *((_QWORD *)gpHandleManager + 2);
              v42 = *(_DWORD *)(v41 + 2056);
              if ( v39 >= v42 + ((*(unsigned __int16 *)(v41 + 2) + 0xFFFF) << 16) )
              {
                v45 = 0LL;
              }
              else
              {
                if ( v39 >= v42 )
                  v43 = ((v39 - v42) >> 16) + 1;
                else
                  v43 = 0LL;
                v44 = *(_QWORD *)(v41 + 8 * v43 + 8);
                v78 = v44;
                if ( (_DWORD)v43 )
                  v39 += ((1 - (_DWORD)v43) << 16) - v42;
                if ( v39 >= *(_DWORD *)(v44 + 20) )
                  v45 = 0LL;
                else
                  v45 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v44 + 24) + 8LL * (v39 >> 8))
                                   + 16LL * (unsigned __int8)v39
                                   + 8);
                v69 = v45;
              }
              v70 = v45;
              v46 = (unsigned __int16)*v45;
              v47 = v46 | (*v45 >> 8) & 0xFF0000u;
              if ( (unsigned int)v47 >= 0x10000 )
              {
                if ( *(_DWORD *)gpHandleManager > 0x10000u )
                {
                  v52 = (unsigned __int16)v46;
                  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                              *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                              (unsigned __int16)v46,
                                              1)
                       + 13) == WORD1(v47) )
                    v47 = v52;
                }
                else
                {
                  v47 = (unsigned __int16)v46;
                }
              }
              v66 = v47;
              if ( (unsigned int)v47 >= 0x10000 )
              {
                if ( *(_DWORD *)v40 > 0x10000u )
                {
                  v54 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                               *((GdiHandleEntryDirectory **)v40 + 2),
                                               (unsigned __int16)v47,
                                               1)
                        + 13);
                  v53 = v47;
                  if ( v54 == WORD1(v47) )
                    v53 = (unsigned __int16)v47;
                }
                else
                {
                  v53 = (unsigned __int16)v47;
                }
                v66 = v53;
              }
              else
              {
                v66 = v47;
              }
              v48 = *((_QWORD *)v40 + 2);
              v49 = *(_DWORD *)(v48 + 2056);
              if ( (unsigned int)v47 < v49 + ((*(unsigned __int16 *)(v48 + 2) + 0xFFFF) << 16) )
              {
                if ( (unsigned int)v47 >= v49 )
                  v50 = (((unsigned int)v47 - v49) >> 16) + 1;
                else
                  v50 = 0;
                v51 = *(_QWORD *)(v48 + 8LL * v50 + 8);
                v79 = v51;
                if ( v50 )
                  v47 = ((1 - v50) << 16) - v49 + (unsigned int)v47;
                *(_DWORD *)(*(_QWORD *)v51 + 24 * v47 + 8) &= ~1u;
                ExReleasePushLockExclusiveEx(
                  *(_QWORD *)(**(_QWORD **)(v51 + 24) + 8LL * ((unsigned int)v47 >> 8)) + 16LL * (unsigned __int8)v47,
                  0LL);
                KeLeaveCriticalRegion();
              }
              *(_DWORD *)(a4 + 8) = 0;
              *(_QWORD *)a4 = 0LL;
              KeLeaveCriticalRegion();
              v13 = v67;
              if ( a5 )
              {
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)a5 + 12LL));
                *(_QWORD *)a5 = 0LL;
              }
              break;
            }
            v71 = ++v37;
          }
        }
        *(_QWORD *)(v35 + 320) = 0LL;
      }
    }
  }
  if ( !v64 )
    GdiHandleManager::_IncrementOrDecrementUniqueness(gpHandleManager, v13, 0);
  return v64;
}
