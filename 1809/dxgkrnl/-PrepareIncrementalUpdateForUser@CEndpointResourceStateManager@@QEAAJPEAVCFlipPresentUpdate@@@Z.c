/*
 * XREFs of ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C005B97C
 * Callers:
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1C0059A38 (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 * Callees:
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x1C005AB68 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C005B310 (-CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C005B518 (-GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?IncreaseAddedBufferSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C005B5A8 (-IncreaseAddedBufferSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C005B5F0 (-IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?IncreaseUpdatedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C005B638 (-IncreaseUpdatedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z @ 0x1C005D1EC (-Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareIncrementalUpdateForUser(
        CEndpointResourceStateManager **this,
        __int64 a2)
{
  CEndpointResourceStateManager *v2; // rbx
  signed int v3; // esi
  int v4; // r8d
  CEndpointResourceStateManager *v5; // r13
  __int64 v6; // rdi
  __int64 v7; // rax
  int v8; // r8d
  __int64 v9; // rcx
  signed int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // eax
  char **v13; // r14
  char **v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rax
  int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // r8d
  int v22; // eax
  CEndpointResourceStateManager *v23; // rdi
  _DWORD *v24; // r12
  _DWORD *v25; // r15
  char v26; // al
  CEndpointResourceStateManager *v27; // r8
  __int64 v28; // r14
  int v29; // eax
  _DWORD *v30; // rdx
  __int64 v31; // r15
  __int64 v32; // rax
  char *v33; // r13
  unsigned int v34; // r12d
  char *v35; // r15
  __int64 v36; // rbx
  char *v37; // r13
  __int64 v38; // rcx
  _DWORD *v39; // rdx
  __int64 v40; // rax
  char *v41; // rdi
  _DWORD *v42; // r13
  _DWORD *v43; // r12
  _DWORD *v44; // rsi
  bool v45; // zf
  __int64 v46; // r14
  int v47; // eax
  _DWORD *v48; // rdx
  __int64 v49; // r12
  __int64 v50; // rax
  char *v51; // r15
  unsigned int v52; // r13d
  char *v53; // r12
  __int64 v54; // rbx
  char *v55; // r15
  __int64 v56; // rcx
  __int64 v57; // r14
  int v58; // eax
  _DWORD *v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rax
  char *v63; // r15
  unsigned int v64; // r13d
  char *v65; // r12
  __int64 v66; // rbx
  char *v67; // r15
  __int64 v68; // rcx
  CFlipResource *v69; // rcx
  _DWORD *v70; // rdx
  __int64 v71; // rax
  _DWORD *v73; // [rsp+20h] [rbp-69h]
  _DWORD *v74; // [rsp+20h] [rbp-69h]
  _DWORD *v75; // [rsp+28h] [rbp-61h]
  CEndpointResourceStateManager *v76; // [rsp+30h] [rbp-59h]
  PVOID P; // [rsp+40h] [rbp-49h] BYREF
  int v78; // [rsp+48h] [rbp-41h]
  __int128 v79; // [rsp+50h] [rbp-39h]
  __int128 v80; // [rsp+60h] [rbp-29h]
  _DWORD *v81; // [rsp+70h] [rbp-19h]
  int v82; // [rsp+78h] [rbp-11h]
  int v83; // [rsp+7Ch] [rbp-Dh]
  int v84; // [rsp+80h] [rbp-9h]
  unsigned int v85; // [rsp+84h] [rbp-5h]
  int v86; // [rsp+88h] [rbp-1h]
  char *v87; // [rsp+90h] [rbp+7h]
  char *v88; // [rsp+98h] [rbp+Fh]
  struct CFlipPresentUpdate *v90; // [rsp+F8h] [rbp+6Fh]
  int v91; // [rsp+108h] [rbp+7Fh]

  v90 = (struct CFlipPresentUpdate *)a2;
  v2 = *this;
  v3 = 0;
  P = 0LL;
  v4 = 0;
  v78 = 0;
  v81 = 0LL;
  v82 = 0;
  v84 = 0;
  v85 = 0;
  v5 = (CEndpointResourceStateManager *)this;
  v86 = 0;
  v79 = 0LL;
  v80 = 0LL;
  v83 = 0;
  do
  {
    if ( v2 == v5 )
      break;
    v6 = (__int64)v2 + 24;
    if ( !v2 )
      v6 = 32LL;
    if ( (*(_BYTE *)v6 & 1) != 0 )
    {
      v7 = (__int64)v2 + 16;
      if ( !v2 )
        v7 = 24LL;
      v8 = 0;
      v9 = *(_QWORD *)(*(_QWORD *)v7 + 32LL);
      if ( v9 )
        v8 = *(_DWORD *)(v9 + 32);
      v10 = CResourceStateUpdateSerializer::IncreaseAddedBufferSize((CResourceStateUpdateSerializer *)&P, 0x18u, v8);
      v4 = v83;
      v3 = v10;
    }
    if ( v3 >= 0 && (*(_BYTE *)v6 & 2) != 0 )
    {
      v11 = v4;
      v12 = v4 + 16;
      v4 = -1;
      if ( v12 >= v11 )
        v4 = v12;
      v3 = v12 < v11 ? 0xC0000095 : 0;
      v83 = v4;
    }
    v2 = *(CEndpointResourceStateManager **)v2;
  }
  while ( v3 >= 0 );
  v13 = (char **)((char *)v5 + 16);
  v14 = (char **)*((_QWORD *)v5 + 2);
  v88 = (char *)v5 + 16;
  if ( v3 >= 0 )
  {
    do
    {
      if ( v14 == v13 )
        break;
      v15 = (__int64)(v14 + 3);
      if ( !v14 )
        v15 = 32LL;
      if ( (*(_BYTE *)v15 & 1) != 0 )
      {
        v16 = (__int64)(v14 + 2);
        if ( !v14 )
          v16 = 24LL;
        v17 = 0;
        v18 = *(_QWORD *)(*(_QWORD *)v16 + 32LL);
        if ( v18 )
          v17 = *(_DWORD *)(v18 + 32);
        v3 = CResourceStateUpdateSerializer::IncreaseAddedContentSize((CResourceStateUpdateSerializer *)&P, 0x18u, v17);
      }
      if ( v3 >= 0 )
      {
        v19 = (__int64)(v14 + 6);
        if ( !v14 )
          v19 = 56LL;
        if ( (*(_BYTE *)v19 & 1) != 0 )
        {
          v20 = (__int64)(v14 + 4);
          if ( !v14 )
            v20 = 40LL;
          v21 = 0;
          if ( *(_QWORD *)v20 )
            v21 = *(_DWORD *)(*(_QWORD *)v20 + 32LL);
          v3 = CResourceStateUpdateSerializer::IncreaseUpdatedContentSize((CResourceStateUpdateSerializer *)&P, a2, v21);
        }
        if ( v3 >= 0 && (*(_BYTE *)v15 & 2) != 0 )
        {
          a2 = v85;
          v22 = -1;
          if ( v85 + 16 >= v85 )
            v22 = v85 + 16;
          v3 = v85 + 16 < v85 ? 0xC0000095 : 0;
          v85 = v22;
        }
      }
      v14 = (char **)*v14;
    }
    while ( v3 >= 0 );
    if ( v3 >= 0 )
    {
      v91 = CResourceStateUpdateSerializer::Allocate((CResourceStateUpdateSerializer *)&P, 0x75754346u);
      v3 = v91;
      if ( v91 >= 0 )
      {
        v23 = *(CEndpointResourceStateManager **)v5;
        if ( *(CEndpointResourceStateManager **)v5 != v5 )
        {
          v24 = (_DWORD *)*((_QWORD *)&v79 + 1);
          v25 = (_DWORD *)v79;
          do
          {
            v26 = *((_BYTE *)v23 + 24);
            v27 = *(CEndpointResourceStateManager **)v23;
            v76 = *(CEndpointResourceStateManager **)v23;
            if ( (v26 & 1) != 0 )
            {
              v28 = *(_QWORD *)(*((_QWORD *)v23 + 2) + 32LL);
              v29 = 0;
              if ( v28 )
                v29 = *(_DWORD *)(v28 + 32);
              *v25 = 2;
              v30 = v25;
              v31 = (unsigned int)(v29 + 24);
              v32 = *((_QWORD *)v23 + 2);
              v25 = (_DWORD *)((char *)v30 + v31);
              v73 = v25;
              *(_QWORD *)&v79 = v25;
              *((_QWORD *)v30 + 1) = *(_QWORD *)(v32 + 40);
              if ( v28 )
              {
                v33 = (char *)(v30 + 6);
                v30[4] = *(_DWORD *)(v28 + 32);
                if ( *(_DWORD *)(v28 + 12) )
                {
                  v34 = 0;
                  v35 = *(char **)(v28 + 24);
                  do
                  {
                    v36 = 32LL * v34;
                    *(_OWORD *)v33 = *(_OWORD *)(v36 + *(_QWORD *)(v28 + 16));
                    *((_DWORD *)v33 + 4) = *(_DWORD *)(v36 + *(_QWORD *)(v28 + 16) + 16);
                    v37 = v33 + 20;
                    memmove(v37, v35, *(unsigned int *)(v36 + *(_QWORD *)(v28 + 16) + 16));
                    ++v34;
                    v38 = *(unsigned int *)(v36 + *(_QWORD *)(v28 + 16) + 16);
                    v33 = &v37[v38];
                    v35 += v38;
                  }
                  while ( v34 < *(_DWORD *)(v28 + 12) );
                  v25 = v73;
                  v24 = (_DWORD *)*((_QWORD *)&v79 + 1);
                  v27 = v76;
                }
                v5 = (CEndpointResourceStateManager *)this;
              }
              else
              {
                v30[4] = 0;
              }
              *((_BYTE *)v23 + 24) |= 4u;
              v26 = *((_BYTE *)v23 + 24);
            }
            if ( (v26 & 2) != 0 )
            {
              *v24 = 0;
              v39 = v24;
              v40 = *((_QWORD *)v23 + 2);
              v24 += 4;
              *((_QWORD *)&v79 + 1) = v24;
              *((_QWORD *)v39 + 1) = *(_QWORD *)(v40 + 40);
              *((_BYTE *)v23 + 24) |= 8u;
            }
            v23 = v27;
          }
          while ( v27 != v5 );
          v13 = (char **)((char *)v5 + 16);
        }
        v41 = *v13;
        if ( *v13 != (char *)v13 )
        {
          v42 = (_DWORD *)*((_QWORD *)&v80 + 1);
          v43 = (_DWORD *)v80;
          v44 = v81;
          v74 = (_DWORD *)*((_QWORD *)&v80 + 1);
          v75 = (_DWORD *)v80;
          do
          {
            v45 = (v41[24] & 1) == 0;
            v87 = *(char **)v41;
            if ( !v45 )
            {
              v46 = *(_QWORD *)(*((_QWORD *)v41 + 2) + 32LL);
              v47 = 0;
              if ( v46 )
                v47 = *(_DWORD *)(v46 + 32);
              *v43 = 3;
              v48 = v43;
              v49 = (unsigned int)(v47 + 24);
              v50 = *((_QWORD *)v41 + 2);
              v43 = (_DWORD *)((char *)v48 + v49);
              v75 = v43;
              *(_QWORD *)&v80 = v43;
              *((_QWORD *)v48 + 1) = *(_QWORD *)(v50 + 40);
              if ( v46 )
              {
                v51 = (char *)(v48 + 6);
                v48[4] = *(_DWORD *)(v46 + 32);
                v52 = 0;
                if ( *(_DWORD *)(v46 + 12) )
                {
                  v53 = *(char **)(v46 + 24);
                  do
                  {
                    v54 = 32LL * v52;
                    *(_OWORD *)v51 = *(_OWORD *)(v54 + *(_QWORD *)(v46 + 16));
                    *((_DWORD *)v51 + 4) = *(_DWORD *)(*(_QWORD *)(v46 + 16) + v54 + 16);
                    v55 = v51 + 20;
                    memmove(v55, v53, *(unsigned int *)(*(_QWORD *)(v46 + 16) + v54 + 16));
                    ++v52;
                    v56 = *(unsigned int *)(*(_QWORD *)(v46 + 16) + v54 + 16);
                    v51 = &v55[v56];
                    v53 += v56;
                  }
                  while ( v52 < *(_DWORD *)(v46 + 12) );
                  v43 = v75;
                }
                v42 = v74;
              }
              else
              {
                v48[4] = 0;
              }
              v41[24] |= 4u;
            }
            if ( (v41[48] & 1) != 0 )
            {
              v57 = *((_QWORD *)v41 + 4);
              v58 = 0;
              if ( v57 )
                v58 = *(_DWORD *)(v57 + 32);
              *v44 = 4;
              v59 = v44;
              v60 = (unsigned int)(v58 + 32);
              v61 = *((_QWORD *)v41 + 2);
              v44 = (_DWORD *)((char *)v59 + v60);
              v81 = v44;
              *((_QWORD *)v59 + 1) = *(_QWORD *)(v61 + 40);
              v62 = *((_QWORD *)v41 + 5);
              if ( v62 )
                v62 = *(_QWORD *)(v62 + 40);
              *((_QWORD *)v59 + 2) = v62;
              if ( v57 )
              {
                v63 = (char *)(v59 + 8);
                v59[6] = *(_DWORD *)(v57 + 32);
                if ( *(_DWORD *)(v57 + 12) )
                {
                  v64 = 0;
                  v65 = *(char **)(v57 + 24);
                  do
                  {
                    v66 = 32LL * v64;
                    *(_OWORD *)v63 = *(_OWORD *)(v66 + *(_QWORD *)(v57 + 16));
                    *((_DWORD *)v63 + 4) = *(_DWORD *)(*(_QWORD *)(v57 + 16) + v66 + 16);
                    v67 = v63 + 20;
                    memmove(v67, v65, *(unsigned int *)(*(_QWORD *)(v57 + 16) + v66 + 16));
                    ++v64;
                    v68 = *(unsigned int *)(*(_QWORD *)(v57 + 16) + v66 + 16);
                    v63 = &v67[v68];
                    v65 += v68;
                  }
                  while ( v64 < *(_DWORD *)(v57 + 12) );
                  v43 = v75;
                  v42 = v74;
                }
              }
              else
              {
                v59[6] = 0;
              }
              v69 = (CFlipResource *)*((_QWORD *)v41 + 5);
              if ( v69 )
              {
                CFlipResource::Release(v69);
                *((_QWORD *)v41 + 5) = 0LL;
              }
              v41[48] |= 2u;
            }
            if ( (v41[24] & 2) != 0 )
            {
              *v42 = 1;
              v70 = v42;
              v71 = *((_QWORD *)v41 + 2);
              v42 += 4;
              v74 = v42;
              *((_QWORD *)&v80 + 1) = v42;
              *((_QWORD *)v70 + 1) = *(_QWORD *)(v71 + 40);
              v41[24] |= 8u;
            }
            v41 = v87;
          }
          while ( v87 != v88 );
          v3 = v91;
          v5 = (CEndpointResourceStateManager *)this;
        }
        CResourceStateUpdateSerializer::GetSerializedUpdate((CResourceStateUpdateSerializer *)&P, v90);
        CEndpointResourceStateManager::CommitPendingUpdates(v5);
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v3;
}
