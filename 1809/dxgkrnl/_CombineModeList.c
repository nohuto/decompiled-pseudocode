/*
 * XREFs of _CombineModeList @ 0x1C02058E0
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C012033C (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C0121CCC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     _UpgradeDispModeFlags @ 0x1C00B23E0 (_UpgradeDispModeFlags.c)
 *     _IsDisplayModeMatch @ 0x1C0205CE0 (_IsDisplayModeMatch.c)
 */

__int64 __fastcall CombineModeList(unsigned int *a1, const void **a2, __int64 a3, unsigned int *a4, char a5)
{
  unsigned int v6; // r15d
  __int64 v7; // rcx
  unsigned int *v8; // rax
  unsigned int v9; // r9d
  const void **v10; // r12
  unsigned int v11; // ebx
  unsigned int v12; // r13d
  unsigned int v13; // r12d
  unsigned int *v14; // rdx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ebp
  char *v19; // rsi
  __int64 v20; // rdi
  unsigned int v21; // edx
  __int64 v22; // rcx
  unsigned int v23; // r9d
  __int64 v24; // rax
  char *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  unsigned int *v28; // rdi
  unsigned int v29; // ebp
  unsigned int *v30; // r13
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r9
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rax
  unsigned int v41; // ecx
  SIZE_T v42; // rax
  PVOID v43; // rdi
  __int64 v44; // rax
  unsigned int v46; // r9d
  _DWORD *v47; // r8
  __int64 v48; // r10
  __int64 v49; // rdx
  __int64 v50; // rax
  int v51; // [rsp+20h] [rbp-58h]
  unsigned int v52; // [rsp+24h] [rbp-54h]
  unsigned int v53; // [rsp+28h] [rbp-50h]
  __int64 v54; // [rsp+30h] [rbp-48h]
  unsigned int v56; // [rsp+90h] [rbp+18h]

  v56 = a3;
  v6 = a3;
  v7 = 0xFFFFFFFFLL;
  v8 = a4;
  v9 = -1;
  v52 = -1;
  v51 = -1;
  v10 = a2;
  if ( (_DWORD)a3 )
  {
    v11 = *a1;
    v53 = *a1;
    if ( a5 )
    {
      v12 = 0;
      v13 = 0;
      v14 = v8;
      a3 = (unsigned int)a3;
      do
      {
        v15 = v12;
        v16 = v13;
        v12 = *v14;
        v13 = v14[1];
        v14 += 11;
        if ( v12 <= v15 )
          v12 = v15;
        if ( v13 <= v16 )
          v13 = v16;
        --a3;
      }
      while ( a3 );
      v17 = -1;
      v18 = 0;
      v11 = 0;
      if ( *a1 )
      {
        while ( 1 )
        {
          v19 = (char *)*a2;
          v20 = 44LL * v18;
          if ( v17 == -1 || (v21 = *(_DWORD *)&v19[v20], v21 > v17) )
          {
            v21 = *(_DWORD *)&v19[v20];
            v52 = v21;
          }
          if ( v9 == -1 )
          {
            v23 = *(_DWORD *)&v19[v20 + 4];
          }
          else
          {
            v22 = *(unsigned int *)&v19[v20 + 4];
            if ( (unsigned int)v22 <= v9 )
              goto LABEL_18;
            v23 = *(_DWORD *)&v19[v20 + 4];
          }
          v51 = v23;
          v22 = v23;
LABEL_18:
          if ( (*(_DWORD *)&v19[v20 + 40] & 0x40) != 0 || v21 <= v12 && (unsigned int)v22 <= v13 )
          {
            if ( v18 != v11 )
            {
              if ( v18 <= v11 )
              {
                v24 = WdLogNewEntry5_WdAssertion(v22);
                *(_QWORD *)(v24 + 24) = 2307LL;
                WdLogEvent5_WdAssertion(v24);
              }
              v25 = (char *)*a2;
              v26 = 44LL * v11;
              *(_OWORD *)&v25[v26] = *(_OWORD *)&v19[v20];
              *(_OWORD *)&v25[v26 + 16] = *(_OWORD *)&v19[v20 + 16];
              *(_QWORD *)&v25[v26 + 32] = *(_QWORD *)&v19[v20 + 32];
              *(_DWORD *)&v25[v26 + 40] = *(_DWORD *)&v19[v20 + 40];
            }
            ++v11;
          }
          v9 = v51;
          ++v18;
          v17 = v52;
          if ( v18 >= *a1 )
          {
            v6 = v56;
            break;
          }
        }
      }
      v10 = a2;
      v7 = v52;
      v8 = a4;
      *a1 = v11;
    }
    if ( v6 )
    {
      v27 = v6;
      v28 = v8 + 4;
      v54 = v6;
      do
      {
        LOBYTE(a3) = 0;
        if ( (v28[6] & 0x40) != 0 || *(v28 - 4) <= (unsigned int)v7 && *(v28 - 3) <= v9 )
        {
          v29 = 0;
          if ( *a1 )
          {
            do
            {
              v30 = v28 - 4;
              v31 = (__int64)*v10 + 44 * v29;
              if ( (unsigned __int8)IsDisplayModeMatch(v28 - 4, v31, a3) )
              {
                if ( *v28 != *(_DWORD *)(v31 + 16) || v28[1] != *(_DWORD *)(v31 + 20) )
                {
                  v35 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v33, v32, a3, v34);
                  v35[3] = *v30;
                  v35[4] = v30[1];
                  v35[5] = (int)*(v28 - 2);
                  v35[6] = *(v28 - 1);
                  WdLogEvent5_WdDmmEvent(v35);
                  v40 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v37, v36, v38, v39);
                  v40[3] = *v28;
                  v40[4] = v28[1];
                  v40[5] = *(unsigned int *)(v31 + 16);
                  v40[6] = *(unsigned int *)(v31 + 20);
                  WdLogEvent5_WdDmmEvent(v40);
                }
                UpgradeDispModeFlags(v31, (__int64)(v28 - 4));
                LOBYTE(a3) = 1;
              }
              ++v29;
            }
            while ( v29 < *a1 );
            v27 = v54;
          }
        }
        else
        {
          LOBYTE(a3) = 1;
        }
        v9 = v51;
        v41 = (unsigned __int8)v28[6];
        if ( !(_BYTE)a3 )
        {
          ++v11;
          v41 |= 0x100u;
        }
        v28[6] = v41;
        v28 += 11;
        v7 = v52;
        v54 = --v27;
      }
      while ( v27 );
    }
    if ( v11 > v53 )
    {
      v42 = 44LL * v11;
      if ( !is_mul_ok(v11, 0x2CuLL) )
        v42 = -1LL;
      v43 = operator new(v42, 0x4B677844u, PagedPool);
      if ( !v43 )
      {
        v44 = WdLogNewEntry5_WdLowResource(v7);
        *(_QWORD *)(v44 + 24) = v11;
        WdLogEvent5_WdLowResource(v44);
        return 3221225495LL;
      }
      if ( *v10 )
      {
        memmove(v43, *v10, 44LL * *a1);
        operator delete[]((void *)*v10);
      }
      *v10 = v43;
    }
    v46 = *a1;
    if ( *a1 < v11 )
    {
      if ( v6 )
      {
        v47 = a4 + 10;
        v48 = v6;
        do
        {
          if ( *v47 >= 0x100u )
          {
            *v47 = (unsigned __int8)*v47;
            v7 = (__int64)*v10;
            v49 = 44LL * v46++;
            *(_OWORD *)(v49 + v7) = *(_OWORD *)(v47 - 10);
            *(_OWORD *)(v49 + v7 + 16) = *(_OWORD *)(v47 - 6);
            *(_QWORD *)(v49 + v7 + 32) = *((_QWORD *)v47 - 1);
            *(_DWORD *)(v49 + v7 + 40) = *v47;
          }
          v47 += 11;
          --v48;
        }
        while ( v48 );
      }
      if ( v11 != v46 )
      {
        v50 = WdLogNewEntry5_WdAssertion(v7);
        *(_QWORD *)(v50 + 24) = 2446LL;
        WdLogEvent5_WdAssertion(v50);
      }
    }
    *a1 = v11;
  }
  return 0LL;
}
