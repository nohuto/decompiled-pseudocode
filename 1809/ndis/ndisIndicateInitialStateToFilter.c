/*
 * XREFs of ndisIndicateInitialStateToFilter @ 0x1C0017CAC
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010C4C8 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisFAllocateFilterOffload @ 0x1C0016F34 (ndisFAllocateFilterOffload.c)
 *     ndisFIndicateStatusInternal @ 0x1C001817C (ndisFIndicateStatusInternal.c)
 *     ndisFInvokeStatus @ 0x1C00187A8 (ndisFInvokeStatus.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C001889C (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0019B2C (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ndisUpdateFilterFakeStatus @ 0x1C00252A8 (ndisUpdateFilterFakeStatus.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ?ndisAllocateAndInitializeTimestampForFilter@@YAPEAU_NDIS_TIMESTAMP_CAPABILITIES@@PEAU1@@Z @ 0x1C0059A70 (-ndisAllocateAndInitializeTimestampForFilter@@YAPEAU_NDIS_TIMESTAMP_CAPABILITIES@@PEAU1@@Z.c)
 *     NdisMSleep @ 0x1C00CF740 (NdisMSleep.c)
 */

void __fastcall ndisIndicateInitialStateToFilter(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rsi
  __int64 v4; // rdi
  char v5; // r15
  KIRQL v6; // dl
  int v7; // ecx
  _BYTE *v8; // rcx
  _BYTE *v9; // rcx
  __int128 v10; // xmm1
  __int64 v11; // rdx
  void (__fastcall *v12)(_QWORD *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, int); // rax
  __int64 v13; // r14
  void (__fastcall *v14)(_QWORD, _QWORD *); // rax
  unsigned int v15; // edi
  __int128 *v16; // rax
  __int128 *v17; // rax
  char v18; // al
  void (__stdcall *v19)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS); // rax
  void (__fastcall *v20)(_QWORD *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // rcx
  KIRQL v21; // dl
  int v22; // eax
  __int128 *v23; // rdx
  __int128 v24; // xmm1
  _OWORD *v25; // rdx
  bool v26; // zf
  __int64 v27; // rdx
  __int64 v28; // rax
  KIRQL v29; // dl
  void (__fastcall *v30)(_QWORD, _QWORD *); // rax
  unsigned int v31; // r13d
  int v32; // eax
  void (__fastcall *v33)(_QWORD *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, int); // rax
  __int64 v34; // rax
  KIRQL v35; // dl
  void (__fastcall *v36)(_QWORD, _QWORD *); // rax
  unsigned int v37; // r13d
  int v38; // eax
  __int128 *v39; // rax
  struct _NDIS_TIMESTAMP_CAPABILITIES *v40; // rax
  __int64 v41; // rax
  KIRQL v42; // dl
  void (__fastcall *v43)(_QWORD, _QWORD *); // rax
  unsigned int v44; // r13d
  KIRQL v45; // dl
  int v46; // eax
  __int128 *v47; // rax
  struct _NDIS_TIMESTAMP_CAPABILITIES *v48; // rax
  KIRQL v49; // dl
  __int64 v50; // rsi
  void (__fastcall *v51)(_QWORD, _QWORD *); // rax
  unsigned int v52; // edi
  __int64 v53; // rcx
  KIRQL v54; // dl
  struct _NDIS_TIMESTAMP_CAPABILITIES *v55; // rax
  struct _NDIS_TIMESTAMP_CAPABILITIES *v56; // rax
  KIRQL v57[8]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v58; // [rsp+30h] [rbp-D8h]
  KIRQL NewIrql[8]; // [rsp+38h] [rbp-D0h]
  __int64 v60; // [rsp+40h] [rbp-C8h]
  _QWORD v61[14]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v62[5]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v63; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v64; // [rsp+F0h] [rbp-18h]
  __int128 v65; // [rsp+100h] [rbp-8h]
  __int64 v66; // [rsp+110h] [rbp+8h]
  __int128 v67; // [rsp+118h] [rbp+10h] BYREF
  __int128 v68; // [rsp+128h] [rbp+20h]
  __int128 v69; // [rsp+138h] [rbp+30h]
  __int128 v70; // [rsp+148h] [rbp+40h]
  __int128 v71; // [rsp+158h] [rbp+50h]
  __int128 v72; // [rsp+168h] [rbp+60h]
  __int128 v73; // [rsp+178h] [rbp+70h]
  __int128 v74; // [rsp+188h] [rbp+80h]
  __int128 v75; // [rsp+198h] [rbp+90h]
  __int128 v76; // [rsp+1A8h] [rbp+A0h]
  __int128 v77; // [rsp+1B8h] [rbp+B0h]
  __int64 v78; // [rsp+1C8h] [rbp+C0h]
  int v79; // [rsp+1D0h] [rbp+C8h]

  v1 = *(_QWORD *)(a1 + 112);
  v2 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 120);
  v5 = 1;
  v57[0] = 0;
  v60 = v1;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(69LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1);
  memset(v62, 0, sizeof(v62));
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
  NewIrql[0] = v6;
  *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
  v7 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 160) = 2102840;
  if ( (v7 & 0x2000) != 0 )
  {
    do
    {
      *(_QWORD *)(a1 + 152) = 0LL;
      *(_DWORD *)(a1 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 144), v6);
      if ( KeGetCurrentIrql() == 2 )
      {
        LODWORD(v58) = 0;
        do
          LODWORD(v58) = v58 + 1;
        while ( (unsigned int)v58 < 0x32 );
      }
      else
      {
        NdisMSleep(0x32u);
      }
      v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 144));
      *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
      *(_DWORD *)(a1 + 160) = 2102840;
      v7 = *(_DWORD *)(a1 + 56);
    }
    while ( (v7 & 0x2000) != 0 );
    NewIrql[0] = v6;
  }
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 56) = v7 | 0x2000;
  *(_DWORD *)(a1 + 160) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 144));
  HIDWORD(v62[0]) = *(_DWORD *)(a1 + 352);
  LODWORD(v62[1]) = *(_DWORD *)(a1 + 356);
  v62[2] = *(_QWORD *)(a1 + 360);
  v62[3] = *(_QWORD *)(a1 + 368);
  v62[4] = *(_QWORD *)(a1 + 376);
  LODWORD(v62[0]) = 2621824;
  if ( v4 )
  {
    while ( 1 )
    {
      v57[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
      *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
      *(_DWORD *)(v4 + 160) = 2102855;
      v22 = *(_DWORD *)(v4 + 56);
      *(_QWORD *)(v4 + 152) = 0LL;
      *(_DWORD *)(v4 + 160) = 0;
      if ( (v22 & 0x2000) == 0 )
        break;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v57[0]);
      if ( KeGetCurrentIrql() == 2 )
      {
        LODWORD(v58) = 0;
        do
          LODWORD(v58) = v58 + 1;
        while ( (unsigned int)v58 < 0x32 );
      }
      else
      {
        NdisMSleep(0x32u);
      }
    }
    *(_DWORD *)(v4 + 56) = v22 | 0x2000;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 144));
    v23 = *(__int128 **)(v4 + 672);
    if ( v23 )
    {
      v67 = *v23;
      v68 = v23[1];
      v69 = v23[2];
      v70 = v23[3];
      v71 = v23[4];
      v72 = v23[5];
      v73 = v23[6];
      v24 = v23[7];
      v25 = v23 + 8;
      v26 = *(_QWORD *)(a1 + 672) == 0LL;
      v74 = v24;
      v75 = *v25;
      v76 = v25[1];
      v77 = v25[2];
      v78 = *((_QWORD *)v25 + 6);
      v79 = *((_DWORD *)v25 + 14);
      if ( v26 && (unsigned int)ndisFAllocateFilterOffload(a1) )
      {
        v5 = 0;
      }
      else
      {
        v27 = *(_QWORD *)(a1 + 672);
        *(_OWORD *)v27 = v67;
        *(_OWORD *)(v27 + 16) = v68;
        *(_OWORD *)(v27 + 32) = v69;
        *(_OWORD *)(v27 + 48) = v70;
        *(_OWORD *)(v27 + 64) = v71;
        *(_OWORD *)(v27 + 80) = v72;
        *(_OWORD *)(v27 + 96) = v73;
        v27 += 128LL;
        *(_OWORD *)(v27 - 16) = v74;
        *(_OWORD *)v27 = v75;
        *(_OWORD *)(v27 + 16) = v76;
        *(_OWORD *)(v27 + 32) = v77;
        *(_QWORD *)(v27 + 48) = v78;
        *(_DWORD *)(v27 + 56) = v79;
        memset(v61, 0, sizeof(v61));
        LODWORD(v61[0]) = 7340440;
        v28 = v2;
        HIDWORD(v61[2]) = 1073872902;
        if ( v1 )
          v28 = v1;
        LODWORD(v61[7]) = 188;
        v61[1] = v28;
        v61[6] = &v67;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 144));
        v29 = v57[0];
        *(_DWORD *)(v4 + 56) &= ~0x2000u;
        *(_QWORD *)(v4 + 152) = 0LL;
        *(_DWORD *)(v4 + 160) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v29);
        v58 = *(_QWORD *)(a1 + 16);
        v30 = *(void (__fastcall **)(_QWORD, _QWORD *))(v58 + 288);
        if ( v30 )
        {
          v31 = HIDWORD(v61[2]);
          if ( (unsigned __int8)byte_1C00A0267 >= 4u )
          {
            WPP_SF_qD(127LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, HIDWORD(v61[2]));
            v30 = *(void (__fastcall **)(_QWORD, _QWORD *))(v58 + 288);
          }
          v30(*(_QWORD *)(a1 + 24), v61);
          if ( (unsigned __int8)byte_1C00A0267 >= 4u )
            WPP_SF_qD(128LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, v31);
          v1 = v60;
        }
        else
        {
          ndisFIndicateStatusInternal(a1, v61);
        }
        while ( 1 )
        {
          v57[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
          *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
          *(_DWORD *)(v4 + 160) = 2102891;
          v32 = *(_DWORD *)(v4 + 56);
          *(_QWORD *)(v4 + 152) = 0LL;
          *(_DWORD *)(v4 + 160) = 0;
          if ( (v32 & 0x2000) == 0 )
            break;
          KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v57[0]);
          if ( KeGetCurrentIrql() == 2 )
          {
            LODWORD(v58) = 0;
            do
              LODWORD(v58) = v58 + 1;
            while ( (unsigned int)v58 < 0x32 );
          }
          else
          {
            NdisMSleep(0x32u);
          }
        }
        *(_DWORD *)(v4 + 56) = v32 | 0x2000;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 144));
      }
    }
    v33 = ndisFilterIndicateReceiveNetBufferLists;
    if ( *(_DWORD *)(v4 + 352) != 1 )
      v33 = (void (__fastcall *)(_QWORD *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, int))&ndisFakeFilterReceiveHandler;
    *(_QWORD *)(a1 + 640) = v33;
    memset(v61, 0, sizeof(v61));
    LODWORD(v61[0]) = 7340440;
    v34 = v2;
    HIDWORD(v61[2]) = 1073807383;
    if ( v1 )
      v34 = v1;
    v61[1] = v34;
    v61[6] = v62;
    LODWORD(v61[7]) = 40;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 144));
    v35 = v57[0];
    *(_DWORD *)(v4 + 56) &= ~0x2000u;
    *(_QWORD *)(v4 + 152) = 0LL;
    *(_DWORD *)(v4 + 160) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v35);
    v58 = *(_QWORD *)(a1 + 16);
    v36 = *(void (__fastcall **)(_QWORD, _QWORD *))(v58 + 288);
    if ( v36 )
    {
      v37 = HIDWORD(v61[2]);
      if ( (unsigned __int8)byte_1C00A0267 >= 4u )
      {
        WPP_SF_qD(127LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, HIDWORD(v61[2]));
        v36 = *(void (__fastcall **)(_QWORD, _QWORD *))(v58 + 288);
      }
      v36(*(_QWORD *)(a1 + 24), v61);
      if ( (unsigned __int8)byte_1C00A0267 >= 4u )
        WPP_SF_qD(128LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, v37);
      v1 = v60;
    }
    else
    {
      ndisFIndicateStatusInternal(a1, v61);
    }
    while ( 1 )
    {
      v57[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
      *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
      *(_DWORD *)(v4 + 160) = 2102915;
      v38 = *(_DWORD *)(v4 + 56);
      *(_QWORD *)(v4 + 152) = 0LL;
      *(_DWORD *)(v4 + 160) = 0;
      if ( (v38 & 0x2000) == 0 )
        break;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v57[0]);
      if ( KeGetCurrentIrql() == 2 )
      {
        LODWORD(v58) = 0;
        do
          LODWORD(v58) = v58 + 1;
        while ( (unsigned int)v58 < 0x32 );
      }
      else
      {
        NdisMSleep(0x32u);
      }
    }
    *(_DWORD *)(v4 + 56) = v38 | 0x2000;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 144));
    v39 = *(__int128 **)(v4 + 776);
    if ( v39 )
    {
      v26 = *(_QWORD *)(a1 + 776) == 0LL;
      v63 = *v39;
      v64 = v39[1];
      v65 = v39[2];
      v66 = *((_QWORD *)v39 + 6);
      if ( v26 )
      {
        v40 = ndisAllocateAndInitializeTimestampForFilter(*(struct _NDIS_TIMESTAMP_CAPABILITIES **)(v4 + 776));
        *(_QWORD *)(a1 + 776) = v40;
        v5 = v40 != 0LL ? v5 : 0;
      }
      if ( v5 )
      {
        memset(v61, 0, sizeof(v61));
        LODWORD(v61[0]) = 7340440;
        v41 = v2;
        HIDWORD(v61[2]) = 1074073600;
        if ( v1 )
          v41 = v1;
        LODWORD(v61[7]) = 56;
        v61[1] = v41;
        v61[6] = &v63;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 144));
        v42 = v57[0];
        *(_DWORD *)(v4 + 56) &= ~0x2000u;
        *(_QWORD *)(v4 + 152) = 0LL;
        *(_DWORD *)(v4 + 160) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v42);
        v58 = *(_QWORD *)(a1 + 16);
        v43 = *(void (__fastcall **)(_QWORD, _QWORD *))(v58 + 288);
        if ( v43 )
        {
          v44 = HIDWORD(v61[2]);
          if ( (unsigned __int8)byte_1C00A0267 >= 4u )
          {
            WPP_SF_qD(127LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, HIDWORD(v61[2]));
            v43 = *(void (__fastcall **)(_QWORD, _QWORD *))(v58 + 288);
          }
          v43(*(_QWORD *)(a1 + 24), v61);
          if ( (unsigned __int8)byte_1C00A0267 >= 4u )
            WPP_SF_qD(128LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, v44);
        }
        else
        {
          ndisFIndicateStatusInternal(a1, v61);
        }
      }
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 144));
      v45 = v57[0];
      *(_DWORD *)(v4 + 56) &= ~0x2000u;
      *(_QWORD *)(v4 + 152) = 0LL;
      *(_DWORD *)(v4 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v45);
    }
    while ( 1 )
    {
      v57[0] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
      *(_QWORD *)(v4 + 152) = KeGetCurrentThread();
      *(_DWORD *)(v4 + 160) = 2102955;
      v46 = *(_DWORD *)(v4 + 56);
      *(_QWORD *)(v4 + 152) = 0LL;
      *(_DWORD *)(v4 + 160) = 0;
      if ( (v46 & 0x2000) == 0 )
        break;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v57[0]);
      if ( KeGetCurrentIrql() == 2 )
      {
        LODWORD(v58) = 0;
        while ( (unsigned int)v58 < 0x32 )
          LODWORD(v58) = v58 + 1;
      }
      else
      {
        NdisMSleep(0x32u);
      }
    }
    *(_DWORD *)(v4 + 56) = v46 | 0x2000;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v4 + 144));
    v47 = *(__int128 **)(v4 + 784);
    if ( !v47 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 144));
      v54 = v57[0];
      *(_DWORD *)(v4 + 56) &= ~0x2000u;
      *(_QWORD *)(v4 + 152) = 0LL;
      *(_DWORD *)(v4 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v54);
      goto LABEL_23;
    }
    v63 = *v47;
    v64 = v47[1];
    v65 = v47[2];
    v66 = *((_QWORD *)v47 + 6);
    if ( !*(_QWORD *)(a1 + 784) )
    {
      v48 = ndisAllocateAndInitializeTimestampForFilter(*(struct _NDIS_TIMESTAMP_CAPABILITIES **)(v4 + 784));
      *(_QWORD *)(a1 + 784) = v48;
      v5 &= -(v48 != 0LL);
    }
    if ( v5 )
    {
      memset(v61, 0, sizeof(v61));
      LODWORD(v61[0]) = 7340440;
      HIDWORD(v61[2]) = 1074073601;
      if ( v60 )
        v2 = v60;
      LODWORD(v61[7]) = 56;
      v61[1] = v2;
      v61[6] = &v63;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 144));
      v49 = v57[0];
      *(_DWORD *)(v4 + 56) &= ~0x2000u;
      *(_QWORD *)(v4 + 152) = 0LL;
      *(_DWORD *)(v4 + 160) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 144), v49);
      v50 = *(_QWORD *)(a1 + 16);
      v51 = *(void (__fastcall **)(_QWORD, _QWORD *))(v50 + 288);
      if ( !v51 )
      {
        v53 = a1;
        goto LABEL_111;
      }
      v52 = HIDWORD(v61[2]);
      if ( (unsigned __int8)byte_1C00A0267 >= 4u )
      {
        WPP_SF_qD(127LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, HIDWORD(v61[2]));
        v51 = *(void (__fastcall **)(_QWORD, _QWORD *))(v50 + 288);
      }
      v51(*(_QWORD *)(a1 + 24), v61);
      if ( (unsigned __int8)byte_1C00A0267 >= 4u )
        WPP_SF_qD(128LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, v52);
    }
  }
  else
  {
    ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, v57);
    v8 = *(_BYTE **)(v2 + 4128);
    if ( v8 && *v8 )
    {
      v9 = v8 + 196;
      v67 = *(_OWORD *)v9;
      v68 = *((_OWORD *)v9 + 1);
      v69 = *((_OWORD *)v9 + 2);
      v70 = *((_OWORD *)v9 + 3);
      v71 = *((_OWORD *)v9 + 4);
      v72 = *((_OWORD *)v9 + 5);
      v73 = *((_OWORD *)v9 + 6);
      v10 = *((_OWORD *)v9 + 7);
      v9 += 128;
      v74 = v10;
      v75 = *(_OWORD *)v9;
      v76 = *((_OWORD *)v9 + 1);
      v77 = *((_OWORD *)v9 + 2);
      v78 = *((_QWORD *)v9 + 6);
      v79 = *((_DWORD *)v9 + 14);
      if ( !*(_QWORD *)(a1 + 672) && (unsigned int)ndisFAllocateFilterOffload(a1) )
      {
        v5 = 0;
      }
      else
      {
        v11 = *(_QWORD *)(a1 + 672);
        *(_OWORD *)v11 = v67;
        *(_OWORD *)(v11 + 16) = v68;
        *(_OWORD *)(v11 + 32) = v69;
        *(_OWORD *)(v11 + 48) = v70;
        *(_OWORD *)(v11 + 64) = v71;
        *(_OWORD *)(v11 + 80) = v72;
        *(_OWORD *)(v11 + 96) = v73;
        v11 += 128LL;
        *(_OWORD *)(v11 - 16) = v74;
        *(_OWORD *)v11 = v75;
        *(_OWORD *)(v11 + 16) = v76;
        *(_OWORD *)(v11 + 32) = v77;
        *(_QWORD *)(v11 + 48) = v78;
        *(_DWORD *)(v11 + 56) = v79;
        memset(v61, 0, sizeof(v61));
        v61[6] = &v67;
        LODWORD(v61[0]) = 7340440;
        v61[1] = v2;
        HIDWORD(v61[2]) = 1073872902;
        LODWORD(v61[7]) = 188;
        ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, v57[0]);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 288LL) )
          ndisFInvokeStatus(a1, v61);
        else
          ndisFIndicateStatusInternal(a1, v61);
        ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, v57);
      }
    }
    LODWORD(v62[0]) = 2621824;
    HIDWORD(v62[0]) = *(_DWORD *)(v2 + 480);
    LODWORD(v62[1]) = *(_DWORD *)(v2 + 488);
    v62[2] = *(_QWORD *)(v2 + 792);
    v62[3] = *(_QWORD *)(v2 + 800);
    v12 = ndisFilterIndicateReceiveNetBufferLists;
    if ( *(_DWORD *)(v2 + 480) != 1 )
      v12 = (void (__fastcall *)(_QWORD *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, int))&ndisFakeFilterReceiveHandler;
    *(_QWORD *)(a1 + 640) = v12;
    memset(v61, 0, sizeof(v61));
    v61[6] = v62;
    LODWORD(v61[0]) = 7340440;
    v61[1] = v2;
    HIDWORD(v61[2]) = 1073807383;
    LODWORD(v61[7]) = 40;
    ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, v57[0]);
    v13 = *(_QWORD *)(a1 + 16);
    v14 = *(void (__fastcall **)(_QWORD, _QWORD *))(v13 + 288);
    if ( v14 )
    {
      v15 = HIDWORD(v61[2]);
      if ( (unsigned __int8)byte_1C00A0267 >= 4u )
      {
        WPP_SF_qD(127LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, HIDWORD(v61[2]));
        (*(void (__fastcall **)(_QWORD, _QWORD *))(v13 + 288))(*(_QWORD *)(a1 + 24), v61);
      }
      else
      {
        v14(*(_QWORD *)(a1 + 24), v61);
      }
      if ( (unsigned __int8)byte_1C00A0267 >= 4u )
        WPP_SF_qD(128LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, v15);
    }
    else
    {
      ndisFIndicateStatusInternal(a1, v61);
    }
    ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, v57);
    v16 = *(__int128 **)(v2 + 5856);
    if ( v16 )
    {
      v63 = *v16;
      v64 = v16[1];
      v65 = v16[2];
      v66 = *((_QWORD *)v16 + 6);
      if ( !*(_QWORD *)(a1 + 776) )
      {
        v55 = ndisAllocateAndInitializeTimestampForFilter(*(struct _NDIS_TIMESTAMP_CAPABILITIES **)(v2 + 5856));
        *(_QWORD *)(a1 + 776) = v55;
        v5 = v55 != 0LL ? v5 : 0;
      }
      if ( v5 )
      {
        memset(v61, 0, sizeof(v61));
        v61[6] = &v63;
        LODWORD(v61[0]) = 7340440;
        v61[1] = v2;
        HIDWORD(v61[2]) = 1074073600;
        LODWORD(v61[7]) = 56;
        ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, v57[0]);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 288LL) )
          ndisFInvokeStatus(a1, v61);
        else
          ndisFIndicateStatusInternal(a1, v61);
      }
    }
    else
    {
      ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, v57[0]);
    }
    ndisMAcquireStInLockWithSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, v57);
    v17 = *(__int128 **)(v2 + 5848);
    if ( !v17 )
    {
      ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, v57[0]);
      goto LABEL_23;
    }
    v63 = *v17;
    v64 = v17[1];
    v65 = v17[2];
    v66 = *((_QWORD *)v17 + 6);
    if ( !*(_QWORD *)(a1 + 784) )
    {
      v56 = ndisAllocateAndInitializeTimestampForFilter(*(struct _NDIS_TIMESTAMP_CAPABILITIES **)(v2 + 5848));
      *(_QWORD *)(a1 + 784) = v56;
      v5 &= -(v56 != 0LL);
    }
    if ( v5 )
    {
      memset(v61, 0, sizeof(v61));
      v61[6] = &v63;
      LODWORD(v61[0]) = 7340440;
      v61[1] = v2;
      HIDWORD(v61[2]) = 1074073601;
      LODWORD(v61[7]) = 56;
      ndisMReleaseStInLockAndSpinLock((struct _NDIS_MINIPORT_BLOCK *)v2, v57[0]);
      v53 = a1;
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 288LL) )
      {
        ndisFInvokeStatus(a1, v61);
        goto LABEL_23;
      }
LABEL_111:
      ndisFIndicateStatusInternal(v53, v61);
    }
  }
LABEL_23:
  v18 = *(_BYTE *)(a1 + 384);
  if ( *(_DWORD *)(a1 + 352) == 1 )
  {
    v20 = ndisFilterSendNetBufferLists;
    *(_BYTE *)(a1 + 384) = v18 & 0xFE;
    v19 = (void (__stdcall *)(NDIS_HANDLE, ULONG, PVOID, NDIS_PHYSICAL_ADDRESS))ndisFilterCancelSendNetBufferLists;
  }
  else
  {
    *(_BYTE *)(a1 + 384) = v18 | 1;
    ndisUpdateFilterFakeStatus(a1);
    v19 = ndisFakeMiniportCancelSendPackets;
    v20 = (void (__fastcall *)(_QWORD *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))&ndisFakeFilterSendHandler;
  }
  *(_QWORD *)(a1 + 632) = v20;
  *(_QWORD *)(a1 + 648) = v19;
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 144));
  v21 = NewIrql[0];
  *(_DWORD *)(a1 + 56) &= ~0x2000u;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 144), v21);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(70LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1);
}
