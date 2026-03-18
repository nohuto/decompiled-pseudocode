/*
 * XREFs of _CombineModeList @ 0x1C02378D8
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00C7B08 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C0170DE0 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     _UpgradeDispModeFlags @ 0x1C0172014 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall CombineModeList(unsigned int *a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  unsigned int v5; // r13d
  __int64 v7; // rcx
  __int64 v8; // rax
  void **v9; // r15
  unsigned int v10; // r8d
  unsigned int v11; // ebx
  unsigned int v12; // r12d
  unsigned int v13; // r15d
  __int64 v14; // r8
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  unsigned int v19; // ebp
  char *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rcx
  unsigned int v23; // r8d
  __int64 v24; // rax
  char *v25; // rcx
  __int64 v26; // r9
  _DWORD *v27; // rdi
  unsigned int v28; // ebp
  unsigned int *v29; // r12
  _DWORD *v30; // rsi
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rax
  int v35; // ecx
  SIZE_T v36; // rax
  __int64 v37; // rdx
  PVOID v38; // rdi
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  unsigned int v43; // r9d
  _DWORD *v44; // r8
  __int64 v45; // r10
  __int64 v46; // rax
  int v47; // [rsp+20h] [rbp-58h]
  unsigned int v48; // [rsp+24h] [rbp-54h]
  unsigned int v49; // [rsp+28h] [rbp-50h]
  __int64 v50; // [rsp+30h] [rbp-48h]
  void **v51; // [rsp+88h] [rbp+10h]

  v51 = (void **)a2;
  v5 = a3;
  v47 = -1;
  v7 = 0xFFFFFFFFLL;
  v8 = a4;
  v48 = -1;
  v9 = (void **)a2;
  v10 = -1;
  if ( v5 )
  {
    v11 = *a1;
    v49 = *a1;
    if ( a5 )
    {
      v12 = 0;
      v13 = 0;
      a2 = a4;
      v14 = v5;
      do
      {
        v15 = v12;
        v16 = v13;
        v12 = *(_DWORD *)a2;
        v13 = *(_DWORD *)(a2 + 4);
        if ( *(_DWORD *)a2 <= v15 )
          v12 = v15;
        if ( v13 <= v16 )
          v13 = v16;
        a2 += 44LL;
        --v14;
      }
      while ( v14 );
      v17 = -1;
      v18 = -1;
      v19 = 0;
      v11 = 0;
      if ( *a1 )
      {
        while ( 1 )
        {
          v20 = (char *)*v51;
          v21 = 44LL * v19;
          if ( v18 == -1 || (a2 = *(unsigned int *)&v20[v21], (unsigned int)a2 > v18) )
          {
            a2 = *(unsigned int *)&v20[v21];
            v48 = *(_DWORD *)&v20[v21];
          }
          if ( v17 == -1 )
          {
            v23 = *(_DWORD *)&v20[v21 + 4];
          }
          else
          {
            v22 = *(unsigned int *)&v20[v21 + 4];
            if ( (unsigned int)v22 <= v17 )
              goto LABEL_18;
            v23 = *(_DWORD *)&v20[v21 + 4];
          }
          v47 = v23;
          v22 = v23;
LABEL_18:
          if ( (*(_DWORD *)&v20[v21 + 40] & 0x40) != 0 || (unsigned int)a2 <= v12 && (unsigned int)v22 <= v13 )
          {
            if ( v19 != v11 )
            {
              if ( v19 <= v11 )
              {
                v24 = WdLogNewEntry5_WdAssertion(v22, a2);
                *(_QWORD *)(v24 + 24) = 2684LL;
                WdLogEvent5_WdAssertion(v24);
              }
              v25 = (char *)*v51;
              a2 = 44LL * v11;
              *(_OWORD *)&v25[a2] = *(_OWORD *)&v20[v21];
              *(_OWORD *)&v25[a2 + 16] = *(_OWORD *)&v20[v21 + 16];
              *(_QWORD *)&v25[a2 + 32] = *(_QWORD *)&v20[v21 + 32];
              *(_DWORD *)&v25[a2 + 40] = *(_DWORD *)&v20[v21 + 40];
            }
            ++v11;
          }
          v17 = v47;
          ++v19;
          v18 = v48;
          if ( v19 >= *a1 )
          {
            v5 = a3;
            break;
          }
        }
      }
      v9 = v51;
      v10 = v47;
      v7 = v48;
      v8 = a4;
      *a1 = v11;
    }
    if ( v5 )
    {
      v26 = v5;
      v27 = (_DWORD *)(v8 + 32);
      v50 = v5;
      do
      {
        LOBYTE(a2) = 0;
        if ( (v27[2] & 0x40) != 0 || *(v27 - 8) <= (unsigned int)v7 && *(v27 - 7) <= v10 )
        {
          v28 = 0;
          if ( *a1 )
          {
            do
            {
              v29 = v27 - 8;
              v30 = (char *)*v9 + 44 * v28;
              if ( *(v27 - 8) == *v30
                && v29[1] == v30[1]
                && *(v27 - 6) == v30[2]
                && *(v27 - 5) == v30[3]
                && *(v27 - 1) == v30[7]
                && *v27 == v30[8]
                && *(v27 - 2) == v30[6]
                && ((*((_BYTE *)v27 + 8) ^ *((_BYTE *)v30 + 40)) & 0x10) == 0 )
              {
                if ( *(v27 - 4) != v30[4] || *(v27 - 3) != v30[5] )
                {
                  v31 = (_QWORD *)WdLogNewEntry5_WdDmmEvent((unsigned int)(v27[2] ^ v30[10]), a2);
                  v31[3] = *v29;
                  v31[4] = v29[1];
                  v31[5] = (int)*(v27 - 6);
                  v31[6] = (unsigned int)*(v27 - 5);
                  WdLogEvent5_WdDmmEvent(v31);
                  v34 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v33, v32);
                  v34[3] = (unsigned int)*(v27 - 4);
                  v34[4] = (unsigned int)*(v27 - 3);
                  v34[5] = (unsigned int)v30[4];
                  v34[6] = (unsigned int)v30[5];
                  WdLogEvent5_WdDmmEvent(v34);
                }
                UpgradeDispModeFlags((__int64)v30, (__int64)(v27 - 8));
                LOBYTE(a2) = 1;
              }
              ++v28;
            }
            while ( v28 < *a1 );
            v26 = v50;
          }
        }
        else
        {
          LOBYTE(a2) = 1;
        }
        v10 = v47;
        v35 = (unsigned __int8)v27[2];
        if ( !(_BYTE)a2 )
        {
          ++v11;
          v35 |= 0x100u;
        }
        v27[2] = v35;
        v27 += 11;
        v7 = v48;
        v50 = --v26;
      }
      while ( v26 );
    }
    if ( v11 > v49 )
    {
      v36 = 44LL * v11;
      if ( !is_mul_ok(v11, 0x2CuLL) )
        v36 = -1LL;
      v38 = operator new[](v36, 0x4B677844u, PagedPool);
      if ( !v38 )
      {
        v41 = WdLogNewEntry5_WdLowResource(v7, v37, v39, v40);
        *(_QWORD *)(v41 + 24) = v11;
        WdLogEvent5_WdLowResource(v41);
        return 3221225495LL;
      }
      a2 = (__int64)*v9;
      if ( *v9 )
      {
        memmove(v38, (const void *)a2, 44LL * *a1);
        operator delete[](*v9);
      }
      *v9 = v38;
    }
    v43 = *a1;
    if ( *a1 < v11 )
    {
      if ( v5 )
      {
        v44 = (_DWORD *)(a4 + 40);
        v45 = v5;
        do
        {
          if ( *v44 >= 0x100u )
          {
            *v44 = (unsigned __int8)*v44;
            v7 = (__int64)*v9;
            a2 = 44LL * v43++;
            *(_OWORD *)(a2 + v7) = *(_OWORD *)(v44 - 10);
            *(_OWORD *)(a2 + v7 + 16) = *(_OWORD *)(v44 - 6);
            *(_QWORD *)(a2 + v7 + 32) = *((_QWORD *)v44 - 1);
            *(_DWORD *)(a2 + v7 + 40) = *v44;
          }
          v44 += 11;
          --v45;
        }
        while ( v45 );
      }
      if ( v11 != v43 )
      {
        v46 = WdLogNewEntry5_WdAssertion(v7, a2);
        *(_QWORD *)(v46 + 24) = 2823LL;
        WdLogEvent5_WdAssertion(v46);
      }
    }
    *a1 = v11;
  }
  return 0LL;
}
