/*
 * XREFs of IopConnectInterrupt @ 0x14074148C
 * Callers:
 *     IoConnectInterruptEx @ 0x140741210 (IoConnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x140779928 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectLineBasedInterrupt @ 0x1407814E8 (IopConnectLineBasedInterrupt.c)
 *     IopConnectInterruptFullySpecified @ 0x140783294 (IopConnectInterruptFullySpecified.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140004A40 (KeGetProcessorIndexFromNumber.c)
 *     KeInitializeDpc @ 0x1400B8D00 (KeInitializeDpc.c)
 *     KeVerifyGroupAffinity @ 0x14015A778 (KeVerifyGroupAffinity.c)
 *     KeFreeInterrupt @ 0x14017BAE8 (KeFreeInterrupt.c)
 *     KeInitializeInterruptEx @ 0x14017C0D8 (KeInitializeInterruptEx.c)
 *     KeAllocateInterrupt @ 0x14017C218 (KeAllocateInterrupt.c)
 *     KeConnectInterrupt @ 0x14017C2CC (KeConnectInterrupt.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopDestroyActiveConnectBlock @ 0x1407418B0 (IopDestroyActiveConnectBlock.c)
 *     PnpTraceInterruptConnection @ 0x1407419B0 (PnpTraceInterruptConnection.c)
 *     IopInitializeActiveConnectBlock @ 0x1407419F8 (IopInitializeActiveConnectBlock.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x14077BCF8 (IopAcquireReleaseConnectLockInternal.c)
 *     IopAllocatePassiveInterruptBlock @ 0x1408618F0 (IopAllocatePassiveInterruptBlock.c)
 *     IopDestroyPassiveInterruptBlock @ 0x140861A48 (IopDestroyPassiveInterruptBlock.c)
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
  __m128i v12; // xmm0
  int v13; // r13d
  unsigned __int64 v14; // r15
  char v15; // al
  unsigned __int64 v17; // rdi
  char *PoolWithTag; // rax
  char *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __m128i v22; // xmm0
  unsigned __int8 v23; // bl
  __int64 v24; // rax
  char v25; // cl
  _DWORD *Interrupt; // rax
  _DWORD *v27; // r13
  int v28; // ebx
  _OWORD *v29; // rax
  _OWORD *v30; // rcx
  __int64 v31; // rdx
  __int128 v32; // xmm1
  PSLIST_ENTRY *v34; // r14
  __int64 v35; // [rsp+70h] [rbp-98h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+88h] [rbp-80h] BYREF
  int v37; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v38; // [rsp+90h] [rbp-78h]
  ULONG ProcessorIndexFromNumber; // [rsp+94h] [rbp-74h]
  __m128i v40; // [rsp+98h] [rbp-70h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-60h]
  __int64 v42; // [rsp+B0h] [rbp-58h]
  _QWORD v43[18]; // [rsp+B8h] [rbp-50h] BYREF
  bool v48; // [rsp+188h] [rbp+80h]
  char v49; // [rsp+188h] [rbp+80h]
  char v50; // [rsp+198h] [rbp+90h]
  char v51; // [rsp+1A0h] [rbp+98h]

  memset(v43, 0, 0x50uLL);
  *a1 = 0LL;
  ProcNumber = 0;
  v50 = 0;
  IopInitializeActiveConnectBlock(a10, v43);
  v12 = *(__m128i *)(a10 + 32);
  v13 = *(_DWORD *)(a10 + 24);
  v38 = *(_DWORD *)(a10 + 12);
  v40 = v12;
  v37 = v13;
  v14 = v12.m128i_i64[0] & qword_140572748[(unsigned __int16)_mm_extract_epi16(v12, 4)];
  v15 = *(_BYTE *)(a10 + 16);
  v40.m128i_i64[0] = v14;
  v51 = v15;
  if ( !*(_DWORD *)(a10 + 8)
    && !((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))off_1404244C0[0])(0LL, *(unsigned int *)(a10 + 64))
    && (unsigned int)(*(_DWORD *)(a10 + 20) - 3) <= 1 )
  {
    v50 = 1;
    v13 = 0;
    v37 = 0;
  }
  v48 = a7 == 0;
  if ( KeVerifyGroupAffinity((__int64)&v40, 0)
    && (v17 = (0x101010101010101LL
             * ((((v14 - ((v14 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v14 - ((v14 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
               + ((((v14 - ((v14 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v14 - ((v14 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56,
        (_BYTE)v17) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * (char)v17 + 464), 0x6E696F49u);
    v19 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, (unsigned int)(8 * (char)v17 + 464));
      KeInitializeDpc((PRKDPC)(v19 + 400), 0LL, 0LL);
      v21 = (__int64)v19;
      *((_OWORD *)v19 + 1) = *(_OWORD *)a10;
      *((_OWORD *)v19 + 2) = *(_OWORD *)(a10 + 16);
      *((_OWORD *)v19 + 3) = *(_OWORD *)(a10 + 32);
      *((_OWORD *)v19 + 4) = *(_OWORD *)(a10 + 48);
      *((_OWORD *)v19 + 5) = *(_OWORD *)(a10 + 64);
      v22 = v40;
      *((_OWORD *)v19 + 6) = *(_OWORD *)(a10 + 80);
      *((_DWORD *)v19 + 10) = v13;
      ProcNumber.Reserved = 0;
      *((__m128i *)v19 + 3) = v22;
      if ( a6 )
        v21 = a6;
      *((_QWORD *)v19 + 1) = v14;
      v19[368] = v48;
      v23 = 0;
      v24 = (__int64)(v19 + 376);
      v42 = v21;
      if ( a7 )
        v24 = 0LL;
      v25 = 0;
      v41 = v24;
      v49 = 0;
      for ( ProcNumber.Group = _mm_extract_epi16(v22, 4); v25 < (char)v17; ++v23 )
      {
        if ( _bittest64((const __int64 *)&v14, v23) )
        {
          ProcNumber.Number = v23;
          ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(&ProcNumber);
          Interrupt = (_DWORD *)KeAllocateInterrupt((_SLIST_HEADER *)KiProcessorBlock[ProcessorIndexFromNumber]);
          v27 = Interrupt;
          if ( !Interrupt )
          {
            v28 = -1073741670;
            goto LABEL_31;
          }
          memset(Interrupt, 0, 0x100uLL);
          KeInitializeInterruptEx(
            v27,
            a2,
            a3,
            a4,
            a5,
            v42,
            v41,
            v38,
            v51,
            a7,
            v37,
            a8,
            ProcessorIndexFromNumber,
            v35,
            v50,
            (__int64)(v19 + 16));
          *(_QWORD *)&v19[8 * v49 + 464] = v27;
          v25 = ++v49;
        }
      }
      if ( !a7 )
      {
        v28 = IopAllocatePassiveInterruptBlock(v19 + 16, &v40);
        if ( v28 < 0 )
          goto LABEL_31;
      }
      if ( v43[3] )
      {
        LOBYTE(v20) = 1;
        IopAcquireReleaseConnectLockInternal(v43, v20, 0LL);
      }
      v28 = KeConnectInterrupt((__int64 *)v19 + 58, v17, (__int64)(v19 + 16));
      if ( v43[3] )
        IopAcquireReleaseConnectLockInternal(v43, 0LL, 0LL);
      if ( v28 < 0 )
      {
        if ( !a7 )
          IopDestroyPassiveInterruptBlock(v38);
      }
      else
      {
        v29 = (_OWORD *)*((_QWORD *)v19 + 58);
        v30 = v19 + 112;
        v31 = 2LL;
        do
        {
          *v30 = *v29;
          v30[1] = v29[1];
          v30[2] = v29[2];
          v30[3] = v29[3];
          v30[4] = v29[4];
          v30[5] = v29[5];
          v30[6] = v29[6];
          v30 += 8;
          v32 = v29[7];
          v29 += 8;
          *(v30 - 1) = v32;
          --v31;
        }
        while ( v31 );
        LOBYTE(v30) = 1;
        v28 = 0;
        *a1 = v19;
        PnpTraceInterruptConnection(v30);
      }
      if ( v28 < 0 )
      {
LABEL_31:
        if ( (char)v17 > 0 )
        {
          v34 = (PSLIST_ENTRY *)(v19 + 464);
          do
          {
            if ( *v34 )
              KeFreeInterrupt(*v34);
            ++v34;
            --v17;
          }
          while ( v17 );
        }
        ExFreePoolWithTag(v19, 0x6E696F49u);
      }
    }
    else
    {
      v28 = -1073741670;
    }
  }
  else
  {
    v28 = -1073741811;
  }
  IopDestroyActiveConnectBlock(v43);
  return (unsigned int)v28;
}
