/*
 * XREFs of ?bPEBCacheHandle@@YAHW4_HANDLECACHETYPE@@PEAT_OBJECTATTR@@PEAU_ENTRY@@PEAVHANDLELOCK@@PEAPEAU_BASEOBJECT@@@Z @ 0x1C000E1A0
 * Callers:
 *     bDeleteBrush @ 0x1C000DDC0 (bDeleteBrush.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0018B70 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C00225E0 (NtGdiDeleteObjectApp.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001FE60 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0021F44 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C00502F8 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     McTemplateK0ppqqq @ 0x1C010DC78 (McTemplateK0ppqqq.c)
 */

__int64 __fastcall bPEBCacheHandle(int a1, _DWORD *a2, _DWORD *a3, __int64 a4, __int64 a5)
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
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // ecx
  __int64 v22; // r15
  unsigned int v23; // r8d
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct OBJECT *v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  __int64 v33; // r10
  __int64 v34; // r11
  __int64 ProcessPeb; // rax
  __int64 v36; // r14
  __int64 v37; // r9
  _QWORD *v38; // rdx
  _QWORD *v39; // rcx
  unsigned int v40; // edi
  GdiHandleManager *v41; // rsi
  __int64 v42; // rcx
  unsigned int v43; // r8d
  __int64 v44; // rdx
  __int64 v45; // rcx
  _DWORD *v46; // rdx
  int v47; // eax
  __int64 v48; // rbx
  __int64 v49; // rcx
  unsigned int v50; // r9d
  unsigned int v51; // r8d
  __int64 v52; // rdx
  unsigned int v53; // edi
  int v54; // eax
  int v55; // ecx
  unsigned int v57; // ebx
  unsigned int v58; // ebx
  int EtwGdiHandleType; // eax
  signed __int32 v60[8]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v61; // [rsp+20h] [rbp-D8h]
  int v62; // [rsp+28h] [rbp-D0h]
  int v63; // [rsp+30h] [rbp-C8h]
  int v64; // [rsp+38h] [rbp-C0h]
  unsigned int v65; // [rsp+40h] [rbp-B8h]
  unsigned int v66; // [rsp+48h] [rbp-B0h]
  int v67; // [rsp+50h] [rbp-A8h]
  struct OBJECT *v68; // [rsp+58h] [rbp-A0h]
  int v69; // [rsp+60h] [rbp-98h]
  _DWORD *v70; // [rsp+68h] [rbp-90h]
  _DWORD *v71; // [rsp+70h] [rbp-88h]
  _QWORD *v72; // [rsp+78h] [rbp-80h]
  struct OBJECT *v73; // [rsp+80h] [rbp-78h]
  __int64 v74; // [rsp+88h] [rbp-70h]
  __int64 v75; // [rsp+90h] [rbp-68h]
  __int64 v76; // [rsp+98h] [rbp-60h]
  struct _NT_TIB *Self; // [rsp+A0h] [rbp-58h]
  __int64 v78; // [rsp+A8h] [rbp-50h]
  __int64 v79; // [rsp+B0h] [rbp-48h]
  __int64 v80; // [rsp+B8h] [rbp-40h]
  _QWORD *CurrentProcessWin32Process; // [rsp+110h] [rbp+18h]

  v65 = 0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process();
  v7 = *a3 & 0xFFFFFF;
  if ( v7 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      v57 = *(unsigned __int16 *)a3;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)v7,
                                  1)
           + 13) == HIWORD(v7) )
        v7 = v57;
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
  v74 = v12;
  if ( (_DWORD)v11 )
    v7 += ((1 - (_DWORD)v11) << 16) - v10;
  if ( v7 >= *(_DWORD *)(v12 + 20) )
LABEL_94:
    v13 = 0LL;
  else
    v13 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v12 + 24) + 8LL * (v7 >> 8)) + 16LL * (unsigned __int8)v7 + 8);
  v68 = v13;
  v73 = v13;
  v14 = *(_QWORD *)v13;
  v15 = (unsigned __int16)v14 | ((unsigned int)v14 >> 8) & 0xFF0000;
  if ( v15 < 0x10000 )
  {
    v16 = (unsigned __int16)v14 | ((unsigned int)v14 >> 8) & 0xFF0000;
  }
  else if ( *(_DWORD *)gpHandleManager > 0x10000u )
  {
    v58 = (unsigned __int16)v14;
    v16 = (unsigned __int16)v14 | ((unsigned int)v14 >> 8) & 0xFF0000;
    if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                (unsigned __int16)v14,
                                1)
         + 13) == HIWORD(v15) )
      v16 = v58;
    v13 = v68;
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
      v13 = v68;
    }
    else
    {
      v15 = (unsigned __int16)v15;
    }
  }
  v17 = *((_QWORD *)v8 + 2);
  v18 = *(unsigned int *)(v17 + 2056);
  if ( v15 >= (unsigned int)v18 + ((*(unsigned __int16 *)(v17 + 2) + 0xFFFF) << 16) )
  {
    v22 = 0LL;
  }
  else
  {
    if ( v15 >= (unsigned int)v18 )
      v19 = ((v15 - (unsigned int)v18) >> 16) + 1;
    else
      v19 = 0LL;
    v20 = *(_QWORD *)(v17 + 8 * v19 + 8);
    v75 = v20;
    if ( (_DWORD)v19 )
      v21 = v15 + ((1 - (_DWORD)v19) << 16) - v18;
    else
      v21 = v15;
    v22 = 0LL;
    if ( v21 < *(_DWORD *)(v20 + 20) )
    {
      v18 = v21;
      if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v20 + 24) + 8LL * (v21 >> 8)) + 16LL * (unsigned __int8)v21 + 8) )
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
      v13 = v68;
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
  v76 = v25;
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
    EtwGdiHandleType = GetEtwGdiHandleType(*(unsigned __int8 *)(v22 + 14), v26, *(_DWORD *)(v22 + 8) & 0xFFFFFFFE, v18);
    if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 4) == 0 )
      goto LABEL_38;
    v64 = v32;
    v62 = EtwGdiHandleType;
    v61 = v34;
LABEL_114:
    McTemplateK0ppqqq(v31, v30, v32, v34, v61, v62, v63, v64);
    goto LABEL_38;
  }
  ++*(_BYTE *)(v22 + 13);
  v27 = v16 | ((unsigned __int64)*(unsigned __int16 *)(v22 + 12) << 16);
  *(_QWORD *)v13 = v27;
  v28 = *(_QWORD *)v22 & 0xFFFFFFFFFF000000uLL | (unsigned __int16)v27 | (unsigned __int64)(((unsigned int)v27 >> 8) & 0xFF0000);
  *(_QWORD *)v22 = v28;
  v29 = GetEtwGdiHandleType(*(unsigned __int8 *)(v22 + 14), v28, *(_DWORD *)(v22 + 8) & 0xFFFFFFFE, v18);
  if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 4) != 0 )
  {
    v64 = v32;
    v62 = v29;
    v61 = v33;
    goto LABEL_114;
  }
LABEL_38:
  ProcessPeb = PsGetProcessPeb(*CurrentProcessWin32Process);
  v36 = ProcessPeb;
  if ( ProcessPeb )
  {
    v69 = 0;
    if ( !*(_QWORD *)(ProcessPeb + 320) )
    {
      Self = KeGetPcr()->NtTib.Self;
      if ( !_InterlockedCompareExchange64((volatile signed __int64 *)(ProcessPeb + 320), (signed __int64)Self, 0LL) )
      {
        v69 = 1;
        v37 = (unsigned int)gCacheHandleEntries[a1];
        if ( *(_DWORD *)(ProcessPeb + 4LL * a1 + 328) < (unsigned int)v37 )
        {
          v38 = (_QWORD *)(ProcessPeb + 8 * (*((unsigned int *)&gCacheHandleOffsets + a1) + 43LL));
          v72 = v38;
          v39 = &v38[v37];
          while ( v38 != v39 )
          {
            if ( !*v38 )
            {
              v78 = *(_QWORD *)v13;
              *v38 = v78;
              ++*(_DWORD *)(ProcessPeb + 4LL * a1 + 328);
              *a2 &= 0xFFFFFFF5;
              *a2 |= 1u;
              _InterlockedOr(v60, 0);
              v65 = 1;
              v40 = **(_DWORD **)a4 & 0xFFFFFF;
              v66 = v40;
              if ( v40 >= 0x10000 )
              {
                if ( *(_DWORD *)gpHandleManager > 0x10000u )
                {
                  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                              *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                              (unsigned __int16)v40,
                                              1)
                       + 13) == HIWORD(v40) )
                    v40 = (unsigned __int16)v40;
                }
                else
                {
                  v40 = (unsigned __int16)v40;
                }
              }
              v66 = v40;
              v41 = gpHandleManager;
              v42 = *((_QWORD *)gpHandleManager + 2);
              v43 = *(_DWORD *)(v42 + 2056);
              if ( v40 >= v43 + ((*(unsigned __int16 *)(v42 + 2) + 0xFFFF) << 16) )
              {
                v46 = 0LL;
              }
              else
              {
                if ( v40 >= v43 )
                  v44 = ((v40 - v43) >> 16) + 1;
                else
                  v44 = 0LL;
                v45 = *(_QWORD *)(v42 + 8 * v44 + 8);
                v79 = v45;
                if ( (_DWORD)v44 )
                  v40 += ((1 - (_DWORD)v44) << 16) - v43;
                if ( v40 >= *(_DWORD *)(v45 + 20) )
                  v46 = 0LL;
                else
                  v46 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v45 + 24) + 8LL * (v40 >> 8))
                                   + 16LL * (unsigned __int8)v40
                                   + 8);
                v70 = v46;
              }
              v71 = v46;
              v47 = (unsigned __int16)*v46;
              v48 = v47 | (*v46 >> 8) & 0xFF0000u;
              if ( (unsigned int)v48 >= 0x10000 )
              {
                if ( *(_DWORD *)gpHandleManager > 0x10000u )
                {
                  v53 = (unsigned __int16)v47;
                  if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                              *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                              (unsigned __int16)v47,
                                              1)
                       + 13) == WORD1(v48) )
                    v48 = v53;
                }
                else
                {
                  v48 = (unsigned __int16)v47;
                }
              }
              v67 = v48;
              if ( (unsigned int)v48 >= 0x10000 )
              {
                if ( *(_DWORD *)v41 > 0x10000u )
                {
                  v55 = *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                               *((GdiHandleEntryDirectory **)v41 + 2),
                                               (unsigned __int16)v48,
                                               1)
                        + 13);
                  v54 = v48;
                  if ( v55 == WORD1(v48) )
                    v54 = (unsigned __int16)v48;
                }
                else
                {
                  v54 = (unsigned __int16)v48;
                }
                v67 = v54;
              }
              else
              {
                v67 = v48;
              }
              v49 = *((_QWORD *)v41 + 2);
              v50 = *(_DWORD *)(v49 + 2056);
              if ( (unsigned int)v48 < v50 + ((*(unsigned __int16 *)(v49 + 2) + 0xFFFF) << 16) )
              {
                if ( (unsigned int)v48 >= v50 )
                  v51 = (((unsigned int)v48 - v50) >> 16) + 1;
                else
                  v51 = 0;
                v52 = *(_QWORD *)(v49 + 8LL * v51 + 8);
                v80 = v52;
                if ( v51 )
                  v48 = ((1 - v51) << 16) - v50 + (unsigned int)v48;
                *(_DWORD *)(*(_QWORD *)v52 + 24 * v48 + 8) &= ~1u;
                ExReleasePushLockExclusiveEx(
                  *(_QWORD *)(**(_QWORD **)(v52 + 24) + 8LL * ((unsigned int)v48 >> 8)) + 16LL * (unsigned __int8)v48,
                  0LL);
                KeLeaveCriticalRegion();
              }
              *(_DWORD *)(a4 + 8) = 0;
              *(_QWORD *)a4 = 0LL;
              KeLeaveCriticalRegion();
              v13 = v68;
              if ( a5 )
              {
                _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)a5 + 12LL));
                *(_QWORD *)a5 = 0LL;
              }
              break;
            }
            v72 = ++v38;
          }
        }
        *(_QWORD *)(v36 + 320) = 0LL;
      }
    }
  }
  if ( !v65 )
    GdiHandleManager::_IncrementOrDecrementUniqueness(gpHandleManager, v13, 0);
  return v65;
}
