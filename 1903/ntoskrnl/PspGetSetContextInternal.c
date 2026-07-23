/*
 * XREFs of PspGetSetContextInternal @ 0x1405E7FD0
 * Callers:
 *     PspGetSetContextSpecialApc @ 0x1401CB850 (PspGetSetContextSpecialApc.c)
 * Callees:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14001A8A0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpIsFrameInBoundsEx @ 0x14001AAA0 (RtlpIsFrameInBoundsEx.c)
 *     RtlpVirtualUnwind @ 0x14001AB00 (RtlpVirtualUnwind.c)
 *     PspGetBaseTrapFrame @ 0x14001B3F0 (PspGetBaseTrapFrame.c)
 *     KeVerifyContextXStateCetU @ 0x14001B750 (KeVerifyContextXStateCetU.c)
 *     MmUnlockPages @ 0x14006A390 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x14008E960 (MmProbeAndLockPages.c)
 *     RtlpGetStackLimits @ 0x1400C2F50 (RtlpGetStackLimits.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     RtlpCaptureContext @ 0x1401CBAF0 (RtlpCaptureContext.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KeDoesTebMatchThread @ 0x1402B6DE0 (KeDoesTebMatchThread.c)
 *     KeGetCurrentUmsTeb @ 0x1402B6DFC (KeGetCurrentUmsTeb.c)
 *     RtlCopyContext @ 0x1405E7C38 (RtlCopyContext.c)
 *     PspGetContext @ 0x1405E8508 (PspGetContext.c)
 *     PspSetContext @ 0x1405E88D0 (PspSetContext.c)
 *     VslGetSetSecureContext @ 0x140852680 (VslGetSetSecureContext.c)
 *     KeClearUmsThreadKernelLock @ 0x1408808B8 (KeClearUmsThreadKernelLock.c)
 *     KeUpdateUmsThreadState @ 0x140880B94 (KeUpdateUmsThreadState.c)
 *     KeBuildPrimaryThreadContext @ 0x1408812E4 (KeBuildPrimaryThreadContext.c)
 *     KeCopyContextFromUch @ 0x1408815C8 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x140881884 (KeCopyContextFromUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x140881F24 (KeUpdatePrimaryThreadContext.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1408CD50C (PspRundownUmsThreadForApcDelivery.c)
 *     PspSetUmsThreadContext @ 0x1408CD6D0 (PspSetUmsThreadContext.c)
 *     PspSetContextState @ 0x1408CDAC4 (PspSetContextState.c)
 */

__int64 __fastcall PspGetSetContextInternal(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  unsigned __int8 v6; // r9
  struct _KTHREAD *CurrentThread; // r13
  __int64 BaseTrapFrame; // rsi
  char Reserved1; // cl
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  unsigned int *v13; // rax
  _DWORD *v14; // rcx
  int v15; // eax
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // rcx
  _DWORD *Object; // rbx
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // edi
  int v25; // eax
  __int64 v26; // r8
  int updated; // eax
  unsigned __int64 CurrentUmsTeb; // rax
  bool DoesTebMatchThread; // al
  __int64 v30; // rcx
  bool v31; // bl
  int v32; // eax
  bool v33; // zf
  CONTEXT *v34; // rbx
  char v35; // [rsp+60h] [rbp-5D8h]
  char v37[3]; // [rsp+71h] [rbp-5C7h] BYREF
  int v38; // [rsp+74h] [rbp-5C4h] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp-5C0h] BYREF
  unsigned __int64 v40; // [rsp+80h] [rbp-5B8h] BYREF
  __int64 v41[3]; // [rsp+88h] [rbp-5B0h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-598h]
  __int128 v43; // [rsp+A8h] [rbp-590h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-580h]
  __int64 v45; // [rsp+C0h] [rbp-578h] BYREF
  unsigned __int64 v46[5]; // [rsp+C8h] [rbp-570h] BYREF
  char v47[144]; // [rsp+F0h] [rbp-548h] BYREF
  char v48; // [rsp+180h] [rbp-4B8h] BYREF
  unsigned __int64 *v49; // [rsp+188h] [rbp-4B0h] BYREF
  char v50; // [rsp+190h] [rbp-4A8h] BYREF
  char v51; // [rsp+198h] [rbp-4A0h] BYREF
  char v52; // [rsp+1A0h] [rbp-498h] BYREF
  char v53; // [rsp+1C8h] [rbp-470h] BYREF
  char v54; // [rsp+1D0h] [rbp-468h] BYREF
  char v55; // [rsp+1D8h] [rbp-460h] BYREF
  char v56; // [rsp+1E0h] [rbp-458h] BYREF
  unsigned __int64 v57; // [rsp+1E8h] [rbp-450h]
  char v58; // [rsp+2F0h] [rbp-348h] BYREF
  char v59; // [rsp+300h] [rbp-338h] BYREF
  char v60; // [rsp+310h] [rbp-328h] BYREF
  char v61; // [rsp+320h] [rbp-318h] BYREF
  char v62; // [rsp+330h] [rbp-308h] BYREF
  char v63; // [rsp+340h] [rbp-2F8h] BYREF
  char v64; // [rsp+350h] [rbp-2E8h] BYREF
  char v65; // [rsp+360h] [rbp-2D8h] BYREF
  char v66; // [rsp+370h] [rbp-2C8h] BYREF
  char v67; // [rsp+380h] [rbp-2B8h] BYREF
  _BYTE MemoryDescriptorList[64]; // [rsp+5C0h] [rbp-78h] BYREF

  v3 = (_QWORD *)a3;
  v4 = a2;
  v42 = a2;
  v41[1] = a1;
  v41[2] = a3;
  memset(MemoryDescriptorList, 0, sizeof(MemoryDescriptorList));
  v6 = 0;
  v35 = 0;
  v38 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( *(_BYTE *)(a1 + 88) )
  {
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x200) != 0 )
    {
      v19 = *(_QWORD *)(a1 + 120);
      *(_WORD *)&MemoryDescriptorList[8] = 8 * (((unsigned __int16)((v19 & 0xFFF) + 5327) >> 12) + 6);
      *(_WORD *)&MemoryDescriptorList[10] = 0;
      *(_QWORD *)&MemoryDescriptorList[32] = v19 & 0xFFFFFFFFFFFFF000uLL;
      *(_DWORD *)&MemoryDescriptorList[44] = v19 & 0xFFF;
      *(_DWORD *)&MemoryDescriptorList[40] = 1232;
      MmProbeAndLockPages((PMDL)MemoryDescriptorList, 0, IoModifyAccess);
      *(_DWORD *)(a1 + 92) = VslGetSetSecureContext(
                               v4,
                               *(_QWORD *)(a1 + 120),
                               *(_QWORD *)&MemoryDescriptorList[48],
                               *(_QWORD *)&MemoryDescriptorList[56]);
      MmUnlockPages((PMDL)MemoryDescriptorList);
      goto LABEL_79;
    }
    BaseTrapFrame = PspGetBaseTrapFrame((__int64)CurrentThread);
    Reserved1 = CurrentThread->Header.Reserved1;
    if ( (Reserved1 & 0x40) != 0 )
    {
      Object = CurrentThread->WaitBlock[3].Object;
      if ( (Object[20] & 4) != 0 )
      {
        v21 = *(_QWORD *)Object;
        v22 = PspRundownUmsThreadForApcDelivery(CurrentThread, &v38, v21, 0LL);
        *(_DWORD *)(a1 + 92) = v22;
        if ( v22 < 0 )
          goto LABEL_78;
        if ( v4 )
        {
          *(_DWORD *)(a1 + 92) = PspSetUmsThreadContext(CurrentThread, *(_QWORD *)(a1 + 120), &v38);
        }
        else
        {
          v23 = *(_QWORD *)(a1 + 120);
          v24 = 0;
          if ( (v38 & 2) != 0 )
            v24 = KeCopyContextFromUmsContext(v23, *(_QWORD *)CurrentThread->WaitBlock[3].Object);
          else
            KeCopyContextFromUch(v23, CurrentThread->WaitBlock[3].SparePtr);
          *(_DWORD *)(a1 + 92) = v24;
        }
        v25 = KeClearUmsThreadKernelLock(v21);
        if ( v25 < 0 )
          *(_DWORD *)(a1 + 92) = v25;
        if ( (v38 & 8) == 0 )
          goto LABEL_78;
        LOBYTE(v26) = 1;
        updated = KeUpdateUmsThreadState(v21, 0LL, v26);
        v6 = 0;
        v3 = (_QWORD *)a3;
        if ( updated < 0 )
          *(_DWORD *)(a1 + 92) = updated;
        goto LABEL_20;
      }
      v3 = (_QWORD *)a3;
    }
    if ( Reserved1 < 0 )
    {
      CurrentUmsTeb = KeGetCurrentUmsTeb(CurrentThread);
      DoesTebMatchThread = KeDoesTebMatchThread((__int64)CurrentThread, CurrentUmsTeb);
      v31 = DoesTebMatchThread;
      if ( v4 )
      {
        v32 = KeUpdatePrimaryThreadContext(v30, *(_QWORD *)(a1 + 120));
        *(_DWORD *)(a1 + 92) = v32;
        v33 = !v31;
        v3 = (_QWORD *)a3;
        if ( v33 || v32 < 0 )
          goto LABEL_79;
      }
      else
      {
        if ( !DoesTebMatchThread )
        {
          *(_DWORD *)(a1 + 92) = KeBuildPrimaryThreadContext(v30, 0, *(_QWORD *)(a1 + 120), 1, 0LL, 0LL);
          goto LABEL_78;
        }
        v3 = (_QWORD *)a3;
      }
    }
  }
  else
  {
    BaseTrapFrame = (__int64)CurrentThread->TrapFrame;
    if ( !BaseTrapFrame || *(_WORD *)(BaseTrapFrame + 368) != 16 )
    {
      *(_DWORD *)(a1 + 92) = -1073741823;
      goto LABEL_20;
    }
  }
  if ( (*(_BYTE *)(a1 + 89) & 2) == 0 )
  {
    v18 = PspGetBaseTrapFrame((__int64)CurrentThread);
    *(_QWORD *)(a1 + 280) = v18 - 64;
    *(_QWORD *)(a1 + 304) = v18 - 48;
    *(_QWORD *)(a1 + 312) = v18 - 56;
    *(_QWORD *)(a1 + 352) = v18 - 40;
    *(_QWORD *)(a1 + 360) = v18 - 32;
    *(_QWORD *)(a1 + 368) = v18 - 24;
    *(_QWORD *)(a1 + 376) = v18 - 16;
    *(_QWORD *)(a1 + 176) = v18 - 272;
    *(_QWORD *)(a1 + 184) = v18 - 256;
    *(_QWORD *)(a1 + 192) = v18 - 240;
    *(_QWORD *)(a1 + 200) = v18 - 272 + 48;
    *(_QWORD *)(a1 + 208) = v18 - 208;
    *(_QWORD *)(a1 + 216) = v18 - 192;
    *(_QWORD *)(a1 + 224) = v18 - 176;
    *(_QWORD *)(a1 + 232) = v18 - 160;
    *(_QWORD *)(a1 + 240) = v18 - 144;
    *(_QWORD *)(a1 + 248) = v18 - 128;
    *(_QWORD *)(a1 + 296) = BaseTrapFrame + 344;
LABEL_15:
    v14 = *(_DWORD **)(a1 + 120);
    v15 = v14[12] & 0x100008;
    if ( !v4 )
    {
      if ( v15 == 1048584 && *(_BYTE *)(a1 + 88) == 1 )
        _fxsave(v14 + 64);
      if ( CurrentThread[1].WaitBlock[3].Thread && *(_BYTE *)(a1 + 88) == 1 )
      {
        v34 = *(CONTEXT **)(a1 + 120);
        PspGetContext(BaseTrapFrame, a1 + 128, v34);
        if ( (CurrentThread->Header.Reserved1 & 8) != 0 )
          RtlCopyContext(v34, v34->ContextFlags, (PCONTEXT)CurrentThread[1].WaitBlock[3].Thread);
        v3 = (_QWORD *)a3;
      }
      else
      {
        PspGetContext(BaseTrapFrame, a1 + 128, *(_QWORD *)(a1 + 120));
      }
      goto LABEL_19;
    }
    if ( v15 == 1048584 )
    {
      if ( *(_BYTE *)(a1 + 88) != 1 )
      {
LABEL_26:
        if ( CurrentThread[1].WaitBlock[3].Thread
          && *(_BYTE *)(a1 + 88) == 1
          && ((*(_BYTE *)(a1 + 89) & 2) != 0 || (CurrentThread->Header.Reserved1 & 8) != 0) )
        {
          PspSetContextState(CurrentThread, *(_QWORD *)(a1 + 120));
        }
        else
        {
          PspSetContext(BaseTrapFrame, a1 + 128, *(_QWORD *)(a1 + 120), *(unsigned __int8 *)(a1 + 88));
        }
LABEL_19:
        *(_DWORD *)(a1 + 92) = 0;
        v6 = v35;
        goto LABEL_20;
      }
      v35 = 1;
    }
    if ( *(_BYTE *)(a1 + 88) == 1 )
    {
      v17 = KeVerifyContextXStateCetU((__int64)CurrentThread, v14);
      if ( v17 < 0 )
      {
        *(_DWORD *)(a1 + 92) = v17;
        v6 = v35;
        goto LABEL_20;
      }
    }
    goto LABEL_26;
  }
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v40, (__int64)&v39) )
  {
    *(_DWORD *)(a1 + 92) = -1073741823;
    goto LABEL_79;
  }
  v10 = 0LL;
  v41[0] = 0LL;
  memset(v46, 0, 0x20uLL);
  v43 = xmmword_140589020;
  v44 = qword_140589030;
  RtlpCaptureContext();
  *(_QWORD *)(a1 + 280) = &v48;
  *(_QWORD *)(a1 + 296) = &v50;
  *(_QWORD *)(a1 + 304) = &v51;
  *(_QWORD *)(a1 + 312) = &v52;
  *(_QWORD *)(a1 + 352) = &v53;
  *(_QWORD *)(a1 + 360) = &v54;
  *(_QWORD *)(a1 + 368) = &v55;
  *(_QWORD *)(a1 + 376) = &v56;
  *(_QWORD *)(a1 + 176) = &v58;
  *(_QWORD *)(a1 + 184) = &v59;
  *(_QWORD *)(a1 + 192) = &v60;
  *(_QWORD *)(a1 + 200) = &v61;
  *(_QWORD *)(a1 + 208) = &v62;
  *(_QWORD *)(a1 + 216) = &v63;
  *(_QWORD *)(a1 + 224) = &v64;
  *(_QWORD *)(a1 + 232) = &v65;
  *(_QWORD *)(a1 + 240) = &v66;
  *(_QWORD *)(a1 + 248) = &v67;
  *(_QWORD *)(a1 + 288) = &v49;
  v37[0] = 0;
  v11 = (unsigned __int64)v49;
  while ( 1 )
  {
    v12 = v57;
    if ( v57 <= 0xFFFF800000000000uLL || !RtlpIsFrameInBoundsEx(&v40, v11, &v39, v46) )
    {
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
        goto LABEL_76;
      goto LABEL_77;
    }
    v13 = RtlpLookupFunctionEntryForStackWalks(v12, (__int64)&v43);
    if ( v13 )
      break;
    if ( !*((_QWORD *)&v43 + 1) )
      goto LABEL_77;
    v57 = *v49;
    v11 = (unsigned __int64)++v49;
LABEL_13:
    if ( v10 == BaseTrapFrame )
    {
      v3 = (_QWORD *)a3;
      v4 = v42;
      goto LABEL_15;
    }
  }
  if ( (int)RtlpVirtualUnwind(0, *((__int64 *)&v43 + 1), v12, v13, (__int64)v47, v37, &v45, v41, a1 + 128, &v40, &v39) >= 0 )
  {
    v10 = v41[0];
    v11 = (unsigned __int64)v49;
    goto LABEL_13;
  }
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
LABEL_76:
    __int2c();
LABEL_77:
  *(_DWORD *)(a1 + 92) = -1073741823;
LABEL_78:
  v3 = (_QWORD *)a3;
LABEL_79:
  v6 = 0;
LABEL_20:
  if ( (*(_BYTE *)(a1 + 89) & 1) != 0 )
    *v3 = a1 + 96;
  else
    *v3 = 0LL;
  return v6;
}
