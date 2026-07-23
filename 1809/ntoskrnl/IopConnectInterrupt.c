/*
 * XREFs of IopConnectInterrupt @ 0x1407119EC
 * Callers:
 *     IoConnectInterruptEx @ 0x140711770 (IoConnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x140754670 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectLineBasedInterrupt @ 0x14075B790 (IopConnectLineBasedInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x14075E104 (IopConnectInterruptFullySpecified.c)
 * Callees:
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 *     KeGetProcessorIndexFromNumber @ 0x1400A73B0 (KeGetProcessorIndexFromNumber.c)
 *     KeVerifyGroupAffinity @ 0x14016B82C (KeVerifyGroupAffinity.c)
 *     KeFreeInterrupt @ 0x14016D398 (KeFreeInterrupt.c)
 *     KeInitializeInterruptEx @ 0x14016D9E8 (KeInitializeInterruptEx.c)
 *     KeAllocateInterrupt @ 0x14016DB28 (KeAllocateInterrupt.c)
 *     PnpTraceInterruptUsage @ 0x14016DBDC (PnpTraceInterruptUsage.c)
 *     KeConnectInterrupt @ 0x14016DC40 (KeConnectInterrupt.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopDestroyActiveConnectBlock @ 0x140711DFC (IopDestroyActiveConnectBlock.c)
 *     IopInitializeActiveConnectBlock @ 0x140711EEC (IopInitializeActiveConnectBlock.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x140756FE4 (IopAcquireReleaseConnectLockInternal.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140828670 (IopAllocatePassiveInterruptBlock.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1408287C8 (IopDestroyPassiveInterruptBlock.c)
 */

__int64 __fastcall IopConnectInterrupt(
        _QWORD *a1,
        __int64 (__fastcall *a2)(__int64 a1, __int64 a2),
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        char a7,
        char a8,
        __int64 a9,
        __int64 a10)
{
  __m128i v11; // xmm0
  int v12; // r13d
  unsigned __int64 v13; // r15
  char v14; // al
  unsigned __int64 v16; // rdi
  char *PoolWithTag; // rax
  char *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __m128i v21; // xmm0
  unsigned __int8 v22; // bl
  __int64 v23; // rax
  char v24; // cl
  _DWORD *Interrupt; // rax
  _DWORD *v26; // r13
  int v27; // ebx
  _OWORD *v28; // rax
  _OWORD *v29; // rcx
  __int64 v30; // rdx
  __int128 v31; // xmm1
  PSLIST_ENTRY *v33; // r14
  __int64 v34; // [rsp+70h] [rbp-98h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+88h] [rbp-80h] BYREF
  int v36; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v37; // [rsp+90h] [rbp-78h]
  ULONG ProcessorIndexFromNumber; // [rsp+94h] [rbp-74h]
  __m128i v39; // [rsp+98h] [rbp-70h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-60h]
  __int64 v41; // [rsp+B0h] [rbp-58h]
  _BYTE v42[24]; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v43; // [rsp+D0h] [rbp-38h]
  bool v48; // [rsp+188h] [rbp+80h]
  char v49; // [rsp+188h] [rbp+80h]
  char v50; // [rsp+198h] [rbp+90h]
  char v51; // [rsp+1A0h] [rbp+98h]

  *a1 = 0LL;
  v50 = 0;
  IopInitializeActiveConnectBlock(a10, v42);
  v11 = *(__m128i *)(a10 + 32);
  v12 = *(_DWORD *)(a10 + 24);
  v37 = *(_DWORD *)(a10 + 12);
  v39 = v11;
  v36 = v12;
  v13 = v11.m128i_i64[0] & qword_1405426A8[(unsigned __int16)_mm_extract_epi16(v11, 4)];
  v14 = *(_BYTE *)(a10 + 16);
  v39.m128i_i64[0] = v13;
  v51 = v14;
  if ( !*(_DWORD *)(a10 + 8)
    && !((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))off_1403FF4C0[0])(0LL, *(unsigned int *)(a10 + 64))
    && (unsigned int)(*(_DWORD *)(a10 + 20) - 3) <= 1 )
  {
    v50 = 1;
    v12 = 0;
    v36 = 0;
  }
  v48 = a7 == 0;
  if ( KeVerifyGroupAffinity((__int64)&v39, 0)
    && (v16 = (0x101010101010101LL
             * ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
               + ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56,
        (_BYTE)v16) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * (char)v16 + 464), 0x6E696F49u);
    v18 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)(8 * (char)v16 + 464));
      KeInitializeDpc((PRKDPC)(v18 + 400), 0LL, 0LL);
      v20 = (__int64)v18;
      *((_OWORD *)v18 + 1) = *(_OWORD *)a10;
      *((_OWORD *)v18 + 2) = *(_OWORD *)(a10 + 16);
      *((_OWORD *)v18 + 3) = *(_OWORD *)(a10 + 32);
      *((_OWORD *)v18 + 4) = *(_OWORD *)(a10 + 48);
      *((_OWORD *)v18 + 5) = *(_OWORD *)(a10 + 64);
      v21 = v39;
      *((_OWORD *)v18 + 6) = *(_OWORD *)(a10 + 80);
      *((_DWORD *)v18 + 10) = v12;
      ProcNumber.Reserved = 0;
      *((__m128i *)v18 + 3) = v21;
      if ( a6 )
        v20 = a6;
      *((_QWORD *)v18 + 1) = v13;
      v18[368] = v48;
      v22 = 0;
      v23 = (__int64)(v18 + 376);
      v41 = v20;
      if ( a7 )
        v23 = 0LL;
      v24 = 0;
      v40 = v23;
      v49 = 0;
      for ( ProcNumber.Group = _mm_extract_epi16(v21, 4); v24 < (char)v16; ++v22 )
      {
        if ( _bittest64((const __int64 *)&v13, v22) )
        {
          ProcNumber.Number = v22;
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
          Interrupt = (_DWORD *)KeAllocateInterrupt((_SLIST_HEADER *)KiProcessorBlock[ProcessorIndexFromNumber]);
          v26 = Interrupt;
          if ( !Interrupt )
          {
            v27 = -1073741670;
            goto LABEL_31;
          }
          memset(Interrupt, 0, 0x100uLL);
          KeInitializeInterruptEx(
            v26,
            a2,
            a3,
            a4,
            a5,
            v41,
            v40,
            v37,
            v51,
            a7,
            v36,
            a8,
            ProcessorIndexFromNumber,
            v34,
            v50,
            (__int64)(v18 + 16));
          *(_QWORD *)&v18[8 * v49 + 464] = v26;
          v24 = ++v49;
        }
      }
      if ( !a7 )
      {
        v27 = IopAllocatePassiveInterruptBlock(v18 + 16, &v39);
        if ( v27 < 0 )
          goto LABEL_31;
      }
      if ( v43 )
      {
        LOBYTE(v19) = 1;
        IopAcquireReleaseConnectLockInternal(v42, v19, 0LL);
      }
      v27 = KeConnectInterrupt((__int64 *)v18 + 58, v16, (__int64)(v18 + 16));
      if ( v43 )
        IopAcquireReleaseConnectLockInternal(v42, 0LL, 0LL);
      if ( v27 < 0 )
      {
        if ( !a7 )
          IopDestroyPassiveInterruptBlock(v37);
      }
      else
      {
        v28 = (_OWORD *)*((_QWORD *)v18 + 58);
        v29 = v18 + 112;
        v30 = 2LL;
        do
        {
          *v29 = *v28;
          v29[1] = v28[1];
          v29[2] = v28[2];
          v29[3] = v28[3];
          v29[4] = v28[4];
          v29[5] = v28[5];
          v29[6] = v28[6];
          v29 += 8;
          v31 = v28[7];
          v28 += 8;
          *(v29 - 1) = v31;
          --v30;
        }
        while ( v30 );
        v27 = 0;
        *a1 = v18;
        PnpTraceInterruptUsage(1);
      }
      if ( v27 < 0 )
      {
LABEL_31:
        if ( (char)v16 > 0 )
        {
          v33 = (PSLIST_ENTRY *)(v18 + 464);
          do
          {
            if ( *v33 )
              KeFreeInterrupt(*v33);
            ++v33;
            --v16;
          }
          while ( v16 );
        }
        ExFreePoolWithTag(v18, 0x6E696F49u);
      }
    }
    else
    {
      v27 = -1073741670;
    }
  }
  else
  {
    v27 = -1073741811;
  }
  IopDestroyActiveConnectBlock(v42);
  return (unsigned int)v27;
}
