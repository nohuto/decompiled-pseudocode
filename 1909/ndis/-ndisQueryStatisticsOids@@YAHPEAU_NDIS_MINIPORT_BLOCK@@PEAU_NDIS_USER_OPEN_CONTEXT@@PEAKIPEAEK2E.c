/*
 * XREFs of ?ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E3@Z @ 0x1C000A244
 * Callers:
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?ndisValidOid@@YAEPEAU_NDIS_USER_OPEN_CONTEXT@@K@Z @ 0x1C001203C (-ndisValidOid@@YAEPEAU_NDIS_USER_OPEN_CONTEXT@@K@Z.c)
 *     ndisQueryDeviceOid @ 0x1C00121B0 (ndisQueryDeviceOid.c)
 *     ndisCheckForHangSupported @ 0x1C001CA14 (ndisCheckForHangSupported.c)
 *     ndisIsSatisfiedByOidGenStatistics @ 0x1C003F414 (ndisIsSatisfiedByOidGenStatistics.c)
 *     ndisVerifierInitialization @ 0x1C003F6B0 (ndisVerifierInitialization.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisQueryStatisticsOids(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_USER_OPEN_CONTEXT *a2,
        unsigned int *a3,
        unsigned int a4,
        unsigned __int8 *a5,
        SIZE_T NumberOfBytes,
        unsigned int *a7,
        unsigned __int8 a8,
        unsigned __int8 *a9)
{
  unsigned int v10; // r14d
  unsigned __int8 *PoolWithTag; // r12
  int v12; // edx
  unsigned int v13; // edi
  unsigned int v14; // r13d
  unsigned __int8 *v15; // rcx
  __int64 v16; // rdx
  int (__fastcall *v17)(void *, unsigned __int8 *); // r9
  __int64 v18; // rbx
  unsigned int v19; // r14d
  int *p_Src; // rsi
  unsigned int v21; // r11d
  unsigned int v22; // ecx
  unsigned int v23; // ebx
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // eax
  unsigned int v25; // r9d
  unsigned __int8 *v26; // r10
  unsigned __int8 *v27; // rax
  int v29; // ecx
  unsigned __int8 valid; // al
  __int64 v31; // r8
  __int64 v32; // r10
  unsigned int IsSatisfiedByOidGenStatistics; // eax
  __int64 v34; // rsi
  unsigned int DeviceOid; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  LONGLONG v38; // rbx
  unsigned int Flags; // eax
  unsigned int InfoFlags; // ecx
  unsigned int PnPFlags; // eax
  unsigned __int8 MajorNdisVersion; // r8
  __int64 v43; // rdx
  unsigned __int8 v44; // r8
  unsigned __int8 v45; // r10
  int InternalResetCount; // eax
  int MiniportResetCount; // ecx
  unsigned int v48; // r8d
  __int64 v49; // rax
  int v50; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v51; // [rsp+44h] [rbp-BCh]
  char v52; // [rsp+48h] [rbp-B8h]
  unsigned int v53; // [rsp+4Ch] [rbp-B4h]
  int v54; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 *v55; // [rsp+58h] [rbp-A8h]
  int v56; // [rsp+60h] [rbp-A0h]
  unsigned int v57; // [rsp+64h] [rbp-9Ch]
  unsigned __int8 *v58; // [rsp+68h] [rbp-98h]
  __int64 v59; // [rsp+70h] [rbp-90h] BYREF
  __int64 i; // [rsp+78h] [rbp-88h]
  _NDIS_PHYSICAL_MEDIUM Src; // [rsp+80h] [rbp-80h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h]
  struct _NDIS_USER_OPEN_CONTEXT *v63; // [rsp+90h] [rbp-70h]
  unsigned int *v64; // [rsp+98h] [rbp-68h]
  unsigned int *v65; // [rsp+A0h] [rbp-60h]
  _BYTE v66[160]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v67[64]; // [rsp+150h] [rbp+50h] BYREF

  v64 = a3;
  v63 = a2;
  v55 = a5;
  v51 = NumberOfBytes;
  v65 = a7;
  v58 = a9;
  v57 = a4;
  memset(v67, 0, 0xF8uLL);
  v53 = 0;
  P = 0LL;
  v10 = 0;
  v59 = 0LL;
  PoolWithTag = 0LL;
  v50 = 0;
  v52 = 0;
  memset(v66, 0, 0x98uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      11,
      33,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      (char)a1);
  }
  *a7 = 0;
  v13 = 0;
  if ( a8 )
  {
    v14 = 12;
    v15 = a5;
  }
  else
  {
    PoolWithTag = (unsigned __int8 *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6D61444Eu);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      *a9 = 0;
      return 3221225626LL;
    }
    v14 = 8;
    v15 = PoolWithTag;
  }
  memset(v15, 0, (unsigned int)NumberOfBytes);
  LODWORD(v17) = 0;
  v56 = 0;
  if ( !v57 )
  {
    v27 = v58;
    goto LABEL_26;
  }
  v18 = 0LL;
  for ( i = 0LL; ; v18 = i )
  {
    v19 = 0;
    p_Src = 0LL;
    memset(v67, 0, 0xF8uLL);
    v21 = v51;
    if ( v51 < v14 + 4 )
      break;
    v22 = v64[v18];
    v23 = v22 & 0x7FFFFFFF;
    if ( (v22 & 0xFF000000) != 0x80000000 )
      v23 = v22;
    if ( v23 == 66050
      || v23 - 131603 <= 5 && (v29 = 55, _bittest(&v29, v23 - 131603))
      || v23 == 0xFFFFFF
      || v23 == 65796
      || v23 == -50265850 )
    {
      LODWORD(v17) = 0;
      v13 = 0;
      if ( v23 == 66050 )
      {
        PhysicalMediumType = a1->PhysicalMediumType;
        p_Src = (int *)&Src;
        if ( PhysicalMediumType == NdisPhysicalMedium802_3 )
          PhysicalMediumType = NdisPhysicalMediumUnspecified;
        Src = PhysicalMediumType;
        goto LABEL_16;
      }
      if ( v23 == 65796 )
      {
        p_Src = (int *)&a1->MediaType;
        goto LABEL_16;
      }
      if ( v23 == 131603 )
      {
        p_Src = (int *)&a1->InitTimeMs;
        goto LABEL_16;
      }
      if ( v23 == 131604 )
      {
        MiniportResetCount = a1->MiniportResetCount;
        InternalResetCount = a1->InternalResetCount;
      }
      else
      {
        if ( v23 != 131605 )
        {
          if ( v23 == 131607 )
          {
            Flags = a1->Flags;
            InfoFlags = a1->InfoFlags;
            v50 = InfoFlags;
            if ( (Flags & 0x10) != 0 )
            {
              InfoFlags |= 0x1000000u;
              v50 = InfoFlags;
            }
            if ( (Flags & 0x20000) != 0 )
            {
              InfoFlags |= 0x400u;
              v50 = InfoFlags;
            }
            if ( (Flags & 0x4000000) != 0 )
            {
              InfoFlags |= 0x2000u;
              v50 = InfoFlags;
            }
            PnPFlags = a1->PnPFlags;
            if ( (PnPFlags & 1) != 0 )
            {
              InfoFlags |= 0x8000u;
              v50 = InfoFlags;
            }
            if ( (PnPFlags & 0x1000) != 0 )
            {
              InfoFlags |= 0x40000u;
              v50 = InfoFlags;
            }
            if ( (PnPFlags & 0x2000) != 0 )
            {
              InfoFlags |= 0x80000u;
              v50 = InfoFlags;
            }
            if ( (PnPFlags & 0x200000) != 0 )
            {
              InfoFlags |= 0x400000u;
              v50 = InfoFlags;
            }
            if ( (PnPFlags & 0x400000) != 0 )
            {
              InfoFlags |= 2u;
              v50 = InfoFlags;
            }
            if ( a1->PagingPathCount > 0 )
            {
              InfoFlags |= 0x40000000u;
              v50 = InfoFlags;
            }
            MajorNdisVersion = a1->MajorNdisVersion;
            if ( MajorNdisVersion < 6u && a1->DriverHandle->MiniportCharacteristics.CancelSendPacketsHandler
              || (v43 = InfoFlags, MajorNdisVersion >= 6u)
              && a1->DriverHandle->MiniportDriverCharacteristics.CancelSendHandler )
            {
              v43 = InfoFlags;
              LODWORD(v43) = InfoFlags | 0x800000;
              v50 = InfoFlags | 0x800000;
            }
            if ( (unsigned __int8)ndisCheckForHangSupported(a1, v43) )
            {
              LODWORD(v16) = v16 | 0x80;
              v50 = v16;
            }
            if ( v44 >= v45 && a1->DriverHandle->MiniportDriverCharacteristics.ResetHandlerEx != v17 )
            {
              LODWORD(v16) = v16 | 8;
              v50 = v16;
            }
            p_Src = &v50;
          }
          else
          {
            switch ( v23 )
            {
              case 0x20218u:
                memmove((char *)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine + 4, &v55[v14], 4uLL);
                p_Src = 0LL;
                ndisVerifierInitialization();
                if ( (BYTE4(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) & 4) == 0 )
                  ndisVerifierLevel &= ~4u;
                v67[13] = 4;
                break;
              case 0xFFFFFFu:
                v59 = MEMORY[0xFFFFF78000000320];
                v38 = MEMORY[0xFFFFF78000000320] - a1->StartTicks.QuadPart;
                p_Src = (int *)&v59;
                v16 = v38 * KeQueryTimeIncrement() / 10000000;
                v59 = v16;
                break;
              case 0xFD010106:
                p_Src = (int *)&a1->WakeUpEnable;
                goto LABEL_16;
              default:
                goto LABEL_23;
            }
            v21 = v51;
            LODWORD(v17) = 0;
          }
LABEL_16:
          v19 = 4;
LABEL_17:
          if ( p_Src )
          {
            if ( v19 > v21 - v14 )
            {
              v13 = -1073676268;
LABEL_24:
              v27 = v58;
              goto LABEL_25;
            }
            memmove(&v55[v14], p_Src, v19);
          }
          goto LABEL_20;
        }
        InternalResetCount = a1->MediaSenseDisconnectCount;
        MiniportResetCount = a1->MediaSenseConnectCount << 16;
      }
      p_Src = &v54;
      v54 = InternalResetCount + MiniportResetCount;
      goto LABEL_16;
    }
    valid = ndisValidOid(v63, v23);
    LODWORD(v17) = 0;
    if ( !valid )
      goto LABEL_23;
    if ( v23 == 16843010 )
    {
      v23 = 67174658;
      if ( a1->MediaType != NdisMediumWan )
        v23 = 16843010;
    }
    else if ( v23 == 16843009 )
    {
      v23 = 16843009;
      if ( a1->MediaType == NdisMediumWan )
        v23 = 67174657;
    }
    if ( (a1->PnPFlags & 0x800) != 0 )
    {
      v13 = -1073676282;
      goto LABEL_58;
    }
    if ( a8 )
      PoolWithTag = &v55[v14];
    if ( a1->MajorNdisVersion < 6u
      || (IsSatisfiedByOidGenStatistics = ndisIsSatisfiedByOidGenStatistics(v23, v16, v31, 0LL),
          (v34 = IsSatisfiedByOidGenStatistics) == 0)
      && v23 != 131334 )
    {
      DeviceOid = ndisQueryDeviceOid(v32, v67, v23, PoolWithTag, v21 - v14);
      v17 = 0LL;
      v13 = DeviceOid;
      v19 = 0;
      if ( !DeviceOid )
        v19 = v67[13];
      goto LABEL_55;
    }
    v19 = 152;
    if ( v52 == (_BYTE)v17 )
    {
      memset(v66, 0, 0x98uLL);
      v36 = ndisQueryDeviceOid(v63, v67, 131334LL, v66, 152);
      v21 = v51;
      v17 = 0LL;
      v13 = v36;
      if ( v36 )
        goto LABEL_71;
      v52 = 1;
    }
    v37 = v21 - v14;
    if ( v23 == 131334 )
    {
      if ( v37 >= 0x98 )
      {
        memmove(PoolWithTag, v66, 0x98uLL);
LABEL_72:
        v17 = 0LL;
LABEL_55:
        v21 = v51;
        goto LABEL_56;
      }
    }
    else if ( v37 >= 8 )
    {
      memmove(PoolWithTag, &v66[v34], 8uLL);
      v19 = 8;
      goto LABEL_72;
    }
    v13 = -1073676268;
LABEL_71:
    v19 = (unsigned int)v17;
LABEL_56:
    p_Src = (int *)v17;
    if ( a8 == (_BYTE)v17 )
      p_Src = (int *)PoolWithTag;
LABEL_58:
    if ( v13 )
      goto LABEL_24;
    if ( v19 )
      goto LABEL_17;
LABEL_20:
    v25 = v19 + v14;
    v26 = v55;
    *(_DWORD *)v55 = v64[i];
    *((_DWORD *)v26 + 1) = v19;
    if ( a8 )
    {
      v48 = (v25 + 7) & 0xFFFFFFF8;
      v49 = v25;
      if ( v51 - v14 - 4 >= v48 )
      {
        v49 = v48;
        v25 = (v25 + 7) & 0xFFFFFFF8;
      }
      LODWORD(v16) = v49;
      v51 -= v25;
      v53 += v49;
      v55 = &v26[v49];
      *((_DWORD *)v26 + 2) = v49;
    }
    else
    {
      v51 -= v25;
      v53 += v25;
      v55 = &v26[v25];
    }
    LODWORD(v17) = 0;
LABEL_23:
    ++i;
    if ( ++v56 >= v57 )
      goto LABEL_24;
    PoolWithTag = (unsigned __int8 *)P;
  }
  v27 = v58;
  LODWORD(v17) = 0;
  v13 = -1073676268;
  *v58 = 0;
LABEL_25:
  v10 = v53;
LABEL_26:
  *v65 = v10;
  if ( *v27 != (_BYTE)v17 && v13 == -1073741637 )
    v13 = (unsigned int)v17;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v16,
      11,
      34,
      (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
      (char)a1,
      v13);
  }
  return v13;
}
