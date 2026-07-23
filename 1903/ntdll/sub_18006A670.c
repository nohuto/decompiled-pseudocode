/*
 * XREFs of sub_18006A670 @ 0x18006A670
 * Callers:
 *     RtlRaiseException @ 0x18006A4F0 (RtlRaiseException.c)
 *     KiUserExceptionDispatcher @ 0x1800A0490 (KiUserExceptionDispatcher.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 * Callees:
 *     RtlVirtualUnwind @ 0x18001CC50 (RtlVirtualUnwind.c)
 *     sub_18001E080 @ 0x18001E080 (sub_18001E080.c)
 *     RtlLookupFunctionEntry @ 0x18001E290 (RtlLookupFunctionEntry.c)
 *     sub_18001EA30 @ 0x18001EA30 (sub_18001EA30.c)
 *     RtlInitializeExtendedContext2 @ 0x18001EA60 (RtlInitializeExtendedContext2.c)
 *     sub_18001EC04 @ 0x18001EC04 (sub_18001EC04.c)
 *     RtlGetExtendedContextLength2 @ 0x18001ECD0 (RtlGetExtendedContextLength2.c)
 *     sub_18001EE1C @ 0x18001EE1C (sub_18001EE1C.c)
 *     sub_18006A9DC @ 0x18006A9DC (sub_18006A9DC.c)
 *     sub_180078AA0 @ 0x180078AA0 (sub_180078AA0.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     __chkstk @ 0x1800A1730 (__chkstk.c)
 *     sub_1800A1840 @ 0x1800A1840 (sub_1800A1840.c)
 *     sub_1800FA718 @ 0x1800FA718 (sub_1800FA718.c)
 *     sub_1800FA8BC @ 0x1800FA8BC (sub_1800FA8BC.c)
 *     RtlRaiseStatus @ 0x1800FBD30 (RtlRaiseStatus.c)
 */

char __fastcall sub_18006A670(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // r13
  int v5; // edi
  ULONG64 v6; // r12
  int v7; // r15d
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  void *v10; // rsp
  void *v11; // rsp
  ULONG64 v12; // r15
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
  char ContextRecord; // [rsp+40h] [rbp+0h] BYREF
  ULONG ContextLength[2]; // [rsp+48h] [rbp+8h] BYREF
  unsigned __int64 EstablisherFrame; // [rsp+50h] [rbp+10h] BYREF
  unsigned __int64 ImageBase; // [rsp+58h] [rbp+18h] BYREF
  PVOID HandlerData; // [rsp+60h] [rbp+20h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+68h] [rbp+28h] BYREF
  PVOID v40; // [rsp+70h] [rbp+30h] BYREF
  __int64 v41; // [rsp+78h] [rbp+38h] BYREF
  __int64 v42; // [rsp+80h] [rbp+40h]
  ULONG64 ControlPc; // [rsp+90h] [rbp+50h] BYREF
  ULONG64 v44; // [rsp+98h] [rbp+58h]
  PRUNTIME_FUNCTION FunctionEntry; // [rsp+A0h] [rbp+60h]
  _CONTEXT_EX *v46; // [rsp+A8h] [rbp+68h]
  char *p_ContextRecord; // [rsp+B8h] [rbp+78h]
  EXCEPTION_DISPOSITION (__cdecl *v48)(_EXCEPTION_RECORD *, PVOID, _CONTEXT *, PVOID); // [rsp+C0h] [rbp+80h]
  _BYTE *v49; // [rsp+C8h] [rbp+88h]
  struct _UNWIND_HISTORY_TABLE *v50; // [rsp+D0h] [rbp+90h]
  DWORD64 *v51; // [rsp+D8h] [rbp+98h]
  struct _UNWIND_HISTORY_TABLE HistoryTable; // [rsp+E0h] [rbp+A0h] BYREF

  v2 = 0;
  v3 = a2;
  v42 = a2;
  ContextRecord = 0;
  if ( (NtCurrentPeb()->NtGlobalFlag & 0x800000) != 0 )
  {
    ContextRecord = 1;
    sub_1800FA718();
  }
  if ( (unsigned __int8)sub_180078AA0(a1, v3, 0LL) )
    goto LABEL_28;
  v5 = *(_DWORD *)(a1 + 4) & 1;
  if ( !sub_18001EE1C(&v41, &v40) )
  {
    v5 |= 8u;
LABEL_50:
    *(_DWORD *)(a1 + 4) = v5;
    goto LABEL_29;
  }
  sub_18001EC04(v3);
  v6 = -(__int64)((MEMORY[0x7FFE0708] & 0x800) != 0LL) & 0x800;
  v7 = (MEMORY[0x7FFE0708] & 0x800) != 0LL ? 0x40 : 0;
  RtlGetExtendedContextLength2(v7 + 1048587, ContextLength, v6);
  v8 = ContextLength[0] + 15LL;
  if ( v8 <= ContextLength[0] )
    v8 = 0xFFFFFFFFFFFFFF0LL;
  v9 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
  v10 = alloca(v9);
  v11 = alloca(v9);
  RtlInitializeExtendedContext2((PCONTEXT)&ContextRecord, v7 + 1048587, &ContextEx, v6);
  sub_18001E080((__int64)&ContextRecord, v3);
  v12 = *(_QWORD *)(v3 + 248);
  p_HistoryTable = &HistoryTable;
  HistoryTable.LowAddress = -1LL;
  *(_QWORD *)ContextLength = &HistoryTable;
  ContextEx = 0LL;
  HistoryTable.Count = 0;
  *(_DWORD *)&HistoryTable.LocalHint = 0x1000000;
  HistoryTable.HighAddress = 0LL;
  while ( 1 )
  {
    v14 = RtlLookupFunctionEntry(v12, &ImageBase, p_HistoryTable);
    v15 = v14;
    if ( !v14 )
    {
      if ( v12 == *v51 )
        goto LABEL_49;
      HistoryTable.Entry[4].ImageBase = *v51++;
      sub_18001EA30((__int64)&ContextRecord);
      goto LABEL_20;
    }
    v16 = RtlVirtualUnwind(1u, ImageBase, v12, v14, (PCONTEXT)&ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
    if ( !(unsigned __int8)sub_18006A9DC(&v41, EstablisherFrame, &v40) )
    {
      v5 |= 8u;
LABEL_49:
      v3 = v42;
      goto LABEL_50;
    }
    if ( v16 )
      break;
LABEL_20:
    v12 = HistoryTable.Entry[4].ImageBase;
    if ( !(unsigned __int8)sub_18006A9DC(&v41, v51, &v40) )
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
    *(_DWORD *)(a1 + 4) = v5;
    ControlPc = v12;
    v44 = v20;
    FunctionEntry = v15;
    v46 = (_CONTEXT_EX *)v17;
    p_ContextRecord = &ContextRecord;
    v48 = v16;
    LODWORD(v51) = v19;
    if ( ContextRecord )
    {
      v29 = sub_1800FA8BC(a1, &ContextRecord, v12, v16);
      v17 = EstablisherFrame;
      v21 = v29;
    }
    else
    {
      v21 = 0LL;
    }
    v3 = v42;
    v22 = sub_1800A1840(a1, v17, v42, &ControlPc);
    if ( v21 )
      *(_DWORD *)(v21 + 1396) = v22;
    v23 = ContextEx;
    v5 |= *(_DWORD *)(a1 + 4) & 1;
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
    v12 = ControlPc;
    v15 = FunctionEntry;
    ImageBase = v44;
    sub_18001E080((__int64)&ContextRecord, (__int64)p_ContextRecord);
    v27 = RtlVirtualUnwind(1u, v26, v12, v15, (PCONTEXT)&ContextRecord, &HandlerData, &EstablisherFrame, 0LL);
    v17 = (unsigned __int64)v46;
    v16 = v27;
    EstablisherFrame = (unsigned __int64)v46;
    if ( ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 12) & 3) == 1 )
    {
      v30 = RtlLookupFunctionEntry(v12, &ImageBase, *(PUNWIND_HISTORY_TABLE *)ContextLength);
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
  sub_180078AA0(a1, v3, 1LL);
  return v2;
}
