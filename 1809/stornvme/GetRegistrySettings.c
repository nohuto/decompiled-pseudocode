/*
 * XREFs of GetRegistrySettings @ 0x1C001829C
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C000ACD0 (NVMeHwFindAdapter.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     __security_check_cookie @ 0x1C0006450 (__security_check_cookie.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x1C0019168 (ReadMultiSzRegistryValueAndCompareId.c)
 *     UlongToHex @ 0x1C0019334 (UlongToHex.c)
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
  int v20; // r8d
  int v21; // r8d
  int v22; // r8d
  void *v23; // rcx
  int v24; // r8d
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
  unsigned int v42; // [rsp+58h] [rbp+7h] BYREF
  unsigned int v43; // [rsp+5Ch] [rbp+Bh] BYREF
  unsigned int v44; // [rsp+60h] [rbp+Fh] BYREF
  void *v45; // [rsp+68h] [rbp+17h] BYREF
  char v46[32]; // [rsp+70h] [rbp+1Fh] BYREF

  LOBYTE(v1) = aVenVvvvDevDddd[24];
  strcpy(v46, "VEN_vvvv&DEV_dddd&REV_rr");
  v43 = 512;
  v44 = 0;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 52) &= 0xFFFFFFE0;
    *(_QWORD *)(a1 + 28) = 0LL;
    *(_DWORD *)(a1 + 80) = -1;
    *(_DWORD *)(a1 + 96) = -1;
    *(_DWORD *)(a1 + 100) = -1;
    *(_DWORD *)(a1 + 112) = -1;
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
    v1 = StorPortAllocateRegistryBuffer(a1, &v43);
    v45 = (void *)v1;
    if ( v1 )
    {
      UlongToHex(&v46[4], *(unsigned __int16 *)(a1 + 4), 4LL);
      UlongToHex(&v46[13], *(unsigned __int16 *)(a1 + 6), 4LL);
      UlongToHex(&v46[22], *(unsigned __int8 *)(a1 + 8), 2LL);
      v4 = v46;
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
      v44 = v43;
      if ( v5 < 0x1D )
        v6 = v5;
      NVMeZeroMemory(v3, v43);
      v42 = 0;
      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                     a1,
                     (unsigned int)"MaxTransferSize",
                     v7,
                     (unsigned int)&v45,
                     (__int64)&v43,
                     (__int64)&v44,
                     (__int64)v46,
                     v6,
                     (__int64)&v42);
      if ( (_BYTE)v1 == 1 )
      {
        LODWORD(v1) = v42;
        if ( v42 )
        {
          *(_DWORD *)(a1 + 28) = v42;
          if ( (unsigned int)v1 > 0x800 )
          {
            *(_DWORD *)(a1 + 28) = 2048;
            LODWORD(v1) = 2048;
          }
          LODWORD(v1) = (_DWORD)v1 << 10;
          *(_DWORD *)(a1 + 28) = v1;
        }
      }
      if ( v45 )
      {
        v44 = v43;
        NVMeZeroMemory(v45, v43);
        v42 = 0;
        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                       a1,
                       (unsigned int)"IoQueueDepth",
                       v8,
                       (unsigned int)&v45,
                       (__int64)&v43,
                       (__int64)&v44,
                       (__int64)v46,
                       v6,
                       (__int64)&v42);
        if ( (_BYTE)v1 == 1 )
        {
          LOBYTE(v1) = v42;
          if ( v42 )
            *(_DWORD *)(a1 + 32) = v42;
        }
        if ( v45 )
        {
          v44 = v43;
          NVMeZeroMemory(v45, v43);
          v42 = 0;
          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                         a1,
                         (unsigned int)"IoSubmissionQueueCount",
                         v9,
                         (unsigned int)&v45,
                         (__int64)&v43,
                         (__int64)&v44,
                         (__int64)v46,
                         v6,
                         (__int64)&v42);
          if ( (_BYTE)v1 == 1 )
          {
            LOBYTE(v1) = v42;
            if ( v42 )
              *(_WORD *)(a1 + 36) = v42;
          }
          if ( v45 )
          {
            v44 = v43;
            NVMeZeroMemory(v45, v43);
            v42 = 0;
            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                           a1,
                           (unsigned int)"IoCompletionQueueCount",
                           v10,
                           (unsigned int)&v45,
                           (__int64)&v43,
                           (__int64)&v44,
                           (__int64)v46,
                           v6,
                           (__int64)&v42);
            if ( (_BYTE)v1 == 1 )
            {
              LOBYTE(v1) = v42;
              if ( v42 )
                *(_WORD *)(a1 + 38) = v42;
            }
            if ( v45 )
            {
              v44 = v43;
              NVMeZeroMemory(v45, v43);
              v42 = 0;
              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                             a1,
                             (unsigned int)"InterruptCoalescingTime",
                             v11,
                             (unsigned int)&v45,
                             (__int64)&v43,
                             (__int64)&v44,
                             (__int64)v46,
                             v6,
                             (__int64)&v42);
              if ( (_BYTE)v1 == 1 )
              {
                LOBYTE(v1) = v42;
                if ( v42 )
                  *(_BYTE *)(a1 + 40) = v42;
              }
              if ( v45 )
              {
                v44 = v43;
                NVMeZeroMemory(v45, v43);
                v42 = 0;
                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                               a1,
                               (unsigned int)"InterruptCoalescingEntry",
                               v12,
                               (unsigned int)&v45,
                               (__int64)&v43,
                               (__int64)&v44,
                               (__int64)v46,
                               v6,
                               (__int64)&v42);
                if ( (_BYTE)v1 == 1 )
                {
                  LOBYTE(v1) = v42;
                  if ( v42 )
                    *(_BYTE *)(a1 + 41) = v42;
                }
                if ( v45 )
                {
                  v44 = v43;
                  NVMeZeroMemory(v45, v43);
                  v42 = 0;
                  LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                 a1,
                                 (unsigned int)"ArbitrationBurst",
                                 v13,
                                 (unsigned int)&v45,
                                 (__int64)&v43,
                                 (__int64)&v44,
                                 (__int64)v46,
                                 v6,
                                 (__int64)&v42);
                  if ( (_BYTE)v1 == 1 )
                  {
                    LOBYTE(v1) = v42;
                    if ( v42 )
                      *(_BYTE *)(a1 + 42) = v42;
                  }
                  if ( v45 )
                  {
                    v44 = v43;
                    NVMeZeroMemory(v45, v43);
                    v42 = 0;
                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                   a1,
                                   (unsigned int)"ContiguousMemoryFromAnyNode",
                                   v14,
                                   (unsigned int)&v45,
                                   (__int64)&v43,
                                   (__int64)&v44,
                                   (__int64)v46,
                                   v6,
                                   (__int64)&v42);
                    if ( (_BYTE)v1 == 1 && v42 )
                      *(_DWORD *)(a1 + 52) |= 2u;
                    if ( v45 )
                    {
                      v44 = v43;
                      NVMeZeroMemory(v45, v43);
                      v42 = 0;
                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                     a1,
                                     (unsigned int)"ShutdownTimeout",
                                     v15,
                                     (unsigned int)&v45,
                                     (__int64)&v43,
                                     (__int64)&v44,
                                     (__int64)v46,
                                     v6,
                                     (__int64)&v42);
                      if ( (_BYTE)v1 == 1 )
                      {
                        LOBYTE(v1) = v42;
                        if ( v42 )
                        {
                          if ( v42 > 0xFF )
                            LOBYTE(v1) = -1;
                          *(_BYTE *)(a1 + 43) = v1;
                        }
                      }
                      if ( v45 )
                      {
                        v44 = v43;
                        NVMeZeroMemory(v45, v43);
                        v42 = 0;
                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                       a1,
                                       (unsigned int)"DeallocateMaxLbaCount",
                                       v16,
                                       (unsigned int)&v45,
                                       (__int64)&v43,
                                       (__int64)&v44,
                                       (__int64)v46,
                                       v6,
                                       (__int64)&v42);
                        if ( (_BYTE)v1 == 1 )
                        {
                          LOBYTE(v1) = v42;
                          if ( v42 )
                            *(_DWORD *)(a1 + 44) = v42;
                        }
                        if ( v45 )
                        {
                          v44 = v43;
                          NVMeZeroMemory(v45, v43);
                          v42 = 0;
                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                         a1,
                                         (unsigned int)"DisableDeallocate",
                                         v17,
                                         (unsigned int)&v45,
                                         (__int64)&v43,
                                         (__int64)&v44,
                                         (__int64)v46,
                                         v6,
                                         (__int64)&v42);
                          if ( (_BYTE)v1 == 1 && v42 )
                            *(_DWORD *)(a1 + 52) |= 1u;
                          if ( v45 )
                          {
                            v44 = v43;
                            NVMeZeroMemory(v45, v43);
                            v42 = 0;
                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                           a1,
                                           (unsigned int)"ControllerBasicInit",
                                           v18,
                                           (unsigned int)&v45,
                                           (__int64)&v43,
                                           (__int64)&v44,
                                           (__int64)v46,
                                           v6,
                                           (__int64)&v42);
                            if ( (_BYTE)v1 == 1 && v42 )
                              *(_DWORD *)(a1 + 52) |= 4u;
                            if ( v45 )
                            {
                              v44 = v43;
                              NVMeZeroMemory(v45, v43);
                              v42 = 0;
                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                             a1,
                                             (unsigned int)"AsyncEventMask",
                                             v19,
                                             (unsigned int)&v45,
                                             (__int64)&v43,
                                             (__int64)&v44,
                                             (__int64)v46,
                                             v6,
                                             (__int64)&v42);
                              if ( (_BYTE)v1 == 1 )
                              {
                                LOBYTE(v1) = v42;
                                if ( v42 )
                                {
                                  LODWORD(v1) = v42 & 0x1F;
                                  *(_DWORD *)(a1 + 56) = v1;
                                }
                              }
                              if ( v45 )
                              {
                                v44 = v43;
                                NVMeZeroMemory(v45, v43);
                                v42 = 0;
                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                               a1,
                                               (unsigned int)"IdlePowerMode",
                                               v20,
                                               (unsigned int)&v45,
                                               (__int64)&v43,
                                               (__int64)&v44,
                                               (__int64)v46,
                                               v6,
                                               (__int64)&v42);
                                if ( (_BYTE)v1 == 1 )
                                {
                                  LOBYTE(v1) = v42;
                                  if ( v42 < 6 )
                                    *(_DWORD *)(a1 + 76) = v42;
                                }
                                if ( v45 )
                                {
                                  v44 = v43;
                                  NVMeZeroMemory(v45, v43);
                                  v42 = 0;
                                  if ( (unsigned __int8)ReadMultiSzRegistryValueAndCompareId(
                                                          a1,
                                                          (unsigned int)"DiagnosticFlags",
                                                          v21,
                                                          (unsigned int)&v45,
                                                          (__int64)&v43,
                                                          (__int64)&v44,
                                                          (__int64)v46,
                                                          v6,
                                                          (__int64)&v42) == 1
                                    && v42 )
                                  {
                                    *(_DWORD *)(a1 + 104) = v42;
                                  }
                                  LODWORD(v1) = *(_DWORD *)(a1 + 104);
                                  if ( (v1 & 2) != 0 )
                                    *(_DWORD *)(a1 + 108) = 0x100000;
                                  if ( v45 )
                                  {
                                    v44 = v43;
                                    NVMeZeroMemory(v45, v43);
                                    v42 = 0;
                                    if ( (unsigned __int8)ReadMultiSzRegistryValueAndCompareId(
                                                            a1,
                                                            (unsigned int)"LogSize",
                                                            v22,
                                                            (unsigned int)&v45,
                                                            (__int64)&v43,
                                                            (__int64)&v44,
                                                            (__int64)v46,
                                                            v6,
                                                            (__int64)&v42) == 1
                                      && v42 )
                                    {
                                      *(_DWORD *)(a1 + 108) = v42 << 10;
                                    }
                                    LODWORD(v1) = -1431655765 * *(_DWORD *)(a1 + 108);
                                    v23 = v45;
                                    *(_DWORD *)(a1 + 3772) = *(_DWORD *)(a1 + 108) / 0x18u;
                                    if ( v23 )
                                    {
                                      v44 = v43;
                                      NVMeZeroMemory(v23, v43);
                                      v42 = 0;
                                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                     a1,
                                                     (unsigned int)"IoStripeAlignment",
                                                     v24,
                                                     (unsigned int)&v45,
                                                     (__int64)&v43,
                                                     (__int64)&v44,
                                                     (__int64)v46,
                                                     v6,
                                                     (__int64)&v42);
                                      if ( (_BYTE)v1 == 1 )
                                      {
                                        LOBYTE(v1) = v42;
                                        if ( v42 )
                                        {
                                          LODWORD(v1) = v42 << 10;
                                          if ( ((v42 << 10) & 0xFFF) == 0 )
                                            *(_DWORD *)(a1 + 48) = v1;
                                        }
                                      }
                                      if ( v45 )
                                      {
                                        v44 = v43;
                                        NVMeZeroMemory(v45, v43);
                                        v42 = 0;
                                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                       a1,
                                                       (unsigned int)"MedPowerFxIdleTimeout",
                                                       v25,
                                                       (unsigned int)&v45,
                                                       (__int64)&v43,
                                                       (__int64)&v44,
                                                       (__int64)v46,
                                                       v6,
                                                       (__int64)&v42);
                                        if ( (_BYTE)v1 == 1 )
                                        {
                                          LOBYTE(v1) = v42;
                                          *(_DWORD *)(a1 + 80) = v42;
                                        }
                                        if ( v45 )
                                        {
                                          v44 = v43;
                                          NVMeZeroMemory(v45, v43);
                                          v42 = 0;
                                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                         a1,
                                                         (unsigned int)"LowestPowerFxIdleTimeout",
                                                         v26,
                                                         (unsigned int)&v45,
                                                         (__int64)&v43,
                                                         (__int64)&v44,
                                                         (__int64)v46,
                                                         v6,
                                                         (__int64)&v42);
                                          if ( (_BYTE)v1 == 1 )
                                          {
                                            LOBYTE(v1) = v42;
                                            *(_DWORD *)(a1 + 84) = v42;
                                          }
                                          if ( v45 )
                                          {
                                            v44 = v43;
                                            NVMeZeroMemory(v45, v43);
                                            v42 = 0;
                                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                           a1,
                                                           (unsigned int)"MedPowerD3IdleTimeout",
                                                           v27,
                                                           (unsigned int)&v45,
                                                           (__int64)&v43,
                                                           (__int64)&v44,
                                                           (__int64)v46,
                                                           v6,
                                                           (__int64)&v42);
                                            if ( (_BYTE)v1 == 1 )
                                            {
                                              LOBYTE(v1) = v42;
                                              *(_DWORD *)(a1 + 88) = v42;
                                            }
                                            if ( v45 )
                                            {
                                              v44 = v43;
                                              NVMeZeroMemory(v45, v43);
                                              v42 = 0;
                                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                             a1,
                                                             (unsigned int)"LowestPowerD3IdleTimeout",
                                                             v28,
                                                             (unsigned int)&v45,
                                                             (__int64)&v43,
                                                             (__int64)&v44,
                                                             (__int64)v46,
                                                             v6,
                                                             (__int64)&v42);
                                              if ( (_BYTE)v1 == 1 )
                                              {
                                                LOBYTE(v1) = v42;
                                                *(_DWORD *)(a1 + 92) = v42;
                                              }
                                              if ( v45 )
                                              {
                                                v44 = v43;
                                                NVMeZeroMemory(v45, v43);
                                                v42 = 0;
                                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                               a1,
                                                               (unsigned int)"MedPowerResumeLatency",
                                                               v29,
                                                               (unsigned int)&v45,
                                                               (__int64)&v43,
                                                               (__int64)&v44,
                                                               (__int64)v46,
                                                               v6,
                                                               (__int64)&v42);
                                                if ( (_BYTE)v1 == 1 )
                                                {
                                                  LOBYTE(v1) = v42;
                                                  *(_DWORD *)(a1 + 96) = v42;
                                                }
                                                if ( v45 )
                                                {
                                                  v44 = v43;
                                                  NVMeZeroMemory(v45, v43);
                                                  v42 = 0;
                                                  LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                 a1,
                                                                 (unsigned int)"LowestPowerResumeLatency",
                                                                 v30,
                                                                 (unsigned int)&v45,
                                                                 (__int64)&v43,
                                                                 (__int64)&v44,
                                                                 (__int64)v46,
                                                                 v6,
                                                                 (__int64)&v42);
                                                  if ( (_BYTE)v1 == 1 )
                                                  {
                                                    LOBYTE(v1) = v42;
                                                    *(_DWORD *)(a1 + 100) = v42;
                                                  }
                                                  if ( v45 )
                                                  {
                                                    v44 = v43;
                                                    NVMeZeroMemory(v45, v43);
                                                    v42 = 0;
                                                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                   a1,
                                                                   (unsigned int)"HostMemoryBufferBytes",
                                                                   v31,
                                                                   (unsigned int)&v45,
                                                                   (__int64)&v43,
                                                                   (__int64)&v44,
                                                                   (__int64)v46,
                                                                   v6,
                                                                   (__int64)&v42);
                                                    if ( (_BYTE)v1 == 1 )
                                                    {
                                                      LOBYTE(v1) = v42;
                                                      *(_DWORD *)(a1 + 112) = v42;
                                                    }
                                                    if ( v45 )
                                                    {
                                                      v44 = v43;
                                                      NVMeZeroMemory(v45, v43);
                                                      v42 = 0;
                                                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                     a1,
                                                                     (unsigned int)"BypassSgl",
                                                                     v32,
                                                                     (unsigned int)&v45,
                                                                     (__int64)&v43,
                                                                     (__int64)&v44,
                                                                     (__int64)v46,
                                                                     v6,
                                                                     (__int64)&v42);
                                                      if ( (_BYTE)v1 == 1 )
                                                      {
                                                        LODWORD(v1) = (*(_DWORD *)(a1 + 52) ^ (8 * v42)) & 8;
                                                        *(_DWORD *)(a1 + 52) ^= v1;
                                                      }
                                                      if ( v45 )
                                                      {
                                                        v44 = v43;
                                                        NVMeZeroMemory(v45, v43);
                                                        v42 = 0;
                                                        LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                       a1,
                                                                       (unsigned int)"TestMdlDataBufferOffsetInBytes",
                                                                       v33,
                                                                       (unsigned int)&v45,
                                                                       (__int64)&v43,
                                                                       (__int64)&v44,
                                                                       (__int64)v46,
                                                                       v6,
                                                                       (__int64)&v42);
                                                        if ( (_BYTE)v1 == 1 )
                                                        {
                                                          LOBYTE(v1) = v42;
                                                          *(_DWORD *)(a1 + 116) = v42;
                                                        }
                                                        if ( v45 )
                                                        {
                                                          v44 = v43;
                                                          NVMeZeroMemory(v45, v43);
                                                          LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                         a1,
                                                                         (unsigned int)"UseDumpPointers",
                                                                         v34,
                                                                         (unsigned int)&v45,
                                                                         (__int64)&v43,
                                                                         (__int64)&v44,
                                                                         (__int64)v46,
                                                                         v6,
                                                                         0LL);
                                                          if ( (_BYTE)v1 == 1 )
                                                            *(_DWORD *)(a1 + 52) |= 0x10u;
                                                          if ( v45 )
                                                          {
                                                            v44 = v43;
                                                            NVMeZeroMemory(v45, v43);
                                                            v42 = 0;
                                                            LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                           a1,
                                                                           (unsigned int)"ReservedQueuePairCount",
                                                                           v35,
                                                                           (unsigned int)&v45,
                                                                           (__int64)&v43,
                                                                           (__int64)&v44,
                                                                           (__int64)v46,
                                                                           v6,
                                                                           (__int64)&v42);
                                                            if ( (_BYTE)v1 == 1 )
                                                            {
                                                              LOBYTE(v1) = v42 - 1;
                                                              if ( v42 - 1 <= 0xFFFE )
                                                                *(_DWORD *)(a1 + 120) = v42;
                                                            }
                                                            if ( v45 )
                                                            {
                                                              v44 = v43;
                                                              NVMeZeroMemory(v45, v43);
                                                              v42 = 0;
                                                              LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                             a1,
                                                                             (unsigned int)"NvmeTestSwitch",
                                                                             v36,
                                                                             (unsigned int)&v45,
                                                                             (__int64)&v43,
                                                                             (__int64)&v44,
                                                                             (__int64)v46,
                                                                             v6,
                                                                             (__int64)&v42);
                                                              if ( (_BYTE)v1 == 1 )
                                                              {
                                                                LOBYTE(v1) = v42;
                                                                if ( v42 )
                                                                  *(_DWORD *)(a1 + 124) = v42;
                                                              }
                                                              if ( v45 )
                                                              {
                                                                v44 = v43;
                                                                NVMeZeroMemory(v45, v43);
                                                                v42 = 0;
                                                                LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                               a1,
                                                                               (unsigned int)"IoQueuePercentageInPollingMode",
                                                                               v37,
                                                                               (unsigned int)&v45,
                                                                               (__int64)&v43,
                                                                               (__int64)&v44,
                                                                               (__int64)v46,
                                                                               v6,
                                                                               (__int64)&v42);
                                                                if ( (_BYTE)v1 == 1 )
                                                                {
                                                                  if ( v42 <= 0x64 )
                                                                  {
                                                                    LOBYTE(v1) = v42;
                                                                    *(_DWORD *)(a1 + 60) = (unsigned __int16)v42;
                                                                  }
                                                                  else
                                                                  {
                                                                    *(_DWORD *)(a1 + 60) = 100;
                                                                  }
                                                                }
                                                                if ( v45 )
                                                                {
                                                                  v44 = v43;
                                                                  NVMeZeroMemory(v45, v43);
                                                                  v42 = 0;
                                                                  LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                 a1,
                                                                                 (unsigned int)"IoPollingInterval",
                                                                                 v38,
                                                                                 (unsigned int)&v45,
                                                                                 (__int64)&v43,
                                                                                 (__int64)&v44,
                                                                                 (__int64)v46,
                                                                                 v6,
                                                                                 (__int64)&v42);
                                                                  if ( (_BYTE)v1 == 1 )
                                                                  {
                                                                    LODWORD(v1) = 100000;
                                                                    if ( v42 < 0x186A0 )
                                                                      LODWORD(v1) = v42;
                                                                    *(_DWORD *)(a1 + 64) = v1;
                                                                  }
                                                                  if ( v45 )
                                                                  {
                                                                    v44 = v43;
                                                                    NVMeZeroMemory(v45, v43);
                                                                    v42 = 0;
                                                                    LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                   a1,
                                                                                   (unsigned int)"IoCompletionCapInDPC",
                                                                                   v39,
                                                                                   (unsigned int)&v45,
                                                                                   (__int64)&v43,
                                                                                   (__int64)&v44,
                                                                                   (__int64)v46,
                                                                                   v6,
                                                                                   (__int64)&v42);
                                                                    if ( (_BYTE)v1 == 1 )
                                                                    {
                                                                      LODWORD(v1) = v42;
                                                                      if ( v42 )
                                                                      {
                                                                        if ( v42 > 0x80 )
                                                                          LODWORD(v1) = 128;
                                                                        *(_DWORD *)(a1 + 68) = v1;
                                                                      }
                                                                    }
                                                                    if ( v45 )
                                                                    {
                                                                      v44 = v43;
                                                                      NVMeZeroMemory(v45, v43);
                                                                      v42 = 0;
                                                                      LOBYTE(v1) = ReadMultiSzRegistryValueAndCompareId(
                                                                                     a1,
                                                                                     (unsigned int)"IoPollingSize",
                                                                                     v40,
                                                                                     (unsigned int)&v45,
                                                                                     (__int64)&v43,
                                                                                     (__int64)&v44,
                                                                                     (__int64)v46,
                                                                                     v6,
                                                                                     (__int64)&v42);
                                                                      if ( (_BYTE)v1 == 1 )
                                                                      {
                                                                        LOBYTE(v1) = v42;
                                                                        if ( v42 )
                                                                          *(_DWORD *)(a1 + 72) = v42;
                                                                      }
                                                                      if ( v45 )
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
  return v1;
}
