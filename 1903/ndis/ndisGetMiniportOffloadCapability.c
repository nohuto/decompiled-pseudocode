/*
 * XREFs of ndisGetMiniportOffloadCapability @ 0x1C00AAF48
 * Callers:
 *     ?ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@PEAJPEAE2@Z @ 0x1C00962E8 (-ndisGetMiniportInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     ?ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0031710 (-ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

void __fastcall ndisGetMiniportOffloadCapability(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v2; // r14
  char v3; // r15
  char v4; // r12
  char v5; // r13
  char v6; // si
  char v7; // bl
  __int64 p_MiniportInitialConfig; // rcx
  unsigned int v9; // r10d
  char *i; // rdx
  int v11; // r9d
  int v12; // r8d
  int v13; // r8d
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  char v21[256]; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD v22[36]; // [rsp+138h] [rbp+30h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  memset(v22, 0, sizeof(v22));
  if ( !(unsigned int)ndisMAllocateMiniportOffload(a1) )
  {
    v22[3] = 0;
    v22[5] |= 1u;
    v22[0] = 1;
    v22[1] = 28;
    v22[4] = 2;
    v22[6] = 14;
    memset(v21, 0, 0xF8uLL);
    *(_DWORD *)&v21[88] |= 0x80u;
    *(_QWORD *)&v21[40] = v22;
    *(_DWORD *)v21 = 15466902;
    *(_QWORD *)&v21[104] = &ndisIntReqGeneric;
    *(_DWORD *)&v21[32] = -67042815;
    *(_DWORD *)&v21[48] = 144;
    if ( !(unsigned int)ndisQuerySetMiniportEx((__int64)a1, 0LL, (__int64)v21, 0, 0LL, 0LL) && v22[3] )
    {
      p_MiniportInitialConfig = (__int64)&a1->Offload->MiniportInitialConfig;
      *(_QWORD *)p_MiniportInitialConfig = 7340455LL;
      *(_DWORD *)(p_MiniportInitialConfig + 8) &= 0xFFFFFC00;
      *(_DWORD *)(p_MiniportInitialConfig + 16) &= 0xFFFFFC00;
      *(_DWORD *)(p_MiniportInitialConfig + 32) &= 0xFFFFFF00;
      *(_DWORD *)(p_MiniportInitialConfig + 24) &= 0xFFFFFF00;
      *(_DWORD *)(p_MiniportInitialConfig + 12) = 0;
      *(_DWORD *)(p_MiniportInitialConfig + 28) = 0;
      *(_DWORD *)(p_MiniportInitialConfig + 20) = 0;
      *(_DWORD *)(p_MiniportInitialConfig + 48) &= 0xFFFFFFF0;
      *(_QWORD *)(p_MiniportInitialConfig + 36) = 0LL;
      *(_DWORD *)(p_MiniportInitialConfig + 44) = 0;
      *(_DWORD *)(p_MiniportInitialConfig + 104) &= 0xFFFFFFF0;
      *(_DWORD *)(p_MiniportInitialConfig + 80) = 0;
      *(_QWORD *)(p_MiniportInitialConfig + 88) = 0LL;
      *(_QWORD *)(p_MiniportInitialConfig + 96) = 0LL;
      v9 = v22[1];
      for ( i = (char *)v22 + v22[1]; *(_DWORD *)i == 1; i += v20 )
      {
        if ( *((_DWORD *)i + 1) != 24 )
          break;
        v11 = *((_DWORD *)i + 4);
        if ( v11 + v9 + 20 > 0x90 )
          break;
        v12 = *((_DWORD *)i + 2);
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 == 1 )
            {
              a1->Offload->Ndis5LSO = 1;
              if ( *((_DWORD *)i + 5) > 1u )
                break;
              if ( i[33] == 1 )
              {
                v6 = 1;
                *(_DWORD *)(p_MiniportInitialConfig + 48) = *(_DWORD *)(p_MiniportInitialConfig + 48) & 0xFFFFFFF3 | 4;
              }
              if ( i[32] == 1 )
              {
                v6 = 1;
                *(_DWORD *)(p_MiniportInitialConfig + 48) = *(_DWORD *)(p_MiniportInitialConfig + 48) & 0xFFFFFFFC | 1;
              }
              *(_DWORD *)(p_MiniportInitialConfig + 44) = *((_DWORD *)i + 7);
              *(_DWORD *)(p_MiniportInitialConfig + 40) = *((_DWORD *)i + 6);
              if ( *((_DWORD *)i + 7) && *((_DWORD *)i + 6) )
                v6 = 1;
              if ( v6 == 1 )
                *(_DWORD *)(p_MiniportInitialConfig + 36) = 2;
            }
          }
          else
          {
            if ( v11 != 24 )
              break;
            a1->Offload->Ndis5IPsec = 1;
            *(_DWORD *)(p_MiniportInitialConfig + 60) = 0;
            *(_DWORD *)(p_MiniportInitialConfig + 68) = *((_DWORD *)i + 8);
            if ( *((_DWORD *)i + 5) )
            {
              *(_DWORD *)(p_MiniportInitialConfig + 56) = 1;
              v7 = 1;
            }
            if ( *((_DWORD *)i + 7) )
            {
              *(_DWORD *)(p_MiniportInitialConfig + 64) = 1;
              v7 = 1;
            }
            v14 = *((_DWORD *)i + 9);
            if ( (v14 & 1) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(p_MiniportInitialConfig + 72) = *(_DWORD *)(p_MiniportInitialConfig + 72) & 0xFFFFFFFC | 1;
              v14 = *((_DWORD *)i + 9);
            }
            if ( (v14 & 2) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(p_MiniportInitialConfig + 72) = *(_DWORD *)(p_MiniportInitialConfig + 72) & 0xFFFFFFF3 | 4;
              v14 = *((_DWORD *)i + 9);
            }
            if ( (v14 & 4) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(p_MiniportInitialConfig + 72) = *(_DWORD *)(p_MiniportInitialConfig + 72) & 0xFFFFFFCF | 0x10;
              v14 = *((_DWORD *)i + 9);
            }
            if ( (v14 & 0x10) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(p_MiniportInitialConfig + 72) = *(_DWORD *)(p_MiniportInitialConfig + 72) & 0xFFFFFCFF | 0x100;
              v14 = *((_DWORD *)i + 9);
            }
            if ( (v14 & 0x20) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(p_MiniportInitialConfig + 72) = *(_DWORD *)(p_MiniportInitialConfig + 72) & 0xFFFFF3FF | 0x400;
            }
            v15 = *((_DWORD *)i + 10);
            if ( (v15 & 0x40) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(p_MiniportInitialConfig + 76) = *(_DWORD *)(p_MiniportInitialConfig + 76) & 0xFFFFCFFF | 0x1000;
              v15 = *((_DWORD *)i + 10);
            }
            if ( (v15 & 0x80u) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(p_MiniportInitialConfig + 76) = *(_DWORD *)(p_MiniportInitialConfig + 76) & 0xFFFF3FFF | 0x4000;
              v15 = *((_DWORD *)i + 10);
            }
            if ( (v15 & 1) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(p_MiniportInitialConfig + 76) = *(_DWORD *)(p_MiniportInitialConfig + 76) & 0xFFFFFFFC | 1;
              v15 = *((_DWORD *)i + 10);
            }
            if ( (v15 & 4) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(p_MiniportInitialConfig + 76) = *(_DWORD *)(p_MiniportInitialConfig + 76) & 0xFFFFFFCF | 0x10;
              v15 = *((_DWORD *)i + 10);
            }
            if ( (v15 & 8) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(p_MiniportInitialConfig + 76) = *(_DWORD *)(p_MiniportInitialConfig + 76) & 0xFFFFFF3F | 0x40;
              v15 = *((_DWORD *)i + 10);
            }
            if ( (v15 & 0x10) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(p_MiniportInitialConfig + 76) = *(_DWORD *)(p_MiniportInitialConfig + 76) & 0xFFFFFCFF | 0x100;
              v15 = *((_DWORD *)i + 10);
            }
            if ( (v15 & 2) != 0 )
            {
              v7 = 1;
              *(_DWORD *)(p_MiniportInitialConfig + 76) = *(_DWORD *)(p_MiniportInitialConfig + 76) & 0xFFFFFFF3 | 4;
            }
            if ( v7 == 1 )
              *(_DWORD *)(p_MiniportInitialConfig + 52) = 2;
            *((_DWORD *)i + 10) &= ~0x20u;
          }
        }
        else
        {
          if ( v11 != 16 )
            break;
          a1->Offload->Ndis5Xsum = 1;
          v16 = *((_DWORD *)i + 5);
          if ( (v16 & 1) != 0 )
          {
            v3 = 1;
            *(_DWORD *)(p_MiniportInitialConfig + 8) = *(_DWORD *)(p_MiniportInitialConfig + 8) & 0xFFFFFFFC | 1;
            v16 = *((_DWORD *)i + 5);
          }
          if ( (v16 & 2) != 0 )
          {
            v3 = 1;
            *(_DWORD *)(p_MiniportInitialConfig + 8) = *(_DWORD *)(p_MiniportInitialConfig + 8) & 0xFFFFFFF3 | 4;
            v16 = *((_DWORD *)i + 5);
          }
          if ( (v16 & 4) != 0 )
          {
            v3 = 1;
            *(_DWORD *)(p_MiniportInitialConfig + 8) = *(_DWORD *)(p_MiniportInitialConfig + 8) & 0xFFFFFFCF | 0x10;
            v16 = *((_DWORD *)i + 5);
          }
          if ( (v16 & 8) != 0 )
          {
            v3 = 1;
            *(_DWORD *)(p_MiniportInitialConfig + 8) = *(_DWORD *)(p_MiniportInitialConfig + 8) & 0xFFFFFF3F | 0x40;
            v16 = *((_DWORD *)i + 5);
          }
          if ( (v16 & 0x10) != 0 )
          {
            v3 = 1;
            *(_DWORD *)(p_MiniportInitialConfig + 8) = *(_DWORD *)(p_MiniportInitialConfig + 8) & 0xFFFFFCFF | 0x100;
          }
          if ( v3 == 1 )
            *(_DWORD *)(p_MiniportInitialConfig + 4) = 2;
          v17 = *((_DWORD *)i + 6);
          if ( (v17 & 1) != 0 )
          {
            v2 = 1;
            *(_DWORD *)(p_MiniportInitialConfig + 16) = *(_DWORD *)(p_MiniportInitialConfig + 16) & 0xFFFFFFFC | 1;
            v17 = *((_DWORD *)i + 6);
          }
          if ( (v17 & 2) != 0 )
          {
            v2 = 1;
            *(_DWORD *)(p_MiniportInitialConfig + 16) = *(_DWORD *)(p_MiniportInitialConfig + 16) & 0xFFFFFFF3 | 4;
            v17 = *((_DWORD *)i + 6);
          }
          if ( (v17 & 4) != 0 )
          {
            v2 = 1;
            *(_DWORD *)(p_MiniportInitialConfig + 16) = *(_DWORD *)(p_MiniportInitialConfig + 16) & 0xFFFFFFCF | 0x10;
            v17 = *((_DWORD *)i + 6);
          }
          if ( (v17 & 8) != 0 )
          {
            v2 = 1;
            *(_DWORD *)(p_MiniportInitialConfig + 16) = *(_DWORD *)(p_MiniportInitialConfig + 16) & 0xFFFFFF3F | 0x40;
            v17 = *((_DWORD *)i + 6);
          }
          if ( (v17 & 0x10) != 0 )
          {
            v2 = 1;
            *(_DWORD *)(p_MiniportInitialConfig + 16) = *(_DWORD *)(p_MiniportInitialConfig + 16) & 0xFFFFFCFF | 0x100;
          }
          if ( v2 == 1 )
            *(_DWORD *)(p_MiniportInitialConfig + 12) = 2;
          v18 = *((_DWORD *)i + 8);
          if ( (v18 & 1) != 0 )
          {
            *(_DWORD *)(p_MiniportInitialConfig + 28) = 0;
            *(_DWORD *)(p_MiniportInitialConfig + 32) &= 0xFFFFFF00;
          }
          else
          {
            if ( (v18 & 2) != 0 )
            {
              v5 = 1;
              *(_DWORD *)(p_MiniportInitialConfig + 32) = *(_DWORD *)(p_MiniportInitialConfig + 32) & 0xFFFFFFF3 | 4;
              v18 = *((_DWORD *)i + 8);
            }
            if ( (v18 & 4) != 0 )
            {
              v5 = 1;
              *(_DWORD *)(p_MiniportInitialConfig + 32) = *(_DWORD *)(p_MiniportInitialConfig + 32) & 0xFFFFFFCF | 0x10;
              v18 = *((_DWORD *)i + 8);
            }
            if ( (v18 & 8) != 0 )
            {
              v5 = 1;
              *(_DWORD *)(p_MiniportInitialConfig + 32) = *(_DWORD *)(p_MiniportInitialConfig + 32) & 0xFFFFFF3F | 0x40;
            }
            if ( v5 == 1 )
              *(_DWORD *)(p_MiniportInitialConfig + 28) = 2;
          }
          v19 = *((_DWORD *)i + 7);
          if ( (v19 & 1) != 0 )
          {
            *(_DWORD *)(p_MiniportInitialConfig + 20) = 0;
            *(_DWORD *)(p_MiniportInitialConfig + 24) &= 0xFFFFFF00;
          }
          else
          {
            if ( (v19 & 2) != 0 )
            {
              v4 = 1;
              *(_DWORD *)(p_MiniportInitialConfig + 24) = *(_DWORD *)(p_MiniportInitialConfig + 24) & 0xFFFFFFF3 | 4;
              v19 = *((_DWORD *)i + 7);
            }
            if ( (v19 & 4) != 0 )
            {
              v4 = 1;
              *(_DWORD *)(p_MiniportInitialConfig + 24) = *(_DWORD *)(p_MiniportInitialConfig + 24) & 0xFFFFFFCF | 0x10;
              v19 = *((_DWORD *)i + 7);
            }
            if ( (v19 & 8) != 0 )
            {
              v4 = 1;
              *(_DWORD *)(p_MiniportInitialConfig + 24) = *(_DWORD *)(p_MiniportInitialConfig + 24) & 0xFFFFFF3F | 0x40;
            }
            if ( v4 == 1 )
              *(_DWORD *)(p_MiniportInitialConfig + 20) = 2;
          }
        }
        v20 = *((unsigned int *)i + 3);
        if ( !(_DWORD)v20 )
          return;
        v9 += v20;
        if ( v9 > 0x90 )
          return;
      }
    }
    ExFreePoolWithTag(a1->Offload, 0);
    a1->Offload = 0LL;
  }
}
