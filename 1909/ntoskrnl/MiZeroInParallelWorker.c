/*
 * XREFs of MiZeroInParallelWorker @ 0x1400F8EC0
 * Callers:
 *     MiZeroInParallel @ 0x1400F8BB8 (MiZeroInParallel.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140010D60 (KeSetPriorityThread.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14002AC80 (MiGetUltraMapping.c)
 *     MiMakeValidPte @ 0x14002B050 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14002C1E0 (MiMakeProtectionPfnCompatible.c)
 *     MiFreeZeroPageSizeIndex @ 0x14002DE60 (MiFreeZeroPageSizeIndex.c)
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     MiReleasePtes @ 0x14006B160 (MiReleasePtes.c)
 *     MiZeroPhysicalPage @ 0x14006F000 (MiZeroPhysicalPage.c)
 *     MiZeroAndConvertLargePage @ 0x140097F8C (MiZeroAndConvertLargePage.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiCreateUltraThreadContext @ 0x1400F8D40 (MiCreateUltraThreadContext.c)
 *     MiInitializeZeroedPfns @ 0x1400F91EC (MiInitializeZeroedPfns.c)
 *     MiDeleteUltraThreadContext @ 0x1400F92EC (MiDeleteUltraThreadContext.c)
 *     KeSetIdealProcessorThreadEx @ 0x1401275D0 (KeSetIdealProcessorThreadEx.c)
 *     KeSignalGate @ 0x140131560 (KeSignalGate.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeZeroPages @ 0x1401C8590 (KeZeroPages.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall MiZeroInParallelWorker(char *StartContext)
{
  char *v1; // rbx
  __int64 *v2; // r15
  struct _KTHREAD *CurrentThread; // rsi
  KPRIORITY v4; // edx
  __int64 v5; // r13
  unsigned int v6; // r14d
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // edi
  __int64 v11; // rax
  unsigned int v12; // edx
  __int64 v13; // r14
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r12
  unsigned int v17; // eax
  unsigned __int64 v18; // r8
  unsigned int v19; // esi
  unsigned __int64 v20; // rbp
  unsigned __int64 UltraMapping; // r15
  unsigned __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // r9
  int v25; // r8d
  int v26; // edx
  __int64 v27; // r11
  __int64 v28; // rdx
  int v29; // r8d
  __int64 v30; // rax
  int v31; // eax
  int v32; // ecx
  __int64 v33; // rbx
  __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  __int64 v36; // rdx
  int v37; // r8d
  char v38; // r11
  bool v39; // zf
  bool v40; // zf
  __int64 v41; // rdx
  int v42; // r8d
  unsigned __int64 v43; // r11
  bool v44; // zf
  bool v45; // zf
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rbx
  ULONG_PTR v48; // rax
  unsigned __int64 v49; // rsi
  __int64 v50; // rsi
  ULONG_PTR v51; // rbx
  __int64 v52; // r15
  unsigned __int64 v53; // rdi
  unsigned __int64 v54; // r15
  _QWORD *v55; // rdi
  __int64 v56; // rsi
  __int64 v57; // r13
  int ProtectionPfnCompatible; // eax
  unsigned __int64 v59; // r14
  __int64 v60; // rdx
  int v61; // r8d
  char v62; // r11
  bool v63; // zf
  unsigned int v64; // [rsp+20h] [rbp-128h] BYREF
  int v65; // [rsp+24h] [rbp-124h]
  unsigned int v66; // [rsp+28h] [rbp-120h]
  unsigned int v67; // [rsp+2Ch] [rbp-11Ch]
  KPRIORITY Priority; // [rsp+30h] [rbp-118h]
  __int64 v69; // [rsp+38h] [rbp-110h]
  __int64 v70; // [rsp+40h] [rbp-108h]
  int v71; // [rsp+48h] [rbp-100h]
  __int64 *v72; // [rsp+50h] [rbp-F8h]
  __int64 v73; // [rsp+58h] [rbp-F0h]
  struct _KTHREAD *v74; // [rsp+60h] [rbp-E8h]
  __int64 v75; // [rsp+68h] [rbp-E0h]
  __int64 v76; // [rsp+70h] [rbp-D8h]
  ULONG_PTR v77; // [rsp+78h] [rbp-D0h]
  char *v78; // [rsp+80h] [rbp-C8h]
  unsigned __int64 v79[16]; // [rsp+90h] [rbp-B8h] BYREF

  v1 = StartContext;
  v78 = StartContext;
  memset(v79, 0, sizeof(v79));
  v2 = (__int64 *)*((_QWORD *)v1 + 3);
  CurrentThread = KeGetCurrentThread();
  v4 = *(_DWORD *)v1;
  v5 = *v2;
  v6 = *((_DWORD *)v2 + 4);
  v69 = *((_QWORD *)v1 + 1);
  v7 = *((_DWORD *)v2 + 3);
  v70 = v5;
  v72 = v2;
  v66 = v6;
  v71 = v7;
  v74 = CurrentThread;
  if ( v4 == -1 )
    Priority = -1;
  else
    Priority = KeSetPriorityThread(CurrentThread, v4);
  v8 = -(int)MiCreateUltraThreadContext((__int64)v79, 0, 15);
  v9 = 0;
  v10 = v8 != 0 ? 0xF : 0;
  v67 = 0;
  v65 = v10;
  if ( v6 )
  {
    v11 = 0LL;
    v75 = 0LL;
    v12 = v6;
    while ( 1 )
    {
      v13 = 3 * v11;
      v14 = *(_DWORD *)(v5 + 24 * v11);
      v73 = v13;
      if ( v14 || _InterlockedIncrement((volatile signed __int32 *)(v5 + 8 * v13)) != 1 )
        goto LABEL_6;
      v15 = *(unsigned int *)(v5 + 8 * v13 + 4);
      v64 = v15;
      if ( (_DWORD)v15 != -1 )
      {
        v31 = KeSetIdealProcessorThreadEx(CurrentThread, v15, &v64);
        v32 = v64;
        if ( v31 < 0 )
          v32 = -1;
        v64 = v32;
      }
      v16 = *(_QWORD *)(v5 + 8 * v13 + 16);
      do
      {
        v17 = MiFreeZeroPageSizeIndex(v16);
        v19 = v17;
        if ( v17 <= 3 )
        {
          v20 = MiLargePageSizes[v17];
        }
        else
        {
          v19 = 3;
          v20 = 1LL;
        }
        if ( v19 <= 2 && *(unsigned __int8 *)(v16 + 34) >> 6 != v71 )
        {
          v33 = *(_QWORD *)v16;
          MiZeroAndConvertLargePage(v16, v19, v71, *((_DWORD *)v2 + 2));
          MiInitializeZeroedPfns(v16, v20, v69);
          v16 = v33;
LABEL_47:
          *(_QWORD *)(v5 + 8 * v13 + 8) -= v20;
          goto LABEL_35;
        }
        if ( !v10 )
        {
          v46 = *(_QWORD *)(v5 + 8 * v13 + 8);
          v47 = v20;
          if ( v46 > v18 )
            v46 = v18;
          if ( v46 >= v20 )
            v47 = v46;
          while ( 1 )
          {
            v48 = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)(unsigned int)v47);
            v77 = v48;
            v49 = v48;
            if ( v48 )
              break;
            v47 = (v47 >> 1) & ~(v20 - 1);
            if ( v47 < v20 )
            {
              v50 = *(_QWORD *)v16;
              v51 = (v16 + 0x58000000000LL) / 48;
              if ( v20 )
              {
                v52 = v69;
                v53 = v20;
                do
                {
                  MiZeroPhysicalPage(v51, 3, *(unsigned __int8 *)(v16 + 34) >> 6);
                  MiInitializeZeroedPfns(v16, 1LL, v52);
                  ++v51;
                  v16 += 48LL;
                  --v53;
                }
                while ( v53 );
                v2 = v72;
              }
              v16 = v50;
              goto LABEL_47;
            }
          }
          v54 = 0LL;
          v55 = (_QWORD *)v48;
          if ( !v47 )
          {
LABEL_120:
            *(_QWORD *)(v5 + 8 * v13 + 8) -= v47;
            KeZeroPages((__int64)(v49 << 25) >> 16, v47 << 12);
            MiReleasePtes((__int64)&qword_1404666C0, v49, v47);
            goto LABEL_34;
          }
          v56 = v69;
          while ( 2 )
          {
            v57 = *(_QWORD *)v16;
            v76 = *(_QWORD *)v16;
            ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v16);
            MiMakeValidPte((unsigned __int64)v55, (v16 + 0x58000000000LL) / 48, ProtectionPfnCompatible | 0xA0000000);
            if ( !v20 )
              goto LABEL_118;
            v59 = v20;
LABEL_106:
            if ( MiPteInShadowRange((unsigned __int64)v55) )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                v61 = 1;
                if ( !HIBYTE(word_1404658EC) )
                {
                  v63 = (v62 & 1) == 0;
LABEL_112:
                  if ( !v63 )
                    v60 |= 0x8000000000000000uLL;
                }
              }
              else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
              {
                v63 = (v62 & 1) == 0;
                goto LABEL_112;
              }
            }
            *v55 = v60;
            if ( v61 )
              MiWritePteShadow((__int64)v55);
            ++v55;
            if ( !--v59 )
            {
              v57 = v76;
              v56 = v69;
LABEL_118:
              MiInitializeZeroedPfns(v16, v20, v56);
              v54 += v20;
              v16 = v57;
              if ( v54 >= v47 )
              {
                v49 = v77;
                v13 = v73;
                v5 = v70;
                goto LABEL_120;
              }
              continue;
            }
            goto LABEL_106;
          }
        }
        UltraMapping = MiGetUltraMapping(&v79[4 * v19], v19, v20, 0);
        v22 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v19 <= 1uLL )
        {
          v34 = 2LL - v19;
          do
          {
            v22 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v34;
          }
          while ( v34 );
          v5 = v70;
        }
        v23 = MiMakeProtectionPfnCompatible(4, v16);
        v25 = -1543503872;
        if ( v19 > 1 )
          v25 = -1610612736;
        MiMakeValidPte(v22, v24, v23 | v25);
        if ( v19 != 2 )
        {
          if ( !MiPteInShadowRange(v22) )
            goto LABEL_27;
          if ( (unsigned int)MiPteHasShadow() )
          {
            v26 = 1;
            if ( !HIBYTE(word_1404658EC) )
            {
              v40 = (v27 & 1) == 0;
              goto LABEL_70;
            }
          }
          else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
          {
            v40 = (v27 & 1) == 0;
LABEL_70:
            if ( !v40 )
              v27 |= 0x8000000000000000uLL;
          }
LABEL_27:
          *(_QWORD *)v22 = v27;
          if ( v26 )
            MiWritePteShadow(v22);
          goto LABEL_29;
        }
        v35 = v22 + 128;
        if ( v22 >= v22 + 128 )
          goto LABEL_64;
        do
        {
          if ( !MiPteInShadowRange(v22) )
            goto LABEL_60;
          if ( (unsigned int)MiPteHasShadow() )
          {
            v37 = 1;
            if ( HIBYTE(word_1404658EC) )
              goto LABEL_60;
            v39 = (v38 & 1) == 0;
          }
          else
          {
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
              goto LABEL_60;
            v39 = (v38 & 1) == 0;
          }
          if ( !v39 )
            v36 |= 0x8000000000000000uLL;
LABEL_60:
          *(_QWORD *)v22 = v36;
          if ( v37 )
            MiWritePteShadow(v22);
          v22 += 8LL;
        }
        while ( v22 < v35 );
        v13 = v73;
        v5 = v70;
LABEL_64:
        v22 -= 128LL;
LABEL_29:
        KeZeroPages(UltraMapping, v20 << 12);
        if ( v19 == 2 )
        {
          if ( v22 >= v22 + 128 )
            goto LABEL_33;
          while ( 1 )
          {
            if ( MiPteInShadowRange(v22) )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                v42 = 1;
                if ( !HIBYTE(word_1404658EC) )
                {
                  v44 = (v41 & 1) == 0;
                  goto LABEL_79;
                }
              }
              else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
              {
                v44 = (v41 & 1) == 0;
LABEL_79:
                if ( !v44 )
                  v41 |= 0x8000000000000000uLL;
              }
            }
            *(_QWORD *)v22 = v41;
            if ( v42 )
              MiWritePteShadow(v22);
            v22 += 8LL;
            if ( v22 >= v43 )
            {
              v5 = v70;
              goto LABEL_33;
            }
          }
        }
        if ( !MiPteInShadowRange(v22) )
          goto LABEL_31;
        if ( (unsigned int)MiPteHasShadow() )
        {
          v29 = 1;
          if ( !HIBYTE(word_1404658EC) )
          {
            v45 = (v28 & 1) == 0;
            goto LABEL_90;
          }
        }
        else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
        {
          v45 = (v28 & 1) == 0;
LABEL_90:
          if ( !v45 )
            v28 |= 0x8000000000000000uLL;
        }
LABEL_31:
        *(_QWORD *)v22 = v28;
        if ( v29 )
          MiWritePteShadow(v22);
LABEL_33:
        v30 = MiInitializeZeroedPfns(v16, v20, v69);
        *(_QWORD *)(v5 + 8 * v13 + 8) -= v20;
        v16 = v30;
LABEL_34:
        v2 = v72;
LABEL_35:
        v10 = v65;
      }
      while ( v16 );
      CurrentThread = v74;
      if ( v64 != -1 )
        KeSetIdealProcessorThreadEx(v74, v64, 0LL);
      v12 = v66;
      v9 = v67;
LABEL_6:
      ++v9;
      v11 = v75 + 1;
      v67 = v9;
      ++v75;
      if ( v9 >= v12 )
      {
        v1 = v78;
        break;
      }
    }
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1 + 4, 0xFFFFFFFF) == 1 )
    KeSignalGate(v1 + 32, 1LL);
  if ( Priority != -1 )
    KeSetPriorityThread(CurrentThread, Priority);
  if ( v10 )
    MiDeleteUltraThreadContext(v79);
}
