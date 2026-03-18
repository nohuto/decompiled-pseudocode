/*
 * XREFs of ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C0062ADC
 * Callers:
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1C0060B04 (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 * Callees:
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ?Release@CFlipResource@@QEAAKXZ @ 0x1C0061BA4 (-Release@CFlipResource@@QEAAKXZ.c)
 *     ?CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C0062400 (-CommitPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0062608 (-GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?IncreaseAddedBufferSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C0062698 (-IncreaseAddedBufferSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C00626C8 (-IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?IncreaseUpdatedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C00626F8 (-IncreaseUpdatedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z.c)
 *     ?Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z @ 0x1C006446C (-Allocate@CResourceStateUpdateSerializer@@QEAAJK@Z.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareIncrementalUpdateForUser(
        CEndpointResourceStateManager **this,
        struct CFlipPresentUpdate *a2)
{
  CEndpointResourceStateManager *v2; // r9
  unsigned int v3; // r11d
  CEndpointResourceStateManager *v4; // r13
  signed int v5; // esi
  unsigned int v6; // r8d
  __int64 v7; // r10
  __int64 v8; // rax
  int v9; // r8d
  __int64 v10; // rcx
  signed int v11; // eax
  unsigned int v12; // eax
  bool v13; // cf
  char **v14; // rbx
  char **v15; // r9
  __int64 v16; // r10
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // r8d
  int v23; // eax
  CEndpointResourceStateManager *v24; // rdi
  _DWORD *v25; // r12
  _DWORD *v26; // r15
  char v27; // al
  CEndpointResourceStateManager *v28; // r8
  __int64 v29; // r14
  int v30; // eax
  _DWORD *v31; // rdx
  __int64 v32; // r15
  __int64 v33; // rax
  char *v34; // r13
  unsigned int v35; // r12d
  char *v36; // r15
  __int64 v37; // rbx
  char *v38; // r13
  __int64 v39; // rcx
  _DWORD *v40; // rdx
  __int64 v41; // rax
  char *v42; // rdi
  _DWORD *v43; // r13
  _DWORD *v44; // r12
  _DWORD *v45; // rsi
  bool v46; // zf
  __int64 v47; // r14
  int v48; // eax
  _DWORD *v49; // rdx
  __int64 v50; // r12
  __int64 v51; // rax
  char *v52; // r15
  unsigned int v53; // r13d
  char *v54; // r12
  __int64 v55; // rbx
  char *v56; // r15
  __int64 v57; // rcx
  __int64 v58; // r14
  int v59; // eax
  _DWORD *v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  char *v65; // r15
  unsigned int v66; // r13d
  char *v67; // r12
  __int64 v68; // rbx
  char *v69; // r15
  __int64 v70; // rcx
  CFlipResource *v71; // rcx
  _DWORD *v72; // rdx
  __int64 v73; // rax
  _DWORD *v75; // [rsp+20h] [rbp-69h]
  _DWORD *v76; // [rsp+20h] [rbp-69h]
  _DWORD *v77; // [rsp+28h] [rbp-61h]
  CEndpointResourceStateManager *v78; // [rsp+30h] [rbp-59h]
  PVOID P; // [rsp+40h] [rbp-49h] BYREF
  int v80; // [rsp+48h] [rbp-41h]
  __int128 v81; // [rsp+50h] [rbp-39h]
  __int128 v82; // [rsp+60h] [rbp-29h]
  _DWORD *v83; // [rsp+70h] [rbp-19h]
  __int64 v84; // [rsp+78h] [rbp-11h]
  __int64 v85; // [rsp+80h] [rbp-9h]
  int v86; // [rsp+88h] [rbp-1h]
  char *v87; // [rsp+90h] [rbp+7h]
  char *v88; // [rsp+98h] [rbp+Fh]
  struct CFlipPresentUpdate *v90; // [rsp+F8h] [rbp+6Fh]
  int v91; // [rsp+108h] [rbp+7Fh]

  v90 = a2;
  v2 = *this;
  v3 = 0;
  P = 0LL;
  v80 = 0;
  v4 = (CEndpointResourceStateManager *)this;
  v81 = 0LL;
  v82 = 0LL;
  v83 = 0LL;
  v5 = 0;
  v84 = 0LL;
  v6 = 0;
  v85 = 0LL;
  v86 = 0;
  do
  {
    if ( v2 == v4 )
      break;
    v7 = (__int64)v2 + 24;
    if ( !v2 )
      v7 = 32LL;
    if ( (*(_BYTE *)v7 & 1) != 0 )
    {
      v8 = (__int64)v2 + 16;
      v9 = v3;
      if ( !v2 )
        v8 = 24LL;
      v10 = *(_QWORD *)(*(_QWORD *)v8 + 32LL);
      if ( v10 )
        v9 = *(_DWORD *)(v10 + 32);
      v11 = CResourceStateUpdateSerializer::IncreaseAddedBufferSize((CResourceStateUpdateSerializer *)&P, 0x18u, v9);
      v6 = HIDWORD(v84);
      v5 = v11;
    }
    if ( v5 >= 0 && (*(_BYTE *)v7 & 2) != 0 )
    {
      v12 = v6 + 16;
      v13 = v6 + 16 < v6;
      v6 = -1;
      if ( !v13 )
        v6 = v12;
      v5 = v13 ? 0xC0000095 : 0;
      HIDWORD(v84) = v6;
    }
    v2 = *(CEndpointResourceStateManager **)v2;
  }
  while ( v5 >= 0 );
  v14 = (char **)((char *)v4 + 16);
  v15 = (char **)*((_QWORD *)v4 + 2);
  v88 = (char *)v4 + 16;
  if ( v5 >= 0 )
  {
    do
    {
      if ( v15 == v14 )
        break;
      v16 = (__int64)(v15 + 3);
      if ( !v15 )
        v16 = 32LL;
      if ( (*(_BYTE *)v16 & 1) != 0 )
      {
        v17 = (__int64)(v15 + 2);
        v18 = v3;
        if ( !v15 )
          v17 = 24LL;
        v19 = *(_QWORD *)(*(_QWORD *)v17 + 32LL);
        if ( v19 )
          v18 = *(_DWORD *)(v19 + 32);
        v5 = CResourceStateUpdateSerializer::IncreaseAddedContentSize((CResourceStateUpdateSerializer *)&P, 0x18u, v18);
      }
      if ( v5 >= 0 )
      {
        v20 = (__int64)(v15 + 6);
        if ( !v15 )
          v20 = 56LL;
        if ( (*(_BYTE *)v20 & 1) != 0 )
        {
          v21 = (__int64)(v15 + 4);
          v22 = v3;
          if ( !v15 )
            v21 = 40LL;
          if ( *(_QWORD *)v21 )
            v22 = *(_DWORD *)(*(_QWORD *)v21 + 32LL);
          v5 = CResourceStateUpdateSerializer::IncreaseUpdatedContentSize(
                 (CResourceStateUpdateSerializer *)&P,
                 (__int64)a2,
                 v22);
        }
        if ( v5 >= 0 && (*(_BYTE *)v16 & 2) != 0 )
        {
          a2 = (struct CFlipPresentUpdate *)HIDWORD(v85);
          v23 = -1;
          if ( (unsigned int)(HIDWORD(v85) + 16) >= HIDWORD(v85) )
            v23 = HIDWORD(v85) + 16;
          v5 = (unsigned int)(HIDWORD(v85) + 16) < HIDWORD(v85) ? 0xC0000095 : 0;
          HIDWORD(v85) = v23;
        }
      }
      v15 = (char **)*v15;
    }
    while ( v5 >= 0 );
    if ( v5 >= 0 )
    {
      v91 = CResourceStateUpdateSerializer::Allocate((CResourceStateUpdateSerializer *)&P, 0x75754346u);
      v5 = v91;
      if ( v91 >= 0 )
      {
        v24 = *(CEndpointResourceStateManager **)v4;
        if ( *(CEndpointResourceStateManager **)v4 != v4 )
        {
          v25 = (_DWORD *)*((_QWORD *)&v81 + 1);
          v26 = (_DWORD *)v81;
          do
          {
            v27 = *((_BYTE *)v24 + 24);
            v28 = *(CEndpointResourceStateManager **)v24;
            v78 = *(CEndpointResourceStateManager **)v24;
            if ( (v27 & 1) != 0 )
            {
              v29 = *(_QWORD *)(*((_QWORD *)v24 + 2) + 32LL);
              v30 = 0;
              if ( v29 )
                v30 = *(_DWORD *)(v29 + 32);
              *v26 = 2;
              v31 = v26;
              v32 = (unsigned int)(v30 + 24);
              v33 = *((_QWORD *)v24 + 2);
              v26 = (_DWORD *)((char *)v31 + v32);
              v75 = v26;
              *(_QWORD *)&v81 = v26;
              *((_QWORD *)v31 + 1) = *(_QWORD *)(v33 + 40);
              if ( v29 )
              {
                v34 = (char *)(v31 + 6);
                v31[4] = *(_DWORD *)(v29 + 32);
                if ( *(_DWORD *)(v29 + 12) )
                {
                  v35 = 0;
                  v36 = *(char **)(v29 + 24);
                  do
                  {
                    v37 = 32LL * v35;
                    *(_OWORD *)v34 = *(_OWORD *)(v37 + *(_QWORD *)(v29 + 16));
                    *((_DWORD *)v34 + 4) = *(_DWORD *)(v37 + *(_QWORD *)(v29 + 16) + 16);
                    v38 = v34 + 20;
                    memmove(v38, v36, *(unsigned int *)(v37 + *(_QWORD *)(v29 + 16) + 16));
                    ++v35;
                    v39 = *(unsigned int *)(v37 + *(_QWORD *)(v29 + 16) + 16);
                    v34 = &v38[v39];
                    v36 += v39;
                  }
                  while ( v35 < *(_DWORD *)(v29 + 12) );
                  v26 = v75;
                  v25 = (_DWORD *)*((_QWORD *)&v81 + 1);
                  v28 = v78;
                }
                v4 = (CEndpointResourceStateManager *)this;
              }
              else
              {
                v31[4] = 0;
              }
              *((_BYTE *)v24 + 24) |= 4u;
              v27 = *((_BYTE *)v24 + 24);
            }
            if ( (v27 & 2) != 0 )
            {
              *v25 = 0;
              v40 = v25;
              v41 = *((_QWORD *)v24 + 2);
              v25 += 4;
              *((_QWORD *)&v81 + 1) = v25;
              *((_QWORD *)v40 + 1) = *(_QWORD *)(v41 + 40);
              *((_BYTE *)v24 + 24) |= 8u;
            }
            v24 = v28;
          }
          while ( v28 != v4 );
          v14 = (char **)((char *)v4 + 16);
        }
        v42 = *v14;
        if ( *v14 != (char *)v14 )
        {
          v43 = (_DWORD *)*((_QWORD *)&v82 + 1);
          v44 = (_DWORD *)v82;
          v45 = v83;
          v76 = (_DWORD *)*((_QWORD *)&v82 + 1);
          v77 = (_DWORD *)v82;
          do
          {
            v46 = (v42[24] & 1) == 0;
            v87 = *(char **)v42;
            if ( !v46 )
            {
              v47 = *(_QWORD *)(*((_QWORD *)v42 + 2) + 32LL);
              v48 = 0;
              if ( v47 )
                v48 = *(_DWORD *)(v47 + 32);
              *v44 = 3;
              v49 = v44;
              v50 = (unsigned int)(v48 + 24);
              v51 = *((_QWORD *)v42 + 2);
              v44 = (_DWORD *)((char *)v49 + v50);
              v77 = v44;
              *(_QWORD *)&v82 = v44;
              *((_QWORD *)v49 + 1) = *(_QWORD *)(v51 + 40);
              if ( v47 )
              {
                v52 = (char *)(v49 + 6);
                v49[4] = *(_DWORD *)(v47 + 32);
                v53 = 0;
                if ( *(_DWORD *)(v47 + 12) )
                {
                  v54 = *(char **)(v47 + 24);
                  do
                  {
                    v55 = 32LL * v53;
                    *(_OWORD *)v52 = *(_OWORD *)(v55 + *(_QWORD *)(v47 + 16));
                    *((_DWORD *)v52 + 4) = *(_DWORD *)(*(_QWORD *)(v47 + 16) + v55 + 16);
                    v56 = v52 + 20;
                    memmove(v56, v54, *(unsigned int *)(*(_QWORD *)(v47 + 16) + v55 + 16));
                    ++v53;
                    v57 = *(unsigned int *)(*(_QWORD *)(v47 + 16) + v55 + 16);
                    v52 = &v56[v57];
                    v54 += v57;
                  }
                  while ( v53 < *(_DWORD *)(v47 + 12) );
                  v44 = v77;
                }
                v43 = v76;
              }
              else
              {
                v49[4] = 0;
              }
              v42[24] |= 4u;
            }
            if ( (v42[48] & 1) != 0 )
            {
              v58 = *((_QWORD *)v42 + 4);
              v59 = 0;
              if ( v58 )
                v59 = *(_DWORD *)(v58 + 32);
              *v45 = 4;
              v60 = v45;
              v61 = (unsigned int)(v59 + 32);
              v62 = *((_QWORD *)v42 + 2);
              v45 = (_DWORD *)((char *)v60 + v61);
              v83 = v45;
              *((_QWORD *)v60 + 1) = *(_QWORD *)(v62 + 40);
              v63 = *((_QWORD *)v42 + 5);
              if ( v63 )
                v64 = *(_QWORD *)(v63 + 40);
              else
                v64 = 0LL;
              *((_QWORD *)v60 + 2) = v64;
              if ( v58 )
              {
                v65 = (char *)(v60 + 8);
                v60[6] = *(_DWORD *)(v58 + 32);
                if ( *(_DWORD *)(v58 + 12) )
                {
                  v66 = 0;
                  v67 = *(char **)(v58 + 24);
                  do
                  {
                    v68 = 32LL * v66;
                    *(_OWORD *)v65 = *(_OWORD *)(v68 + *(_QWORD *)(v58 + 16));
                    *((_DWORD *)v65 + 4) = *(_DWORD *)(*(_QWORD *)(v58 + 16) + v68 + 16);
                    v69 = v65 + 20;
                    memmove(v69, v67, *(unsigned int *)(*(_QWORD *)(v58 + 16) + v68 + 16));
                    ++v66;
                    v70 = *(unsigned int *)(*(_QWORD *)(v58 + 16) + v68 + 16);
                    v65 = &v69[v70];
                    v67 += v70;
                  }
                  while ( v66 < *(_DWORD *)(v58 + 12) );
                  v44 = v77;
                  v43 = v76;
                }
              }
              else
              {
                v60[6] = 0;
              }
              v71 = (CFlipResource *)*((_QWORD *)v42 + 5);
              if ( v71 )
              {
                CFlipResource::Release(v71);
                *((_QWORD *)v42 + 5) = 0LL;
              }
              v42[48] |= 2u;
            }
            if ( (v42[24] & 2) != 0 )
            {
              *v43 = 1;
              v72 = v43;
              v73 = *((_QWORD *)v42 + 2);
              v43 += 4;
              v76 = v43;
              *((_QWORD *)&v82 + 1) = v43;
              *((_QWORD *)v72 + 1) = *(_QWORD *)(v73 + 40);
              v42[24] |= 8u;
            }
            v42 = v87;
          }
          while ( v87 != v88 );
          v5 = v91;
          v4 = (CEndpointResourceStateManager *)this;
        }
        CResourceStateUpdateSerializer::GetSerializedUpdate((CResourceStateUpdateSerializer *)&P, v90);
        CEndpointResourceStateManager::CommitPendingUpdates(v4);
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v5;
}
