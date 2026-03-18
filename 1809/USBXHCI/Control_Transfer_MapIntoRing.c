/*
 * XREFs of Control_Transfer_MapIntoRing @ 0x1C00273D4
 * Callers:
 *     Control_EvtDmaCallback @ 0x1C0025BD0 (Control_EvtDmaCallback.c)
 *     Control_Transfer_Map @ 0x1C0027110 (Control_Transfer_Map.c)
 * Callees:
 *     memmove @ 0x1C0006C80 (memmove.c)
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C0023B94 (TR_AddTRBRangeToSecureTransferRing.c)
 *     TR_CalculateTDSize @ 0x1C0023EF4 (TR_CalculateTDSize.c)
 *     TR_GetPacketCount @ 0x1C00249DC (TR_GetPacketCount.c)
 *     TR_InitializeLinkTrb @ 0x1C0024B1C (TR_InitializeLinkTrb.c)
 *     UsbDevice_DirectWriteDoorbell @ 0x1C0028608 (UsbDevice_DirectWriteDoorbell.c)
 *     WPP_RECORDER_SF_DDDqD @ 0x1C0028668 (WPP_RECORDER_SF_DDDqD.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C0028B78 (WPP_RECORDER_SF_DDqq.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

__int64 __fastcall Control_Transfer_MapIntoRing(__int64 a1, char a2)
{
  __int64 v2; // r15
  int v4; // edx
  int v5; // r13d
  int PacketCount; // eax
  __int64 v7; // r9
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // r14d
  __int64 v11; // r11
  unsigned int v12; // r12d
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // zf
  _OWORD *v18; // rdi
  int v19; // edx
  __int64 v20; // rdx
  int v21; // edx
  __int64 result; // rax
  unsigned int v23; // r14d
  int v24; // edi
  int v25; // edi
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  __int64 v29; // rax
  unsigned int v30; // edx
  unsigned int v31; // ecx
  char v32; // al
  unsigned int v33; // r14d
  int v34; // eax
  unsigned int v35; // ebx
  int v36; // ecx
  int v37; // eax
  __int64 v38; // rcx
  int v39; // edi
  KIRQL v40; // dl
  int v41; // edx
  __int64 v42; // rdx
  __int64 v43; // rcx
  signed __int32 v44[8]; // [rsp+0h] [rbp-79h] BYREF
  __int64 v45; // [rsp+20h] [rbp-59h]
  unsigned int v46; // [rsp+50h] [rbp-29h]
  int v47; // [rsp+54h] [rbp-25h]
  __int64 v48; // [rsp+58h] [rbp-21h]
  __int64 v49; // [rsp+60h] [rbp-19h]
  __int64 v50; // [rsp+68h] [rbp-11h]
  _OWORD *v51; // [rsp+70h] [rbp-9h]
  __int64 v52; // [rsp+78h] [rbp-1h]
  _OWORD v53[5]; // [rsp+80h] [rbp+7h] BYREF
  char v54; // [rsp+E0h] [rbp+67h]
  unsigned int v56; // [rsp+F0h] [rbp+77h]
  int v57; // [rsp+F8h] [rbp+7Fh]

  v2 = *(_QWORD *)(a1 + 344);
  v57 = 0;
  v4 = *(_DWORD *)(v2 + 104);
  v50 = *(_QWORD *)(v2 + 48);
  v5 = *(_DWORD *)(v50 + 32) & 1;
  PacketCount = TR_GetPacketCount(a1, v4);
  v8 = *(unsigned int *)(a1 + 192);
  v9 = v7 + 1;
  v47 = PacketCount;
  v10 = v7 + 2;
  v56 = v7;
  v11 = (unsigned int)v7;
  v12 = v7;
  v49 = *(_QWORD *)(a1 + 184) + 16LL * (unsigned int)v8;
  v13 = v8;
  v14 = *(_QWORD *)(a1 + 40);
  v48 = v7;
  v46 = v7;
  v52 = v8;
  v54 = v7;
  if ( (*(_QWORD *)(v14 + 272) & 8) != 0 && (unsigned int)(v8 + 21) > *(_DWORD *)(a1 + 196) )
  {
    TR_InitializeLinkTrb(a1, v9, (__int64)v53, v7 + 1);
    LODWORD(v7) = 0;
    v15 = *(_QWORD *)(a1 + 176);
    v16 = 2LL * *(unsigned int *)(a1 + 192);
    HIDWORD(v53[0]) |= v10;
    v13 = 0;
    *(_QWORD *)&v53[0] = *(_QWORD *)(v15 + 24);
    *(_OWORD *)(*(_QWORD *)(a1 + 184) + 8 * v16) = v53[0];
    v17 = *(_DWORD *)(a1 + 200) == 0;
    *(_DWORD *)(a1 + 192) = 0;
    *(_DWORD *)(a1 + 200) = v17;
  }
  do
  {
    v18 = (_OWORD *)(*(_QWORD *)(a1 + 184) + 16LL * v13);
    v51 = v18;
    if ( v13 + 1 <= *(_DWORD *)(a1 + 196) )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v7 )
      {
        v21 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        WPP_RECORDER_SF_DDDqD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v21,
          v13,
          34,
          v45,
          v21,
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          v13,
          (char)v18,
          *(_DWORD *)(a1 + 200));
        v11 = v48;
        LODWORD(v7) = 0;
      }
      result = 0LL;
      v53[0] = 0uLL;
      if ( v9 == 1 )
      {
        v23 = 8;
        *(_QWORD *)&v53[0] = *(_QWORD *)(v50 + 128);
        if ( *(_DWORD *)(v2 + 104) == (_DWORD)v7 )
        {
          v24 = 2112;
          goto LABEL_49;
        }
        v9 = 2;
        v24 = v5 != 0 ? 198720 : 133184;
        goto LABEL_51;
      }
      if ( v9 == v10 )
      {
        v25 = (v5 << 16) | 0xC00;
      }
      else
      {
        if ( v9 == 3 )
        {
          v23 = DWORD2(v53[0]);
          v9 = 7;
          v24 = (v5 != 0 ? 4096 : 69632) | 0x10;
          goto LABEL_52;
        }
        if ( v9 != 5 )
        {
          v23 = DWORD2(v53[0]);
          if ( (unsigned int)(v9 - 6) <= 1 )
          {
            ++v57;
            v24 = 7200;
            *(_QWORD *)&v53[0] = v2 & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v9 == 7 )
            {
              v9 = 9;
              *(_QWORD *)&v53[0] = v2 & 0xFFFFFFFFFFFFFFF8uLL | 4;
LABEL_53:
              v36 = *(_DWORD *)(a1 + 200);
              if ( v51 == (_OWORD *)v49 )
              {
                LODWORD(v7) = 0;
                HIDWORD(v53[0]) = v24 & 0xFFFFFFFE | (v36 == 0);
              }
              else
              {
                HIDWORD(v53[0]) = ((unsigned __int8)v24 ^ (unsigned __int8)v36) & 1 ^ v24;
                LODWORD(v7) = 0;
              }
              v37 = v23 & 0x3FFFFF | (*(unsigned __int16 *)(a1 + 112) << 22);
              v10 = 2;
              DWORD2(v53[0]) = v37;
              *v51 = v53[0];
              v13 = ++*(_DWORD *)(a1 + 192);
              goto LABEL_57;
            }
LABEL_49:
            v9 = 3;
            goto LABEL_53;
          }
          v24 = HIDWORD(v53[0]);
          goto LABEL_51;
        }
        v25 = 1024;
      }
      v26 = *(_DWORD *)(v2 + 64);
      HIDWORD(v53[0]) = v25;
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
            if ( v12 )
            {
              v30 = v56;
            }
            else
            {
              v29 = *(_QWORD *)(v2 + 96);
              v30 = v56;
              v11 = *(_QWORD *)(v29 + 24LL * v56 + 16);
              v12 = *(_DWORD *)(v29 + 24LL * v56 + 24);
              v48 = v11;
            }
            v31 = 0x10000;
            if ( v9 == v10 )
            {
              if ( v12 <= 0x200 || (*(_QWORD *)(*(_QWORD *)(a1 + 40) + 272LL) & 0x40) == 0 || (v31 = 512, !v5) )
              {
LABEL_37:
                *(_QWORD *)&v53[0] = v11;
                if ( v12 > v31 )
                {
                  v33 = v31 | DWORD2(v53[0]) & 0xFFFE0000;
                  v48 = v31 + v11;
                  v12 -= v31;
                  v9 = 5;
                }
                else
                {
                  v56 = v30 + 1;
                  v33 = (v12 ^ DWORD2(v53[0])) & 0x1FFFF ^ DWORD2(v53[0]);
                  v12 = v7;
                  v9 = 6 - (**(_DWORD **)(v2 + 96) != v30 + 1);
                }
                goto LABEL_46;
              }
              v32 = 1;
              v54 = 1;
            }
            else
            {
              v32 = v54;
            }
            if ( v9 == 5 && v32 )
              v25 |= 0x10000u;
            goto LABEL_37;
          }
          v33 = DWORD2(v53[0]);
LABEL_46:
          v46 += v33 & 0x1FFFF;
          v23 = (v33 ^ ((unsigned int)TR_CalculateTDSize(a1, v47, v46, v9 == 6) << 17)) & 0x3E0000 ^ v33;
          v24 = v25 | 0x10;
LABEL_51:
          if ( (unsigned int)(v9 - 6) > 1 )
            goto LABEL_53;
LABEL_52:
          v24 |= 2u;
          goto LABEL_53;
        }
        if ( !v5 )
          memmove(*(void **)(*(_QWORD *)(v2 + 88) + 16LL), *(const void **)(v2 + 80), *(unsigned int *)(v2 + 104));
        v34 = DWORD2(v53[0]) ^ *(_DWORD *)(v2 + 104);
        *(_QWORD *)&v53[0] = *(_QWORD *)(*(_QWORD *)(v2 + 88) + 24LL);
        v33 = v34 & 0x1FFFF ^ DWORD2(v53[0]);
      }
      else
      {
        v35 = *(_DWORD *)(v2 + 104);
        memmove(v53, *(const void **)(v2 + 80), v35);
        v25 = HIDWORD(v53[0]) | 0x40;
        v33 = (DWORD2(v53[0]) ^ v35) & 0x1FFFF ^ DWORD2(v53[0]);
      }
      v9 = 6;
      goto LABEL_46;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v7 )
    {
      v19 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_DDDqD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v19,
        v13,
        33,
        v45,
        v19,
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
        v13,
        (char)v18,
        *(_DWORD *)(a1 + 200));
    }
    TR_InitializeLinkTrb(a1, v9, (__int64)v53, v18 == (_OWORD *)v49);
    v20 = *(_QWORD *)(a1 + 176);
    LODWORD(v7) = 0;
    HIDWORD(v53[0]) |= v10;
    v13 = 0;
    *(_QWORD *)&v53[0] = *(_QWORD *)(v20 + 24);
    *v18 = v53[0];
    v17 = *(_DWORD *)(a1 + 200) == 0;
    *(_DWORD *)(a1 + 192) = 0;
    *(_DWORD *)(a1 + 200) = v17;
LABEL_57:
    v11 = v48;
  }
  while ( v9 != 9 );
  *(_DWORD *)(v2 + 160) = v13;
  v17 = *(_DWORD *)(a1 + 200) == 0;
  v38 = *(unsigned int *)(a1 + 192);
  DWORD2(v53[0]) = 0;
  *(_QWORD *)&v53[0] = 0LL;
  HIDWORD(v53[0]) = v17;
  *(_OWORD *)(*(_QWORD *)(a1 + 184) + 16 * v38) = v53[0];
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(v2 + 128) = v57;
  v39 = *(_DWORD *)(a1 + 108);
  *(_DWORD *)(a1 + 352) |= 1u;
  v40 = *(_BYTE *)(a1 + 104);
  if ( v39 != 3 )
    v10 = 0;
  *(_DWORD *)(a1 + 108) = v10;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v40);
  LOBYTE(v41) = 4;
  WPP_RECORDER_SF_DDqq(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    v41,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    35,
    (__int64)&WPP_f8d05c40f4743b0f34f8f34095e537bc_Traceguids,
    *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
    *(_QWORD *)(v2 + 24),
    v2);
  *(_BYTE *)(v49 + 12) ^= 1u;
  _InterlockedOr(v44, 0);
  TR_AddTRBRangeToSecureTransferRing(
    a1,
    0LL,
    *(_QWORD *)(v2 + 152),
    v52,
    *(_DWORD *)(a1 + 192),
    (_OWORD *)(v2 + 168),
    a2);
  result = UsbDevice_DirectWriteDoorbell(
             *(_QWORD *)(*(_QWORD *)(a1 + 56) + 16LL),
             *(unsigned int *)(*(_QWORD *)(a1 + 56) + 144LL),
             *(unsigned int *)(a1 + 64));
  if ( v39 != 3 )
  {
    v42 = *(_QWORD *)(a1 + 56);
    if ( !*(_BYTE *)(v42 + 37) )
      return ESM_AddEvent((PVOID)(v42 + 288));
    v43 = *(_QWORD *)(v42 + 136);
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v43 + 20));
    if ( (_DWORD)result == *(_DWORD *)(v43 + 8) )
      return ESM_AddEvent((PVOID)(v42 + 288));
  }
  return result;
}
