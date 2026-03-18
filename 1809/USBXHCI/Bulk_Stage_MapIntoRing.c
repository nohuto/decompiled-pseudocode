/*
 * XREFs of Bulk_Stage_MapIntoRing @ 0x1C0031FC4
 * Callers:
 *     Bulk_EvtDmaCallback @ 0x1C002F7B0 (Bulk_EvtDmaCallback.c)
 *     Bulk_MapStage @ 0x1C002FC50 (Bulk_MapStage.c)
 * Callees:
 *     memmove @ 0x1C0006C80 (memmove.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C0023B94 (TR_AddTRBRangeToSecureTransferRing.c)
 *     TR_CalculateTDSize @ 0x1C0023EF4 (TR_CalculateTDSize.c)
 *     TR_GetPacketCount @ 0x1C00249DC (TR_GetPacketCount.c)
 *     UsbDevice_DirectWriteDoorbell @ 0x1C0028608 (UsbDevice_DirectWriteDoorbell.c)
 *     Bulk_InsertLinkTrb @ 0x1C002FA28 (Bulk_InsertLinkTrb.c)
 *     WPP_RECORDER_SF_DDDDq @ 0x1C00338D4 (WPP_RECORDER_SF_DDDDq.c)
 *     WPP_RECORDER_SF_DDDDqDD @ 0x1C0033A10 (WPP_RECORDER_SF_DDDDqDD.c)
 */

int *__fastcall Bulk_Stage_MapIntoRing(__int64 a1, char a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  __int64 v5; // r9
  unsigned int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // r12d
  unsigned int v13; // r12d
  int PacketCount; // eax
  __int64 v15; // r11
  unsigned int v16; // r9d
  int v17; // ebx
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  char v22; // r9
  int v23; // r8d
  unsigned int v24; // r10d
  unsigned int v25; // edx
  _OWORD *v26; // r13
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r11
  unsigned int v30; // esi
  unsigned int v31; // r14d
  int v32; // ecx
  unsigned int v33; // r14d
  int v34; // ecx
  int v35; // ecx
  unsigned int v36; // ecx
  __int64 v37; // rax
  unsigned int v38; // r8d
  __int64 v39; // rdx
  unsigned int v40; // esi
  int v41; // eax
  unsigned int v42; // ebx
  int v43; // eax
  int v44; // eax
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rdx
  _QWORD *v48; // rax
  KIRQL v49; // al
  __int64 v50; // rcx
  KIRQL v51; // dl
  signed __int32 v53[8]; // [rsp+0h] [rbp-89h] BYREF
  int v54; // [rsp+20h] [rbp-69h]
  unsigned int v55; // [rsp+60h] [rbp-29h]
  int v56; // [rsp+64h] [rbp-25h]
  int v57; // [rsp+68h] [rbp-21h]
  __int64 v58; // [rsp+70h] [rbp-19h]
  __int64 v59; // [rsp+78h] [rbp-11h]
  __int64 v60; // [rsp+80h] [rbp-9h]
  __int64 v61; // [rsp+88h] [rbp-1h]
  __int128 v62; // [rsp+90h] [rbp+7h] BYREF
  int v63; // [rsp+F0h] [rbp+67h]
  unsigned int v65; // [rsp+100h] [rbp+77h]
  unsigned int v66; // [rsp+108h] [rbp+7Fh]

  v2 = *(_QWORD *)a1;
  v61 = v2;
  v65 = 0;
  v4 = *(_QWORD *)(v2 + 56);
  v5 = *(_QWORD *)(v2 + 48);
  v6 = *(_DWORD *)(a1 + 40);
  v7 = *(_QWORD *)(v4 + 40);
  v8 = *(_QWORD *)(v7 + 392);
  v9 = *(_QWORD *)(v7 + 272);
  v58 = v8;
  if ( (v9 & 0x400000000LL) != 0
    && (v10 = *(_QWORD *)(v4 + 48), *(_DWORD *)(v10 + 40))
    && (v11 = *(_QWORD *)(v4 + 56), *(char *)(v11 + 98) < 0)
    && *(_DWORD *)(v10 + 20) <= 1u
    && (v12 = *(_WORD *)(v11 + 100) & 0x7FF, v6 % v12) )
  {
    v13 = v12 - v6 % v12;
  }
  else
  {
    v13 = 0;
  }
  v56 = *(_DWORD *)(v5 + 32) & 1;
  PacketCount = TR_GetPacketCount(v4, v6);
  v16 = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 88) = v15;
  v17 = 5;
  v18 = *(unsigned int *)(v4 + 192);
  v57 = PacketCount;
  v19 = *(_QWORD *)(v4 + 40);
  v20 = *(_QWORD *)(v4 + 184) + 16 * v18;
  v60 = v15;
  v21 = *(_QWORD *)(v19 + 272);
  v66 = v15;
  v55 = v15;
  v59 = v20;
  v63 = v16;
  if ( (v21 & 8) != 0 )
  {
    v22 = 1;
    v23 = 5;
LABEL_23:
    Bulk_InsertLinkTrb(v4, (_QWORD *)a1, v23, v22);
    v16 = v63;
    LODWORD(v15) = 0;
    goto LABEL_11;
  }
  do
  {
    while ( 1 )
    {
LABEL_11:
      v24 = *(_DWORD *)(v4 + 192);
      v25 = *(_DWORD *)(v4 + 196);
      v26 = (_OWORD *)(*(_QWORD *)(v4 + 184) + 16LL * v24);
      v62 = 0uLL;
      if ( v24 + v16 > v25 )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v15 )
          WPP_RECORDER_SF_DDDDq(
            *(_QWORD *)(*(_QWORD *)(v4 + 56) + 80LL),
            *(unsigned __int8 *)(*(_QWORD *)(v4 + 48) + 135LL),
            0,
            17,
            v54,
            *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
            *(_DWORD *)(*(_QWORD *)(v4 + 56) + 144LL),
            *(_DWORD *)(v4 + 64),
            v24,
            (char)v26);
        Bulk_InsertLinkTrb(v4, (_QWORD *)a1, v17, v26 == (_OWORD *)v20);
        v16 = v63;
        goto LABEL_67;
      }
      if ( (*(_QWORD *)(*(_QWORD *)(v4 + 40) + 272LL) & 0x2000000000000LL) != 0
        && (v27 = *(_QWORD *)(v4 + 48), *(_DWORD *)(v27 + 20) == 3)
        && (v28 = *(_QWORD *)(v4 + 56), *(_DWORD *)(v28 + 120) == 6) )
      {
        if ( v17 == 7 && v24 + 9 > v25 )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v15 )
            WPP_RECORDER_SF_DDDDq(
              *(_QWORD *)(v28 + 80),
              *(unsigned __int8 *)(v27 + 135),
              v28,
              18,
              v54,
              *(_BYTE *)(v27 + 135),
              *(_DWORD *)(v28 + 144),
              *(_DWORD *)(v4 + 64),
              v24,
              (char)v26);
          v23 = 7;
          v22 = v26 == (_OWORD *)v20;
          goto LABEL_23;
        }
      }
      else
      {
        v28 = *(_QWORD *)(v4 + 56);
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v15 )
      {
        WPP_RECORDER_SF_DDDDqDD(
          *(_QWORD *)(v28 + 80),
          v25,
          v28,
          v16,
          v54,
          *(_BYTE *)(*(_QWORD *)(v4 + 48) + 135LL),
          *(_DWORD *)(v28 + 144),
          *(_DWORD *)(v4 + 64),
          v24,
          (char)v26,
          *(_DWORD *)(a1 + 88),
          v16);
        v28 = *(_QWORD *)(v4 + 56);
        LODWORD(v15) = 0;
        v16 = v63;
      }
      if ( v17 == 5 )
      {
        v32 = *(_DWORD *)(v2 + 76);
        v33 = HIDWORD(v62) & 0xFFFF03FF | 0x400;
        HIDWORD(v62) = v33;
        if ( v32 )
        {
          v34 = v32 - 1;
          if ( v34 )
          {
            v35 = v34 - 1;
            if ( v35 )
            {
              if ( v35 == 1 )
              {
                v36 = v66;
                if ( v66 )
                {
                  v39 = v60;
                  v38 = v65;
                }
                else
                {
                  v37 = *(_QWORD *)(a1 + 56);
                  v38 = v65;
                  v39 = *(_QWORD *)(v37 + 24LL * v65 + 16);
                  v36 = *(_DWORD *)(v37 + 24LL * v65 + 24);
                  v60 = v39;
                }
                *(_QWORD *)&v62 = v39;
                if ( v36 > 0x10000 )
                {
                  v60 = v39 + 0x10000;
                  v40 = DWORD2(v62) & 0xFFFE0000 | 0x10000;
                  v17 = 5;
                  v66 = v36 - 0x10000;
                }
                else
                {
                  v66 = v15;
                  v65 = v38 + 1;
                  v40 = (v36 ^ DWORD2(v62)) & 0x1FFFF ^ DWORD2(v62);
                  v17 = 7;
                  if ( **(_DWORD **)(a1 + 56) != v38 + 1 )
                    v17 = 5;
                }
              }
              else
              {
                v40 = DWORD2(v62);
              }
              goto LABEL_51;
            }
            if ( v56 == (_DWORD)v15 )
              memmove(*(void **)(*(_QWORD *)(a1 + 72) + 16LL), *(const void **)(a1 + 64), *(unsigned int *)(a1 + 40));
            v41 = DWORD2(v62) ^ *(_DWORD *)(a1 + 40);
            *(_QWORD *)&v62 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 24LL);
            v40 = v41 & 0x1FFFF ^ DWORD2(v62);
          }
          else
          {
            v42 = *(_DWORD *)(a1 + 40);
            memmove(&v62, *(const void **)(a1 + 64), v42);
            v33 = HIDWORD(v62) | 0x40;
            v40 = (DWORD2(v62) ^ v42) & 0x1FFFF ^ DWORD2(v62);
          }
        }
        else
        {
          v40 = DWORD2(v62) & 0xFFFE0000;
        }
        v17 = 7;
LABEL_51:
        v55 += v40 & 0x1FFFF;
        v43 = TR_CalculateTDSize(v4, v57, v55, v17 == 7);
        v31 = v33 | 0x10;
        v29 = v58;
        v30 = (v40 ^ (v43 << 17)) & 0x3E0000 ^ v40;
        v16 = v63 - 1;
        goto LABEL_52;
      }
      v29 = v58;
      v30 = DWORD2(v62);
      if ( v17 == 7 )
      {
        v17 = 9;
        *(_QWORD *)&v62 = a1 ^ ((unsigned __int8)a1 ^ *(_BYTE *)(v28 + 99)) & 3;
        v31 = HIDWORD(v62) & 0xFFFF03DF | 0x1C20;
        goto LABEL_53;
      }
      *(_QWORD *)&v62 = *(_QWORD *)(v58 + 24);
      v30 = v13 & 0x1FFFF | DWORD2(v62) & 0xFFC00000;
      v31 = HIDWORD(v62) & 0xFFFF03EF | 0x410;
      --v16;
      v13 = 0;
      v17 = 7;
LABEL_52:
      v63 = v16;
LABEL_53:
      HIDWORD(v62) = v31;
      v44 = *(_DWORD *)(a1 + 88) + 1;
      *(_DWORD *)(a1 + 88) = v44;
      if ( v17 == 7 )
      {
        if ( v13 && v29 )
        {
          v17 = 8;
          v30 ^= (v30 ^ ((v30 & 0xFFFE0000) + 0x20000)) & 0x3E0000;
LABEL_57:
          LODWORD(v15) = 0;
          goto LABEL_58;
        }
        v31 |= 2u;
        v16 = 1;
        HIDWORD(v62) = v31;
        v63 = 1;
      }
      if ( v17 != 5 )
        goto LABEL_57;
      LODWORD(v15) = 0;
      if ( !v16 )
      {
        v16 = *(_DWORD *)(a1 + 84) - v44;
        if ( *(_DWORD *)(a1 + 80) < v16 )
          v16 = *(_DWORD *)(a1 + 80);
        v63 = v16;
      }
LABEL_58:
      if ( v26 != (_OWORD *)v59 )
        HIDWORD(v62) = ((unsigned __int8)v31 ^ (unsigned __int8)*(_DWORD *)(v4 + 200)) & 1 ^ v31;
      v45 = v30 & 0x3FFFFF | (*(unsigned __int16 *)(v4 + 112) << 22);
      v2 = v61;
      DWORD2(v62) = v45;
      *v26 = v62;
      v46 = (unsigned int)++*(_DWORD *)(v4 + 192);
      if ( v17 == 9 )
        break;
      v20 = v59;
    }
    if ( (*(_QWORD *)(*(_QWORD *)(v4 + 40) + 272LL) & 0x2000000000000LL) == 0
      || *(_DWORD *)(*(_QWORD *)(v4 + 48) + 20LL) != 3
      || *(_DWORD *)(*(_QWORD *)(v4 + 56) + 120LL) != 6 )
    {
      break;
    }
    v47 = 8LL;
    do
    {
      v62 = 0uLL;
      HIDWORD(v62) = *(_DWORD *)(v4 + 200) & 1 | 0x2000;
      *(_OWORD *)(*(_QWORD *)(v4 + 184) + 16 * v46) = v62;
      v46 = (unsigned int)++*(_DWORD *)(v4 + 192);
      --v47;
    }
    while ( v47 );
    v20 = v59;
LABEL_67:
    LODWORD(v15) = 0;
  }
  while ( v17 != 9 );
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(v4 + 192);
  v48 = (_QWORD *)(*(_QWORD *)(v4 + 184) + 16LL * *(unsigned int *)(v4 + 192));
  *v48 = 0LL;
  v48[1] = 0LL;
  v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 96));
  v50 = v61;
  *(_BYTE *)(v4 + 104) = v49;
  ++*(_DWORD *)(v50 + 120);
  *(_DWORD *)(v50 + 112) += *(_DWORD *)(a1 + 40);
  v51 = *(_BYTE *)(v4 + 104);
  ++*(_DWORD *)(v4 + 348);
  *(_DWORD *)(v4 + 324) |= 1u;
  KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 96), v51);
  *(_BYTE *)(v59 + 12) ^= 1u;
  _InterlockedOr(v53, 0);
  TR_AddTRBRangeToSecureTransferRing(
    v4,
    (_QWORD *)(a1 + 24),
    *(_QWORD *)(a1 + 112),
    *(_DWORD *)(a1 + 104),
    *(_DWORD *)(a1 + 120),
    (_OWORD *)(a1 + 128),
    a2);
  return UsbDevice_DirectWriteDoorbell(
           *(_QWORD *)(*(_QWORD *)(v4 + 56) + 16LL),
           *(unsigned int *)(*(_QWORD *)(v4 + 56) + 144LL),
           *(unsigned int *)(v4 + 64));
}
