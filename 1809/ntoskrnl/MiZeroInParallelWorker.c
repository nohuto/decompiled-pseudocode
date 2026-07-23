/*
 * XREFs of MiZeroInParallelWorker @ 0x14013C7C0
 * Callers:
 *     MiZeroInParallel @ 0x14013C644 (MiZeroInParallel.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14002DDB4 (MiMakeProtectionPfnCompatible.c)
 *     MiZeroPhysicalPage @ 0x140032010 (MiZeroPhysicalPage.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiGetUltraMapping @ 0x14003A740 (MiGetUltraMapping.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14003D7F0 (MiMakeValidPte.c)
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiFreeZeroPageSizeIndex @ 0x14009B3EC (MiFreeZeroPageSizeIndex.c)
 *     KeSetPriorityThread @ 0x1400CD8F0 (KeSetPriorityThread.c)
 *     MiDeleteUltraThreadContext @ 0x1400E188C (MiDeleteUltraThreadContext.c)
 *     MiZeroAndConvertLargePage @ 0x140118D38 (MiZeroAndConvertLargePage.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     KeSignalGate @ 0x140127780 (KeSignalGate.c)
 *     MiInitializeZeroedPfns @ 0x14013CABC (MiInitializeZeroedPfns.c)
 *     MiCreateUltraThreadContext @ 0x14013CBE4 (MiCreateUltraThreadContext.c)
 *     KeSetIdealProcessorThreadEx @ 0x14015CF4C (KeSetIdealProcessorThreadEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeZeroPages @ 0x1401C0A90 (KeZeroPages.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

void __fastcall MiZeroInParallelWorker(PVOID StartContext)
{
  PVOID v1; // rsi
  __int64 *v2; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // r13
  KPRIORITY v5; // edx
  int v6; // r12d
  __int64 v7; // r14
  __int64 v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // r8
  unsigned int v11; // r15d
  __int64 *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rdi
  unsigned int v15; // eax
  unsigned __int64 v16; // r8
  unsigned int v17; // ebp
  unsigned __int64 v18; // rsi
  unsigned __int64 UltraMapping; // r12
  unsigned __int64 v20; // rbx
  int ProtectionPfnCompatible; // eax
  __int64 v22; // r9
  int v23; // r8d
  __int64 v24; // rdx
  BOOL v25; // ebp
  int v26; // r8d
  __int64 v27; // rdx
  int v28; // r8d
  __int64 v29; // rax
  int v30; // eax
  int v31; // ecx
  __int64 v32; // rbx
  __int64 v33; // rcx
  bool v34; // zf
  bool v35; // zf
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rbx
  ULONG_PTR v38; // rax
  unsigned __int64 v39; // rbp
  __int64 v40; // r15
  ULONG_PTR v41; // rbx
  unsigned __int64 v42; // rbp
  unsigned __int64 v43; // r12
  _QWORD *v44; // r15
  int v45; // eax
  unsigned __int64 v46; // r13
  __int64 v47; // rdx
  int v48; // r8d
  char v49; // r11
  bool v50; // zf
  unsigned int v51; // [rsp+20h] [rbp-108h] BYREF
  unsigned int v52; // [rsp+24h] [rbp-104h]
  int v53; // [rsp+28h] [rbp-100h]
  KPRIORITY Priority; // [rsp+2Ch] [rbp-FCh]
  __int64 v55; // [rsp+30h] [rbp-F8h]
  struct _KTHREAD *v56; // [rsp+38h] [rbp-F0h]
  __int64 *v57; // [rsp+40h] [rbp-E8h]
  __int64 v58; // [rsp+48h] [rbp-E0h]
  __int64 v59; // [rsp+50h] [rbp-D8h]
  ULONG_PTR v60; // [rsp+58h] [rbp-D0h]
  PVOID v61; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v62[16]; // [rsp+70h] [rbp-B8h] BYREF

  v1 = StartContext;
  v61 = StartContext;
  memset(v62, 0, sizeof(v62));
  v2 = (__int64 *)*((_QWORD *)v1 + 3);
  CurrentThread = KeGetCurrentThread();
  v4 = *((_QWORD *)v1 + 1);
  v5 = *(_DWORD *)v1;
  v6 = *((_DWORD *)v2 + 3);
  v7 = *v2;
  v8 = *((unsigned int *)v2 + 4);
  v53 = v6;
  v55 = v4;
  v56 = CurrentThread;
  if ( v5 == -1 )
    Priority = -1;
  else
    Priority = KeSetPriorityThread(CurrentThread, v5);
  v9 = (v2[1] & 4) != 0 ? 3 : 8;
  v11 = (unsigned int)MiCreateUltraThreadContext(v62, 0LL, v9) != 0 ? v9 : 0;
  v52 = v11;
  if ( (_DWORD)v8 )
  {
    v12 = (__int64 *)(v7 + 16);
    v58 = v8;
    v57 = v12;
    v10 = 0x4000LL;
    while ( 1 )
    {
      if ( *((_DWORD *)v12 - 4) || _InterlockedIncrement((volatile signed __int32 *)v12 - 4) != 1 )
        goto LABEL_6;
      v13 = *((unsigned int *)v12 - 3);
      v51 = v13;
      if ( (_DWORD)v13 != -1 )
      {
        v30 = KeSetIdealProcessorThreadEx(CurrentThread, v13, &v51);
        v31 = v51;
        if ( v30 < 0 )
          v31 = -1;
        v51 = v31;
      }
      v14 = *v12;
      do
      {
        v15 = MiFreeZeroPageSizeIndex(v14);
        v17 = v15;
        if ( v15 <= 1 )
        {
          v18 = MiLargePageSizes[v15];
        }
        else
        {
          v17 = 3;
          v18 = 1LL;
        }
        if ( v17 <= 2 && *(unsigned __int8 *)(v14 + 34) >> 6 != v6 )
        {
          v32 = *(_QWORD *)v14;
          MiZeroAndConvertLargePage(v14, v17, v6);
          MiInitializeZeroedPfns(v14, v18, v4);
          *(v12 - 1) -= v18;
          v14 = v32;
          goto LABEL_34;
        }
        if ( v11 )
        {
          UltraMapping = MiGetUltraMapping(&v62[4 * v17], v17, v18, 0);
          v20 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v17 <= 1uLL )
          {
            v33 = 2LL - v17;
            do
            {
              v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              --v33;
            }
            while ( v33 );
            v4 = v55;
          }
          ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v14);
          v23 = -1543503872;
          if ( v17 > 1 )
            v23 = -1610612736;
          MiMakeValidPte(v20, v22, ProtectionPfnCompatible | v23);
          v25 = MiPteInShadowRange(v20);
          if ( v25 )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              v26 = 1;
              if ( HIBYTE(word_14043B26C) )
                goto LABEL_26;
              v34 = (v24 & 1) == 0;
            }
            else
            {
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
                goto LABEL_26;
              v34 = (v24 & 1) == 0;
            }
            if ( !v34 )
              v24 |= 0x8000000000000000uLL;
          }
LABEL_26:
          *(_QWORD *)v20 = v24;
          if ( v26 )
            MiWritePteShadow(v20, v24);
          KeZeroPages(UltraMapping, v18 << 12);
          v27 = ZeroPte;
          v28 = 0;
          if ( !v25 )
          {
LABEL_29:
            *(_QWORD *)v20 = v27;
            if ( v28 )
              MiWritePteShadow(v20, v27);
            v29 = MiInitializeZeroedPfns(v14, v18, v4);
            *(v12 - 1) -= v18;
            v14 = v29;
            goto LABEL_32;
          }
          if ( (unsigned int)MiPteHasShadow() )
          {
            v28 = 1;
            if ( HIBYTE(word_14043B26C) )
              goto LABEL_29;
            v35 = (v27 & 1) == 0;
          }
          else
          {
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
              goto LABEL_29;
            v35 = (v27 & 1) == 0;
          }
          if ( !v35 )
            v27 |= 0x8000000000000000uLL;
          goto LABEL_29;
        }
        v36 = *(v12 - 1);
        v37 = v18;
        if ( v36 > v16 )
          v36 = v16;
        if ( v36 >= v18 )
          v37 = v36;
        while ( 1 )
        {
          v38 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)(unsigned int)v37);
          v60 = v38;
          v39 = v38;
          if ( v38 )
            break;
          v37 = (v37 >> 1) & ~(v18 - 1);
          if ( v37 < v18 )
          {
            v40 = *(_QWORD *)v14;
            v41 = (v14 + 0x58000000000LL) / 48;
            if ( v18 )
            {
              v42 = v18;
              do
              {
                MiZeroPhysicalPage(v41, 3, *(unsigned __int8 *)(v14 + 34) >> 6);
                MiInitializeZeroedPfns(v14, 1LL, v4);
                ++v41;
                v14 += 48LL;
                --v42;
              }
              while ( v42 );
            }
            *(v12 - 1) -= v18;
            v14 = v40;
            goto LABEL_33;
          }
        }
        v43 = 0LL;
        v44 = (_QWORD *)v38;
        if ( !v37 )
          goto LABEL_88;
        do
        {
          v59 = *(_QWORD *)v14;
          v45 = MiMakeProtectionPfnCompatible(4, v14);
          MiMakeValidPte((unsigned __int64)v44, (v14 + 0x58000000000LL) / 48, v45 | 0xA0000000);
          if ( !v18 )
            goto LABEL_86;
          v46 = v18;
          do
          {
            if ( !MiPteInShadowRange((unsigned __int64)v44) )
              goto LABEL_82;
            if ( (unsigned int)MiPteHasShadow() )
            {
              v48 = 1;
              if ( HIBYTE(word_14043B26C) )
                goto LABEL_82;
              v50 = (v49 & 1) == 0;
            }
            else
            {
              if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
                goto LABEL_82;
              v50 = (v49 & 1) == 0;
            }
            if ( !v50 )
              v47 |= 0x8000000000000000uLL;
LABEL_82:
            *v44 = v47;
            if ( v48 )
              MiWritePteShadow((__int64)v44, v47);
            ++v44;
            --v46;
          }
          while ( v46 );
          v4 = v55;
LABEL_86:
          MiInitializeZeroedPfns(v14, v18, v4);
          v14 = v59;
          v43 += v18;
        }
        while ( v43 < v37 );
        v12 = v57;
        v39 = v60;
LABEL_88:
        *(v12 - 1) -= v37;
        KeZeroPages((__int64)(v39 << 25) >> 16, v37 << 12);
        MiReleasePtes((__int64)&qword_14043C060, v39, v37);
LABEL_32:
        v6 = v53;
LABEL_33:
        v11 = v52;
LABEL_34:
        v10 = 0x4000LL;
      }
      while ( v14 );
      CurrentThread = v56;
      if ( v51 != -1 )
      {
        KeSetIdealProcessorThreadEx(v56, v51, 0LL);
        v10 = 0x4000LL;
      }
LABEL_6:
      v12 += 3;
      v34 = v58-- == 1;
      v57 = v12;
      if ( v34 )
      {
        v1 = v61;
        break;
      }
    }
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1 + 4, 0xFFFFFFFF) == 1 )
    KeSignalGate((__int64)v1 + 32, 1LL, v10);
  if ( Priority != -1 )
    KeSetPriorityThread(CurrentThread, Priority);
  if ( v11 )
    MiDeleteUltraThreadContext((__int64)v62);
}
