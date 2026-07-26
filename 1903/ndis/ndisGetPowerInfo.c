/*
 * XREFs of ndisGetPowerInfo @ 0x1C0095754
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 * Callees:
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisGetListEntriesCount @ 0x1C0073004 (ndisGetListEntriesCount.c)
 *     ?ndisXlateSSResume@@YA?AW4_NDIS_USER_RESUME_REASON@@T_NDIS_SS_RESUME_REASON@@@Z @ 0x1C00946C4 (-ndisXlateSSResume@@YA-AW4_NDIS_USER_RESUME_REASON@@T_NDIS_SS_RESUME_REASON@@@Z.c)
 */

__int64 __fastcall ndisGetPowerInfo(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  unsigned int v8; // eax
  __int64 v9; // rbx
  const void **v10; // rdx
  size_t v11; // r8
  unsigned int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // r9d
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // edx
  int v26; // edx
  __int64 v27; // rcx
  int v28; // eax
  int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rbp
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // r8
  unsigned int v36; // eax
  KIRQL v37; // r9
  __int64 v38; // rdi
  KIRQL v39; // al
  __int64 result; // rax

  v4 = 0;
  v5 = a2[23];
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 48) + 24LL) + 24LL) )
  {
    v8 = *(_DWORD *)(v5 + 8);
    v9 = a2[3];
    if ( v8 >= 0x35C )
    {
      memset((void *)(v9 + 4), 0, 0x358uLL);
      *(_DWORD *)v9 = 47186560;
      v10 = *(const void ***)(a1 + 3856);
      v11 = *(unsigned __int16 *)v10;
      if ( *(_WORD *)v10 >= 0x200u )
        v11 = 512LL;
      memmove((void *)(v9 + 6), v10[1], v11);
      *(_BYTE *)(v9 + 520) = *(_BYTE *)(a1 + 32);
      *(_BYTE *)(v9 + 521) = *(_BYTE *)(a1 + 33);
      *(_BYTE *)(v9 + 522) = *(_BYTE *)(a1 + 3148);
      *(_BYTE *)(v9 + 523) = *(_BYTE *)(a1 + 3149);
      v12 = *(_DWORD *)(a1 + 120);
      v13 = (v12 >> 15) & 1 | 2;
      if ( (v12 & 0x20000) == 0 )
        v13 = (*(_DWORD *)(a1 + 120) >> 15) & 1;
      v14 = v13 | 4;
      if ( (v12 & 0x40000) == 0 )
        v14 = v13;
      v15 = v14 | 8;
      if ( (*(_DWORD *)(a1 + 120) & 0x200000) == 0 )
        v15 = v14;
      v16 = v15 | 0x10;
      if ( (v12 & 0x4000000) == 0 )
        v16 = v15;
      v17 = v16 | 0x20;
      if ( (v12 & 0x20000000) == 0 )
        v17 = v16;
      *(_DWORD *)(v9 + 524) = v17;
      v18 = *(_DWORD *)(a1 + 124);
      v19 = ((v18 & 1) << 8) | 0x200;
      if ( (v18 & 8) == 0 )
        v19 = (*(_DWORD *)(a1 + 124) & 1) << 8;
      v20 = v19 | 0x400;
      if ( (v18 & 0x10) == 0 )
        v20 = v19;
      v21 = v20 | 0x800;
      if ( (v18 & 0x20) == 0 )
        v21 = v20;
      v22 = v21 | 0x1000;
      if ( (v18 & 0x40) == 0 )
        v22 = v21;
      v23 = v22 | 0x2000;
      if ( (v18 & 0x100) == 0 )
        v23 = v22;
      v24 = v23 | 0x4000;
      if ( (v18 & 0x4000) == 0 )
        v24 = v23;
      v25 = v24 | 0x400000;
      if ( (v18 & 0x4000000) == 0 )
        v25 = v24;
      v26 = v17 | v25;
      *(_DWORD *)(v9 + 524) = v26;
      if ( *(int *)(a1 + 1872) < 0 )
      {
        v26 |= 0x8000u;
        *(_DWORD *)(v9 + 524) = v26;
      }
      if ( (*(_DWORD *)(a1 + 2684) & 0x80u) != 0 )
      {
        v26 |= 0x10000u;
        *(_DWORD *)(v9 + 524) = v26;
      }
      v27 = *(_QWORD *)(a1 + 3760);
      v28 = v26;
      if ( *(_QWORD *)(v27 + 840) && *(_QWORD *)(v27 + 848) )
      {
        v28 = v26 | 0x20000;
        *(_DWORD *)(v9 + 524) = v26 | 0x20000;
      }
      if ( *(_QWORD *)(a1 + 4448) )
      {
        v28 |= 0x40000u;
        *(_DWORD *)(v9 + 524) = v28;
      }
      v29 = *(_DWORD *)(a1 + 4420);
      if ( (v29 & 0x10) != 0 )
      {
        v28 |= 0x100000u;
        *(_DWORD *)(v9 + 524) = v28;
        v29 = *(_DWORD *)(a1 + 4420);
      }
      if ( (v29 & 8) != 0 )
        *(_DWORD *)(v9 + 524) = v28 | 0x200000;
      *(_DWORD *)(v9 + 528) = *(_DWORD *)(a1 + 2248);
      *(_DWORD *)(v9 + 532) = *(_DWORD *)(a1 + 1520);
      *(_DWORD *)(v9 + 536) = *(_DWORD *)(a1 + 3868);
      *(_DWORD *)(v9 + 540) = *(_DWORD *)(a1 + 480);
      *(_DWORD *)(v9 + 544) = *(_DWORD *)(a1 + 344);
      *(_DWORD *)(v9 + 548) = *(_DWORD *)(a1 + 1832);
      *(_DWORD *)(v9 + 552) = *(_DWORD *)(a1 + 1836);
      *(_DWORD *)(v9 + 556) = *(_DWORD *)(a1 + 464);
      *(_DWORD *)(v9 + 560) = *(_DWORD *)(a1 + 1268);
      *(_DWORD *)(v9 + 564) = *(_DWORD *)(a1 + 1272);
      *(_BYTE *)(v9 + 624) = *(_BYTE *)(a1 + 1288);
      *(_DWORD *)(v9 + 592) = *(_DWORD *)(a1 + 3864);
      *(_WORD *)(v9 + 596) = *(_WORD *)(a1 + 3684);
      *(_DWORD *)(v9 + 580) = ndisGetListEntriesCount((_QWORD **)(a1 + 960));
      *(_DWORD *)(v9 + 584) = ndisGetListEntriesCount((_QWORD **)(a1 + 968));
      *(_DWORD *)(v9 + 588) = ndisGetListEntriesCount((_QWORD **)(a1 + 976));
      *(_DWORD *)(v9 + 600) = *(_DWORD *)(a1 + 3912) & 3;
      *(_DWORD *)(v9 + 604) = (*(_DWORD *)(a1 + 3912) >> 2) & 3;
      *(_DWORD *)(v9 + 608) = (*(_DWORD *)(a1 + 3912) >> 4) & 3;
      *(_DWORD *)(v9 + 612) = (*(_DWORD *)(a1 + 3912) >> 6) & 3;
      *(_DWORD *)(v9 + 616) = (*(_DWORD *)(a1 + 3912) >> 8) & 3;
      *(_DWORD *)(v9 + 620) = (*(_DWORD *)(a1 + 3912) >> 10) & 3;
      v30 = *(_DWORD *)(a1 + 3912);
      *(_DWORD *)(v9 + 568) = 720;
      *(_DWORD *)(v9 + 676) = (v30 >> 12) & 3;
      *(_OWORD *)(v9 + 720) = *(_OWORD *)(a1 + 1000);
      *(_OWORD *)(v9 + 736) = *(_OWORD *)(a1 + 1016);
      *(_OWORD *)(v9 + 752) = *(_OWORD *)(a1 + 1032);
      *(_QWORD *)(v9 + 768) = *(_QWORD *)(a1 + 1048);
      *(_DWORD *)(v9 + 776) = *(_DWORD *)(a1 + 1056);
      v31 = (unsigned int)(*(_DWORD *)(v9 + 568) + 60);
      *(_DWORD *)(v9 + 572) = v31;
      *(_OWORD *)(v31 + v9) = *(_OWORD *)(a1 + 1060);
      *(_OWORD *)(v31 + v9 + 16) = *(_OWORD *)(a1 + 1076);
      *(_OWORD *)(v31 + v9 + 32) = *(_OWORD *)(a1 + 1092);
      *(_QWORD *)(v31 + v9 + 48) = *(_QWORD *)(a1 + 1108);
      *(_DWORD *)((unsigned int)v31 + v9 + 56) = *(_DWORD *)(a1 + 1116);
      v32 = (unsigned int)(*(_DWORD *)(v9 + 572) + 60);
      *(_DWORD *)(v9 + 576) = v32;
      *(_OWORD *)(v32 + v9) = *(_OWORD *)(a1 + 1120);
      *(_DWORD *)((unsigned int)v32 + v9 + 16) = *(_DWORD *)(a1 + 1136);
      *(_DWORD *)(v9 + 712) = *(_DWORD *)(a1 + 4464);
      v33 = *(_QWORD *)(a1 + 4448);
      if ( v33 )
      {
        v34 = (MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 4576)) / 10000LL - *(_QWORD *)(a1 + 4592);
        KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 4448));
        *(_DWORD *)(v9 + 628) = *(_DWORD *)(v33 + 8);
        *(_BYTE *)(v9 + 632) = (*(_DWORD *)(v33 + 504) & 0x14) != 0;
        *(_DWORD *)(v9 + 636) = *(_DWORD *)(v33 + 644);
        v35 = *(_QWORD *)(v33 + 688);
        if ( (*(_DWORD *)(v33 + 504) & 0x10) != 0 )
          v35 += (MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v33 + 648)) / 10000LL;
        v36 = *(_DWORD *)(v33 + 644);
        if ( v36 )
        {
          *(_DWORD *)(v9 + 640) = *(_QWORD *)(v33 + 672) / (unsigned __int64)v36;
          *(_QWORD *)(v9 + 648) = v35 / *(unsigned int *)(v33 + 644);
        }
        if ( v34 )
          *(_DWORD *)(v9 + 656) = 100 * v35 / v34;
        *(_DWORD *)(v9 + 660) = ndisXlateSSResume(*(_DWORD *)(v33 + 628));
        *(_DWORD *)(v9 + 664) = *(_DWORD *)(v33 + 632);
        *(_DWORD *)(v9 + 668) = ndisXlateSSResume(*(_DWORD *)(v33 + 636));
        *(_DWORD *)(v9 + 672) = *(_DWORD *)(v33 + 640);
        KeReleaseSpinLock((PKSPIN_LOCK)v33, v37);
      }
      v38 = *(_QWORD *)(a1 + 4456);
      if ( v38 )
      {
        *(_DWORD *)(v9 + 524) |= 0x80000u;
        v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v38);
        *(_BYTE *)(v9 + 680) = *(_DWORD *)(v38 + 376) == 2;
        *(_DWORD *)(v9 + 684) = *(_DWORD *)(v38 + 52);
        *(_BYTE *)(v9 + 688) = *(_DWORD *)(v38 + 380) != 0;
        *(_QWORD *)(v9 + 696) = ndisAoAcMaxStartToRefTime;
        *(_QWORD *)(v9 + 704) = ndisAoAcMaxWakeToRefTime;
        KeReleaseSpinLock((PKSPIN_LOCK)v38, v39);
      }
      a2[7] = 860LL;
    }
    else
    {
      a2[7] = 0LL;
      v4 = -1073676268;
      if ( v8 >= 4 )
      {
        *(_DWORD *)v9 = 56361600;
        a2[7] = 4LL;
      }
    }
  }
  else
  {
    v4 = -1073741790;
  }
  result = v4;
  *a3 = v4;
  return result;
}
