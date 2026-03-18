/*
 * XREFs of KxInitializeProcessorState @ 0x14074E7BC
 * Callers:
 *     KiStartDynamicProcessor @ 0x14087DF0C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1409EDC20 (KeStartAllProcessors.c)
 * Callees:
 *     KiAddProcessorToGroupDatabase @ 0x140186154 (KiAddProcessorToGroupDatabase.c)
 *     KiCommitNodeAssignment @ 0x14018757C (KiCommitNodeAssignment.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KiEnableKvaShadowing @ 0x14059F81C (KiEnableKvaShadowing.c)
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
        __int64 a13,
        __int64 a14)
{
  KPCR *Pcr; // rbx
  unsigned __int64 v18; // rbp
  unsigned __int16 Limit; // ax
  const void *v20; // rdx
  void *v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdi
  _OWORD *v28; // rcx
  __int64 v29; // rdx
  _OWORD *v30; // rax
  __int128 v31; // xmm1
  __int64 result; // rax
  int v33; // ecx
  int v34; // eax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  char v37; // cl
  unsigned __int64 v38; // rcx

  Pcr = KeGetPcr();
  memset((void *)a3, 0, (unsigned int)Size);
  memset(a1, 0, 0x5C0uLL);
  *((_WORD *)a1 + 43) = Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Limit;
  v18 = a3 + a9;
  a1[11] = v18;
  memmove(
    (void *)v18,
    Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Base,
    Pcr->Prcb.ProcessorState.SpecialRegisters.Gdtr.Limit + 1LL);
  Limit = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit;
  v20 = KiBootProcessorIdt;
  v21 = (void *)(a3 + a10);
  a1[13] = (unsigned __int64)v21;
  *((_WORD *)a1 + 51) = Limit;
  memmove(v21, v20, (unsigned int)KiBootProcessorIdtSize);
  v22 = v18 - 8112;
  *(_BYTE *)(a3 + 82) = a7;
  *(_DWORD *)(a3 + 420) = a7;
  *(_DWORD *)(a3 + 452) = KeGetCurrentPrcb()->MHz;
  *(_QWORD *)(a3 + 11904) = KeGetCurrentPrcb()->MsrIa32TsxCtrl;
  v23 = 2LL;
  *(_QWORD *)(v18 - 8000) = a3;
  *(_BYTE *)(v18 + 68) = (unsigned int)(v18 - 8112) >> 16;
  *(_BYTE *)(v18 + 71) = (unsigned int)(v18 - 8112) >> 24;
  *(_DWORD *)(v18 + 72) = (v18 - 8112) >> 32;
  v24 = (((a8 << 6) + 36991) & 0xFFFFFFC0) + a3 + 0x2000;
  *(_WORD *)(v18 + 66) = v18 - 8112;
  v25 = (__int64 *)(v18 - 8112 + 36);
  do
  {
    *v25 = v24;
    v24 += 0x2000LL;
    ++v25;
    --v23;
  }
  while ( v23 );
  *(_QWORD *)(v22 + 60) = v24;
  v26 = v24 + 0x2000;
  *(_QWORD *)(v22 + 52) = v26;
  *(_QWORD *)(a14 - 80 + 40) = &KiExceptionDispatchOnExceptionStackContinue;
  v27 = KeNodeBlock[a6];
  *(_QWORD *)(a3 + 25688) = a13;
  *(_QWORD *)(a3 + 23976) = a14 - 80;
  v28 = (_OWORD *)((char *)&KiNodeInit + 384 * a6);
  *(_QWORD *)(v22 + 4) = a11;
  if ( (_OWORD *)v27 == v28 )
  {
    v29 = 3LL;
    v27 = v26 + 2112;
    v30 = (_OWORD *)(v26 + 2112);
    do
    {
      *v30 = *v28;
      v30[1] = v28[1];
      v30[2] = v28[2];
      v30[3] = v28[3];
      v30[4] = v28[4];
      v30[5] = v28[5];
      v30[6] = v28[6];
      v30 += 8;
      v31 = v28[7];
      v28 += 8;
      *(v30 - 1) = v31;
      --v29;
    }
    while ( v29 );
    KeNodeBlock[a6] = v27;
  }
  if ( (*(_BYTE *)(v27 + 181) & 4) == 0 )
    KiCommitNodeAssignment(v27);
  if ( !(unsigned int)KiEnableKvaShadowing(a3 + 384) )
    return 0LL;
  *(_QWORD *)(a3 + 576) = v27;
  KiAddProcessorToGroupDatabase(a3 + 384, a4);
  v33 = *(unsigned __int8 *)(a3 + 592) | (*(unsigned __int8 *)(a3 + 593) << 14) | 0x3C00;
  v34 = *(_DWORD *)(v18 + 84);
  *(_WORD *)(v18 + 80) = v33;
  *(_DWORD *)(v18 + 84) ^= (v33 ^ v34) & 0xF0000;
  *(_QWORD *)(a11 - 8) = 0LL;
  a1[46] = (unsigned __int64)a2;
  a1[61] = (unsigned __int64)KiSystemStartup;
  a1[49] = a11 - 8;
  *((_DWORD *)a1 + 74) = 2818064;
  *((_DWORD *)a1 + 75) = 5439531;
  a1[38] = 1572907LL;
  if ( KeSmapEnabled )
    *((_DWORD *)a1 + 77) = 0x40000;
  v35 = __readcr0();
  *a1 = v35;
  v36 = __readcr3();
  a1[2] = v36 & 0xFFFFFFFFFFFFF000uLL;
  *((_WORD *)a1 + 56) = 64;
  *(_BYTE *)(v18 + 69) = -119;
  v37 = *(_BYTE *)(v18 + 69);
  if ( VslVsmEnabled )
    v37 = -117;
  *(_BYTE *)(v18 + 69) = v37;
  v38 = __readcr4();
  a1[3] = v38;
  a2[18] = &KiInitialProcess;
  result = a3 + 384;
  a2[16] = a12;
  a2[19] = v26;
  a2[17] = a3 + 384;
  return result;
}
