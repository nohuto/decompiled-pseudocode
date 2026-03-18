/*
 * XREFs of GetRegistrySettings @ 0x1C00191D0
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0007F40 (NVMeHwFindAdapter.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     __security_check_cookie @ 0x1C00052B0 (__security_check_cookie.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C001A1DC (ReadMultiSzRegistryValueAndCompareId.c)
 *     UlongToHex @ 0x1C001A3A8 (UlongToHex.c)
 */

char __fastcall GetRegistrySettings(__int64 a1)
{
  __int64 v1; // rax
  void *v3; // r10
  char *v4; // rax
  unsigned int v5; // ecx
  int v6; // edi
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  void *v20; // rsi
  int v21; // r8d
  int v22; // r8d
  int v23; // r8d
  void *v24; // rcx
  int v25; // r8d
  int v26; // r8d
  int v27; // r8d
  int v28; // r8d
  int v29; // r8d
  int v30; // r8d
  int v31; // r8d
  int v32; // r8d
  int v33; // r8d
  int v34; // r8d
  int v35; // r8d
  int v36; // r8d
  int v37; // r8d
  int v38; // r8d
  int v39; // r8d
  int v40; // r8d
  int v41; // r8d
  int v42; // r8d
  unsigned int v44; // [rsp+5Ch] [rbp+Bh] BYREF
  unsigned int v45; // [rsp+60h] [rbp+Fh] BYREF
  unsigned int v46; // [rsp+64h] [rbp+13h] BYREF
  void *v47; // [rsp+68h] [rbp+17h] BYREF
  char v48[32]; // [rsp+70h] [rbp+1Fh] BYREF

  LOBYTE(v1) = aVenVvvvDevDddd[24];
  strcpy(v48, "VEN_vvvv&DEV_dddd&REV_rr");
  v45 = 512;
  v46 = 0;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 52) &= 0xFFFFFFE0;
    *(_QWORD *)(a1 + 28) = 0LL;
    *(_DWORD *)(a1 + 80) = -1;
    *(_DWORD *)(a1 + 96) = -1;
    *(_DWORD *)(a1 + 100) = -1;
    *(_DWORD *)(a1 + 112) = -1;
    *(_DWORD *)(a1 + 128) = -694967296;
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 40) = 16711680;
    *(_QWORD *)(a1 + 44) = 0LL;
    *(_QWORD *)(a1 + 56) = 1823LL;
    *(_QWORD *)(a1 + 72) = 0x4000LL;
    *(_QWORD *)(a1 + 104) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_DWORD *)(a1 + 84) = 50;
    *(_DWORD *)(a1 + 88) = 3000;
    *(_DWORD *)(a1 + 92) = 1000;
    *(_DWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 68) = 100;
    v1 = StorPortAllocateRegistryBuffer(a1, &v45);
    v47 = (void *)v1;
    if ( v1 )
    {
      UlongToHex(&v48[4], *(unsigned __int16 *)(a1 + 4), 4LL);
      UlongToHex(&v48[13], *(unsigned __int16 *)(a1 + 6), 4LL);
      UlongToHex(&v48[22], *(unsigned __int8 *)(a1 + 8), 2LL);
      v4 = v48;
      v5 = 0;
      v6 = 29;
      do
      {
        if ( !*v4 )
          break;
        ++v5;
        ++v4;
      }
      while ( v5 < 0x1D );
      v46 = v45;
      if ( v5 < 0x1D )
        v6 = v5;
      NVMeZeroMemory(v3, v45);
      v44 = 0;
      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                     a1,
                     (unsigned int)"MaxTransferSize",
                     v7,
                     (unsigned int)&v47,
                     (__int64)&v45,
                     (__int64)&v46,
                     (__int64)v48,
                     v6,
                     (__int64)&v44);
      if ( (_BYTE)v1 == 1 )
      {
        LODWORD(v1) = v44;
        if ( v44 )
        {
          if ( v44 > 0x800 )
            LODWORD(v1) = 2048;
          LODWORD(v1) = (_DWORD)v1 << 10;
          *(_DWORD *)(a1 + 28) = v1;
        }
      }
      if ( v47 )
      {
        v46 = v45;
        NVMeZeroMemory(v47, v45);
        v44 = 0;
        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                       a1,
                       (unsigned int)"IoQueueDepth",
                       v8,
                       (unsigned int)&v47,
                       (__int64)&v45,
                       (__int64)&v46,
                       (__int64)v48,
                       v6,
                       (__int64)&v44);
        if ( (_BYTE)v1 == 1 )
        {
          LOBYTE(v1) = v44;
          if ( v44 )
            *(_DWORD *)(a1 + 32) = v44;
        }
        if ( v47 )
        {
          v46 = v45;
          NVMeZeroMemory(v47, v45);
          v44 = 0;
          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                         a1,
                         (unsigned int)"IoSubmissionQueueCount",
                         v9,
                         (unsigned int)&v47,
                         (__int64)&v45,
                         (__int64)&v46,
                         (__int64)v48,
                         v6,
                         (__int64)&v44);
          if ( (_BYTE)v1 == 1 )
          {
            LOBYTE(v1) = v44;
            if ( v44 )
              *(_WORD *)(a1 + 36) = v44;
          }
          if ( v47 )
          {
            v46 = v45;
            NVMeZeroMemory(v47, v45);
            v44 = 0;
            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                           a1,
                           (unsigned int)"IoCompletionQueueCount",
                           v10,
                           (unsigned int)&v47,
                           (__int64)&v45,
                           (__int64)&v46,
                           (__int64)v48,
                           v6,
                           (__int64)&v44);
            if ( (_BYTE)v1 == 1 )
            {
              LOBYTE(v1) = v44;
              if ( v44 )
                *(_WORD *)(a1 + 38) = v44;
            }
            if ( v47 )
            {
              v46 = v45;
              NVMeZeroMemory(v47, v45);
              v44 = 0;
              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                             a1,
                             (unsigned int)"InterruptCoalescingTime",
                             v11,
                             (unsigned int)&v47,
                             (__int64)&v45,
                             (__int64)&v46,
                             (__int64)v48,
                             v6,
                             (__int64)&v44);
              if ( (_BYTE)v1 == 1 )
              {
                LOBYTE(v1) = v44;
                if ( v44 )
                  *(_BYTE *)(a1 + 40) = v44;
              }
              if ( v47 )
              {
                v46 = v45;
                NVMeZeroMemory(v47, v45);
                v44 = 0;
                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                               a1,
                               (unsigned int)"InterruptCoalescingEntry",
                               v12,
                               (unsigned int)&v47,
                               (__int64)&v45,
                               (__int64)&v46,
                               (__int64)v48,
                               v6,
                               (__int64)&v44);
                if ( (_BYTE)v1 == 1 )
                {
                  LOBYTE(v1) = v44;
                  if ( v44 )
                    *(_BYTE *)(a1 + 41) = v44;
                }
                if ( v47 )
                {
                  v46 = v45;
                  NVMeZeroMemory(v47, v45);
                  v44 = 0;
                  LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                 a1,
                                 (unsigned int)"ArbitrationBurst",
                                 v13,
                                 (unsigned int)&v47,
                                 (__int64)&v45,
                                 (__int64)&v46,
                                 (__int64)v48,
                                 v6,
                                 (__int64)&v44);
                  if ( (_BYTE)v1 == 1 )
                  {
                    LOBYTE(v1) = v44;
                    if ( v44 )
                      *(_BYTE *)(a1 + 42) = v44;
                  }
                  if ( v47 )
                  {
                    v46 = v45;
                    NVMeZeroMemory(v47, v45);
                    v44 = 0;
                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                   a1,
                                   (unsigned int)"ContiguousMemoryFromAnyNode",
                                   v14,
                                   (unsigned int)&v47,
                                   (__int64)&v45,
                                   (__int64)&v46,
                                   (__int64)v48,
                                   v6,
                                   (__int64)&v44);
                    if ( (_BYTE)v1 == 1 && v44 )
                      *(_DWORD *)(a1 + 52) |= 2u;
                    if ( v47 )
                    {
                      v46 = v45;
                      NVMeZeroMemory(v47, v45);
                      v44 = 0;
                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                     a1,
                                     (unsigned int)"ShutdownTimeout",
                                     v15,
                                     (unsigned int)&v47,
                                     (__int64)&v45,
                                     (__int64)&v46,
                                     (__int64)v48,
                                     v6,
                                     (__int64)&v44);
                      if ( (_BYTE)v1 == 1 )
                      {
                        LOBYTE(v1) = v44;
                        if ( v44 )
                        {
                          if ( v44 > 0xFF )
                            LOBYTE(v1) = -1;
                          *(_BYTE *)(a1 + 43) = v1;
                        }
                      }
                      if ( v47 )
                      {
                        v46 = v45;
                        NVMeZeroMemory(v47, v45);
                        v44 = 0;
                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                       a1,
                                       (unsigned int)"DeallocateMaxLbaCount",
                                       v16,
                                       (unsigned int)&v47,
                                       (__int64)&v45,
                                       (__int64)&v46,
                                       (__int64)v48,
                                       v6,
                                       (__int64)&v44);
                        if ( (_BYTE)v1 == 1 )
                        {
                          LOBYTE(v1) = v44;
                          if ( v44 )
                            *(_DWORD *)(a1 + 44) = v44;
                        }
                        if ( v47 )
                        {
                          v46 = v45;
                          NVMeZeroMemory(v47, v45);
                          v44 = 0;
                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                         a1,
                                         (unsigned int)"DisableDeallocate",
                                         v17,
                                         (unsigned int)&v47,
                                         (__int64)&v45,
                                         (__int64)&v46,
                                         (__int64)v48,
                                         v6,
                                         (__int64)&v44);
                          if ( (_BYTE)v1 == 1 && v44 )
                            *(_DWORD *)(a1 + 52) |= 1u;
                          if ( v47 )
                          {
                            v46 = v45;
                            NVMeZeroMemory(v47, v45);
                            v44 = 0;
                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                           a1,
                                           (unsigned int)"ControllerBasicInit",
                                           v18,
                                           (unsigned int)&v47,
                                           (__int64)&v45,
                                           (__int64)&v46,
                                           (__int64)v48,
                                           v6,
                                           (__int64)&v44);
                            if ( (_BYTE)v1 == 1 && v44 )
                              *(_DWORD *)(a1 + 52) |= 4u;
                            if ( v47 )
                            {
                              v46 = v45;
                              NVMeZeroMemory(v47, v45);
                              v44 = 0;
                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                             a1,
                                             (unsigned int)"AsyncEventMask",
                                             v19,
                                             (unsigned int)&v47,
                                             (__int64)&v45,
                                             (__int64)&v46,
                                             (__int64)v48,
                                             v6,
                                             (__int64)&v44);
                              if ( (_BYTE)v1 == 1 )
                              {
                                LOBYTE(v1) = v44;
                                if ( v44 )
                                {
                                  LODWORD(v1) = v44 & 0x1F;
                                  *(_DWORD *)(a1 + 56) = v1;
                                }
                              }
                              v20 = v47;
                              if ( v47 )
                              {
                                StorPortExtendedFunction(97LL, a1, 0LL);
                                v46 = v45;
                                NVMeZeroMemory(v20, v45);
                                v44 = 0;
                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                               a1,
                                               (unsigned int)"IdlePowerMode",
                                               v21,
                                               (unsigned int)&v47,
                                               (__int64)&v45,
                                               (__int64)&v46,
                                               (__int64)v48,
                                               v6,
                                               (__int64)&v44);
                                if ( (_BYTE)v1 == 1 )
                                {
                                  LOBYTE(v1) = v44;
                                  if ( v44 < 6 )
                                    *(_DWORD *)(a1 + 76) = v44;
                                }
                                if ( v47 )
                                {
                                  v46 = v45;
                                  NVMeZeroMemory(v47, v45);
                                  v44 = 0;
                                  if ( (unsigned __int8)ReadMultiSzRegistryValueAndCompareId(
                                                          a1,
                                                          (unsigned int)"DiagnosticFlags",
                                                          v22,
                                                          (unsigned int)&v47,
                                                          (__int64)&v45,
                                                          (__int64)&v46,
                                                          (__int64)v48,
                                                          v6,
                                                          (__int64)&v44) == 1
                                    && v44 )
                                  {
                                    *(_DWORD *)(a1 + 104) = v44;
                                  }
                                  LODWORD(v1) = *(_DWORD *)(a1 + 104);
                                  if ( (v1 & 2) != 0 )
                                    *(_DWORD *)(a1 + 108) = 0x100000;
                                  if ( v47 )
                                  {
                                    v46 = v45;
                                    NVMeZeroMemory(v47, v45);
                                    v44 = 0;
                                    if ( (unsigned __int8)ReadMultiSzRegistryValueAndCompareId(
                                                            a1,
                                                            (unsigned int)"LogSize",
                                                            v23,
                                                            (unsigned int)&v47,
                                                            (__int64)&v45,
                                                            (__int64)&v46,
                                                            (__int64)v48,
                                                            v6,
                                                            (__int64)&v44) == 1
                                      && v44 )
                                    {
                                      *(_DWORD *)(a1 + 108) = v44 << 10;
                                    }
                                    LODWORD(v1) = -1431655765 * *(_DWORD *)(a1 + 108);
                                    v24 = v47;
                                    *(_DWORD *)(a1 + 3780) = *(_DWORD *)(a1 + 108) / 0x18u;
                                    if ( v24 )
                                    {
                                      v46 = v45;
                                      NVMeZeroMemory(v24, v45);
                                      v44 = 0;
                                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                     a1,
                                                     (unsigned int)"IoStripeAlignment",
                                                     v25,
                                                     (unsigned int)&v47,
                                                     (__int64)&v45,
                                                     (__int64)&v46,
                                                     (__int64)v48,
                                                     v6,
                                                     (__int64)&v44);
                                      if ( (_BYTE)v1 == 1 )
                                      {
                                        LOBYTE(v1) = v44;
                                        if ( v44 )
                                        {
                                          LODWORD(v1) = v44 << 10;
                                          if ( ((v44 << 10) & 0xFFF) == 0 )
                                            *(_DWORD *)(a1 + 48) = v1;
                                        }
                                      }
                                      if ( v47 )
                                      {
                                        v46 = v45;
                                        NVMeZeroMemory(v47, v45);
                                        v44 = 0;
                                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                       a1,
                                                       (unsigned int)"MedPowerFxIdleTimeout",
                                                       v26,
                                                       (unsigned int)&v47,
                                                       (__int64)&v45,
                                                       (__int64)&v46,
                                                       (__int64)v48,
                                                       v6,
                                                       (__int64)&v44);
                                        if ( (_BYTE)v1 == 1 )
                                        {
                                          LOBYTE(v1) = v44;
                                          *(_DWORD *)(a1 + 80) = v44;
                                        }
                                        if ( v47 )
                                        {
                                          v46 = v45;
                                          NVMeZeroMemory(v47, v45);
                                          v44 = 0;
                                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                         a1,
                                                         (unsigned int)"LowestPowerFxIdleTimeout",
                                                         v27,
                                                         (unsigned int)&v47,
                                                         (__int64)&v45,
                                                         (__int64)&v46,
                                                         (__int64)v48,
                                                         v6,
                                                         (__int64)&v44);
                                          if ( (_BYTE)v1 == 1 )
                                          {
                                            LOBYTE(v1) = v44;
                                            *(_DWORD *)(a1 + 84) = v44;
                                          }
                                          if ( v47 )
                                          {
                                            v46 = v45;
                                            NVMeZeroMemory(v47, v45);
                                            v44 = 0;
                                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                           a1,
                                                           (unsigned int)"MedPowerD3IdleTimeout",
                                                           v28,
                                                           (unsigned int)&v47,
                                                           (__int64)&v45,
                                                           (__int64)&v46,
                                                           (__int64)v48,
                                                           v6,
                                                           (__int64)&v44);
                                            if ( (_BYTE)v1 == 1 )
                                            {
                                              LOBYTE(v1) = v44;
                                              *(_DWORD *)(a1 + 88) = v44;
                                            }
                                            if ( v47 )
                                            {
                                              v46 = v45;
                                              NVMeZeroMemory(v47, v45);
                                              v44 = 0;
                                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                             a1,
                                                             (unsigned int)"LowestPowerD3IdleTimeout",
                                                             v29,
                                                             (unsigned int)&v47,
                                                             (__int64)&v45,
                                                             (__int64)&v46,
                                                             (__int64)v48,
                                                             v6,
                                                             (__int64)&v44);
                                              if ( (_BYTE)v1 == 1 )
                                              {
                                                LOBYTE(v1) = v44;
                                                *(_DWORD *)(a1 + 92) = v44;
                                              }
                                              if ( v47 )
                                              {
                                                v46 = v45;
                                                NVMeZeroMemory(v47, v45);
                                                v44 = 0;
                                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                               a1,
                                                               (unsigned int)"MedPowerResumeLatency",
                                                               v30,
                                                               (unsigned int)&v47,
                                                               (__int64)&v45,
                                                               (__int64)&v46,
                                                               (__int64)v48,
                                                               v6,
                                                               (__int64)&v44);
                                                if ( (_BYTE)v1 == 1 )
                                                {
                                                  LOBYTE(v1) = v44;
                                                  *(_DWORD *)(a1 + 96) = v44;
                                                }
                                                if ( v47 )
                                                {
                                                  v46 = v45;
                                                  NVMeZeroMemory(v47, v45);
                                                  v44 = 0;
                                                  LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                 a1,
                                                                 (unsigned int)"LowestPowerResumeLatency",
                                                                 v31,
                                                                 (unsigned int)&v47,
                                                                 (__int64)&v45,
                                                                 (__int64)&v46,
                                                                 (__int64)v48,
                                                                 v6,
                                                                 (__int64)&v44);
                                                  if ( (_BYTE)v1 == 1 )
                                                  {
                                                    LOBYTE(v1) = v44;
                                                    *(_DWORD *)(a1 + 100) = v44;
                                                  }
                                                  if ( v47 )
                                                  {
                                                    v46 = v45;
                                                    NVMeZeroMemory(v47, v45);
                                                    v44 = 0;
                                                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                   a1,
                                                                   (unsigned int)"HostMemoryBufferBytes",
                                                                   v32,
                                                                   (unsigned int)&v47,
                                                                   (__int64)&v45,
                                                                   (__int64)&v46,
                                                                   (__int64)v48,
                                                                   v6,
                                                                   (__int64)&v44);
                                                    if ( (_BYTE)v1 == 1 )
                                                    {
                                                      LOBYTE(v1) = v44;
                                                      *(_DWORD *)(a1 + 112) = v44;
                                                    }
                                                    if ( v47 )
                                                    {
                                                      v46 = v45;
                                                      NVMeZeroMemory(v47, v45);
                                                      v44 = 0;
                                                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                     a1,
                                                                     (unsigned int)"BypassSgl",
                                                                     v33,
                                                                     (unsigned int)&v47,
                                                                     (__int64)&v45,
                                                                     (__int64)&v46,
                                                                     (__int64)v48,
                                                                     v6,
                                                                     (__int64)&v44);
                                                      if ( (_BYTE)v1 == 1 )
                                                      {
                                                        LODWORD(v1) = (*(_DWORD *)(a1 + 52) ^ (8 * v44)) & 8;
                                                        *(_DWORD *)(a1 + 52) ^= v1;
                                                      }
                                                      if ( v47 )
                                                      {
                                                        v46 = v45;
                                                        NVMeZeroMemory(v47, v45);
                                                        v44 = 0;
                                                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                       a1,
                                                                       (unsigned int)"TestMdlDataBufferOffsetInBytes",
                                                                       v34,
                                                                       (unsigned int)&v47,
                                                                       (__int64)&v45,
                                                                       (__int64)&v46,
                                                                       (__int64)v48,
                                                                       v6,
                                                                       (__int64)&v44);
                                                        if ( (_BYTE)v1 == 1 )
                                                        {
                                                          LOBYTE(v1) = v44;
                                                          *(_DWORD *)(a1 + 116) = v44;
                                                        }
                                                        if ( v47 )
                                                        {
                                                          v46 = v45;
                                                          NVMeZeroMemory(v47, v45);
                                                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                         a1,
                                                                         (unsigned int)"UseDumpPointers",
                                                                         v35,
                                                                         (unsigned int)&v47,
                                                                         (__int64)&v45,
                                                                         (__int64)&v46,
                                                                         (__int64)v48,
                                                                         v6,
                                                                         0LL);
                                                          if ( (_BYTE)v1 == 1 )
                                                            *(_DWORD *)(a1 + 52) |= 0x10u;
                                                          if ( v47 )
                                                          {
                                                            v46 = v45;
                                                            NVMeZeroMemory(v47, v45);
                                                            v44 = 0;
                                                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                           a1,
                                                                           (unsigned int)"ReservedQueuePairCount",
                                                                           v36,
                                                                           (unsigned int)&v47,
                                                                           (__int64)&v45,
                                                                           (__int64)&v46,
                                                                           (__int64)v48,
                                                                           v6,
                                                                           (__int64)&v44);
                                                            if ( (_BYTE)v1 == 1 )
                                                            {
                                                              LOBYTE(v1) = v44 - 1;
                                                              if ( v44 - 1 <= 0xFFFE )
                                                                *(_DWORD *)(a1 + 120) = v44;
                                                            }
                                                            if ( v47 )
                                                            {
                                                              v46 = v45;
                                                              NVMeZeroMemory(v47, v45);
                                                              v44 = 0;
                                                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                             a1,
                                                                             (unsigned int)"NvmeTestSwitch",
                                                                             v37,
                                                                             (unsigned int)&v47,
                                                                             (__int64)&v45,
                                                                             (__int64)&v46,
                                                                             (__int64)v48,
                                                                             v6,
                                                                             (__int64)&v44);
                                                              if ( (_BYTE)v1 == 1 )
                                                              {
                                                                LOBYTE(v1) = v44;
                                                                if ( v44 )
                                                                  *(_DWORD *)(a1 + 124) = v44;
                                                              }
                                                              if ( v47 )
                                                              {
                                                                v46 = v45;
                                                                NVMeZeroMemory(v47, v45);
                                                                v44 = 0;
                                                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                               a1,
                                                                               (unsigned int)"IoQueuePercentageInPollingMode",
                                                                               v38,
                                                                               (unsigned int)&v47,
                                                                               (__int64)&v45,
                                                                               (__int64)&v46,
                                                                               (__int64)v48,
                                                                               v6,
                                                                               (__int64)&v44);
                                                                if ( (_BYTE)v1 == 1 )
                                                                {
                                                                  if ( v44 <= 0x64 )
                                                                  {
                                                                    LOBYTE(v1) = v44;
                                                                    *(_DWORD *)(a1 + 60) = (unsigned __int16)v44;
                                                                  }
                                                                  else
                                                                  {
                                                                    *(_DWORD *)(a1 + 60) = 100;
                                                                  }
                                                                }
                                                                if ( v47 )
                                                                {
                                                                  v46 = v45;
                                                                  NVMeZeroMemory(v47, v45);
                                                                  v44 = 0;
                                                                  LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                 a1,
                                                                                 (unsigned int)"IoPollingInterval",
                                                                                 v39,
                                                                                 (unsigned int)&v47,
                                                                                 (__int64)&v45,
                                                                                 (__int64)&v46,
                                                                                 (__int64)v48,
                                                                                 v6,
                                                                                 (__int64)&v44);
                                                                  if ( (_BYTE)v1 == 1 )
                                                                  {
                                                                    LODWORD(v1) = 100000;
                                                                    if ( v44 < 0x186A0 )
                                                                      LODWORD(v1) = v44;
                                                                    *(_DWORD *)(a1 + 64) = v1;
                                                                  }
                                                                  if ( v47 )
                                                                  {
                                                                    v46 = v45;
                                                                    NVMeZeroMemory(v47, v45);
                                                                    v44 = 0;
                                                                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                   a1,
                                                                                   (unsigned int)"IoCompletionCapInDPC",
                                                                                   v40,
                                                                                   (unsigned int)&v47,
                                                                                   (__int64)&v45,
                                                                                   (__int64)&v46,
                                                                                   (__int64)v48,
                                                                                   v6,
                                                                                   (__int64)&v44);
                                                                    if ( (_BYTE)v1 == 1 )
                                                                    {
                                                                      LODWORD(v1) = v44;
                                                                      if ( v44 )
                                                                      {
                                                                        if ( v44 > 0x80 )
                                                                          LODWORD(v1) = 128;
                                                                        *(_DWORD *)(a1 + 68) = v1;
                                                                      }
                                                                    }
                                                                    if ( v47 )
                                                                    {
                                                                      v46 = v45;
                                                                      NVMeZeroMemory(v47, v45);
                                                                      v44 = 0;
                                                                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                     a1,
                                                                                     (unsigned int)"IoPollingSize",
                                                                                     v41,
                                                                                     (unsigned int)&v47,
                                                                                     (__int64)&v45,
                                                                                     (__int64)&v46,
                                                                                     (__int64)v48,
                                                                                     v6,
                                                                                     (__int64)&v44);
                                                                      if ( (_BYTE)v1 == 1 )
                                                                      {
                                                                        LOBYTE(v1) = v44;
                                                                        if ( v44 )
                                                                          *(_DWORD *)(a1 + 72) = v44;
                                                                      }
                                                                      if ( v47 )
                                                                      {
                                                                        v46 = v45;
                                                                        NVMeZeroMemory(v47, v45);
                                                                        v44 = 0;
                                                                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                       a1,
                                                                                       (unsigned int)"ErrorEtwThrottleInterval",
                                                                                       v42,
                                                                                       (unsigned int)&v47,
                                                                                       (__int64)&v45,
                                                                                       (__int64)&v46,
                                                                                       (__int64)v48,
                                                                                       v6,
                                                                                       (__int64)&v44);
                                                                        if ( (_BYTE)v1 == 1 )
                                                                        {
                                                                          LODWORD(v1) = v44;
                                                                          if ( v44 )
                                                                          {
                                                                            if ( v44 > 0xD693A400 )
                                                                              LODWORD(v1) = -694967296;
                                                                            *(_DWORD *)(a1 + 128) = v1;
                                                                          }
                                                                        }
                                                                        if ( v47 )
                                                                          LOBYTE(v1) = StorPortFreeRegistryBuffer(a1);
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v1;
}
