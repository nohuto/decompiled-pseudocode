/*
 * XREFs of ndisUpdatePMCurrentCapabilities @ 0x1C003C7BC
 * Callers:
 *     ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0115320 (-ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C013B4EC (ndisPmInitializeMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     ?ndisConvertPMCapabilitiesToPnp@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PNP_CAPABILITIES@@@Z @ 0x1C010A6F8 (-ndisConvertPMCapabilitiesToPnp@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PNP_CAPABILITIES@@@Z.c)
 */

char __fastcall ndisUpdatePMCurrentCapabilities(__int64 a1)
{
  struct _NDIS_PM_CAPABILITIES *v1; // rbp
  char v2; // di
  __int128 v4; // xmm1
  int v5; // eax
  __int128 v6; // xmm0
  int v7; // ecx
  unsigned __int8 v8; // al
  __int64 v9; // rax
  KIRQL v10; // dl
  unsigned __int8 v11; // al
  int v12; // edx
  int v13; // ecx
  int v14; // ecx
  int v15; // r8d
  int v16; // r8d
  int v17; // eax
  int v18; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  __int128 v23; // [rsp+40h] [rbp-48h]
  __int128 v24; // [rsp+50h] [rbp-38h]
  __int128 v25; // [rsp+60h] [rbp-28h]
  __int64 v26; // [rsp+70h] [rbp-18h]

  v1 = (struct _NDIS_PM_CAPABILITIES *)(a1 + 1060);
  v2 = 0;
  v23 = *(_OWORD *)(a1 + 1060);
  v24 = *(_OWORD *)(a1 + 1076);
  v25 = *(_OWORD *)(a1 + 1092);
  v26 = *(_QWORD *)(a1 + 1108);
  v4 = *(_OWORD *)(a1 + 1016);
  v5 = *(_DWORD *)(a1 + 1056);
  *(_OWORD *)(a1 + 1060) = *(_OWORD *)(a1 + 1000);
  v6 = *(_OWORD *)(a1 + 1032);
  *(_OWORD *)(a1 + 1076) = v4;
  *(_QWORD *)&v4 = *(_QWORD *)(a1 + 1048);
  *(_OWORD *)(a1 + 1092) = v6;
  *(_QWORD *)(a1 + 1108) = v4;
  *(_DWORD *)(a1 + 1116) = v5;
  *(_QWORD *)(a1 + 1064) = 0LL;
  *(_DWORD *)(a1 + 1088) = 0;
  *(_QWORD *)(a1 + 1100) = 0LL;
  *(_DWORD *)(a1 + 1108) = 0;
  if ( (*(_DWORD *)(a1 + 124) & 1) != 0
    && (*(_DWORD *)(a1 + 3864) & 8) == 0
    && (unsigned int)(*(_DWORD *)(a1 + 1272) - 2) <= 2
    && *(_DWORD *)(a1 + 1268) )
  {
    v7 = *(_DWORD *)(a1 + 1004);
    if ( (v7 & 4) != 0 && !ndisDefaultNapsState )
    {
      v20 = *(_DWORD *)(a1 + 3912);
      if ( (v20 & 0xC000) == 0 )
        *(_DWORD *)(a1 + 3912) = v20 & 0xFFFF0FFF | 0xA000;
    }
    v8 = *(_BYTE *)(a1 + 32);
    if ( (v8 > 6u || v8 == 6 && *(_BYTE *)(a1 + 33) >= 0x1Eu)
      && (*(_DWORD *)(a1 + 120) & 0x20000) == 0
      && (v9 = *(_QWORD *)(a1 + 3760), *(_QWORD *)(v9 + 840))
      && *(_QWORD *)(v9 + 848)
      && (*(_DWORD *)(a1 + 3912) & 0x3000) == 0x2000
      && (v7 & 6) != 0
      || (*(_DWORD *)(a1 + 120) & 0x80u) != 0 && (*(_DWORD *)(a1 + 3912) & 0x3000) == 0x2000 && (v7 & 6) != 0 )
    {
      *(_DWORD *)(a1 + 1064) = 2;
      if ( (v7 & 4) != 0 )
      {
        *(_DWORD *)(a1 + 1064) = 6;
        if ( (v7 & 0xC) == 0xC )
        {
          *(_DWORD *)(a1 + 1064) = 14;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qZ(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v7 & 4,
              9u,
              0x8Fu,
              (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
              a1,
              *(unsigned __int16 **)(a1 + 3856));
        }
      }
    }
    if ( (*(_DWORD *)(a1 + 1004) & 1) != 0 )
      *(_DWORD *)(a1 + 1064) |= 1u;
    *(_DWORD *)(a1 + 1108) = *(_DWORD *)(a1 + 1048);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    if ( ndisAoAcCapable
      || ndisAoAcTest
      || (v11 = *(_BYTE *)(a1 + 32), v11 <= 6u) && (v11 != 6 || *(_BYTE *)(a1 + 33) < 0x14u)
      || (unsigned int)(*(_DWORD *)(a1 + 1108) - 2) > 2
      || *(_WORD *)(a1 + 3684) == 0xFFFF
      || (v21 = *(_DWORD *)(a1 + 3912), (v21 & 0x30) == 0x10)
      || (v21 & 0x3000) == 0x2000
      || *(_DWORD *)(a1 + 464)
      || *(_DWORD *)(a1 + 1832) != 14
      || !*(_BYTE *)(a1 + 1288)
      || (*(_DWORD *)(a1 + 120) & 0x80u) != 0 )
    {
      *(_DWORD *)(a1 + 4420) &= ~8u;
    }
    else
    {
      *(_DWORD *)(a1 + 4420) |= 8u;
    }
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v10);
    v12 = *(_DWORD *)(a1 + 3912);
    v13 = *(_DWORD *)(a1 + 1028);
    *(_DWORD *)(a1 + 1088) = v13;
    if ( (v12 & 0xC0) == 0x40 )
    {
      v13 &= ~1u;
      *(_DWORD *)(a1 + 1088) = v13;
    }
    if ( (v12 & 0x300) == 0x100 )
    {
      v13 &= ~2u;
      *(_DWORD *)(a1 + 1088) = v13;
    }
    if ( (v12 & 0xC00) == 0x400 )
    {
      v13 &= ~0x80u;
      *(_DWORD *)(a1 + 1088) = v13;
    }
    if ( (v13 & 1) == 0 )
    {
      v22 = *(_DWORD *)(a1 + 3864);
      if ( (v22 & 0x10000000) != 0 && *(_DWORD *)(a1 + 3776) != 8 )
        *(_DWORD *)(a1 + 3864) = v22 | 0x100;
    }
    v14 = *(_DWORD *)(a1 + 3864);
    if ( (v14 & 0x10) == 0 )
    {
      v15 = *(_DWORD *)(a1 + 1040);
      if ( (unsigned int)(v15 - 2) <= 2 && ((v14 & 0x100) != 0 || (v12 & 0xC) != 4) )
      {
        *(_DWORD *)(a1 + 1068) = 2;
        *(_DWORD *)(a1 + 1100) = v15;
      }
      v16 = *(_DWORD *)(a1 + 1044);
      if ( (unsigned int)(v16 - 2) <= 2 && (v12 & 3) != 1 && (v14 & 0x100) == 0 )
      {
        v17 = *(_DWORD *)(a1 + 1008);
        v18 = *(_DWORD *)(a1 + 1068);
        if ( (v17 & 1) != 0 )
        {
          *(_DWORD *)(a1 + 1104) = v16;
          v18 |= 1u;
        }
        *(_DWORD *)(a1 + 1068) = v18 | v17 & 0xFFFFFFFC;
      }
    }
  }
  ndisConvertPMCapabilitiesToPnp(v1, (struct _NDIS_PNP_CAPABILITIES *)(a1 + 984));
  if ( *(_QWORD *)(a1 + 1064) != *(_QWORD *)((char *)&v23 + 4)
    || *(_DWORD *)(a1 + 1088) != HIDWORD(v24)
    || *(_QWORD *)(a1 + 1100) != *((_QWORD *)&v25 + 1)
    || *(_DWORD *)(a1 + 1108) != (_DWORD)v26 )
  {
    return 1;
  }
  return v2;
}
