/*
 * XREFs of KiMcheckAbort @ 0x1401D3140
 * Callers:
 *     KiMcheckAbortShadow @ 0x140350980 (KiMcheckAbortShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x1401026E0 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x1401C4B70 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x1401C4BF0 (KiSaveDebugRegisterState.c)
 *     KiSetSpecCtrlNmi @ 0x1401C8320 (KiSetSpecCtrlNmi.c)
 *     KxMcheckAbort @ 0x1401D3680 (KxMcheckAbort.c)
 *     KzSetIrqlUnsafe @ 0x1402A42F0 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1402AA3D0 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1402AC3F0 (KiCopyCounters.c)
 *     KiMcheckFastForward @ 0x1402B6590 (KiMcheckFastForward.c)
 */

void __fastcall KiMcheckAbort(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  bool v15; // zf
  unsigned __int32 v16; // eax
  unsigned __int64 v17; // rdx
  int v18; // eax
  int v19; // r8d
  unsigned int v20; // eax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  __int128 v23; // xmm4
  __int128 v24; // xmm5
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r10
  unsigned __int8 CurrentIrql; // al
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  int v33; // r9d
  int v34; // r8d
  __int64 (__fastcall **v35)(); // rcx
  __int64 (__fastcall *v36)(); // rax
  _KIDTENTRY64 *IdtBase; // rax
  int v38; // edx
  int v39; // ecx
  __m128i v40; // [rsp+0h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter4[5]; // [rsp+10h] [rbp-80h] BYREF
  unsigned __int8 v42; // [rsp+38h] [rbp-58h]
  unsigned __int8 v43; // [rsp+39h] [rbp-57h]
  unsigned __int8 v44; // [rsp+3Ah] [rbp-56h]
  char v45; // [rsp+3Bh] [rbp-55h]
  unsigned int v46; // [rsp+3Ch] [rbp-54h]
  __int64 v47; // [rsp+40h] [rbp-50h]
  __int64 v48; // [rsp+48h] [rbp-48h]
  __int64 v49; // [rsp+50h] [rbp-40h]
  __int64 v50; // [rsp+58h] [rbp-38h]
  __int64 v51; // [rsp+60h] [rbp-30h]
  __int64 v52; // [rsp+68h] [rbp-28h]
  __int64 v53; // [rsp+70h] [rbp-20h]
  unsigned __int64 v54; // [rsp+78h] [rbp-18h]
  _OWORD v55[6]; // [rsp+80h] [rbp-10h] BYREF
  unsigned __int64 v56; // [rsp+E0h] [rbp+50h]
  __int16 v57; // [rsp+110h] [rbp+80h]
  __int64 (__fastcall *retaddr)(); // [rsp+178h] [rbp+E8h]
  unsigned __int16 v59; // [rsp+180h] [rbp+F0h]
  unsigned int v60; // [rsp+188h] [rbp+F8h]
  unsigned __int64 v61; // [rsp+190h] [rbp+100h]
  unsigned __int16 v62; // [rsp+198h] [rbp+108h]

  v45 = 0;
  v47 = v8;
  v48 = a1;
  v49 = a2;
  v50 = a3;
  v51 = a4;
  v52 = v9;
  v53 = v10;
  if ( (v59 & 1) == 0 )
  {
    v54 = __readmsr(0xC0000101);
    v16 = __segmentlimit(0x50u);
    if ( v15 )
    {
      v19 = (v16 & 0x3FF) << 6;
      v18 = v16 >> 14;
    }
    else
    {
      if ( !MEMORY[0xFFFFF78000000294] )
      {
        __sgdt(v55);
        v17 = *(_QWORD *)(*(_QWORD *)((char *)v55 + 2) - 8000LL);
LABEL_8:
        v20 = v17;
        v21 = HIDWORD(v17);
        __writemsr(0xC0000101, __PAIR64__(v21, v20));
        v22 = __readcr2();
        v56 = v22;
        KiSetSpecCtrlNmi(3221225729LL, v21);
        goto LABEL_13;
      }
      __asm { rdtscp }
      v18 = 1;
      v19 = 805306432;
    }
    v17 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v19 | v18]] - 384;
    goto LABEL_8;
  }
  if ( (KiKvaShadow & 1) == 0 )
    __asm { swapgs }
  _mm_lfence();
  KiSetSpecCtrlNmi(a1, a2);
  v15 = (*(_BYTE *)(v27 + 3) & 3) == 0;
  v57 = 0;
  if ( !v15 )
    *(double *)&v11 = KiSaveDebugRegisterState(v26, v25);
LABEL_13:
  v46 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v55[0] = v11;
  v55[1] = v12;
  v55[2] = v13;
  v55[3] = v14;
  v55[4] = v23;
  v55[5] = v24;
  if ( KeGetPcr()->Prcb.DeepSleep )
    KeWakeProcessor();
  if ( &ExpInterlockedPopEntrySListResume < (_UNKNOWN *)retaddr
    && &ExpInterlockedPopEntrySListEnd >= (_UNKNOWN *)retaddr )
  {
    KiCheckForSListAddress((__int64)BugCheckParameter4);
  }
  __incgsdword(0x5D00u);
  if ( (_BYTE)KeSmapEnabled )
    __asm { clac }
  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(15LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
  }
  v43 = CurrentIrql;
  _enable();
  KiMcheckFastForward((ULONG_PTR)BugCheckParameter4);
  if ( (v59 & 1) == 0 )
  {
    v30 = *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52);
    if ( v61 <= v30 )
    {
      v29 = 0x2000LL;
      if ( (KiKvaShadow & 1) != 0 )
        v29 = 464LL;
      if ( v61 > v30 - v29 )
        goto LABEL_31;
    }
    if ( (KiKvaShadow & 1) != 0 )
    {
      v31 = *(_QWORD *)(*(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52) + 8LL);
      if ( v61 <= v31 && v61 > v31 - 8160 )
      {
LABEL_31:
        v62 |= 4u;
        _InterlockedIncrement64(&KiMcheckNmiBlocking);
      }
    }
    if ( *(_BYTE *)retaddr == 0xF4 && *(_WORD *)((char *)retaddr - 1) == 0xF4FB )
    {
      v60 &= ~0x200u;
      retaddr = (__int64 (__fastcall *)())((char *)retaddr - 1);
      _InterlockedIncrement64(&KiMcheckStiBlocking);
    }
  }
  KxMcheckAbort(BugCheckParameter4, v29, &v40);
  if ( (v40.m128i_i8[0] & 1) != 0 )
  {
    *((__m128i *)KeGetCurrentThread()->InitialStack - 26) = _mm_load_si128(&v40);
    v45 = 1;
  }
  _disable();
  if ( KiIrqlFlags )
    KzSetIrqlUnsafe(v43);
  else
    __writecr8(v43);
  _disable();
  if ( (v59 & 1) != 0 )
  {
    if ( (_BYTE)KeSmapEnabled )
      __asm { stac }
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->Header.LockNV & 0x40010000) != 0 && (CurrentThread->Header.Size & 1) != 0 )
    {
      KiCopyCounters();
      CurrentThread = KeGetCurrentThread();
    }
    _mm_setcsr(v46);
    if ( v57 )
      KiRestoreDebugRegisterState(CurrentThread);
    v33 = v51;
    v34 = v50;
    if ( v45 )
    {
      v35 = (__int64 (__fastcall **)())((char *)KeGetCurrentThread()->InitialStack - 40);
      *v35 = retaddr;
      v35[1] = (__int64 (__fastcall *)())v59;
      v35[2] = (__int64 (__fastcall *)())v60;
      v35[3] = (__int64 (__fastcall *)())v61;
      v35[4] = (__int64 (__fastcall *)())v62;
      v36 = KxMcheckAlternateReturn;
      if ( (KiKvaShadow & 1) != 0 )
      {
        IdtBase = KeGetPcr()->IdtBase;
        *(&IdtBase[1118].Alignment + 1) = KeGetPcr()->Prcb.KernelDirectoryTableBase & 0x7FFFFFFFFFFFFFFFLL;
        IdtBase[1118].Alignment = (unsigned __int64)KeGetPcr();
        IdtBase = (_KIDTENTRY64 *)((char *)IdtBase + 16856);
        IdtBase->Alignment = (unsigned __int64)*v35;
        *(_KIDTENTRY64 *)((char *)IdtBase + 8) = *(_KIDTENTRY64 *)(v35 + 1);
        *(&IdtBase[1].Alignment + 1) = (unsigned __int64)v35[3];
        IdtBase[2].Alignment = (unsigned __int64)v35;
        v36 = KxMcheckAlternateReturnShadow;
      }
      retaddr = v36;
    }
    else
    {
      __writegsbyte(0x853u, v42);
      if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
        __writemsr(0x48u, v44);
    }
    v38 = v49;
    v39 = v48;
    if ( (KiKvaShadow & 1) != 0 )
    {
LABEL_55:
      KiKernelIstMceExit(v39, v38, v34, v33, a5, a6, a7, a8);
      return;
    }
    __asm { swapgs }
    _mm_lfence();
  }
  else
  {
    _mm_setcsr(v46);
    __writegsbyte(0x853u, v42);
    if ( KeGetPcr()->Prcb.BpbKernelSpecCtrl )
      __writemsr(0x48u, v44);
    __writemsr(0xC0000101, v54);
    __writecr2(v56);
    v33 = v51;
    v34 = v50;
    v38 = v49;
    v39 = v48;
    if ( (KiKvaShadow & 1) != 0 )
      goto LABEL_55;
  }
  KiMcheckExit();
}
