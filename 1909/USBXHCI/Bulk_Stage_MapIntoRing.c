/*
 * XREFs of Bulk_Stage_MapIntoRing @ 0x1C0036F00
 * Callers:
 *     Bulk_EvtDmaCallback @ 0x1C0034490 (Bulk_EvtDmaCallback.c)
 *     Bulk_MapStage @ 0x1C0034954 (Bulk_MapStage.c)
 * Callees:
 *     memmove @ 0x1C0008A40 (memmove.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C00281D8 (TR_AddTRBRangeToSecureTransferRing.c)
 *     TR_CalculateTDSize @ 0x1C002857C (TR_CalculateTDSize.c)
 *     TR_GetPacketCount @ 0x1C002911C (TR_GetPacketCount.c)
 *     UsbDevice_DirectWriteDoorbell @ 0x1C002CF88 (UsbDevice_DirectWriteDoorbell.c)
 *     Bulk_InsertLinkTrb @ 0x1C0034720 (Bulk_InsertLinkTrb.c)
 *     WPP_RECORDER_SF_DDDDq @ 0x1C00388C4 (WPP_RECORDER_SF_DDDDq.c)
 *     WPP_RECORDER_SF_DDDDqDD @ 0x1C0038A00 (WPP_RECORDER_SF_DDDDqDD.c)
 */

int *__fastcall Bulk_Stage_MapIntoRing(unsigned __int64 a1, char a2)
{
  _DWORD *v2; // r13
  unsigned int v3; // r8d
  __int64 v5; // rdi
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // r12d
  unsigned int v13; // r12d
  int PacketCount; // eax
  unsigned int v15; // r9d
  int v16; // r8d
  __int64 v17; // r10
  int v18; // ebx
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rax
  char v23; // r9
  unsigned int v24; // r10d
  unsigned int v25; // ecx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r11
  unsigned int v31; // esi
  unsigned int v32; // r14d
  int v33; // ecx
  unsigned int v34; // r14d
  int v35; // ecx
  int v36; // ecx
  unsigned int v37; // ecx
  __int64 v38; // rax
  unsigned int v39; // r8d
  __int64 v40; // rdx
  unsigned int v41; // esi
  int v42; // eax
  unsigned int v43; // ebx
  int v44; // eax
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rdx
  _QWORD *v48; // rax
  KIRQL v49; // dl
  signed __int32 v51[8]; // [rsp+0h] [rbp-89h] BYREF
  int v52; // [rsp+20h] [rbp-69h]
  unsigned int v53; // [rsp+60h] [rbp-29h]
  int v54; // [rsp+64h] [rbp-25h]
  int v55; // [rsp+68h] [rbp-21h]
  __int64 v56; // [rsp+70h] [rbp-19h]
  __int64 v57; // [rsp+78h] [rbp-11h]
  __int64 v58; // [rsp+80h] [rbp-9h]
  _OWORD *v59; // [rsp+88h] [rbp-1h]
  __int128 v60; // [rsp+90h] [rbp+7h] BYREF
  int v61; // [rsp+F0h] [rbp+67h]
  unsigned int v63; // [rsp+100h] [rbp+77h]
  unsigned int v64; // [rsp+108h] [rbp+7Fh]

  v2 = *(_DWORD **)a1;
  v3 = *(_DWORD *)(a1 + 40);
  v63 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 56LL);
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v7 = *(_QWORD *)(v5 + 40);
  v8 = *(_QWORD *)(v7 + 456);
  v9 = *(_QWORD *)(v7 + 336);
  v56 = v8;
  if ( (v9 & 0x400000000LL) != 0
    && (v10 = *(_QWORD *)(v5 + 48), *(_DWORD *)(v10 + 40))
    && (v11 = *(_QWORD *)(v5 + 56), *(char *)(v11 + 98) < 0)
    && *(_DWORD *)(v10 + 20) <= 1u
    && (v12 = *(_WORD *)(v11 + 100) & 0x7FF, v3 % v12) )
  {
    v13 = v12 - v3 % v12;
  }
  else
  {
    v13 = 0;
  }
  v54 = *(_DWORD *)(v6 + 32) & 1;
  PacketCount = TR_GetPacketCount(v5, v3);
  v15 = *(_DWORD *)(a1 + 80);
  v16 = 5;
  *(_DWORD *)(a1 + 88) = v17;
  v18 = 5;
  v19 = *(unsigned int *)(v5 + 192);
  v55 = PacketCount;
  v20 = *(_QWORD *)(v5 + 40);
  v21 = *(_QWORD *)(v5 + 184) + 16 * v19;
  v58 = v17;
  v22 = *(_QWORD *)(v20 + 336);
  v64 = v17;
  v53 = v17;
  v57 = v21;
  v61 = v15;
  if ( (v22 & 8) != 0 )
  {
    v23 = 1;
LABEL_25:
    Bulk_InsertLinkTrb(v5, (_QWORD *)a1, v16, v23);
    v15 = v61;
    goto LABEL_11;
  }
  do
  {
    while ( 1 )
    {
LABEL_11:
      v24 = *(_DWORD *)(v5 + 192);
      v25 = *(_DWORD *)(v5 + 196);
      v26 = *(_QWORD *)(v5 + 184) + 16LL * v24;
      v60 = 0uLL;
      v59 = (_OWORD *)v26;
      if ( v24 + v15 > v25 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_DDDDq(
            *(_QWORD *)(*(_QWORD *)(v5 + 56) + 80LL),
            *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL),
            v16,
            17,
            v52,
            *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(v5 + 56) + 144LL),
            *(_DWORD *)(v5 + 64),
            v24,
            v26);
        Bulk_InsertLinkTrb(v5, (_QWORD *)a1, v18, v26 == v21);
        v15 = v61;
        goto LABEL_75;
      }
      if ( (*(_QWORD *)(*(_QWORD *)(v5 + 40) + 336LL) & 0x2000000000000LL) != 0
        && (v27 = *(_QWORD *)(v5 + 48), *(_DWORD *)(v27 + 20) == 3)
        && (v28 = *(_QWORD *)(v5 + 56), *(_DWORD *)(v28 + 120) == 6) )
      {
        if ( v18 == 7 && v24 + 9 > v25 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_DDDDq(
              *(_QWORD *)(v28 + 80),
              *(unsigned __int8 *)(v27 + 135),
              v28,
              18,
              v52,
              *(_BYTE *)(v27 + 135),
              *(_DWORD *)(v28 + 144),
              *(_DWORD *)(v5 + 64),
              v24,
              v26);
          }
          v16 = 7;
          v23 = v26 == v21;
          goto LABEL_25;
        }
      }
      else
      {
        v28 = *(_QWORD *)(v5 + 56);
      }
      v29 = v28;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_DDDDqDD(
          *(_QWORD *)(v28 + 80),
          v28,
          v28,
          v15,
          v52,
          *(_BYTE *)(*(_QWORD *)(v5 + 48) + 135LL),
          *(_DWORD *)(v28 + 144),
          *(_DWORD *)(v5 + 64),
          v24,
          v26,
          *(_DWORD *)(a1 + 88),
          v15);
        v29 = *(_QWORD *)(v5 + 56);
        v15 = v61;
      }
      v16 = 5;
      if ( v18 == 5 )
      {
        v33 = v2[19];
        v34 = HIDWORD(v60) & 0xFFFF03FF | 0x400;
        HIDWORD(v60) = v34;
        if ( v33 )
        {
          v35 = v33 - 1;
          if ( v35 )
          {
            v36 = v35 - 1;
            if ( v36 )
            {
              if ( v36 == 1 )
              {
                v37 = v64;
                if ( v64 )
                {
                  v40 = v58;
                  v39 = v63;
                }
                else
                {
                  v38 = *(_QWORD *)(a1 + 56);
                  v39 = v63;
                  v40 = *(_QWORD *)(v38 + 24LL * v63 + 16);
                  v37 = *(_DWORD *)(v38 + 24LL * v63 + 24);
                  v58 = v40;
                }
                *(_QWORD *)&v60 = v40;
                if ( v37 > 0x10000 )
                {
                  v58 = v40 + 0x10000;
                  v41 = DWORD2(v60) & 0xFFFE0000 | 0x10000;
                  v18 = 5;
                  v64 = v37 - 0x10000;
                }
                else
                {
                  v64 = 0;
                  v18 = 7;
                  v41 = (v37 ^ DWORD2(v60)) & 0x1FFFF ^ DWORD2(v60);
                  v63 = v39 + 1;
                  if ( **(_DWORD **)(a1 + 56) != v39 + 1 )
                    v18 = 5;
                }
              }
              else
              {
                v41 = DWORD2(v60);
              }
              goto LABEL_54;
            }
            if ( !v54 )
              memmove(*(void **)(*(_QWORD *)(a1 + 72) + 16LL), *(const void **)(a1 + 64), *(unsigned int *)(a1 + 40));
            v42 = DWORD2(v60) ^ *(_DWORD *)(a1 + 40);
            *(_QWORD *)&v60 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL);
            v41 = v42 & 0x1FFFF ^ DWORD2(v60);
          }
          else
          {
            v43 = *(_DWORD *)(a1 + 40);
            memmove(&v60, *(const void **)(a1 + 64), v43);
            v34 = HIDWORD(v60) | 0x40;
            v41 = (DWORD2(v60) ^ v43) & 0x1FFFF ^ DWORD2(v60);
          }
        }
        else
        {
          v41 = DWORD2(v60) & 0xFFFE0000;
        }
        v18 = 7;
LABEL_54:
        v53 += v41 & 0x1FFFF;
        v44 = TR_CalculateTDSize(v5, v55, v53, v18 == 7);
        v32 = v34 | 0x10;
        v30 = v56;
        v16 = 5;
        v31 = (v41 ^ (v44 << 17)) & 0x3E0000 ^ v41;
        v15 = v61 - 1;
        goto LABEL_55;
      }
      v30 = v56;
      v31 = DWORD2(v60);
      if ( v18 == 7 )
      {
        v18 = 9;
        *(_QWORD *)&v60 = a1 ^ ((unsigned __int8)a1 ^ *(_BYTE *)(v29 + 99)) & 3;
        v32 = HIDWORD(v60) & 0xFFFF03DF | 0x1C20;
        goto LABEL_56;
      }
      *(_QWORD *)&v60 = *(_QWORD *)(v56 + 24);
      v31 = v13 & 0x1FFFF | DWORD2(v60) & 0xFFC00000;
      v32 = HIDWORD(v60) & 0xFFFF03EF | 0x410;
      --v15;
      v13 = 0;
      v18 = 7;
LABEL_55:
      v61 = v15;
LABEL_56:
      HIDWORD(v60) = v32;
      v45 = *(_DWORD *)(a1 + 88) + 1;
      *(_DWORD *)(a1 + 88) = v45;
      if ( v18 == 7 )
      {
        if ( v13 && v30 )
        {
          v18 = 8;
          v31 ^= (v31 ^ ((v31 & 0xFFFE0000) + 0x20000)) & 0x3E0000;
          goto LABEL_66;
        }
        v32 |= 2u;
        v15 = 1;
        HIDWORD(v60) = v32;
        v61 = 1;
      }
      if ( v18 == 5 && !v15 )
      {
        v15 = *(_DWORD *)(a1 + 84) - v45;
        if ( *(_DWORD *)(a1 + 80) < v15 )
          v15 = *(_DWORD *)(a1 + 80);
        v61 = v15;
      }
LABEL_66:
      if ( v59 != (_OWORD *)v57 )
        HIDWORD(v60) = ((unsigned __int8)v32 ^ (unsigned __int8)*(_DWORD *)(v5 + 200)) & 1 ^ v32;
      DWORD2(v60) = v31 & 0x3FFFFF | (*(unsigned __int16 *)(v5 + 112) << 22);
      *v59 = v60;
      v46 = (unsigned int)++*(_DWORD *)(v5 + 192);
      if ( v18 == 9 )
        break;
      v21 = v57;
    }
    if ( (*(_QWORD *)(*(_QWORD *)(v5 + 40) + 336LL) & 0x2000000000000LL) == 0
      || *(_DWORD *)(*(_QWORD *)(v5 + 48) + 20LL) != 3
      || *(_DWORD *)(*(_QWORD *)(v5 + 56) + 120LL) != 6 )
    {
      break;
    }
    v47 = 8LL;
    do
    {
      v60 = 0uLL;
      HIDWORD(v60) = *(_DWORD *)(v5 + 200) & 1 | 0x2000;
      *(_OWORD *)(*(_QWORD *)(v5 + 184) + 16 * v46) = v60;
      v46 = (unsigned int)++*(_DWORD *)(v5 + 192);
      --v47;
    }
    while ( v47 );
    v21 = v57;
LABEL_75:
    ;
  }
  while ( v18 != 9 );
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(v5 + 192);
  v48 = (_QWORD *)(*(_QWORD *)(v5 + 184) + 16LL * *(unsigned int *)(v5 + 192));
  *v48 = 0LL;
  v48[1] = 0LL;
  *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  ++v2[30];
  v2[28] += *(_DWORD *)(a1 + 40);
  v49 = *(_BYTE *)(v5 + 104);
  ++*(_DWORD *)(v5 + 348);
  *(_DWORD *)(v5 + 324) |= 1u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), v49);
  *(_BYTE *)(v57 + 12) ^= 1u;
  _InterlockedOr(v51, 0);
  TR_AddTRBRangeToSecureTransferRing(
    v5,
    (_QWORD *)(a1 + 24),
    *(_QWORD *)(a1 + 112),
    *(_DWORD *)(a1 + 104),
    *(_DWORD *)(a1 + 120),
    (_OWORD *)(a1 + 128),
    a2);
  return UsbDevice_DirectWriteDoorbell(
           *(_QWORD *)(*(_QWORD *)(v5 + 56) + 16LL),
           *(unsigned int *)(*(_QWORD *)(v5 + 56) + 144LL),
           *(unsigned int *)(v5 + 64));
}
