/*
 * XREFs of Isoch_Stage_MapIntoRing @ 0x1C00311FC
 * Callers:
 *     Isoch_EvtDmaCallback @ 0x1C002E120 (Isoch_EvtDmaCallback.c)
 *     Isoch_MapStage @ 0x1C002E590 (Isoch_MapStage.c)
 * Callees:
 *     Controller_GetFrameNumber @ 0x1C000E6C0 (Controller_GetFrameNumber.c)
 *     Debug_FreAssertMsg @ 0x1C00157EC (Debug_FreAssertMsg.c)
 *     StageQueue_Release @ 0x1C0027C58 (StageQueue_Release.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C00281D8 (TR_AddTRBRangeToSecureTransferRing.c)
 *     TR_CalculateTDSize @ 0x1C002857C (TR_CalculateTDSize.c)
 *     TR_GetPacketCount @ 0x1C002911C (TR_GetPacketCount.c)
 *     TR_ReleaseSegments @ 0x1C0029718 (TR_ReleaseSegments.c)
 *     UsbDevice_DirectWriteDoorbell @ 0x1C002CF88 (UsbDevice_DirectWriteDoorbell.c)
 *     Isoch_GetPacketLength @ 0x1C002E438 (Isoch_GetPacketLength.c)
 *     Isoch_InsertLinkTrb @ 0x1C002E470 (Isoch_InsertLinkTrb.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0031034 (Isoch_Stage_FreeScatterGatherList.c)
 *     WPP_RECORDER_SF_DDqqDDD @ 0x1C0033740 (WPP_RECORDER_SF_DDqqDDD.c)
 *     XilUsbDevice_SendRequestToRingDoorbell @ 0x1C003975C (XilUsbDevice_SendRequestToRingDoorbell.c)
 */

KIRQL __fastcall Isoch_Stage_MapIntoRing(__int64 a1, char a2)
{
  __int64 v2; // rdi
  unsigned int v3; // r15d
  __int64 v6; // rbx
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int PacketLength; // eax
  _DWORD *v12; // r10
  __int64 v13; // r11
  __int64 v14; // rcx
  unsigned int v15; // r12d
  int FrameNumber; // r8d
  int v17; // r9d
  __int64 v18; // rsi
  KIRQL v19; // dl
  __int64 v20; // rax
  unsigned int v21; // r14d
  __int64 v22; // rdi
  unsigned int v23; // esi
  KIRQL result; // al
  unsigned int v25; // eax
  __int64 v26; // r13
  int v27; // esi
  char v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rax
  char v31; // dl
  unsigned int v32; // edi
  int v33; // r15d
  unsigned int v34; // ecx
  int v35; // eax
  int v36; // eax
  __int16 v37; // r15
  __int64 v38; // rax
  int v39; // r15d
  int v40; // ecx
  unsigned int v41; // r10d
  unsigned int v42; // eax
  bool v43; // zf
  unsigned int v44; // r9d
  int v45; // r15d
  int v46; // r8d
  __int64 v47; // rcx
  unsigned int v48; // r8d
  __int64 v49; // r10
  unsigned int v50; // r9d
  __int64 v51; // rcx
  __int64 v52; // rcx
  int v53; // r10d
  unsigned int v54; // r10d
  __int64 v55; // rax
  __int64 v56; // rax
  int v57; // eax
  int v58; // eax
  _QWORD *v59; // rax
  unsigned int v60; // r15d
  __int64 v61; // r9
  unsigned int v62; // eax
  __int64 v63; // rdx
  int v64; // ecx
  int v65; // edx
  int v66; // eax
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rdx
  unsigned int v70; // r8d
  unsigned int v71; // r10d
  int v72; // r9d
  unsigned int v73; // ecx
  unsigned int v74; // eax
  unsigned int v75; // r10d
  char inserted; // al
  __int64 v77; // r10
  unsigned int v78; // r9d
  __int64 v79; // r8
  signed __int32 v80[8]; // [rsp+0h] [rbp-C9h] BYREF
  unsigned int v81; // [rsp+20h] [rbp-A9h]
  _OWORD *v82; // [rsp+28h] [rbp-A1h]
  int v83; // [rsp+30h] [rbp-99h]
  unsigned int v84; // [rsp+60h] [rbp-69h]
  int v85; // [rsp+64h] [rbp-65h]
  unsigned int v86; // [rsp+68h] [rbp-61h]
  __int128 v87; // [rsp+70h] [rbp-59h]
  __int64 v88; // [rsp+80h] [rbp-49h]
  int v89; // [rsp+88h] [rbp-41h]
  unsigned int v90; // [rsp+8Ch] [rbp-3Dh]
  int v91; // [rsp+90h] [rbp-39h]
  unsigned int v92; // [rsp+94h] [rbp-35h]
  int v93; // [rsp+98h] [rbp-31h]
  int PacketCount; // [rsp+9Ch] [rbp-2Dh]
  __int64 v95; // [rsp+A0h] [rbp-29h]
  unsigned int v96; // [rsp+A8h] [rbp-21h]
  __int64 v97; // [rsp+B0h] [rbp-19h]
  __int64 v98; // [rsp+B8h] [rbp-11h]
  _DWORD *v99; // [rsp+C0h] [rbp-9h]
  __int64 v100; // [rsp+C8h] [rbp-1h]
  __int64 v101; // [rsp+D0h] [rbp+7h]
  _OWORD *v102; // [rsp+D8h] [rbp+Fh]
  char v103; // [rsp+130h] [rbp+67h]
  char v105; // [rsp+140h] [rbp+77h]
  unsigned int v106; // [rsp+148h] [rbp+7Fh]

  v2 = *(_QWORD *)a1;
  v3 = *(_DWORD *)(a1 + 40);
  v97 = *(_QWORD *)(a1 + 72);
  v6 = *(_QWORD *)(v2 + 56);
  v7 = *(_QWORD *)(v2 + 48) + 128LL;
  v88 = *(_QWORD *)(v97 + 16);
  v8 = *(_QWORD *)(v6 + 40);
  v98 = v2;
  v99 = (_DWORD *)v7;
  PacketCount = 0;
  v9 = *(_QWORD *)(v8 + 336) >> 33;
  v103 = 0;
  LOBYTE(v9) = (v9 & 1) == 0;
  v106 = v3;
  v100 = v9;
  v84 = *(_DWORD *)(v97 + 24);
  v89 = 0;
  v96 = 0;
  v95 = *(unsigned int *)(v6 + 192);
  *(_DWORD *)(a1 + 88) = v95;
  v10 = *(_QWORD *)(v6 + 56);
  v86 = 0;
  v85 = 0;
  v91 = 0;
  v90 = *(_DWORD *)(v10 + 152);
  v92 = 0;
  v93 = 0;
  PacketLength = Isoch_GetPacketLength(v2, v3);
  v14 = *(_QWORD *)(v6 + 40);
  v15 = PacketLength;
  if ( (*(_QWORD *)(v14 + 336) & 0x20000000000LL) != 0 )
  {
    v91 = *v12 + v3 / *(_DWORD *)(v6 + 356);
    FrameNumber = Controller_GetFrameNumber(v14, (int)v13 + 2, 0LL, 0LL);
    if ( FrameNumber - v91 >= 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDqqDDD(
          *(_QWORD *)(*(_QWORD *)(v6 + 56) + 80LL),
          *(unsigned __int8 *)(*(_QWORD *)(v6 + 48) + 135LL),
          FrameNumber,
          v17,
          v81,
          *(_BYTE *)(*(_QWORD *)(v6 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(v6 + 56) + 144LL),
          *(_QWORD *)(v2 + 24),
          a1,
          FrameNumber,
          v3,
          v91);
      Isoch_Stage_FreeScatterGatherList(v6, a1, a2);
      *(_BYTE *)(v6 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 96));
      v18 = *(_QWORD *)a1;
      if ( *(_BYTE *)(a1 + 56) )
      {
        IoFreeMdl(*(PMDL *)(a1 + 64));
        *(_QWORD *)(a1 + 64) = 0LL;
        *(_BYTE *)(a1 + 56) = 0;
      }
      TR_ReleaseSegments(v6, (unsigned __int64 *)(a1 + 8), 1);
      TR_ReleaseSegments(v6, (unsigned __int64 *)(a1 + 24), 0);
      StageQueue_Release((unsigned __int8 *)(v18 + 128), (unsigned __int8 *)a1);
      v19 = *(_BYTE *)(v6 + 104);
      *(_DWORD *)(v6 + 328) |= 0x10u;
      KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), v19);
      if ( *(_BYTE *)(v6 + 280) && a2 )
        KeLowerIrql(0);
      v20 = *(_QWORD *)(v6 + 56);
      v21 = *(_DWORD *)(v6 + 64);
      v22 = *(_QWORD *)(v20 + 16);
      v23 = *(_DWORD *)(v20 + 144);
      if ( *(_QWORD *)(v22 + 160) )
      {
        result = (unsigned __int8)UsbDevice_DirectWriteDoorbell(*(_QWORD *)(v20 + 16), v23, v21);
      }
      else
      {
        if ( *(_BYTE *)(*(_QWORD *)(v22 + 8) + 537LL) && KeGetCurrentIrql() )
          Debug_FreAssertMsg(
            (__int64)"Code Path Requires Passive Level",
            0,
            (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
            629);
        result = XilUsbDevice_SendRequestToRingDoorbell(v22 + 608, v23, v21);
      }
      if ( *(_BYTE *)(v6 + 280) )
      {
        if ( a2 )
          result = KfRaiseIrql(2u);
      }
      *(_DWORD *)(v6 + 352) = 1;
      return result;
    }
    v13 = 0LL;
  }
  v25 = *(_DWORD *)(v6 + 192);
  v26 = v13;
  v27 = 4;
  if ( v25 >= *(_DWORD *)(v6 + 196) )
  {
    v26 = *(_QWORD *)(v6 + 184) + 16LL * v25;
    Isoch_InsertLinkTrb(v6, (_QWORD *)a1, 4, 1);
    LOBYTE(v13) = 0;
    v95 = 0LL;
  }
  v28 = *(_BYTE *)(*(_QWORD *)(v6 + 40) + 538LL);
  v105 = v28;
  do
  {
    v29 = *(unsigned int *)(v6 + 192);
    v101 = v29;
    v30 = 16 * v29 + *(_QWORD *)(v6 + 184);
    v102 = (_OWORD *)v30;
    *(_QWORD *)&v87 = 0LL;
    if ( v26 )
      v30 = v26;
    *((_QWORD *)&v87 + 1) = 0LL;
    v26 = v30;
    if ( v27 < 4 )
      goto LABEL_84;
    if ( v27 > 5 )
    {
      if ( v27 <= 7 )
      {
        v34 = v106 + 1;
        *(_QWORD *)&v87 = 1LL;
        WORD1(v87) = v3;
        v33 = HIDWORD(v87) & 0xFFFF03DF | 0x1C20;
        DWORD1(v87) = *v99;
        HIDWORD(v87) = v33;
        v35 = v33;
        ++v106;
        if ( v27 == 7 || v34 == *(_DWORD *)(v2 + 96) )
        {
          v27 = 9;
          v13 = 0LL;
        }
        else
        {
          if ( (v34 & 0x7F) != 0 )
          {
            v33 = v33 & 0xFFFFFDFF | ((unsigned __int8)v100 << 9);
            HIDWORD(v87) = v35 & 0xFFFFFDFF | ((unsigned __int8)v100 << 9);
          }
          v85 = 0;
          v15 = Isoch_GetPacketLength(v2, v34);
          v27 = v13 + 4;
        }
      }
      else
      {
        if ( v27 == 10 )
        {
          v27 = 6;
          goto LABEL_32;
        }
        if ( v27 == 11 )
        {
          v27 = 7;
LABEL_32:
          v31 = 1;
          v32 = DWORD2(v87) & 0xFFC00000;
          v33 = 1042;
          v103 = 1;
          v13 = 0LL;
          HIDWORD(v87) = 1042;
          goto LABEL_87;
        }
LABEL_84:
        v33 = HIDWORD(v87);
        v13 = 0LL;
      }
      v32 = DWORD2(v87);
      goto LABEL_86;
    }
    if ( v27 == 4 )
    {
      v36 = *v99 + v3 / *(_DWORD *)(v6 + 356);
      v37 = *(_WORD *)v99 + v3 / *(_DWORD *)(v6 + 356);
      v91 = v36;
      v38 = *(_QWORD *)(v6 + 56);
      v39 = ((v37 & 0x7FF) << 20) | 0x1400;
      v40 = *(_DWORD *)(v38 + 148);
      v41 = v40 + 1;
      v42 = (v15 + (*(_WORD *)(v38 + 100) & 0x7FF) - 1) / (*(_WORD *)(v38 + 100) & 0x7FFu);
      v43 = v28 == 0;
      v44 = v42;
      if ( v43 )
      {
        if ( !v42 )
          v42 = 1;
        v39 |= (((unsigned __int8)((v40 + v42) / v41) - 1) & 3) << 7;
      }
      if ( !v44 )
        v44 = 1;
      if ( v44 % v41 )
        v40 = v44 % v41 - 1;
      v45 = (v39 ^ (v40 << 16)) & 0xF0000 ^ v39;
      PacketCount = TR_GetPacketCount(v6, v15);
    }
    else
    {
      v46 = DWORD2(v87);
      v45 = 1024;
    }
    if ( v84 <= v15 )
    {
      v47 = v86 + 1;
      v32 = v46 ^ (v84 ^ v46) & 0x1FFFF;
      *(_QWORD *)&v87 = v88;
      v15 -= v84;
      v86 = v47;
      v48 = *(_DWORD *)v97;
      if ( (unsigned int)v47 >= *(_DWORD *)v97 )
      {
        v49 = 0LL;
        v50 = 0;
      }
      else
      {
        v47 *= 3LL;
        v49 = *(_QWORD *)(v97 + 8 * v47 + 16);
        v50 = *(_DWORD *)(v97 + 8 * v47 + 24);
        LODWORD(v47) = v86;
      }
      v84 = v50;
      v88 = v49;
      if ( v85 + (v32 & 0x1FFFF) <= v90 )
      {
LABEL_65:
        if ( v15 )
        {
          v27 = 5;
          goto LABEL_68;
        }
      }
      else
      {
        v32 ^= (v32 ^ (v90 - v85)) & 0x1FFFF;
        if ( v15 )
        {
          while ( 1 )
          {
            if ( v50 > v15 )
            {
              v50 -= v15;
              v49 += v15;
              v15 = 0;
            }
            else
            {
              v51 = (unsigned int)(v47 + 1);
              v15 -= v50;
              v86 = v51;
              if ( (unsigned int)v51 >= v48 )
              {
                v88 = 0LL;
                v84 = 0;
                goto LABEL_65;
              }
              v52 = 3 * v51;
              v49 = *(_QWORD *)(v97 + 8 * v52 + 16);
              v50 = *(_DWORD *)(v97 + 8 * v52 + 24);
            }
            v84 = v50;
            v88 = v49;
            if ( !v15 )
              break;
            LODWORD(v47) = v86;
          }
        }
      }
      v27 = 7 - (*(_DWORD *)(a1 + 44) != v106);
LABEL_68:
      v53 = v85;
      goto LABEL_72;
    }
    v32 = v46 ^ (v15 ^ v46) & 0x1FFFF;
    *(_QWORD *)&v87 = v88;
    v84 -= v15;
    v88 += v15;
    v53 = v85;
    if ( v85 + (v32 & 0x1FFFF) > v90 )
      v32 ^= (v32 ^ (v90 - v85)) & 0x1FFFF;
    v27 = 6;
LABEL_72:
    v54 = (v32 & 0x1FFFF) + v53;
    v85 = v54;
    if ( !(_BYTE)v13 )
      v32 ^= (v32 ^ ((unsigned int)TR_CalculateTDSize(v6, PacketCount, v54, (unsigned int)(v27 - 6) <= 1) << 17)) & 0x3E0000;
    v55 = *(_QWORD *)(v6 + 40);
    v33 = v45 | 0x10;
    HIDWORD(v87) = v33;
    v13 = 0LL;
    if ( (*(_QWORD *)(v55 + 336) & 0x800000000000LL) != 0 )
    {
      v56 = *(_QWORD *)(v6 + 48);
      if ( *(_DWORD *)(v56 + 20) == 1 )
      {
        if ( *(_DWORD *)(v56 + 40) )
        {
          if ( v27 == 6 )
          {
            if ( (unsigned int)(*(_DWORD *)(v6 + 196) - v101 - 1) >= *(_DWORD *)(v6 + 432) )
              goto LABEL_83;
            v27 = 10;
          }
          if ( v27 == 7 )
            v27 = 11;
        }
      }
    }
    if ( (unsigned int)(v27 - 6) <= 1 )
    {
LABEL_83:
      v33 |= 2u;
      HIDWORD(v87) = v33;
    }
LABEL_86:
    v31 = v103;
LABEL_87:
    if ( v102 != (_OWORD *)v26 )
      HIDWORD(v87) = (v33 ^ *(_DWORD *)(v6 + 200)) & 1 ^ v33;
    v57 = *(unsigned __int16 *)(v6 + 112);
    ++v89;
    DWORD2(v87) = v32 & 0x3FFFFF | (v57 << 22);
    *v102 = v87;
    v58 = ++*(_DWORD *)(v6 + 192);
    if ( v31 )
    {
      Isoch_InsertLinkTrb(v6, (_QWORD *)a1, 5, 0);
      v58 = *(_DWORD *)(v6 + 192);
      v13 = 0LL;
      v103 = 0;
    }
    if ( v27 != 9 && v27 != 4 )
    {
      v60 = v106;
      v69 = v97;
LABEL_111:
      v72 = v93;
      v70 = v92;
      v71 = v95;
      goto LABEL_112;
    }
    *(_DWORD *)(a1 + 104) = v58;
    v59 = (_QWORD *)(*(_QWORD *)(v6 + 184) + 16LL * *(unsigned int *)(v6 + 192));
    *v59 = 0LL;
    v59[1] = 0LL;
    if ( v27 == 9 || *(_BYTE *)(v6 + 333) != (_BYTE)v13 )
    {
      v60 = v106;
      *(_BYTE *)(v6 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 96));
      if ( v27 == 9 )
      {
        v61 = v98;
        v62 = v106 - *(_DWORD *)(v98 + 108);
        ++*(_DWORD *)(v98 + 116);
        v63 = *(_QWORD *)(v61 + 48);
        *(_DWORD *)(v61 + 104) = v62;
        v64 = *(_DWORD *)(a1 + 44);
        if ( v64 == *(_DWORD *)(v61 + 96) - 1 )
          v65 = *(_DWORD *)(v61 + 80) - *(_DWORD *)(v63 + 12LL * *(unsigned int *)(a1 + 40) + 140);
        else
          v65 = *(_DWORD *)(v63 + 12LL * (unsigned int)(v64 + 1) + 140)
              - *(_DWORD *)(v63 + 12LL * *(unsigned int *)(a1 + 40) + 140);
        *(_DWORD *)(v61 + 88) += v65;
        ++*(_DWORD *)(v6 + 376);
        v66 = v91;
        *(_DWORD *)(v6 + 328) |= 0x20u;
        *(_DWORD *)(v6 + 364) = v66;
      }
      else if ( !*(_BYTE *)(v6 + 333) )
      {
LABEL_102:
        KeReleaseSpinLock((PKSPIN_LOCK)(v6 + 96), *(_BYTE *)(v6 + 104));
        v13 = 0LL;
        goto LABEL_104;
      }
      *(_DWORD *)(v6 + 328) |= 0x11u;
      goto LABEL_102;
    }
    v60 = v106;
LABEL_104:
    *(_BYTE *)(v26 + 12) ^= 1u;
    _InterlockedOr(v80, v13);
    v26 = v13;
    if ( *(_BYTE *)(v6 + 333) != (_BYTE)v13 )
    {
      v67 = *(_QWORD *)(v6 + 56);
      v68 = *(unsigned int *)(v6 + 64);
      *(_BYTE *)(v6 + 333) = v13;
      UsbDevice_DirectWriteDoorbell(*(_QWORD *)(v67 + 16), *(unsigned int *)(v67 + 144), v68);
      LODWORD(v13) = 0;
    }
    v69 = v97;
    if ( v27 == 9 )
      goto LABEL_111;
    v70 = v86;
    v92 = v86;
    if ( v86 < *(_DWORD *)v97 )
      v96 = v88 - *(_DWORD *)(v97 + 24LL * v86 + 16);
    v71 = *(_DWORD *)(v6 + 192);
    v72 = v89;
    v95 = v71;
    v93 = v89;
LABEL_112:
    v73 = *(_DWORD *)(v6 + 192);
    if ( v73 == *(_DWORD *)(v6 + 196) )
    {
      if ( v27 == 9 )
        goto LABEL_121;
      if ( v27 != 4 )
      {
        *(_DWORD *)(v6 + 192) = v71;
        v86 = v70;
        v89 = v72;
        v74 = *(_DWORD *)(v69 + 24LL * v70 + 24) - v96;
        v85 = v13;
        v84 = v74;
        v88 = *(_QWORD *)(v69 + 24LL * v70 + 16) + v96;
        v15 = Isoch_GetPacketLength(v98, v60);
        v27 = 4;
        v73 = v75;
      }
      v26 = *(_QWORD *)(v6 + 184) + 16LL * v73;
      inserted = Isoch_InsertLinkTrb(v6, (_QWORD *)a1, v27, 1);
      v77 = v95;
      LOBYTE(v13) = 0;
      if ( inserted )
        v77 = 0LL;
      v95 = v77;
    }
    v2 = v98;
    v3 = v106;
    v28 = v105;
  }
  while ( v27 != 9 );
  v73 = *(_DWORD *)(v6 + 192);
LABEL_121:
  v78 = *(_DWORD *)(a1 + 88);
  LOBYTE(v83) = a2;
  v79 = *(_QWORD *)(a1 + 96);
  v82 = (_OWORD *)(a1 + 128);
  v81 = v73;
  *(_DWORD *)(a1 + 104) = v73;
  TR_AddTRBRangeToSecureTransferRing(v6, (_QWORD *)(a1 + 24), v79, v78, v81, v82, v83);
  return (unsigned __int8)UsbDevice_DirectWriteDoorbell(
                            *(_QWORD *)(*(_QWORD *)(v6 + 56) + 16LL),
                            *(unsigned int *)(*(_QWORD *)(v6 + 56) + 144LL),
                            *(unsigned int *)(v6 + 64));
}
