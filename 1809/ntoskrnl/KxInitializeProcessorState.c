/*
 * XREFs of KxInitializeProcessorState @ 0x14072AFF4
 * Callers:
 *     KiStartDynamicProcessor @ 0x140844028 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1409B6DAC (KeStartAllProcessors.c)
 * Callees:
 *     KiAddProcessorToGroupDatabase @ 0x14017E4B8 (KiAddProcessorToGroupDatabase.c)
 *     KiCommitNodeAssignment @ 0x14017E978 (KiCommitNodeAssignment.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KiEnableKvaShadowing @ 0x140573BD8 (KiEnableKvaShadowing.c)
 */

__int64 __fastcall KxInitializeProcessorState(
        unsigned __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        size_t Size,
        unsigned int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  KPCR *Pcr; // rbx
  unsigned __int64 v17; // r15
  unsigned __int16 Limit; // ax
  const void *v19; // rdx
  void *v20; // rcx
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rdi
  _OWORD *v27; // rcx
  __int64 v28; // rdx
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  __int64 result; // rax
  int v32; // ecx
  int v33; // eax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx

  Pcr = KeGetPcr();
  memset((void *)a3, 0, (unsigned int)Size);
  memset(a1, 0, 0x5C0uLL);
  *((_WORD *)a1 + 43) = Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Limit;
  v17 = a3 + a9;
  a1[11] = v17;
  memmove(
    (void *)v17,
    Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Base,
    Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Limit + 1LL);
  Limit = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit;
  v19 = KiBootProcessorIdt;
  v20 = (void *)(a3 + a10);
  a1[13] = (unsigned __int64)v20;
  *((_WORD *)a1 + 51) = Limit;
  memmove(v20, v19, (unsigned int)KiBootProcessorIdtSize);
  *(_BYTE *)(a3 + 82) = a7;
  v21 = 2LL;
  *(_DWORD *)(a3 + 420) = a7;
  *(_DWORD *)(a3 + 452) = KeGetCurrentPrcb()->MHz;
  *(_QWORD *)(a3 + 11904) = KeGetCurrentPrcb()->MsrIa32TsxCtrl;
  v22 = v17 - 8112;
  *(_QWORD *)(v17 - 8000) = a3;
  *(_BYTE *)(v17 + 68) = (unsigned int)(v17 - 8112) >> 16;
  *(_BYTE *)(v17 + 71) = (unsigned int)(v17 - 8112) >> 24;
  *(_DWORD *)(v17 + 72) = (v17 - 8112) >> 32;
  v23 = (((a8 << 6) + 32831) & 0xFFFFFFC0) + a3 + 0x2000;
  *(_WORD *)(v17 + 66) = v17 - 8112;
  v24 = (__int64 *)(v17 - 8112 + 36);
  do
  {
    *v24 = v23;
    v23 += 0x2000LL;
    ++v24;
    --v21;
  }
  while ( v21 );
  *(_QWORD *)(v22 + 60) = v23;
  v25 = v23 + 0x2000;
  *(_QWORD *)(v22 + 52) = v25;
  *(_QWORD *)(a3 + 25688) = a13;
  *(_QWORD *)(v22 + 4) = a11;
  v26 = KeNodeBlock[a6];
  v27 = (_OWORD *)((char *)&KiNodeInit + 384 * a6);
  if ( (_OWORD *)v26 == v27 )
  {
    v28 = 3LL;
    v26 = v25 + 2112;
    v29 = (_OWORD *)(v25 + 2112);
    do
    {
      *v29 = *v27;
      v29[1] = v27[1];
      v29[2] = v27[2];
      v29[3] = v27[3];
      v29[4] = v27[4];
      v29[5] = v27[5];
      v29[6] = v27[6];
      v29 += 8;
      v30 = v27[7];
      v27 += 8;
      *(v29 - 1) = v30;
      --v28;
    }
    while ( v28 );
    KeNodeBlock[a6] = v26;
  }
  if ( (*(_BYTE *)(v26 + 173) & 4) == 0 )
    KiCommitNodeAssignment(v26);
  if ( !(unsigned int)KiEnableKvaShadowing(a3 + 384) )
    return 0LL;
  *(_QWORD *)(a3 + 576) = v26;
  KiAddProcessorToGroupDatabase(a3 + 384, a4);
  v32 = *(unsigned __int8 *)(a3 + 592) | (*(unsigned __int8 *)(a3 + 593) << 14) | 0x3C00;
  v33 = *(_DWORD *)(v17 + 84);
  *(_WORD *)(v17 + 80) = v32;
  *(_DWORD *)(v17 + 84) ^= (v32 ^ v33) & 0xF0000;
  *(_QWORD *)(a11 - 8) = 0LL;
  a1[46] = (unsigned __int64)a2;
  a1[61] = (unsigned __int64)KiSystemStartup;
  a1[49] = a11 - 8;
  *((_DWORD *)a1 + 74) = 2818064;
  *((_DWORD *)a1 + 75) = 5439531;
  a1[38] = 1572907LL;
  v34 = __readcr0();
  *a1 = v34;
  v35 = __readcr3();
  a1[2] = v35 & 0xFFFFFFFFFFFFF000uLL;
  *((_WORD *)a1 + 56) = 64;
  *(_BYTE *)(v17 + 69) = -119;
  if ( VslVsmEnabled )
    *(_BYTE *)(v17 + 69) = -117;
  v36 = __readcr4();
  a1[3] = v36;
  a2[18] = &KiInitialProcess;
  result = a3 + 384;
  a2[16] = a12;
  a2[19] = v25;
  a2[17] = a3 + 384;
  return result;
}
