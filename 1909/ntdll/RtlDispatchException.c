/*
 * XREFs of RtlDispatchException @ 0x18006A8C0
 * Callers:
 *     RtlRaiseException @ 0x18006A740 (RtlRaiseException.c)
 *     KiUserExceptionDispatcher @ 0x1800A0C40 (KiUserExceptionDispatcher.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x18001CC50 (RtlVirtualUnwind.c)
 *     RtlpCopyContext @ 0x18001E080 (RtlpCopyContext.c)
 *     RtlLookupFunctionEntry @ 0x18001E290 (RtlLookupFunctionEntry.c)
 *     RtlpPopUserShadowStack @ 0x18001EA30 (RtlpPopUserShadowStack.c)
 *     RtlInitializeExtendedContext2 @ 0x18001EA60 (RtlInitializeExtendedContext2.c)
 *     RtlpSanitizeContext @ 0x18001EC04 (RtlpSanitizeContext.c)
 *     RtlGetExtendedContextLength2 @ 0x18001ECD0 (RtlGetExtendedContextLength2.c)
 *     RtlpGetStackLimits @ 0x18001EE1C (RtlpGetStackLimits.c)
 *     RtlpIsFrameInBounds @ 0x18006AC2C (RtlpIsFrameInBounds.c)
 *     RtlpCallVectoredHandlers @ 0x180078F20 (RtlpCallVectoredHandlers.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800A1EE0 (_alloca_probe.c)
 *     RtlpExecuteHandlerForException @ 0x1800A1FF0 (RtlpExecuteHandlerForException.c)
 *     RtlpLogExceptionDispatch @ 0x1800FA7F8 (RtlpLogExceptionDispatch.c)
 *     RtlpLogExceptionHandler @ 0x1800FA99C (RtlpLogExceptionHandler.c)
 *     RtlRaiseStatus @ 0x1800FBE10 (RtlRaiseStatus.c)
 */

BOOLEAN __cdecl RtlDispatchException(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord)
{
  BOOLEAN v2; // bl
  PCONTEXT v3; // r13
  unsigned int v5; // edi
  ULONG64 v6; // r12
  int v7; // r15d
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  void *v10; // rsp
  void *v11; // rsp
  ULONG64 Rip; // r15
  struct _UNWIND_HISTORY_TABLE *p_HistoryTable; // rax
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v14; // rax
  struct _IMAGE_RUNTIME_FUNCTION_ENTRY *v15; // r13
  PEXCEPTION_ROUTINE v16; // r12
  unsigned __int64 v17; // rdx
  _BYTE *v18; // rcx
  int v19; // eax
  ULONG64 v20; // r8
  __int64 v21; // r15
  int v22; // edx
  PCONTEXT_EX v23; // r12
  int v24; // edx
  int v25; // edx
  ULONG64 v26; // r12
  PEXCEPTION_ROUTINE v27; // rax
  __int64 v29; // rax
  PRUNTIME_FUNCTION v30; // rax
  _BYTE *v31; // r9
  int v32; // ecx
  __int64 v33; // rax
  char v34; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength[2]; // [rsp+48h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+50h] [rbp+10h] BYREF
  unsigned __int64 ImageBase; // [rsp+58h] [rbp+18h] BYREF
  PVOID HandlerData; // [rsp+60h] [rbp+20h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+68h] [rbp+28h] BYREF
  void *v40; // [rsp+70h] [rbp+30h] BYREF
  __int64 v41; // [rsp+78h] [rbp+38h] BYREF
  PCONTEXT v42; // [rsp+80h] [rbp+40h]
  ULONG64 ControlPc; // [rsp+90h] [rbp+50h] BYREF
  ULONG64 v44; // [rsp+98h] [rbp+58h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+A0h] [rbp+60h]
  _CONTEXT_EX *v46; // [rsp+A8h] [rbp+68h]
  char *v47; // [rsp+B8h] [rbp+78h]
  EXCEPTION_DISPOSITION (__cdecl *v48)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+C0h] [rbp+80h]
  _BYTE *v49; // [rsp+C8h] [rbp+88h]
  struct _UNWIND_HISTORY_TABLE *v50; // [rsp+D0h] [rbp+90h]
  DWORD64 *v51; // [rsp+D8h] [rbp+98h]
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+E0h] [rbp+A0h] BYREF

  v2 = 0;
  v3 = ContextRecord;
  v42 = ContextRecord;
  v34 = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800000) != 0 )
  {
    v34 = 1;
    RtlpLogExceptionDispatch();
  }
  if ( (unsigned __int8)RtlpCallVectoredHandlers(ExceptionRecord, v3, 0LL) )
    goto LABEL_28;
  v5 = ExceptionRecord->ExceptionFlags & 1;
  if ( !RtlpGetStackLimits(&v41, &v40) )
  {
    v5 |= 8u;
LABEL_50:
    ExceptionRecord->ExceptionFlags = v5;
    goto LABEL_29;
  }
  RtlpSanitizeContext((__int64)v3);
  v6 = -(__int64)((MEMORY[0x7FFE0708] & 0x800) != 0LL) & 0x800;
  v7 = (MEMORY[0x7FFE0708] & 0x800) != 0LL ? 0x40 : 0;
  RtlGetExtendedContextLength2(v7 + 1048587, ContextLength, v6);
  v8 = ContextLength[0] + 15LL;
  if ( v8 <= ContextLength[0] )
    v8 = 0xFFFFFFFFFFFFFF0LL;
  v9 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
  v10 = alloca(v9);
  v11 = alloca(v9);
  RtlInitializeExtendedContext2((PCONTEXT)&v34, v7 + 1048587, &ContextEx, v6);
  RtlpCopyContext((__int64)&v34, (__int64)v3);
  Rip = v3->Rip;
  p_HistoryTable = &HistoryTable;
  HistoryTable.LowAddress = -1LL;
  *(_QWORD *)ContextLength = &HistoryTable;
  ContextEx = 0LL;
  HistoryTable.Count = 0;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.HighAddress = 0LL;
  while ( 1 )
  {
    v14 = RtlLookupFunctionEntry(Rip, &ImageBase, p_HistoryTable);
    v15 = v14;
    if ( !v14 )
    {
      if ( Rip == *v51 )
        goto LABEL_49;
      HistoryTable.Entry[4].ImageBase = *v51++;
      RtlpPopUserShadowStack((__int64)&v34);
      goto LABEL_20;
    }
    v16 = RtlVirtualUnwind(1u, ImageBase, Rip, v14, (PCONTEXT)&v34, &HandlerData, &EstablisherFrame, 0LL);
    if ( !(unsigned __int8)RtlpIsFrameInBounds(&v41, EstablisherFrame, &v40) )
    {
      v5 |= 8u;
LABEL_49:
      v3 = v42;
      goto LABEL_50;
    }
    if ( v16 )
      break;
LABEL_20:
    Rip = HistoryTable.Entry[4].ImageBase;
    if ( !(unsigned __int8)RtlpIsFrameInBounds(&v41, v51, &v40) )
      goto LABEL_49;
    p_HistoryTable = *(struct _UNWIND_HISTORY_TABLE **)ContextLength;
  }
  v18 = HandlerData;
  v19 = 0;
  v20 = ImageBase;
  while ( 1 )
  {
    v49 = v18;
    v50 = *(struct _UNWIND_HISTORY_TABLE **)ContextLength;
    ExceptionRecord->ExceptionFlags = v5;
    ControlPc = Rip;
    v44 = v20;
    FunctionEntry = v15;
    v46 = (_CONTEXT_EX *)v17;
    v47 = &v34;
    v48 = v16;
    LODWORD(v51) = v19;
    if ( v34 )
    {
      v29 = RtlpLogExceptionHandler(ExceptionRecord, &v34, Rip, v16);
      v17 = EstablisherFrame;
      v21 = v29;
    }
    else
    {
      v21 = 0LL;
    }
    v3 = v42;
    v22 = RtlpExecuteHandlerForException(ExceptionRecord, v17, v42, &ControlPc);
    if ( v21 )
      *(_DWORD *)(v21 + 1396) = v22;
    v23 = ContextEx;
    v5 |= ExceptionRecord->ExceptionFlags & 1;
    if ( ContextEx == (PCONTEXT_EX)EstablisherFrame )
    {
      v5 &= ~0x10u;
      ContextEx = 0LL;
      v23 = 0LL;
    }
    if ( !v22 )
      break;
    v24 = v22 - 1;
    if ( !v24 )
      goto LABEL_20;
    v25 = v24 - 1;
    if ( !v25 )
    {
      v5 |= 0x10u;
      if ( v46 > v23 )
        ContextEx = v46;
      goto LABEL_20;
    }
    if ( v25 != 1 )
      RtlRaiseStatus(-1073741786);
    v26 = v44;
    Rip = ControlPc;
    v15 = FunctionEntry;
    ImageBase = v44;
    RtlpCopyContext((__int64)&v34, (__int64)v47);
    v27 = RtlVirtualUnwind(1u, v26, Rip, v15, (PCONTEXT)&v34, &HandlerData, &EstablisherFrame, 0LL);
    v17 = (unsigned __int64)v46;
    v16 = v27;
    EstablisherFrame = (unsigned __int64)v46;
    if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 12) & 3) == 1 )
    {
      v30 = RtlLookupFunctionEntry(Rip, &ImageBase, *(PUNWIND_HISTORY_TABLE *)ContextLength);
      v15 = v30;
      if ( v30 != FunctionEntry )
        goto LABEL_45;
      v20 = ImageBase;
      v31 = (_BYTE *)(ImageBase + v30->UnwindInfoAddress);
      if ( (*v31 & 0x10) != 0 )
      {
        v32 = (unsigned __int8)v31[2];
        v33 = (unsigned int)(v32 + 1);
        if ( (v32 & 1) == 0 )
          v33 = (unsigned __int8)v31[2];
        v16 = (PEXCEPTION_ROUTINE)(ImageBase + *(unsigned int *)&v31[2 * v33 + 4]);
        v18 = &v31[2 * (unsigned int)(v33 + 2) + 4];
        HandlerData = v18;
      }
      else
      {
        v18 = HandlerData;
      }
      if ( v16 != v48 || v18 != v49 )
LABEL_45:
        __fastfail(0x27u);
      v17 = EstablisherFrame;
    }
    else
    {
      v18 = v49;
      v16 = v48;
      v20 = ImageBase;
      HandlerData = v49;
    }
    *(_QWORD *)ContextLength = v50;
    v19 = (int)v51;
  }
  if ( (v5 & 1) != 0 )
    RtlRaiseStatus(-1073741787);
LABEL_28:
  v2 = 1;
LABEL_29:
  RtlpCallVectoredHandlers(ExceptionRecord, v3, 1LL);
  return v2;
}
