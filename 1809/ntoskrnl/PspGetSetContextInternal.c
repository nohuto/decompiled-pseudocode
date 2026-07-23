/*
 * XREFs of PspGetSetContextInternal @ 0x140620940
 * Callers:
 *     PspGetSetContextSpecialApc @ 0x1401C5390 (PspGetSetContextSpecialApc.c)
 * Callees:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1400A0350 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpIsFrameInBoundsEx @ 0x1400A0550 (RtlpIsFrameInBoundsEx.c)
 *     RtlpVirtualUnwind @ 0x1400A05B0 (RtlpVirtualUnwind.c)
 *     PspGetBaseTrapFrame @ 0x1400A0E58 (PspGetBaseTrapFrame.c)
 *     KeVerifyContextXStateCetU @ 0x1400A1B50 (KeVerifyContextXStateCetU.c)
 *     RtlGetExtendedContextLength @ 0x1400A1C84 (RtlGetExtendedContextLength.c)
 *     RtlpGetStackLimits @ 0x1400CAC00 (RtlpGetStackLimits.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlpCaptureContext @ 0x1401C5630 (RtlpCaptureContext.c)
 *     KeDoesTebMatchThread @ 0x14029FBBC (KeDoesTebMatchThread.c)
 *     KeGetCurrentUmsTeb @ 0x14029FBD8 (KeGetCurrentUmsTeb.c)
 *     PspGetContext @ 0x140620FC8 (PspGetContext.c)
 *     PspSetContext @ 0x140621390 (PspSetContext.c)
 *     RtlCopyContext @ 0x140621E78 (RtlCopyContext.c)
 *     VslGetSetSecureContext @ 0x140819ACC (VslGetSetSecureContext.c)
 *     KeClearUmsThreadKernelLock @ 0x140846518 (KeClearUmsThreadKernelLock.c)
 *     KeUpdateUmsThreadState @ 0x140846808 (KeUpdateUmsThreadState.c)
 *     KeBuildPrimaryThreadContext @ 0x1408470E4 (KeBuildPrimaryThreadContext.c)
 *     KeCopyContextFromUch @ 0x1408473C8 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x140847684 (KeCopyContextFromUmsContext.c)
 *     KeUpdatePrimaryThreadContext @ 0x140847D24 (KeUpdatePrimaryThreadContext.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1408903AC (PspRundownUmsThreadForApcDelivery.c)
 *     PspSetUmsThreadContext @ 0x14089055C (PspSetUmsThreadContext.c)
 *     PspSetContextState @ 0x140890960 (PspSetContextState.c)
 */

__int64 __fastcall PspGetSetContextInternal(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r12
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rsi
  ULONG v7; // r13d
  __int64 BaseTrapFrame; // r15
  int SetSecureContext; // eax
  char Reserved1; // al
  _QWORD *Object; // rdx
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  int v15; // esi
  int v16; // eax
  __int64 v17; // r8
  int updated; // eax
  unsigned __int64 CurrentUmsTeb; // rax
  bool DoesTebMatchThread; // al
  __int64 v21; // rcx
  bool v22; // si
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r12
  unsigned __int64 v26; // rcx
  ULONG_PTR v27; // rsi
  unsigned int *v28; // rax
  unsigned __int64 v29; // rax
  int v30; // r13d
  int v31; // ecx
  CONTEXT *v32; // rsi
  __int64 v33; // rcx
  char v35[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+64h] [rbp-9Ch] BYREF
  int v37; // [rsp+68h] [rbp-98h]
  ULONG ContextLength; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v40; // [rsp+78h] [rbp-88h] BYREF
  __int64 v41; // [rsp+80h] [rbp-80h] BYREF
  __int64 v42; // [rsp+88h] [rbp-78h]
  _QWORD *v43; // [rsp+90h] [rbp-70h]
  __int128 v44; // [rsp+98h] [rbp-68h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v46[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v47; // [rsp+D0h] [rbp-30h] BYREF
  char v48[144]; // [rsp+E0h] [rbp-20h] BYREF
  char v49; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 *v50; // [rsp+178h] [rbp+78h] BYREF
  char v51; // [rsp+180h] [rbp+80h] BYREF
  char v52; // [rsp+188h] [rbp+88h] BYREF
  char v53; // [rsp+190h] [rbp+90h] BYREF
  char v54; // [rsp+1B8h] [rbp+B8h] BYREF
  char v55; // [rsp+1C0h] [rbp+C0h] BYREF
  char v56; // [rsp+1C8h] [rbp+C8h] BYREF
  char v57; // [rsp+1D0h] [rbp+D0h] BYREF
  unsigned __int64 v58; // [rsp+1D8h] [rbp+D8h]
  char v59; // [rsp+2E0h] [rbp+1E0h] BYREF
  char v60; // [rsp+2F0h] [rbp+1F0h] BYREF
  char v61; // [rsp+300h] [rbp+200h] BYREF
  char v62; // [rsp+310h] [rbp+210h] BYREF
  char v63; // [rsp+320h] [rbp+220h] BYREF
  char v64; // [rsp+330h] [rbp+230h] BYREF
  char v65; // [rsp+340h] [rbp+240h] BYREF
  char v66; // [rsp+350h] [rbp+250h] BYREF
  char v67; // [rsp+360h] [rbp+260h] BYREF
  char v68; // [rsp+370h] [rbp+270h] BYREF

  v43 = a3;
  v42 = a2;
  v36 = 0;
  v4 = a2;
  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(a1 + 120);
  LOBYTE(v37) = 0;
  v7 = *(_DWORD *)(v6 + 48);
  if ( *(_BYTE *)(a1 + 88) )
  {
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x200) != 0 )
    {
      if ( RtlGetExtendedContextLength(v7, &ContextLength) < 0 )
      {
LABEL_69:
        *(_DWORD *)(a1 + 92) = -1073741823;
        goto LABEL_70;
      }
      SetSecureContext = VslGetSetSecureContext(v4, v6, ContextLength);
LABEL_8:
      *(_DWORD *)(a1 + 92) = SetSecureContext;
      goto LABEL_70;
    }
    BaseTrapFrame = PspGetBaseTrapFrame((__int64)CurrentThread);
    Reserved1 = CurrentThread->Header.Reserved1;
    if ( (Reserved1 & 0x40) != 0 )
    {
      Object = CurrentThread->WaitBlock[3].Object;
      if ( (Object[10] & 4) != 0 )
      {
        v12 = *Object;
        v13 = PspRundownUmsThreadForApcDelivery(CurrentThread, &v36, *Object, 0LL);
        *(_DWORD *)(a1 + 92) = v13;
        if ( v13 >= 0 )
        {
          v14 = *(_QWORD *)(a1 + 120);
          if ( v4 )
          {
            v15 = PspSetUmsThreadContext(CurrentThread, *(_QWORD *)(a1 + 120), &v36);
          }
          else
          {
            v15 = 0;
            if ( (v36 & 2) != 0 )
              v15 = KeCopyContextFromUmsContext(v14, *(_QWORD *)CurrentThread->WaitBlock[3].Object);
            else
              KeCopyContextFromUch(v14, CurrentThread->WaitBlock[3].SparePtr);
          }
          *(_DWORD *)(a1 + 92) = v15;
          v16 = KeClearUmsThreadKernelLock(v12);
          if ( v16 < 0 )
            *(_DWORD *)(a1 + 92) = v16;
          if ( (v36 & 8) != 0 )
          {
            LOBYTE(v17) = 1;
            updated = KeUpdateUmsThreadState(v12, 0LL, v17);
            if ( updated < 0 )
              *(_DWORD *)(a1 + 92) = updated;
          }
        }
        goto LABEL_70;
      }
    }
    if ( Reserved1 < 0 )
    {
      CurrentUmsTeb = KeGetCurrentUmsTeb(CurrentThread);
      DoesTebMatchThread = KeDoesTebMatchThread((__int64)CurrentThread, CurrentUmsTeb);
      v22 = DoesTebMatchThread;
      if ( v4 )
      {
        v23 = KeUpdatePrimaryThreadContext(v21, *(_QWORD *)(a1 + 120));
        *(_DWORD *)(a1 + 92) = v23;
        if ( !v22 || v23 < 0 )
          goto LABEL_70;
      }
      else if ( !DoesTebMatchThread )
      {
        *(_DWORD *)(a1 + 92) = KeBuildPrimaryThreadContext(v21, 0, *(_QWORD *)(a1 + 120), 1, 0LL, 0LL);
        goto LABEL_70;
      }
    }
  }
  else
  {
    BaseTrapFrame = (__int64)CurrentThread->TrapFrame;
    if ( !BaseTrapFrame || *(_WORD *)(BaseTrapFrame + 368) != 16 )
      goto LABEL_69;
  }
  if ( (*(_BYTE *)(a1 + 89) & 2) != 0 )
  {
    if ( (unsigned __int8)RtlpGetStackLimits((__int64)&v40, (__int64)&v39) )
    {
      v25 = 0LL;
      v41 = 0LL;
      memset(v46, 0, sizeof(v46));
      v44 = *(_OWORD *)&xmmword_140559020;
      v45 = qword_140559030;
      RtlpCaptureContext();
      v26 = (unsigned __int64)v50;
      *(_QWORD *)(a1 + 280) = &v49;
      *(_QWORD *)(a1 + 296) = &v51;
      *(_QWORD *)(a1 + 304) = &v52;
      *(_QWORD *)(a1 + 312) = &v53;
      *(_QWORD *)(a1 + 352) = &v54;
      *(_QWORD *)(a1 + 360) = &v55;
      *(_QWORD *)(a1 + 368) = &v56;
      *(_QWORD *)(a1 + 376) = &v57;
      *(_QWORD *)(a1 + 176) = &v59;
      *(_QWORD *)(a1 + 184) = &v60;
      *(_QWORD *)(a1 + 192) = &v61;
      *(_QWORD *)(a1 + 200) = &v62;
      *(_QWORD *)(a1 + 208) = &v63;
      *(_QWORD *)(a1 + 216) = &v64;
      *(_QWORD *)(a1 + 224) = &v65;
      *(_QWORD *)(a1 + 232) = &v66;
      *(_QWORD *)(a1 + 240) = &v67;
      *(_QWORD *)(a1 + 248) = &v68;
      *(_QWORD *)(a1 + 288) = &v50;
      v35[0] = 0;
      while ( 1 )
      {
        v27 = v58;
        if ( v58 <= 0xFFFF800000000000uLL || !RtlpIsFrameInBoundsEx(&v40, v26, &v39, v46) )
          break;
        v28 = RtlpLookupFunctionEntryForStackWalks(v27, (__int64)&v44);
        if ( v28 )
        {
          if ( (int)RtlpVirtualUnwind(
                      0,
                      *((_BYTE **)&v44 + 1),
                      v27,
                      v28,
                      (__int64)v48,
                      v35,
                      &v47,
                      &v41,
                      a1 + 128,
                      &v40,
                      &v39) < 0 )
          {
            if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
              NT_ASSERT(
                "*** Ps:  Context unwind failure
    A stack frame did not unwind properly
    Perform a stack trace to f"
                "ind the culprit
    Use gh to continue!!
");
            goto LABEL_69;
          }
          v25 = v41;
          v26 = (unsigned __int64)v50;
        }
        else
        {
          if ( !*((_QWORD *)&v44 + 1) )
            goto LABEL_69;
          v29 = *v50;
          v26 = (unsigned __int64)++v50;
          v58 = v29;
        }
        if ( v25 == BaseTrapFrame )
        {
          v4 = v42;
          goto LABEL_41;
        }
      }
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
        NT_ASSERT(
          "*** Ps:  Context unwind failure
    A stack frame did not unwind properly
    Perform a stack trace to find th"
          "e culprit
    Use gh to continue!!
");
    }
    goto LABEL_69;
  }
  v24 = PspGetBaseTrapFrame((__int64)CurrentThread);
  *(_QWORD *)(a1 + 280) = v24 - 64;
  *(_QWORD *)(a1 + 304) = v24 - 48;
  *(_QWORD *)(a1 + 312) = v24 - 56;
  *(_QWORD *)(a1 + 352) = v24 - 40;
  *(_QWORD *)(a1 + 360) = v24 - 32;
  *(_QWORD *)(a1 + 368) = v24 - 24;
  *(_QWORD *)(a1 + 376) = v24 - 16;
  *(_QWORD *)(a1 + 176) = v24 - 272;
  *(_QWORD *)(a1 + 184) = v24 - 256;
  *(_QWORD *)(a1 + 192) = v24 - 240;
  *(_QWORD *)(a1 + 200) = v24 - 272 + 48;
  *(_QWORD *)(a1 + 208) = v24 - 208;
  *(_QWORD *)(a1 + 216) = v24 - 192;
  *(_QWORD *)(a1 + 224) = v24 - 176;
  *(_QWORD *)(a1 + 232) = v24 - 160;
  *(_QWORD *)(a1 + 240) = v24 - 144;
  *(_QWORD *)(a1 + 248) = v24 - 128;
  *(_QWORD *)(a1 + 296) = BaseTrapFrame + 344;
LABEL_41:
  v30 = v7 & 0x100008;
  if ( v4 )
  {
    if ( v30 == 1048584 )
    {
      v31 = (unsigned __int8)v37;
      if ( *(_BYTE *)(a1 + 88) == 1 )
        v31 = 1;
      v37 = v31;
    }
    if ( *(_BYTE *)(a1 + 88) != 1
      || (SetSecureContext = KeVerifyContextXStateCetU((__int64)CurrentThread, *(_DWORD **)(a1 + 120)),
          SetSecureContext >= 0) )
    {
      if ( CurrentThread[1].WaitBlock[3].Thread
        && *(_BYTE *)(a1 + 88) == 1
        && ((*(_BYTE *)(a1 + 89) & 2) != 0 || (CurrentThread->Header.Reserved1 & 8) != 0) )
      {
        PspSetContextState(CurrentThread, *(_QWORD *)(a1 + 120));
        *(_DWORD *)(a1 + 92) = 0;
      }
      else
      {
        PspSetContext(BaseTrapFrame, a1 + 128, *(_QWORD *)(a1 + 120), *(unsigned __int8 *)(a1 + 88));
        *(_DWORD *)(a1 + 92) = 0;
      }
      goto LABEL_70;
    }
    goto LABEL_8;
  }
  if ( v30 == 1048584 && *(_BYTE *)(a1 + 88) == 1 )
    _fxsave((void *)(*(_QWORD *)(a1 + 120) + 256LL));
  if ( CurrentThread[1].WaitBlock[3].Thread && *(_BYTE *)(a1 + 88) == 1 )
  {
    v32 = *(CONTEXT **)(a1 + 120);
    PspGetContext(BaseTrapFrame, a1 + 128, v32);
    if ( (CurrentThread->Header.Reserved1 & 8) != 0 )
    {
      RtlCopyContext(v32, v32->ContextFlags, (PCONTEXT)CurrentThread[1].WaitBlock[3].Thread);
      *(_DWORD *)(a1 + 92) = 0;
      goto LABEL_70;
    }
  }
  else
  {
    PspGetContext(BaseTrapFrame, a1 + 128, *(_QWORD *)(a1 + 120));
  }
  *(_DWORD *)(a1 + 92) = 0;
LABEL_70:
  v33 = a1 + 96;
  if ( (*(_BYTE *)(a1 + 89) & 1) == 0 )
    v33 = 0LL;
  *v43 = v33;
  return (unsigned __int8)v37;
}
