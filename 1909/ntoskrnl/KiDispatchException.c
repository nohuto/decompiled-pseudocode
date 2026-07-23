/*
 * XREFs of KiDispatchException @ 0x1400161A0
 * Callers:
 *     KiInitializeUserApc @ 0x14012C5E0 (KiInitializeUserApc.c)
 *     KxExceptionDispatchOnExceptionStack @ 0x1401C5500 (KxExceptionDispatchOnExceptionStack.c)
 *     KiExceptionDispatch @ 0x1401D6540 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D6880 (KiFastFailDispatch.c)
 *     KiRaiseException @ 0x1402B1210 (KiRaiseException.c)
 *     KiParkUmsThread @ 0x1402B5E90 (KiParkUmsThread.c)
 *     PspInitializeThunkContext @ 0x1405E819C (PspInitializeThunkContext.c)
 *     KiSwapToUmsThread @ 0x140880460 (KiSwapToUmsThread.c)
 *     PspFreeUserFiberShadowStack @ 0x1408C8644 (PspFreeUserFiberShadowStack.c)
 * Callees:
 *     KdTrap @ 0x140016664 (KdTrap.c)
 *     KiPreprocessFault @ 0x140016708 (KiPreprocessFault.c)
 *     KeContextFromKframes @ 0x1400168CC (KeContextFromKframes.c)
 *     RtlpCopyExtendedContext @ 0x140016D08 (RtlpCopyExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140017050 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400170A8 (RtlInitializeExtendedContext.c)
 *     RtlDispatchException @ 0x1400177D0 (RtlDispatchException.c)
 *     KeGetEffectiveIrql @ 0x1400A16B0 (KeGetEffectiveIrql.c)
 *     KeCopyExceptionRecord @ 0x14013DA30 (KeCopyExceptionRecord.c)
 *     KiSetupForInstrumentationReturn @ 0x14014495C (KiSetupForInstrumentationReturn.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1401C11D0 (ZwTerminateProcess.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     KeContextToKframes @ 0x1401C47D0 (KeContextToKframes.c)
 *     _alloca_probe @ 0x1401CD060 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KiTpHandleTrap @ 0x1402AD550 (KiTpHandleTrap.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     DbgkForwardException @ 0x1406F97B8 (DbgkForwardException.c)
 *     KdIsThisAKdTrap @ 0x140953008 (KdIsThisAKdTrap.c)
 */

int __fastcall KiDispatchException(
        PEXCEPTION_RECORD ExceptionRecord,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        char a5)
{
  char v5; // r15
  _KPROCESS *Process; // rax
  ULONG v9; // r12d
  unsigned __int64 v10; // rax
  void *v11; // rsp
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v16; // r15
  char IsThisAKdTrap; // al
  _KPROCESS *v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rbx
  int v24; // ecx
  int ExceptionCode; // r12d
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-10h]
  int v29; // [rsp+30h] [rbp+0h] BYREF
  int v30; // [rsp+34h] [rbp+4h]
  ULONG ContextLength; // [rsp+38h] [rbp+8h] BYREF
  __int64 v32; // [rsp+40h] [rbp+10h]
  unsigned __int64 v33; // [rsp+48h] [rbp+18h]
  unsigned __int64 v34; // [rsp+50h] [rbp+20h]
  PCONTEXT_EX ContextEx; // [rsp+58h] [rbp+28h] BYREF
  unsigned __int64 v36; // [rsp+60h] [rbp+30h]
  PEXCEPTION_RECORD v37; // [rsp+68h] [rbp+38h]
  _QWORD *v38; // [rsp+70h] [rbp+40h]
  unsigned __int64 v39; // [rsp+78h] [rbp+48h]
  unsigned __int64 v40; // [rsp+80h] [rbp+50h]
  unsigned __int64 v41; // [rsp+88h] [rbp+58h]
  int *v42; // [rsp+98h] [rbp+68h]
  __int64 v43; // [rsp+A0h] [rbp+70h]
  int v44; // [rsp+B0h] [rbp+80h]
  _DWORD v45[37]; // [rsp+B4h] [rbp+84h] BYREF
  __int128 v46; // [rsp+150h] [rbp+120h] BYREF
  __int64 v47; // [rsp+160h] [rbp+130h]

  v5 = a4;
  LOWORD(v29) = a4;
  v32 = a2;
  v37 = ExceptionRecord;
  v43 = a3;
  memset(v45, 0, sizeof(v45));
  v46 = 0uLL;
  v47 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v33 = (unsigned __int64)Process;
  __incgsdword(0x5D30u);
  if ( a5 && Process[2].ActiveProcessors.Bitmap[13] )
  {
    ExceptionCode = ExceptionRecord->ExceptionCode;
    switch ( ExceptionRecord->ExceptionCode )
    {
      case 0x10000002:
        ExceptionRecord->ExceptionCode = -1073741795;
        break;
      case 0x10000003:
        ExceptionRecord->ExceptionCode = -1073741676;
        break;
      case 0x10000004:
        ExceptionRecord->ExceptionCode = -1073741819;
        break;
    }
    if ( (unsigned __int8)KeGetEffectiveIrql() < 2u
      && (v5
       || (ExceptionRecord->ExceptionCode == -2147483647
        || (unsigned int)(ExceptionRecord->ExceptionCode + 1073741819) <= 1)
       && ExceptionRecord->ExceptionInformation[1] <= 0x7FFFFFFF0000LL) )
    {
      LODWORD(CurrentThread) = ((__int64 (__fastcall *)(PEXCEPTION_RECORD, __int64, __int64, _QWORD, char))xmmword_1404369A0)(
                                 ExceptionRecord,
                                 v32,
                                 a3,
                                 0LL,
                                 v5);
      if ( (_BYTE)CurrentThread )
        return (int)CurrentThread;
    }
    ExceptionRecord->ExceptionCode = ExceptionCode;
  }
  v9 = 1048607;
  v30 = 1048607;
  if ( v5 )
  {
    if ( (KeFeatureBits & 0x800000) != 0 )
      v9 = 1048671;
    v30 = v9;
  }
  RtlGetExtendedContextLength(v9, &ContextLength);
  v10 = ContextLength + 15LL;
  if ( v10 <= ContextLength )
    v10 = 0xFFFFFFFFFFFFFF0LL;
  v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
  v42 = &v29;
  if ( v5 )
    memset(&v29, 0, ContextLength);
  RtlInitializeExtendedContext((PCONTEXT)&v29, v9, &ContextEx);
  KeContextFromKframes(a3, v32, &v29);
  if ( ExceptionRecord->ExceptionCode == -2147483645 )
  {
    --*(_QWORD *)&v45[29];
    if ( (KiDynamicTraceMask & 2) != 0 )
    {
      LOBYTE(v13) = a5;
      LOBYTE(v12) = v5;
      if ( (unsigned __int8)KiTpHandleTrap(ExceptionRecord, &v29, v12, v13) )
        goto LABEL_14;
    }
  }
  LOBYTE(v12) = v5;
  if ( (unsigned __int8)KiPreprocessFault((int)ExceptionRecord, (int)&v29, v12) )
    goto LABEL_14;
  if ( !v5 )
  {
    if ( (!a5
       || !(unsigned __int8)KdTrap(a3, v14, (_DWORD)ExceptionRecord, (unsigned int)&v29, 0, 0)
       && !RtlDispatchException(ExceptionRecord, (PCONTEXT)&v29))
      && !(unsigned __int8)KdTrap(a3, v14, (_DWORD)ExceptionRecord, (unsigned int)&v29, 0, 1) )
    {
      KeBugCheckEx(
        0x1Eu,
        ExceptionRecord->ExceptionCode,
        (ULONG_PTR)ExceptionRecord->ExceptionAddress,
        ExceptionRecord->ExceptionInformation[0],
        ExceptionRecord->ExceptionInformation[1]);
    }
    goto LABEL_14;
  }
  v16 = *(_QWORD *)&v45[5];
  v36 = *(_QWORD *)&v45[5];
  if ( (*(_DWORD *)(v33 + 1788) & 1) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[6]
      && ExceptionRecord->ExceptionCode == -2147483646
      && (*(_DWORD *)(a3 + 376) & 0x40000) != 0 )
    {
      _disable();
      *(_DWORD *)(a3 + 376) &= ~0x40000u;
LABEL_69:
      _enable();
      return (int)CurrentThread;
    }
    if ( ((unsigned __int16)v37 & 0xFFF8) == 0x20 )
    {
      if ( ExceptionRecord->ExceptionCode == -2147483645 )
      {
        ExceptionRecord->ExceptionCode = 1073741855;
      }
      else if ( ExceptionRecord->ExceptionCode == -2147483644 )
      {
        ExceptionRecord->ExceptionCode = 1073741854;
      }
      v16 = (unsigned int)v16 & 0xFFFFFFF0;
      v36 = v16;
    }
  }
  if ( a5 )
  {
    IsThisAKdTrap = KdIsThisAKdTrap(ExceptionRecord);
    BYTE1(v29) = IsThisAKdTrap;
    v18 = KeGetCurrentThread()->ApcState.Process;
    if ( (!v18[1].ActiveProcessors.Bitmap[5] && !KdIgnoreUmExceptions || IsThisAKdTrap)
      && (unsigned __int8)KdTrap(a3, (_DWORD)v18, (_DWORD)ExceptionRecord, (unsigned int)&v29, v29, 0) )
    {
      v5 = v29;
LABEL_14:
      LOBYTE(BugCheckParameter4) = v5;
      LODWORD(CurrentThread) = KeContextToKframes(a3, v32, (unsigned int)&v29, v36, BugCheckParameter4);
      if ( !BYTE1(v29) )
        return (int)CurrentThread;
      _disable();
      LODWORD(CurrentThread) = KiSetupForInstrumentationReturn(a3);
      goto LABEL_69;
    }
    LOBYTE(v18) = 1;
    LODWORD(CurrentThread) = DbgkForwardException(ExceptionRecord, v18);
    if ( !(_BYTE)CurrentThread )
    {
      _disable();
      *(_DWORD *)(a3 + 376) &= ~0x100u;
      _enable();
      v44 = -1073741819;
      v19 = v16;
      v34 = v16;
      if ( (v9 & 0x100040) == 0x100040 )
      {
        v19 = (v16 - ContextEx->XState.Length) & 0xFFFFFFFFFFFFFFC0uLL;
        v34 = v19;
      }
      v33 = (v19 - 40) & 0xFFFFFFFFFFFFFFF0uLL;
      v38 = (_QWORD *)v33;
      v40 = v33 - 160;
      v41 = v33 - 192;
      v20 = v33 - 1424;
      v39 = v33 - 1424;
      LODWORD(v46) = -1232;
      v21 = v16 - (v33 - 1424);
      DWORD1(v46) = v16 - (v33 - 1424);
      *((_QWORD *)&v46 + 1) = 0x4D0FFFFFB30LL;
      LODWORD(v47) = v19 - (v33 - 192);
      HIDWORD(v47) = v16 - v19;
      if ( v21 - 1 > 0xFFE )
      {
        ProbeForWrite((volatile void *)(v33 - 1424), v16 - (v33 - 1424), 0x10u);
        v22 = (_QWORD *)v33;
      }
      else
      {
        if ( v20 >= 0x7FFFFFFF0000LL )
          v20 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v20 = *(_BYTE *)v20;
        *(_BYTE *)(v20 + v21 - 1) = *(_BYTE *)(v20 + v21 - 1);
        v22 = v38;
        v20 = v39;
      }
      v22[3] = v16;
      *v22 = *(_QWORD *)&v45[29];
      KeCopyExceptionRecord(v40, ExceptionRecord);
      v23 = v41;
      LOBYTE(v24) = 1;
      RtlpCopyExtendedContext(v24, v41, (unsigned int)&v46, v30, (__int64)ContextEx, 0LL);
      *(_OWORD *)v23 = v46;
      *(_QWORD *)(v23 + 16) = v47;
      _disable();
      *(_QWORD *)(a3 + 384) = v20;
      *(_WORD *)(a3 + 368) = 51;
      *(_QWORD *)(a3 + 360) = KeUserExceptionDispatcher;
      LODWORD(CurrentThread) = KiSetupForInstrumentationReturn(a3);
      _enable();
    }
  }
  else
  {
    LOBYTE(v14) = 1;
    LODWORD(CurrentThread) = DbgkForwardException(ExceptionRecord, v14);
    if ( !(_BYTE)CurrentThread )
    {
      LODWORD(CurrentThread) = DbgkForwardException(ExceptionRecord, 0LL);
      if ( !(_BYTE)CurrentThread )
        LODWORD(CurrentThread) = ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExceptionRecord->ExceptionCode);
    }
  }
  return (int)CurrentThread;
}
