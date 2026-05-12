/*
 * XREFs of TranslateToExtendedSrb @ 0x1C00225E4
 * Callers:
 *     RaidUnitClaimIrp @ 0x1C0003E50 (RaidUnitClaimIrp.c)
 * Callees:
 *     TranslateScsiRequestBlockToScsiCdb16SrbExData @ 0x1C00227B0 (TranslateScsiRequestBlockToScsiCdb16SrbExData.c)
 *     TranslateScsiRequestBlockToStorageRequestBlock @ 0x1C0022804 (TranslateScsiRequestBlockToStorageRequestBlock.c)
 *     McTemplateK0zx @ 0x1C0044C30 (McTemplateK0zx.c)
 *     TranslateScsiRequestBlockToIoInfoSrbExData @ 0x1C0044CD0 (TranslateScsiRequestBlockToIoInfoSrbExData.c)
 */

__int64 __fastcall TranslateToExtendedSrb(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  int v10; // ebp
  LARGE_INTEGER v11; // rax
  int v12; // r8d
  int v13; // r9d
  LARGE_INTEGER v14; // rbx
  unsigned __int8 v15; // al
  unsigned int v16; // eax
  __int64 v17; // rdx
  char v18; // r9
  __int64 v19; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v21; // rdx
  unsigned int LowPart; // ecx
  LARGE_INTEGER v23; // r8
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rtt
  unsigned __int64 v26; // rtt
  union _LARGE_INTEGER v28; // [rsp+60h] [rbp+8h] BYREF

  LOBYTE(v6) = 0;
  v7 = a3;
  v10 = 0;
  v28.QuadPart = 1LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( UseQPCTime )
    v11 = KeQueryPerformanceCounter(&v28);
  else
    v11.QuadPart = KeQueryUnbiasedInterruptTime();
  v14 = v11;
  v15 = *(_BYTE *)(a2 + 2);
  if ( v15 <= 0x15u )
  {
    if ( v15 == 21 )
      goto LABEL_40;
    if ( !v15 )
    {
      v16 = 224;
      if ( a6 != 1 )
        v16 = 184;
      if ( (unsigned int)v7 < v16 )
        goto LABEL_60;
      LOBYTE(v13) = a6;
      LOBYTE(v12) = 1;
      TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, v12, v13, v16);
      v17 = 152LL;
      if ( v18 != 1 )
        v17 = 144LL;
      *(_DWORD *)(a1 + 120) = v17;
      if ( v17 + 40 > v7 )
        v10 = -1073741670;
      else
        TranslateScsiRequestBlockToScsiCdb16SrbExData(a1 + (unsigned int)v17, a2);
      if ( a6 == 1 && *(_DWORD *)(a1 + 56) > 1u )
      {
        *(_DWORD *)(a1 + 124) = 192;
        if ( v7 < 0xE0 )
          v10 = -1073741670;
        else
          TranslateScsiRequestBlockToIoInfoSrbExData(a1 + 192, a2, a5);
      }
      if ( v10 < 0 )
        goto LABEL_19;
      goto LABEL_17;
    }
    if ( v15 <= 2u || v15 == 4 || v15 > 5u && (v15 <= 9u || v15 == 16 || v15 > 0x11u && v15 <= 0x13u) )
      goto LABEL_40;
LABEL_54:
    v10 = -1073741811;
    goto LABEL_19;
  }
  if ( v15 == 23 )
  {
    if ( (unsigned int)v7 < 0xA8 )
      goto LABEL_60;
    LOBYTE(v12) = 1;
    TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, v12, 0, 168);
    *(_DWORD *)(a1 + 120) = 144;
    *(_DWORD *)(a1 + 144) = 96;
    *(_DWORD *)(a1 + 148) = 16;
    *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 4);
    *(_BYTE *)(a1 + 153) = *(_BYTE *)(a2 + 9);
    *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 32);
    goto LABEL_17;
  }
  if ( v15 <= 0x17u )
    goto LABEL_54;
  if ( v15 > 0x1Au && v15 != 32 )
  {
    switch ( v15 )
    {
      case '$':
        if ( (unsigned int)v7 < 0xA8 )
          goto LABEL_60;
        LOBYTE(v12) = 1;
        TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, v12, 0, 168);
        *(_DWORD *)(a1 + 120) = 144;
        *(_DWORD *)(a1 + 144) = 97;
        *(_DWORD *)(a1 + 148) = 12;
        break;
      case '%':
        if ( (unsigned int)v7 < 0xA8 )
          goto LABEL_60;
        LOBYTE(v12) = 1;
        TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, v12, 0, 168);
        *(_DWORD *)(a1 + 120) = 144;
        *(_DWORD *)(a1 + 144) = 98;
        *(_DWORD *)(a1 + 148) = 16;
        break;
      case '&':
        goto LABEL_40;
      default:
        goto LABEL_54;
    }
    *(_BYTE *)(a1 + 152) = *(_BYTE *)(a2 + 4);
    *(_DWORD *)(a1 + 156) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 160) = *(_DWORD *)(a2 + 64);
    goto LABEL_17;
  }
LABEL_40:
  if ( (unsigned int)v7 < 0x90 )
    goto LABEL_60;
  TranslateScsiRequestBlockToStorageRequestBlock(a1, a2, 0, 0, 144);
LABEL_17:
  v19 = *(unsigned int *)(a1 + 52);
  if ( v19 + 16 > v7 )
  {
LABEL_60:
    v10 = -1073741670;
    goto LABEL_19;
  }
  *(_DWORD *)(v19 + a1) = 1;
  *(_DWORD *)(v19 + a1 + 4) = 4;
  *(_BYTE *)(v19 + a1 + 8) = *(_BYTE *)(a2 + 5);
  *(_BYTE *)(v19 + a1 + 9) = *(_BYTE *)(a2 + 6);
  *(_BYTE *)(v19 + a1 + 10) = *(_BYTE *)(a2 + 7);
LABEL_19:
  if ( UseQPCTime )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( PerformanceCounter.QuadPart > 0 && PerformanceCounter.QuadPart < v14.QuadPart )
    v24 = PerformanceCounter.QuadPart - v14.QuadPart - 1;
  else
    v24 = PerformanceCounter.QuadPart - v14.QuadPart;
  if ( UseQPCTime )
  {
    LowPart = v28.LowPart;
    if ( v28.QuadPart && v24 )
    {
      v25 = 1000 * (v24 % v28.QuadPart);
      v23.QuadPart = v25 / v28.QuadPart + 1000 * (v24 / v28.QuadPart);
      v26 = 10000 * (v25 % v28.QuadPart);
      v21.QuadPart = v26 % v28.QuadPart;
      v6 = v26 / v28.QuadPart + 10000 * v23.QuadPart;
    }
  }
  else
  {
    LOBYTE(v6) = v24;
  }
  if ( (Microsoft_Windows_StorPortEnableBits & 0x40) != 0 )
    McTemplateK0zx(LowPart, v21.LowPart, v23.LowPart, (unsigned int)L"Translate SCSI_REQUEST_BLOCK", v6);
  return (unsigned int)v10;
}
