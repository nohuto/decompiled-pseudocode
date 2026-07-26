/*
 * XREFs of ndisIndicateInitialStateToBinding @ 0x1C0028914
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0104790 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0018498 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisMDereferenceIfBlock @ 0x1C001AE20 (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C001C65C (ndisMReferenceIfBlock.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0029408 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0032B5C (ndisIovNicSwitchWithoutIovSupported.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

_UNKNOWN **__fastcall ndisIndicateInitialStateToBinding(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // edx
  __int64 v4; // rax
  __int64 v5; // rax
  _OWORD *v6; // rax
  __int128 v7; // xmm1
  __int128 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // edx
  _UNKNOWN **result; // rax
  unsigned __int8 v16[16]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v17[7]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v18[2]; // [rsp+B8h] [rbp-50h] BYREF
  int v19; // [rsp+C8h] [rbp-40h] BYREF
  int v20; // [rsp+CCh] [rbp-3Ch]
  int v21; // [rsp+D0h] [rbp-38h]
  int v22; // [rsp+D4h] [rbp-34h]
  __int64 v23; // [rsp+D8h] [rbp-30h]
  __int64 v24; // [rsp+E0h] [rbp-28h]
  int v25; // [rsp+E8h] [rbp-20h]
  int v26; // [rsp+ECh] [rbp-1Ch]
  __int128 v27; // [rsp+F0h] [rbp-18h] BYREF
  int v28; // [rsp+100h] [rbp-8h]
  __int128 v29; // [rsp+108h] [rbp+0h] BYREF
  __int64 v30; // [rsp+118h] [rbp+10h]
  int v31; // [rsp+120h] [rbp+18h]
  _OWORD v32[4]; // [rsp+128h] [rbp+20h] BYREF
  _OWORD v33[6]; // [rsp+168h] [rbp+60h] BYREF
  _OWORD v34[9]; // [rsp+1C8h] [rbp+C0h] BYREF
  _OWORD v35[14]; // [rsp+258h] [rbp+150h] BYREF

  v22 = 0;
  memset(v17, 0, sizeof(v17));
  v2 = *(_QWORD *)(a1 + 16);
  memset(v18, 0, 12);
  memset(v35, 0, 0xD8uLL);
  v27 = 0uLL;
  v28 = 0;
  v29 = 0uLL;
  v30 = 0LL;
  v31 = 0;
  memset(v33, 0, 0x54uLL);
  memset(v34, 0, 0x84uLL);
  memset(v32, 0, 0x38uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      6,
      82,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      a1);
  }
  ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, v16);
  v19 = 2621824;
  v4 = *(_QWORD *)(v2 + 2048);
  if ( v4 )
  {
    v20 = *(_DWORD *)(v4 + 380);
    v21 = *(_DWORD *)(*(_QWORD *)(v2 + 2048) + 384LL);
    v23 = *(_QWORD *)(*(_QWORD *)(v2 + 2048) + 392LL);
    v24 = *(_QWORD *)(*(_QWORD *)(v2 + 2048) + 400LL);
    v25 = *(_DWORD *)(*(_QWORD *)(v2 + 2048) + 408LL);
    v26 = *(_DWORD *)(*(_QWORD *)(v2 + 2048) + 412LL);
  }
  else
  {
    v20 = *(_DWORD *)(v2 + 480);
    v21 = *(_DWORD *)(v2 + 488);
    v23 = *(_QWORD *)(v2 + 792);
    v24 = *(_QWORD *)(v2 + 800);
    v25 = *(_DWORD *)(v2 + 808);
    v26 = *(_DWORD *)(v2 + 468);
  }
  memset(v17, 0, sizeof(v17));
  DWORD2(v17[1]) |= 3u;
  *(_QWORD *)&v17[3] = &v19;
  LODWORD(v17[0]) = 7340440;
  *((_QWORD *)&v17[0] + 1) = v2;
  DWORD1(v17[1]) = 1073807383;
  DWORD2(v17[3]) = 40;
  *(_QWORD *)&v17[2] = a1;
  ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v2, v17);
  if ( ndisMReferenceIfBlock(v2, 0x11u) )
  {
    *(_QWORD *)((char *)v18 + 4) = 0LL;
    LODWORD(v18[0]) = 786816;
    HIDWORD(v18[0]) = *(_DWORD *)(*(_QWORD *)(v2 + 4040) + 1112LL);
    LODWORD(v18[1]) = *(_DWORD *)(*(_QWORD *)(v2 + 4040) + 1116LL);
    memset(v17, 0, sizeof(v17));
    DWORD2(v17[1]) |= 1u;
    *(_QWORD *)&v17[3] = v18;
    LODWORD(v17[0]) = 7340440;
    *((_QWORD *)&v17[0] + 1) = v2;
    DWORD1(v17[1]) = 1073807395;
    DWORD2(v17[3]) = 12;
    *(_QWORD *)&v17[2] = a1;
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v2, v17);
    ndisMDereferenceIfBlock(v2, MPIFREF_INITIALSTATE);
  }
  v5 = *(_QWORD *)(v2 + 4096);
  if ( v5 )
  {
    if ( *(_BYTE *)(v5 + 1) == 1 )
    {
      v6 = (_OWORD *)(v5 + 224);
      v35[0] = *v6;
      v35[1] = v6[1];
      v35[2] = v6[2];
      v35[3] = v6[3];
      v35[4] = v6[4];
      v35[5] = v6[5];
      v35[6] = v6[6];
      v7 = v6[7];
      v6 += 8;
      v35[7] = v7;
      v35[8] = *v6;
      v35[9] = v6[1];
      v35[10] = v6[2];
      v35[11] = v6[3];
      v35[12] = v6[4];
      *(_QWORD *)&v35[13] = *((_QWORD *)v6 + 10);
      memset(v17, 0, sizeof(v17));
      DWORD2(v17[1]) |= 1u;
      *(_QWORD *)&v17[3] = v35;
      LODWORD(v17[0]) = 7340440;
      *((_QWORD *)&v17[0] + 1) = v2;
      DWORD1(v17[1]) = 1073872902;
      DWORD2(v17[3]) = 216;
      *(_QWORD *)&v17[2] = a1;
      ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v2, v17);
      v5 = *(_QWORD *)(v2 + 4096);
    }
    if ( *(_BYTE *)(v5 + 2) == 1 && !*(_BYTE *)(v5 + 4) )
    {
      v27 = *(_OWORD *)(v5 + 984);
      v28 = *(_DWORD *)(v5 + 1000);
      memset(v17, 0, sizeof(v17));
      DWORD2(v17[1]) |= 1u;
      *(_QWORD *)&v17[3] = &v27;
      LODWORD(v17[0]) = 7340440;
      *((_QWORD *)&v17[0] + 1) = v2;
      DWORD1(v17[1]) = 1073872899;
      DWORD2(v17[3]) = 20;
      *(_QWORD *)&v17[2] = a1;
      ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v2, v17);
    }
  }
  v8 = *(__int128 **)(v2 + 4264);
  if ( v8 )
  {
    v29 = *v8;
    v30 = *((_QWORD *)v8 + 2);
    v31 = *((_DWORD *)v8 + 6);
    memset(v17, 0, sizeof(v17));
    DWORD2(v17[1]) |= 1u;
    *(_QWORD *)&v17[3] = &v29;
    LODWORD(v17[0]) = 7340440;
    *((_QWORD *)&v17[0] + 1) = v2;
    DWORD1(v17[1]) = 1073872908;
    DWORD2(v17[3]) = 28;
    *(_QWORD *)&v17[2] = a1;
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v2, v17);
  }
  if ( !*(_DWORD *)(v2 + 3492) && (*(_QWORD *)(v2 + 3576) || *(_QWORD *)(v2 + 3552)) )
  {
    v9 = *(_QWORD *)(v2 + 4608);
    if ( (!v9 || (*(_BYTE *)(v9 + 8) & 3) != 3) && !(unsigned __int8)ndisIovNicSwitchWithoutIovSupported(v2) )
    {
      v11 = *(_QWORD *)(v2 + 3552);
      if ( v11 )
      {
        v33[0] = *(_OWORD *)v11;
        v33[1] = *(_OWORD *)(v11 + 16);
        v33[2] = *(_OWORD *)(v11 + 32);
        v33[3] = *(_OWORD *)(v11 + 48);
        v33[4] = *(_OWORD *)(v11 + 64);
        LODWORD(v33[5]) = *(_DWORD *)(v11 + 80);
        memset(v17, 0, sizeof(v17));
        DWORD2(v17[1]) |= 1u;
        *(_QWORD *)&v17[3] = v33;
        LODWORD(v17[0]) = 7340440;
        *((_QWORD *)&v17[0] + 1) = v2;
        DWORD1(v17[1]) = 1073872912;
        DWORD2(v17[3]) = 84;
        *(_QWORD *)&v17[2] = a1;
        ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v2, v17);
        v10 = *(_QWORD *)(v2 + 3576);
      }
      if ( v10 )
      {
        v34[0] = *(_OWORD *)v10;
        v34[1] = *(_OWORD *)(v10 + 16);
        v34[2] = *(_OWORD *)(v10 + 32);
        v34[3] = *(_OWORD *)(v10 + 48);
        v34[4] = *(_OWORD *)(v10 + 64);
        v34[5] = *(_OWORD *)(v10 + 80);
        v34[6] = *(_OWORD *)(v10 + 96);
        v34[7] = *(_OWORD *)(v10 + 112);
        LODWORD(v34[8]) = *(_DWORD *)(v10 + 128);
        memset(v17, 0, sizeof(v17));
        DWORD2(v17[1]) |= 1u;
        *(_QWORD *)&v17[3] = v34;
        LODWORD(v17[0]) = 7340440;
        *((_QWORD *)&v17[0] + 1) = v2;
        DWORD1(v17[1]) = 1073872960;
        DWORD2(v17[3]) = 132;
        *(_QWORD *)&v17[2] = a1;
        ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v2, v17);
      }
    }
  }
  v12 = *(_QWORD *)(v2 + 5792);
  if ( v12 )
  {
    v32[0] = *(_OWORD *)v12;
    v32[1] = *(_OWORD *)(v12 + 16);
    v32[2] = *(_OWORD *)(v12 + 32);
    *(_QWORD *)&v32[3] = *(_QWORD *)(v12 + 48);
    memset(v17, 0, sizeof(v17));
    DWORD2(v17[1]) |= 1u;
    *(_QWORD *)&v17[3] = v32;
    LODWORD(v17[0]) = 7340440;
    *((_QWORD *)&v17[0] + 1) = v2;
    DWORD1(v17[1]) = 1074073600;
    DWORD2(v17[3]) = 56;
    *(_QWORD *)&v17[2] = a1;
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v2, v17);
  }
  v13 = *(_QWORD *)(v2 + 5784);
  if ( v13 )
  {
    v32[0] = *(_OWORD *)v13;
    v32[1] = *(_OWORD *)(v13 + 16);
    v32[2] = *(_OWORD *)(v13 + 32);
    *(_QWORD *)&v32[3] = *(_QWORD *)(v13 + 48);
    memset(v17, 0, sizeof(v17));
    DWORD2(v17[1]) |= 1u;
    *(_QWORD *)&v17[3] = v32;
    LODWORD(v17[0]) = 7340440;
    *((_QWORD *)&v17[0] + 1) = v2;
    DWORD1(v17[1]) = 1074073601;
    DWORD2(v17[3]) = 56;
    *(_QWORD *)&v17[2] = a1;
    ndisIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)v2, v17);
  }
  ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, v16[0]);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_q(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          v14,
                          6,
                          83,
                          (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
                          a1);
  }
  return result;
}
