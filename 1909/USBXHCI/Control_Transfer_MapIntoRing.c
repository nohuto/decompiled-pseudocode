/*
 * XREFs of Control_Transfer_MapIntoRing @ 0x1C002BC30
 * Callers:
 *     Control_EvtDmaCallback @ 0x1C002A320 (Control_EvtDmaCallback.c)
 *     Control_Transfer_Map @ 0x1C002B95C (Control_Transfer_Map.c)
 * Callees:
 *     memmove @ 0x1C0008A40 (memmove.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C00281D8 (TR_AddTRBRangeToSecureTransferRing.c)
 *     TR_CalculateTDSize @ 0x1C002857C (TR_CalculateTDSize.c)
 *     TR_GetPacketCount @ 0x1C002911C (TR_GetPacketCount.c)
 *     TR_InitializeLinkTrb @ 0x1C002925C (TR_InitializeLinkTrb.c)
 *     UsbDevice_DirectWriteDoorbell @ 0x1C002CF88 (UsbDevice_DirectWriteDoorbell.c)
 *     WPP_RECORDER_SF_DDDqD @ 0x1C002CFE8 (WPP_RECORDER_SF_DDDqD.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C002D4F8 (WPP_RECORDER_SF_DDqq.c)
 *     ESM_AddEvent @ 0x1C0044E54 (ESM_AddEvent.c)
 */

__int64 __fastcall Control_Transfer_MapIntoRing(__int64 a1, char a2)
{
  __int64 v2; // r15
  int v4; // r14d
  int v5; // edx
  int PacketCount; // eax
  __int64 v7; // r9
  int v8; // r11d
  __int64 v9; // rcx
  int v10; // ebx
  int v11; // r12d
  unsigned int v12; // r8d
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // zf
  _OWORD *v18; // rsi
  int v19; // edx
  __int64 v20; // rdx
  int v21; // edx
  __int64 result; // rax
  unsigned int v23; // r14d
  int v24; // esi
  int v25; // esi
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  unsigned int v29; // edx
  __int64 v30; // rax
  unsigned int v31; // r9d
  __int64 v32; // r8
  unsigned int v33; // ecx
  char v34; // al
  unsigned int v35; // r14d
  int v36; // eax
  unsigned int v37; // ebx
  int v38; // ecx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // esi
  KIRQL v42; // dl
  int v43; // edx
  __int64 v44; // rdx
  __int64 v45; // rcx
  signed __int32 v46[8]; // [rsp+0h] [rbp-79h] BYREF
  __int64 v47; // [rsp+20h] [rbp-59h]
  __int128 v48; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v49; // [rsp+60h] [rbp-19h]
  int v50; // [rsp+64h] [rbp-15h]
  int v51; // [rsp+68h] [rbp-11h]
  int v52; // [rsp+6Ch] [rbp-Dh]
  __int64 v53; // [rsp+70h] [rbp-9h]
  __int64 v54; // [rsp+78h] [rbp-1h]
  _OWORD *v55; // [rsp+80h] [rbp+7h]
  __int64 v56; // [rsp+88h] [rbp+Fh]
  char v57; // [rsp+E0h] [rbp+67h]
  unsigned int v59; // [rsp+F0h] [rbp+77h]
  unsigned int v60; // [rsp+F8h] [rbp+7Fh]

  v2 = *(_QWORD *)(a1 + 344);
  v48 = 0uLL;
  v4 = 0;
  v50 = 0;
  v5 = *(_DWORD *)(v2 + 104);
  v54 = *(_QWORD *)(v2 + 48);
  v51 = *(_DWORD *)(v54 + 32) & 1;
  PacketCount = TR_GetPacketCount(a1, v5);
  v9 = *(unsigned int *)(a1 + 192);
  v10 = v7 + 1;
  v52 = PacketCount;
  v11 = v7 + 2;
  v12 = v9;
  v13 = *(_QWORD *)(a1 + 184) + 16LL * (unsigned int)v9;
  v59 = v7;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 336LL);
  v53 = v7;
  v60 = v7;
  v49 = v7;
  v56 = v9;
  v57 = v7;
  if ( (v14 & 8) != 0 && (unsigned int)(v9 + 21) > *(_DWORD *)(a1 + 196) )
  {
    TR_InitializeLinkTrb(a1, v10, (__int64)&v48, v7 + 1);
    LOWORD(v7) = 0;
    v15 = *(_QWORD *)(a1 + 176);
    v16 = 2LL * *(unsigned int *)(a1 + 192);
    HIDWORD(v48) |= v11;
    v12 = 0;
    *(_QWORD *)&v48 = *(_QWORD *)(v15 + 24);
    *(_OWORD *)(*(_QWORD *)(a1 + 184) + 8 * v16) = v48;
    v17 = *(_DWORD *)(a1 + 200) == 0;
    *(_DWORD *)(a1 + 192) = 0;
    *(_DWORD *)(a1 + 200) = v17;
  }
  do
  {
    v18 = (_OWORD *)(*(_QWORD *)(a1 + 184) + 16LL * v12);
    v55 = v18;
    if ( v12 + 1 <= *(_DWORD *)(a1 + 196) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v7 )
      {
        v21 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDDqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v21,
          v12,
          34,
          v47,
          v21,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v12,
          (char)v18,
          *(_DWORD *)(a1 + 200));
        v8 = v51;
      }
      result = 0LL;
      v48 = 0uLL;
      if ( v10 == 1 )
      {
        v17 = *(_DWORD *)(v2 + 104) == 0;
        v23 = 8;
        *(_QWORD *)&v48 = *(_QWORD *)(v54 + 128);
        if ( v17 )
        {
          v24 = 2112;
          goto LABEL_51;
        }
        v10 = v11;
        v24 = v8 != 0 ? 198720 : 133184;
        goto LABEL_53;
      }
      if ( v10 == v11 )
      {
        v25 = (v8 << 16) | 0xC00;
      }
      else
      {
        if ( v10 == 3 )
        {
          v23 = DWORD2(v48);
          v10 = 7;
          v24 = (v8 != 0 ? 4096 : 69632) | 0x10;
          goto LABEL_54;
        }
        if ( v10 != 5 )
        {
          if ( (unsigned int)(v10 - 6) <= 1 )
          {
            v50 = v4 + 1;
            v23 = DWORD2(v48);
            v24 = 7200;
            *(_QWORD *)&v48 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v10 == 7 )
            {
              v10 = 9;
              *(_QWORD *)&v48 = v2 & 0xFFFFFFFFFFFFFFF8uLL | 4;
LABEL_55:
              v38 = *(_DWORD *)(a1 + 200);
              if ( v55 == (_OWORD *)v13 )
              {
                LOWORD(v7) = 0;
                HIDWORD(v48) = v24 & 0xFFFFFFFE | (v38 == 0);
              }
              else
              {
                HIDWORD(v48) = ((unsigned __int8)v24 ^ (unsigned __int8)v38) & 1 ^ v24;
                LOWORD(v7) = 0;
              }
              v39 = v23 & 0x3FFFFF | (*(unsigned __int16 *)(a1 + 112) << 22);
              v4 = v50;
              DWORD2(v48) = v39;
              *v55 = v48;
              v12 = ++*(_DWORD *)(a1 + 192);
              goto LABEL_59;
            }
LABEL_51:
            v10 = 3;
            goto LABEL_55;
          }
          v24 = HIDWORD(v48);
          v23 = DWORD2(v48);
          goto LABEL_53;
        }
        v25 = 1024;
      }
      v26 = *(_DWORD *)(v2 + 64);
      HIDWORD(v48) = v25;
      if ( !v26 )
        return result;
      v27 = v26 - 1;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          if ( v28 == 1 )
          {
            v29 = v60;
            if ( v60 )
            {
              v32 = v53;
              v31 = v59;
            }
            else
            {
              v30 = *(_QWORD *)(v2 + 96);
              v31 = v59;
              v32 = *(_QWORD *)(v30 + 24LL * v59 + 16);
              v29 = *(_DWORD *)(v30 + 24LL * v59 + 24);
              v53 = v32;
            }
            v33 = 0x10000;
            if ( v10 == v11 )
            {
              if ( v29 <= 0x200 || (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 336LL) & 0x40) == 0 || (v33 = 512, !v8) )
              {
LABEL_39:
                *(_QWORD *)&v48 = v32;
                if ( v29 > v33 )
                {
                  v35 = v33 | DWORD2(v48) & 0xFFFE0000;
                  v53 = v33 + v32;
                  v60 = v29 - v33;
                  v10 = 5;
                }
                else
                {
                  v60 = 0;
                  v59 = v31 + 1;
                  v35 = (v29 ^ DWORD2(v48)) & 0x1FFFF ^ DWORD2(v48);
                  v10 = 6 - (**(_DWORD **)(v2 + 96) != v31 + 1);
                }
                goto LABEL_48;
              }
              v34 = 1;
              v57 = 1;
            }
            else
            {
              v34 = v57;
            }
            if ( v10 == 5 && v34 )
              v25 |= 0x10000u;
            goto LABEL_39;
          }
          v35 = DWORD2(v48);
LABEL_48:
          v49 += v35 & 0x1FFFF;
          v23 = (v35 ^ ((unsigned int)TR_CalculateTDSize(a1, v52, v49, v10 == 6) << 17)) & 0x3E0000 ^ v35;
          v24 = v25 | 0x10;
LABEL_53:
          if ( (unsigned int)(v10 - 6) > 1 )
            goto LABEL_55;
LABEL_54:
          v24 |= v11;
          goto LABEL_55;
        }
        if ( !v8 )
          memmove(*(void **)(*(_QWORD *)(v2 + 88) + 16LL), *(const void **)(v2 + 80), *(unsigned int *)(v2 + 104));
        v36 = DWORD2(v48) ^ *(_DWORD *)(v2 + 104);
        *(_QWORD *)&v48 = *(_QWORD *)(*(_QWORD *)(v2 + 88) + 24LL);
        v35 = v36 & 0x1FFFF ^ DWORD2(v48);
      }
      else
      {
        v37 = *(_DWORD *)(v2 + 104);
        memmove(&v48, *(const void **)(v2 + 80), v37);
        v25 = HIDWORD(v48) | 0x40;
        v35 = (DWORD2(v48) ^ v37) & 0x1FFFF ^ DWORD2(v48);
      }
      v10 = 6;
      goto LABEL_48;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
      && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v7 )
    {
      v19 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_DDDqD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v19,
        v12,
        33,
        v47,
        v19,
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        v12,
        (char)v18,
        *(_DWORD *)(a1 + 200));
    }
    TR_InitializeLinkTrb(a1, v10, (__int64)&v48, v18 == (_OWORD *)v13);
    v20 = *(_QWORD *)(a1 + 176);
    LOWORD(v7) = 0;
    HIDWORD(v48) |= v11;
    v12 = 0;
    *(_QWORD *)&v48 = *(_QWORD *)(v20 + 24);
    *v18 = v48;
    v17 = *(_DWORD *)(a1 + 200) == 0;
    *(_DWORD *)(a1 + 192) = 0;
    *(_DWORD *)(a1 + 200) = v17;
LABEL_59:
    v8 = v51;
  }
  while ( v10 != 9 );
  *(_DWORD *)(v2 + 160) = v12;
  v17 = *(_DWORD *)(a1 + 200) == 0;
  v40 = *(unsigned int *)(a1 + 192);
  DWORD2(v48) = 0;
  *(_QWORD *)&v48 = 0LL;
  HIDWORD(v48) = v17;
  *(_OWORD *)(*(_QWORD *)(a1 + 184) + 16 * v40) = v48;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(v2 + 128) = v4;
  v41 = *(_DWORD *)(a1 + 108);
  *(_DWORD *)(a1 + 352) |= 1u;
  v42 = *(_BYTE *)(a1 + 104);
  if ( v41 != 3 )
    v11 = 0;
  *(_DWORD *)(a1 + 108) = v11;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v42);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v43) = 4;
    WPP_RECORDER_SF_DDqq(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v43,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      35,
      (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_QWORD *)(v2 + 24),
      v2);
  }
  *(_BYTE *)(v13 + 12) ^= 1u;
  _InterlockedOr(v46, 0);
  TR_AddTRBRangeToSecureTransferRing(
    a1,
    0LL,
    *(_QWORD *)(v2 + 152),
    v56,
    *(_DWORD *)(a1 + 192),
    (_OWORD *)(v2 + 168),
    a2);
  result = UsbDevice_DirectWriteDoorbell(
             *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL),
             *(unsigned int *)(*(_QWORD *)(a1 + 56) + 144LL),
             *(unsigned int *)(a1 + 64));
  if ( v41 != 3 )
  {
    v44 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v44 + 37) )
      return ESM_AddEvent((PVOID)(v44 + 288));
    v45 = *(_QWORD *)(v44 + 136);
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v45 + 20));
    if ( (_DWORD)result == *(_DWORD *)(v45 + 8) )
      return ESM_AddEvent((PVOID)(v44 + 288));
  }
  return result;
}
