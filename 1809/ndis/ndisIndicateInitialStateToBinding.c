/*
 * XREFs of ndisIndicateInitialStateToBinding @ 0x1C00188F4
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BED24 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0016F10 (ndisIovNicSwitchWithoutIovSupported.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001889C (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0019B2C (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisMDereferenceIfBlock @ 0x1C0019E34 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0019EC8 (ndisMReferenceIfBlock.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

void __fastcall ndisIndicateInitialStateToBinding(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int128 *v7; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int128 *v11; // rax
  __int128 *v12; // rax
  unsigned __int8 v13[16]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v14[14]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+A8h] [rbp-60h] BYREF
  int v16; // [rsp+B0h] [rbp-58h]
  int v17; // [rsp+B8h] [rbp-50h] BYREF
  int v18; // [rsp+BCh] [rbp-4Ch]
  int v19; // [rsp+C0h] [rbp-48h]
  __int64 v20; // [rsp+C8h] [rbp-40h]
  __int64 v21; // [rsp+D0h] [rbp-38h]
  int v22; // [rsp+D8h] [rbp-30h]
  int v23; // [rsp+DCh] [rbp-2Ch]
  __int128 v24; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v25; // [rsp+F0h] [rbp-18h]
  __int128 v26; // [rsp+100h] [rbp-8h]
  __int64 v27; // [rsp+110h] [rbp+8h]
  __int128 v28; // [rsp+118h] [rbp+10h] BYREF
  int v29; // [rsp+128h] [rbp+20h]
  __int128 v30; // [rsp+130h] [rbp+28h] BYREF
  __int64 v31; // [rsp+140h] [rbp+38h]
  int v32; // [rsp+148h] [rbp+40h]
  _OWORD v33[5]; // [rsp+158h] [rbp+50h] BYREF
  int v34; // [rsp+1A8h] [rbp+A0h]
  _OWORD v35[8]; // [rsp+1B8h] [rbp+B0h] BYREF
  int v36; // [rsp+238h] [rbp+130h]
  _OWORD v37[11]; // [rsp+248h] [rbp+140h] BYREF
  __int64 v38; // [rsp+2F8h] [rbp+1F0h]
  int v39; // [rsp+300h] [rbp+1F8h]

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(82LL, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, a1);
  ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v1, v13);
  v17 = 2621824;
  v3 = *(_QWORD *)(v1 + 2064);
  if ( v3 )
  {
    v18 = *(_DWORD *)(v3 + 388);
    v19 = *(_DWORD *)(*(_QWORD *)(v1 + 2064) + 392LL);
    v20 = *(_QWORD *)(*(_QWORD *)(v1 + 2064) + 400LL);
    v21 = *(_QWORD *)(*(_QWORD *)(v1 + 2064) + 408LL);
    v22 = *(_DWORD *)(*(_QWORD *)(v1 + 2064) + 416LL);
    v23 = *(_DWORD *)(*(_QWORD *)(v1 + 2064) + 420LL);
  }
  else
  {
    v18 = *(_DWORD *)(v1 + 480);
    v19 = *(_DWORD *)(v1 + 488);
    v20 = *(_QWORD *)(v1 + 792);
    v21 = *(_QWORD *)(v1 + 800);
    v22 = *(_DWORD *)(v1 + 808);
    v23 = *(_DWORD *)(v1 + 468);
  }
  memset(v14, 0, sizeof(v14));
  LODWORD(v14[3]) |= 3u;
  v14[6] = &v17;
  LODWORD(v14[0]) = 7340440;
  v14[1] = v1;
  HIDWORD(v14[2]) = 1073807383;
  LODWORD(v14[7]) = 40;
  v14[4] = a1;
  ndisIndicateStatusInternal(v1, v14);
  LOBYTE(v4) = 17;
  if ( ndisMReferenceIfBlock(v1, v4) )
  {
    v16 = 0;
    v15 = 786816LL;
    HIDWORD(v15) = *(_DWORD *)(*(_QWORD *)(v1 + 4072) + 1112LL);
    v16 = *(_DWORD *)(*(_QWORD *)(v1 + 4072) + 1116LL);
    memset(v14, 0, sizeof(v14));
    LODWORD(v14[3]) |= 1u;
    v14[6] = &v15;
    LODWORD(v14[0]) = 7340440;
    v14[1] = v1;
    HIDWORD(v14[2]) = 1073807395;
    LODWORD(v14[7]) = 12;
    v14[4] = a1;
    ndisIndicateStatusInternal(v1, v14);
    LOBYTE(v5) = 17;
    ndisMDereferenceIfBlock(v1, v5);
  }
  v6 = *(_QWORD *)(v1 + 4128);
  if ( v6 )
  {
    if ( *(_BYTE *)(v6 + 1) == 1 )
    {
      v37[0] = *(_OWORD *)(v6 + 196);
      v37[1] = *(_OWORD *)(v6 + 212);
      v37[2] = *(_OWORD *)(v6 + 228);
      v37[3] = *(_OWORD *)(v6 + 244);
      v37[4] = *(_OWORD *)(v6 + 260);
      v37[5] = *(_OWORD *)(v6 + 276);
      v37[6] = *(_OWORD *)(v6 + 292);
      v37[7] = *(_OWORD *)(v6 + 308);
      v37[8] = *(_OWORD *)(v6 + 324);
      v37[9] = *(_OWORD *)(v6 + 340);
      v37[10] = *(_OWORD *)(v6 + 356);
      v38 = *(_QWORD *)(v6 + 372);
      v39 = *(_DWORD *)(v6 + 380);
      memset(v14, 0, sizeof(v14));
      LODWORD(v14[3]) |= 1u;
      v14[6] = v37;
      LODWORD(v14[0]) = 7340440;
      v14[1] = v1;
      HIDWORD(v14[2]) = 1073872902;
      LODWORD(v14[7]) = 188;
      v14[4] = a1;
      ndisIndicateStatusInternal(v1, v14);
      v6 = *(_QWORD *)(v1 + 4128);
    }
    if ( *(_BYTE *)(v6 + 2) == 1 && !*(_BYTE *)(v6 + 4) )
    {
      v28 = *(_OWORD *)(v6 + 872);
      v29 = *(_DWORD *)(v6 + 888);
      memset(v14, 0, sizeof(v14));
      LODWORD(v14[3]) |= 1u;
      v14[6] = &v28;
      LODWORD(v14[0]) = 7340440;
      v14[1] = v1;
      HIDWORD(v14[2]) = 1073872899;
      LODWORD(v14[7]) = 20;
      v14[4] = a1;
      ndisIndicateStatusInternal(v1, v14);
    }
  }
  v7 = *(__int128 **)(v1 + 4304);
  if ( v7 )
  {
    v30 = *v7;
    v31 = *((_QWORD *)v7 + 2);
    v32 = *((_DWORD *)v7 + 6);
    memset(v14, 0, sizeof(v14));
    LODWORD(v14[3]) |= 1u;
    v14[6] = &v30;
    LODWORD(v14[0]) = 7340440;
    v14[1] = v1;
    HIDWORD(v14[2]) = 1073872908;
    LODWORD(v14[7]) = 28;
    v14[4] = a1;
    ndisIndicateStatusInternal(v1, v14);
  }
  if ( !*(_DWORD *)(v1 + 3516) && (*(_QWORD *)(v1 + 3600) || *(_QWORD *)(v1 + 3576)) )
  {
    v8 = *(_QWORD *)(v1 + 4648);
    if ( (!v8 || (*(_BYTE *)(v8 + 8) & 3) != 3) && !ndisIovNicSwitchWithoutIovSupported(v1) )
    {
      v10 = *(_QWORD *)(v1 + 3576);
      if ( v10 )
      {
        v33[0] = *(_OWORD *)v10;
        v33[1] = *(_OWORD *)(v10 + 16);
        v33[2] = *(_OWORD *)(v10 + 32);
        v33[3] = *(_OWORD *)(v10 + 48);
        v33[4] = *(_OWORD *)(v10 + 64);
        v34 = *(_DWORD *)(v10 + 80);
        memset(v14, 0, sizeof(v14));
        LODWORD(v14[3]) |= 1u;
        v14[6] = v33;
        LODWORD(v14[0]) = 7340440;
        v14[1] = v1;
        HIDWORD(v14[2]) = 1073872912;
        LODWORD(v14[7]) = 84;
        v14[4] = a1;
        ndisIndicateStatusInternal(v1, v14);
        v9 = *(_QWORD *)(v1 + 3600);
      }
      if ( v9 )
      {
        v35[0] = *(_OWORD *)v9;
        v35[1] = *(_OWORD *)(v9 + 16);
        v35[2] = *(_OWORD *)(v9 + 32);
        v35[3] = *(_OWORD *)(v9 + 48);
        v35[4] = *(_OWORD *)(v9 + 64);
        v35[5] = *(_OWORD *)(v9 + 80);
        v35[6] = *(_OWORD *)(v9 + 96);
        v35[7] = *(_OWORD *)(v9 + 112);
        v36 = *(_DWORD *)(v9 + 128);
        memset(v14, 0, sizeof(v14));
        LODWORD(v14[3]) |= 1u;
        v14[6] = v35;
        LODWORD(v14[0]) = 7340440;
        v14[1] = v1;
        HIDWORD(v14[2]) = 1073872960;
        LODWORD(v14[7]) = 132;
        v14[4] = a1;
        ndisIndicateStatusInternal(v1, v14);
      }
    }
  }
  v11 = *(__int128 **)(v1 + 5856);
  if ( v11 )
  {
    v24 = *v11;
    v25 = v11[1];
    v26 = v11[2];
    v27 = *((_QWORD *)v11 + 6);
    memset(v14, 0, sizeof(v14));
    LODWORD(v14[3]) |= 1u;
    v14[6] = &v24;
    LODWORD(v14[0]) = 7340440;
    v14[1] = v1;
    HIDWORD(v14[2]) = 1074073600;
    LODWORD(v14[7]) = 56;
    v14[4] = a1;
    ndisIndicateStatusInternal(v1, v14);
  }
  v12 = *(__int128 **)(v1 + 5848);
  if ( v12 )
  {
    v24 = *v12;
    v25 = v12[1];
    v26 = v12[2];
    v27 = *((_QWORD *)v12 + 6);
    memset(v14, 0, sizeof(v14));
    LODWORD(v14[3]) |= 1u;
    v14[6] = &v24;
    LODWORD(v14[0]) = 7340440;
    v14[1] = v1;
    HIDWORD(v14[2]) = 1074073601;
    LODWORD(v14[7]) = 56;
    v14[4] = a1;
    ndisIndicateStatusInternal(v1, v14);
  }
  ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v1, v13[0]);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_q(83LL, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, a1);
}
