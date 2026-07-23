/*
 * XREFs of KiDispatchException @ 0x1400A2E90
 * Callers:
 *     KiInitializeUserApc @ 0x140128774 (KiInitializeUserApc.c)
 *     KiExceptionDispatch @ 0x1401CFF80 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x1401D03C0 (KiFastFailDispatch.c)
 *     KiRaiseException @ 0x14029A3A0 (KiRaiseException.c)
 *     KiParkUmsThread @ 0x14029D8B0 (KiParkUmsThread.c)
 *     PspInitializeThunkContext @ 0x1406217DC (PspInitializeThunkContext.c)
 *     KiSwapToUmsThread @ 0x1408469D0 (KiSwapToUmsThread.c)
 * Callees:
 *     RtlDispatchException @ 0x1400A0E80 (RtlDispatchException.c)
 *     RtlGetExtendedContextLength @ 0x1400A1C84 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400A1CDC (RtlInitializeExtendedContext.c)
 *     RtlpCopyExtendedContext @ 0x1400A204C (RtlpCopyExtendedContext.c)
 *     KeContextFromKframes @ 0x1400A27B8 (KeContextFromKframes.c)
 *     KdTrap @ 0x1400A332C (KdTrap.c)
 *     KiPreprocessFault @ 0x1400A33D0 (KiPreprocessFault.c)
 *     KeGetEffectiveIrql @ 0x1400CABB0 (KeGetEffectiveIrql.c)
 *     KeCopyExceptionRecord @ 0x14013B9E4 (KeCopyExceptionRecord.c)
 *     KiSetupForInstrumentationReturn @ 0x14013FA9C (KiSetupForInstrumentationReturn.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwTerminateProcess @ 0x1401B8870 (ZwTerminateProcess.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KeContextToKframes @ 0x1401BBE50 (KeContextToKframes.c)
 *     _alloca_probe @ 0x1401C5F20 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KiTpHandleTrap @ 0x14029C3B4 (KiTpHandleTrap.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     DbgkForwardException @ 0x1406D7B7C (DbgkForwardException.c)
 *     KdIsThisAKdTrap @ 0x140916008 (KdIsThisAKdTrap.c)
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
  __int64 v23; // rbx
  int ExceptionCode; // r12d
  int v25; // ecx
  int v26; // ecx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-10h]
  int v30; // [rsp+30h] [rbp+0h] BYREF
  ULONG v31; // [rsp+34h] [rbp+4h]
  ULONG ContextLength; // [rsp+38h] [rbp+8h] BYREF
  __int64 v33; // [rsp+40h] [rbp+10h]
  unsigned __int64 v34; // [rsp+48h] [rbp+18h]
  unsigned __int64 v35; // [rsp+50h] [rbp+20h]
  PCONTEXT_EX ContextEx; // [rsp+58h] [rbp+28h] BYREF
  unsigned __int64 v37; // [rsp+60h] [rbp+30h]
  PEXCEPTION_RECORD v38; // [rsp+68h] [rbp+38h]
  _QWORD *v39; // [rsp+70h] [rbp+40h]
  unsigned __int64 v40; // [rsp+78h] [rbp+48h]
  unsigned __int64 v41; // [rsp+80h] [rbp+50h]
  __int64 v42; // [rsp+88h] [rbp+58h]
  int *v43; // [rsp+98h] [rbp+68h]
  __int64 v44; // [rsp+A0h] [rbp+70h]
  int v45; // [rsp+B0h] [rbp+80h]
  unsigned __int64 v46; // [rsp+C8h] [rbp+98h]
  __int64 v47; // [rsp+128h] [rbp+F8h]
  __int128 v48; // [rsp+150h] [rbp+120h] BYREF
  __int64 v49; // [rsp+160h] [rbp+130h]

  v5 = a4;
  LOWORD(v30) = a4;
  v33 = a2;
  v38 = ExceptionRecord;
  v44 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v34 = (unsigned __int64)Process;
  __incgsdword(0x5D30u);
  if ( a5 && Process[2].ActiveProcessors.Bitmap[9] )
  {
    ExceptionCode = ExceptionRecord->ExceptionCode;
    v25 = ExceptionRecord->ExceptionCode - 268435458;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( v26 )
      {
        if ( v26 == 1 )
          ExceptionRecord->ExceptionCode = -1073741819;
      }
      else
      {
        ExceptionRecord->ExceptionCode = -1073741676;
      }
    }
    else
    {
      ExceptionRecord->ExceptionCode = -1073741795;
    }
    if ( (unsigned __int8)KeGetEffectiveIrql() < 2u
      && (v5
       || (ExceptionRecord->ExceptionCode == -2147483647
        || (unsigned int)(ExceptionRecord->ExceptionCode + 1073741819) <= 1)
       && ExceptionRecord->ExceptionInformation[1] <= 0x7FFFFFFF0000LL) )
    {
      LODWORD(CurrentThread) = ((__int64 (__fastcall *)(PEXCEPTION_RECORD, __int64, __int64, _QWORD, char))xmmword_14040F340)(
                                 ExceptionRecord,
                                 v33,
                                 a3,
                                 0LL,
                                 v5);
      if ( (_BYTE)CurrentThread )
        return (int)CurrentThread;
    }
    ExceptionRecord->ExceptionCode = ExceptionCode;
  }
  v9 = 1048607;
  v31 = 1048607;
  if ( v5 )
  {
    if ( (KeFeatureBits & 0x800000) != 0 )
      v9 = 1048671;
    v31 = v9;
  }
  RtlGetExtendedContextLength(v9, &ContextLength);
  v10 = ContextLength + 15LL;
  if ( v10 <= ContextLength )
    v10 = 0xFFFFFFFFFFFFFF0LL;
  v11 = alloca(v10 & 0xFFFFFFFFFFFFFFF0uLL);
  v43 = &v30;
  if ( v5 )
    memset(&v30, 0, ContextLength);
  RtlInitializeExtendedContext((PCONTEXT)&v30, v9, &ContextEx);
  KeContextFromKframes(a3, v33, (__int64)&v30);
  if ( ExceptionRecord->ExceptionCode == -2147483645 )
  {
    --v47;
    if ( (KiDynamicTraceMask & 2) != 0 )
    {
      LOBYTE(v13) = a5;
      LOBYTE(v12) = v5;
      if ( (unsigned __int8)KiTpHandleTrap(ExceptionRecord, &v30, v12, v13) )
        goto LABEL_14;
    }
  }
  LOBYTE(v12) = v5;
  if ( (unsigned __int8)KiPreprocessFault((int)ExceptionRecord, (int)&v30, v12) )
    goto LABEL_14;
  if ( !v5 )
  {
    if ( (!a5
       || !(unsigned __int8)KdTrap(a3, v14, (_DWORD)ExceptionRecord, (unsigned int)&v30, 0, 0)
       && !RtlDispatchException(ExceptionRecord, (PCONTEXT)&v30))
      && !(unsigned __int8)KdTrap(a3, v14, (_DWORD)ExceptionRecord, (unsigned int)&v30, 0, 1) )
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
  v16 = v46;
  v37 = v46;
  if ( (*(_DWORD *)(v34 + 1740) & 1) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7]
      && ExceptionRecord->ExceptionCode == -2147483646
      && (*(_DWORD *)(a3 + 376) & 0x40000) != 0 )
    {
      _disable();
      *(_DWORD *)(a3 + 376) &= ~0x40000u;
LABEL_69:
      _enable();
      return (int)CurrentThread;
    }
    if ( ((unsigned __int16)v38 & 0xFFF8) == 0x20 )
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
      v37 = v16;
    }
  }
  if ( a5 )
  {
    IsThisAKdTrap = KdIsThisAKdTrap(ExceptionRecord);
    BYTE1(v30) = IsThisAKdTrap;
    v18 = KeGetCurrentThread()->ApcState.Process;
    if ( (!v18[1].ActiveProcessors.Bitmap[6] && !KdIgnoreUmExceptions || IsThisAKdTrap)
      && (unsigned __int8)KdTrap(a3, (_DWORD)v18, (_DWORD)ExceptionRecord, (unsigned int)&v30, v30, 0) )
    {
      v5 = v30;
LABEL_14:
      LOBYTE(BugCheckParameter4) = v5;
      LODWORD(CurrentThread) = KeContextToKframes(a3, v33, (unsigned int)&v30, v37, BugCheckParameter4);
      if ( !BYTE1(v30) )
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
      v45 = -1073741819;
      v19 = v16;
      v35 = v16;
      if ( (v9 & 0x100040) == 0x100040 )
      {
        v19 = (v16 - ContextEx->XState.Length) & 0xFFFFFFFFFFFFFFC0uLL;
        v35 = v19;
      }
      v34 = (v19 - 40) & 0xFFFFFFFFFFFFFFF0uLL;
      v39 = (_QWORD *)v34;
      v41 = v34 - 160;
      v42 = v34 - 192;
      v20 = v34 - 1424;
      v40 = v34 - 1424;
      LODWORD(v48) = -1232;
      v21 = v16 - (v34 - 1424);
      DWORD1(v48) = v16 - (v34 - 1424);
      *((_QWORD *)&v48 + 1) = 0x4D0FFFFFB30LL;
      LODWORD(v49) = v19 - (v34 - 192);
      HIDWORD(v49) = v16 - v19;
      if ( v21 - 1 > 0xFFE )
      {
        ProbeForWrite((volatile void *)(v34 - 1424), v16 - (v34 - 1424), 0x10u);
        v22 = (_QWORD *)v34;
      }
      else
      {
        if ( v20 >= 0x7FFFFFFF0000LL )
          v20 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v20 = *(_BYTE *)v20;
        *(_BYTE *)(v20 + v21 - 1) = *(_BYTE *)(v20 + v21 - 1);
        v22 = v39;
        v20 = v40;
      }
      v22[3] = v16;
      *v22 = v47;
      KeCopyExceptionRecord(v41, ExceptionRecord);
      v23 = v42;
      RtlpCopyExtendedContext(1, v42, (__int64)&v48, v31, (__int64)ContextEx, 0LL);
      *(_OWORD *)v23 = v48;
      *(_QWORD *)(v23 + 16) = v49;
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
