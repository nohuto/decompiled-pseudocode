/*
 * XREFs of sub_1800D16F0 @ 0x1800D16F0
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18005CB10 (RtlQueryEnvironmentVariable_U.c)
 *     sub_180073150 @ 0x180073150 (sub_180073150.c)
 *     RtlUnicodeStringToInteger @ 0x180074480 (RtlUnicodeStringToInteger.c)
 *     sub_1800798FC @ 0x1800798FC (sub_1800798FC.c)
 *     LdrQueryImageFileKeyOption @ 0x180079A80 (LdrQueryImageFileKeyOption.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 *     __chkstk @ 0x1800A1730 (__chkstk.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     sub_1800D0EBC @ 0x1800D0EBC (sub_1800D0EBC.c)
 *     sub_1800D11F4 @ 0x1800D11F4 (sub_1800D11F4.c)
 *     sub_1800D15E0 @ 0x1800D15E0 (sub_1800D15E0.c)
 *     sub_1800D4744 @ 0x1800D4744 (sub_1800D4744.c)
 *     sub_1800D4944 @ 0x1800D4944 (sub_1800D4944.c)
 *     sub_1800D4A28 @ 0x1800D4A28 (sub_1800D4A28.c)
 *     sub_1800D4B50 @ 0x1800D4B50 (sub_1800D4B50.c)
 *     sub_1800D9678 @ 0x1800D9678 (sub_1800D9678.c)
 *     sub_1800E0B08 @ 0x1800E0B08 (sub_1800E0B08.c)
 *     sub_18010A234 @ 0x18010A234 (sub_18010A234.c)
 */

__int64 __fastcall sub_1800D16F0(unsigned __int16 *a1, __int64 a2, __int64 a3, HANDLE *a4, HANDLE *a5, __int64 a6)
{
  unsigned __int16 *v6; // r14
  char v8; // r13
  unsigned int v9; // ebx
  void *v10; // rsi
  char v11; // r12
  HANDLE v12; // r14
  int v13; // eax
  void *v14; // r15
  ULONG v15; // ecx
  char v16; // al
  NTSTATUS inited; // ebx
  _BYTE *v18; // rsi
  NTSTATUS v19; // eax
  ULONG v20; // ebx
  PVOID ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v23; // eax
  int v24; // ecx
  NTSTATUS v25; // eax
  int v26; // ebx
  _BYTE *v27; // rbx
  NTSTATUS v28; // eax
  void *v29; // rsi
  int v30; // ecx
  ULONG v31; // r14d
  PVOID v32; // rcx
  PVOID v33; // rax
  NTSTATUS v34; // eax
  __int64 v35; // rbx
  const WCHAR *v36; // rdx
  bool *v37; // rcx
  _BYTE *v38; // rbx
  NTSTATUS v39; // eax
  void *v40; // rsi
  int v41; // ecx
  ULONG v42; // r14d
  PVOID v43; // rcx
  PVOID v44; // rax
  NTSTATUS v45; // eax
  ULONG v46; // ecx
  ULONG v47; // ebx
  int v48; // eax
  __int64 v49; // rdx
  HANDLE v50; // r15
  void *v51; // r12
  NTSTATUS v52; // ebx
  _BYTE *v53; // r14
  NTSTATUS v54; // eax
  ULONG v55; // ebx
  PVOID v56; // rcx
  PVOID v57; // rax
  NTSTATUS v58; // eax
  int v59; // ecx
  __int64 v60; // rcx
  char v61; // al
  HANDLE *v62; // rdi
  HANDLE *v63; // rdi
  ULONG Length; // [rsp+20h] [rbp-E0h]
  __int64 v66; // [rsp+30h] [rbp-D0h]
  __int64 v67; // [rsp+30h] [rbp-D0h]
  __int64 v68; // [rsp+30h] [rbp-D0h]
  __int64 v69; // [rsp+30h] [rbp-D0h]
  __int64 v70; // [rsp+30h] [rbp-D0h]
  __int64 v71; // [rsp+30h] [rbp-D0h]
  __int64 v72; // [rsp+30h] [rbp-D0h]
  __int64 v73; // [rsp+30h] [rbp-D0h]
  __int64 v74; // [rsp+30h] [rbp-D0h]
  __int64 v75; // [rsp+30h] [rbp-D0h]
  ULONG Value; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v79; // [rsp+54h] [rbp-ACh] BYREF
  ULONG v80; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v81; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG v82; // [rsp+60h] [rbp-A0h] BYREF
  void *v83; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v84; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  HANDLE v86; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 *v87; // [rsp+88h] [rbp-78h]
  int v88; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING ValueName; // [rsp+98h] [rbp-68h] BYREF
  _UNICODE_STRING String; // [rsp+A8h] [rbp-58h] BYREF
  _UNICODE_STRING v91; // [rsp+B8h] [rbp-48h] BYREF
  _UNICODE_STRING v92; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE *v93; // [rsp+D8h] [rbp-28h]
  _UNICODE_STRING v94; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v95; // [rsp+F0h] [rbp-10h]
  __int64 v96; // [rsp+F8h] [rbp-8h]
  HANDLE *v97; // [rsp+100h] [rbp+0h]
  _UNICODE_STRING DestinationString; // [rsp+108h] [rbp+8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+118h] [rbp+18h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v101[1024]; // [rsp+550h] [rbp+450h] BYREF
  _BYTE v102[1024]; // [rsp+950h] [rbp+850h] BYREF
  _BYTE v103[1024]; // [rsp+D50h] [rbp+C50h] BYREF
  char v104; // [rsp+1150h] [rbp+1050h] BYREF
  WCHAR SourceString[200]; // [rsp+1170h] [rbp+1070h] BYREF

  v6 = a1;
  v87 = a1;
  v95 = a6;
  *a4 = 0LL;
  v8 = 0;
  v93 = a4;
  v9 = 0;
  v96 = a3;
  v10 = 0LL;
  v11 = 1;
  v97 = a5;
  KeyHandle = 0LL;
  Handle = 0LL;
  v84 = 0;
  v83 = 0LL;
  *a5 = 0LL;
  v86 = 0LL;
  sub_1800D15E0();
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) & 0x4000) != 0 || (int)sub_180073150(v6, 9LL, 0, &KeyHandle) < 0 )
    goto LABEL_114;
  v12 = KeyHandle;
  *v93 = KeyHandle;
  if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && sub_1800D0EBC(SourceString) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v13 = sub_1800E0B08(&DestinationString, v12, &v83);
    v10 = v83;
    if ( v13 >= 0 )
      *a5 = v83;
  }
  v14 = 0LL;
  sub_1800798FC(v10, v12, L"DisableHeapLookaside", 4u, &dword_180166554, 4u, v66, 0LL);
  sub_1800798FC(v10, v12, L"FrontEndHeapDebugOptions", 4u, &v84, 4u, v67, 0LL);
  sub_1800798FC(v10, v12, L"ShutdownFlags", 4u, &byte_180166558, 4u, v68, 0LL);
  Value = 0;
  sub_1800798FC(v10, v12, L"UnloadEventTraceDepth", 4u, &Value, 4u, v69, 0LL);
  v15 = dword_180162790;
  if ( Value )
    v15 = Value;
  dword_180162790 = v15;
  Value = 0;
  sub_1800798FC(v10, v12, L"MaxLoaderThreads", 4u, &Value, 4u, v70, 0LL);
  if ( Value )
    *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = Value;
  Value = 0;
  sub_1800798FC(v10, v12, L"UseImpersonatedDeviceMap", 4u, &Value, 4u, v71, 0LL);
  v16 = byte_180165380;
  if ( Value )
    v16 = 1;
  byte_180165380 = v16;
  Value = 0;
  sub_1800798FC(v10, v12, L"TracingFlags", 4u, &Value, 4u, v72, 0LL);
  if ( Value )
  {
    _InterlockedOr((volatile signed __int32 *)(a2 + 888), Value);
    v12 = KeyHandle;
    v10 = v83;
  }
  Value = 0;
  if ( sub_1800798FC(v10, v12, L"RaiseExceptionOnPossibleDeadlock", 4u, &Value, 4u, v73, 0LL) >= 0 )
    byte_180163EC1 = Value != 0;
  Value = 0;
  inited = RtlInitUnicodeStringEx(&ValueName, L"CFGOptions");
  if ( inited < 0 )
    goto LABEL_41;
  v18 = KeyValueInformation;
  v19 = ZwQueryValueKey(v12, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x400u, &ResultLength);
  inited = v19;
  if ( v19 >= 0 )
  {
LABEL_25:
    v24 = *((_DWORD *)v18 + 1);
    if ( ((v24 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v24 == 4 )
      {
        if ( *((_DWORD *)v18 + 2) == 4 )
        {
          ResultLength = 4;
          Value = *((_DWORD *)v18 + 3);
        }
        else
        {
          inited = -1073741820;
        }
        goto LABEL_39;
      }
      if ( v24 != 1 )
      {
LABEL_31:
        inited = -1073741788;
        goto LABEL_39;
      }
      if ( ((unsigned __int8)&Value & 3) != 0 )
      {
        inited = -2147483646;
      }
      else
      {
        ResultLength = 4;
        ValueName.Buffer = (PWCH)(v18 + 12);
        ValueName.Length = *((_WORD *)v18 + 4);
        ValueName.MaximumLength = *((_WORD *)v18 + 4);
        inited = RtlUnicodeStringToInteger(&ValueName, 0, &Value);
      }
    }
    else
    {
      if ( v24 != 4 )
        goto LABEL_31;
      ResultLength = *((_DWORD *)v18 + 2);
      if ( *((_DWORD *)v18 + 2) > 4u )
        inited = -2147483643;
      else
        memmove(&Value, v18 + 12, *((unsigned int *)v18 + 2));
    }
LABEL_39:
    if ( v14 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
      v12 = KeyHandle;
    }
    goto LABEL_41;
  }
  if ( v19 != -2147483643 )
  {
LABEL_41:
    if ( inited >= 0 && (Value & 1) != 0 )
    {
      sub_180035F18(0);
      byte_18017A29A = 1;
      sub_180035F18(1);
    }
    goto LABEL_45;
  }
  while ( 1 )
  {
    v20 = ResultLength;
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !ProcessHeap )
      break;
    Heap = RtlAllocateHeap(ProcessHeap, Flags + 1572864, ResultLength);
    v14 = Heap;
    if ( !Heap )
      break;
    v12 = KeyHandle;
    v18 = Heap;
    v23 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, v20, &ResultLength);
    inited = v23;
    if ( v23 >= 0 )
      goto LABEL_25;
    if ( v23 != -2147483643 )
      goto LABEL_39;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
  }
  v12 = KeyHandle;
LABEL_45:
  if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1801193A0;
    ObjectAttributes.RootDirectory = v12;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v25 = ZwOpenKey(&qword_180164F20, 1u, &ObjectAttributes);
    v26 = v25;
    if ( v25 == -1073741772 )
    {
      qword_180164F20 = 0LL;
    }
    else if ( v25 < 0 )
    {
      goto LABEL_168;
    }
  }
  if ( RtlInitUnicodeStringEx(&String, L"MinimumStackCommitInBytes") >= 0 )
  {
    v27 = v101;
    v28 = ZwQueryValueKey(v12, &String, KeyValuePartialInformation, v101, 0x400u, &v79);
    if ( v28 < 0 )
    {
      if ( v28 != -2147483643 )
        goto LABEL_71;
      while ( 1 )
      {
        v31 = v79;
        v32 = NtCurrentPeb()->ProcessHeap;
        if ( !v32 )
          goto LABEL_70;
        v33 = RtlAllocateHeap(v32, Flags + 1572864, v79);
        v29 = v33;
        if ( !v33 )
          goto LABEL_70;
        v27 = v33;
        Length = v31;
        v12 = KeyHandle;
        v34 = ZwQueryValueKey(KeyHandle, &String, KeyValuePartialInformation, v33, Length, &v79);
        if ( v34 >= 0 )
          goto LABEL_52;
        if ( v34 != -2147483643 )
          goto LABEL_68;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v27);
      }
    }
    v29 = 0LL;
LABEL_52:
    v30 = *((_DWORD *)v27 + 1);
    if ( ((v30 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v30 == 4 )
      {
        if ( *((_DWORD *)v27 + 2) == 4 )
        {
          v79 = 4;
          Value = *((_DWORD *)v27 + 3);
        }
      }
      else if ( v30 == 1 && ((unsigned __int8)&Value & 3) == 0 )
      {
        v79 = 4;
        String.Buffer = (PWCH)(v27 + 12);
        String.Length = *((_WORD *)v27 + 4);
        String.MaximumLength = *((_WORD *)v27 + 4);
        RtlUnicodeStringToInteger(&String, 0, &Value);
      }
    }
    else if ( v30 == 4 )
    {
      v79 = *((_DWORD *)v27 + 2);
      if ( *((_DWORD *)v27 + 2) <= 4u )
        memmove(&Value, v27 + 12, *((unsigned int *)v27 + 2));
    }
LABEL_68:
    if ( v29 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v29);
LABEL_70:
      v12 = KeyHandle;
    }
  }
LABEL_71:
  if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)Value )
    *(_QWORD *)(a2 + 792) = Value;
  v35 = 0LL;
  while ( 1 )
  {
    v36 = (&off_1801192E0)[v35];
    Value = 0;
    LdrQueryImageFileKeyOption(v12, v36, 4u, &Value, 4u, 0LL);
    v37 = (bool *)*(&off_1801192E0 + v35 + 1);
    v35 += 2LL;
    *v37 = Value != 0;
    if ( v35 == 6 )
      break;
    v12 = KeyHandle;
  }
  Value = 0;
  if ( RtlInitUnicodeStringEx(&v91, L"MaxDeadActivationContexts") >= 0 )
  {
    v38 = v102;
    v39 = ZwQueryValueKey(KeyHandle, &v91, KeyValuePartialInformation, v102, 0x400u, &v80);
    if ( v39 < 0 )
    {
      if ( v39 == -2147483643 )
      {
        while ( 1 )
        {
          v42 = v80;
          v43 = NtCurrentPeb()->ProcessHeap;
          if ( !v43 )
            break;
          v44 = RtlAllocateHeap(v43, Flags + 1572864, v80);
          v40 = v44;
          if ( !v44 )
            break;
          v38 = v44;
          v45 = ZwQueryValueKey(KeyHandle, &v91, KeyValuePartialInformation, v44, v42, &v80);
          if ( v45 >= 0 )
            goto LABEL_79;
          if ( v45 != -2147483643 )
            goto LABEL_95;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v38);
        }
      }
    }
    else
    {
      v40 = 0LL;
LABEL_79:
      v41 = *((_DWORD *)v38 + 1);
      if ( ((v41 - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( v41 == 4 )
        {
          if ( *((_DWORD *)v38 + 2) == 4 )
          {
            v80 = 4;
            Value = *((_DWORD *)v38 + 3);
          }
        }
        else if ( v41 == 1 && ((unsigned __int8)&Value & 3) == 0 )
        {
          v80 = 4;
          v91.Buffer = (PWCH)(v38 + 12);
          v91.Length = *((_WORD *)v38 + 4);
          v91.MaximumLength = *((_WORD *)v38 + 4);
          RtlUnicodeStringToInteger(&v91, 0, &Value);
        }
      }
      else if ( v41 == 4 )
      {
        v80 = *((_DWORD *)v38 + 2);
        if ( *((_DWORD *)v38 + 2) <= 4u )
          memmove(&Value, v38 + 12, *((unsigned int *)v38 + 2));
      }
LABEL_95:
      if ( v40 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v40);
      v46 = dword_1801627C8;
      if ( Value )
        v46 = Value;
      dword_1801627C8 = v46;
    }
  }
  v10 = v83;
  v8 = BYTE1(*(_DWORD *)(a2 + 188)) & 1;
  if ( sub_1800798FC(v83, KeyHandle, L"GlobalFlag", 4u, &v82, 4u, v74, &v86) < 0 )
    goto LABEL_109;
  v47 = v82;
  if ( (v82 & 0x2000100) == 0 )
    goto LABEL_108;
  if ( !(unsigned int)sub_1800D4744(a2, v10, KeyHandle) )
  {
    v47 &= 0xFDFFFEFF;
    v82 = v47;
  }
  if ( (v47 & 0x2000100) == 0 )
    goto LABEL_108;
  if ( (int)sub_1800D4A28(v87, &v88) >= 0 )
  {
    if ( !v88 )
    {
      v47 &= 0xFDFFFEFF;
      v82 = v47;
    }
LABEL_108:
    *(_DWORD *)(a2 + 188) = v47;
  }
LABEL_109:
  if ( sub_1800798FC(v10, KeyHandle, L"GlobalFlag2", 4u, &v82, 4u, v75, 0LL) >= 0 )
    *(_DWORD *)(a2 + 1988) = v82;
  v9 = v84;
  v6 = v87;
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    v11 = 0;
  else
    v86 = 0LL;
LABEL_114:
  LOBYTE(v48) = LdrControlFlowGuardEnforced();
  if ( v48 )
    v9 |= 1u;
  sub_18010A234(v9, *(unsigned int *)(*(_QWORD *)(a2 + 32) + 8LL));
  if ( !v11 || byte_180165430 || (MEMORY[0x7FFE03A0] & 1) == 0 )
    goto LABEL_150;
  if ( (int)sub_1800D9678(v6, v49, &Handle) < 0 )
  {
    Handle = 0LL;
    goto LABEL_150;
  }
  v50 = Handle;
  v51 = 0LL;
  v52 = RtlInitUnicodeStringEx(&v92, L"GlobalFlag");
  if ( v52 < 0 )
  {
LABEL_147:
    if ( v52 >= 0 )
    {
      *(_DWORD *)(a2 + 188) |= v82 & 0x2000100;
      v86 = Handle;
    }
    goto LABEL_150;
  }
  v53 = v103;
  v54 = ZwQueryValueKey(v50, &v92, KeyValuePartialInformation, v103, 0x400u, &v81);
  v52 = v54;
  if ( v54 >= 0 )
  {
LABEL_130:
    v59 = *((_DWORD *)v53 + 1);
    if ( ((v59 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v59 == 4 )
      {
        if ( *((_DWORD *)v53 + 2) == 4 )
        {
          v81 = 4;
          v82 = *((_DWORD *)v53 + 3);
        }
        else
        {
          v52 = -1073741820;
        }
        goto LABEL_144;
      }
      if ( v59 != 1 )
      {
LABEL_136:
        v52 = -1073741788;
        goto LABEL_144;
      }
      if ( ((unsigned __int8)&v82 & 3) != 0 )
      {
        v52 = -2147483646;
      }
      else
      {
        v81 = 4;
        v92.Buffer = (PWCH)(v53 + 12);
        v92.Length = *((_WORD *)v53 + 4);
        v92.MaximumLength = *((_WORD *)v53 + 4);
        v52 = RtlUnicodeStringToInteger(&v92, 0, &v82);
      }
    }
    else
    {
      if ( v59 != 4 )
        goto LABEL_136;
      v81 = *((_DWORD *)v53 + 2);
      if ( *((_DWORD *)v53 + 2) > 4u )
        v52 = -2147483643;
      else
        memmove(&v82, v53 + 12, *((unsigned int *)v53 + 2));
    }
LABEL_144:
    if ( v51 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v51);
      v10 = v83;
    }
    goto LABEL_147;
  }
  if ( v54 != -2147483643 )
    goto LABEL_147;
  while ( 1 )
  {
    v55 = v81;
    v56 = NtCurrentPeb()->ProcessHeap;
    if ( !v56 )
      break;
    v57 = RtlAllocateHeap(v56, Flags + 1572864, v81);
    v51 = v57;
    if ( !v57 )
      break;
    v53 = v57;
    v58 = ZwQueryValueKey(v50, &v92, KeyValuePartialInformation, v57, v55, &v81);
    v52 = v58;
    if ( v58 >= 0 )
    {
      v10 = v83;
      goto LABEL_130;
    }
    if ( v58 != -2147483643 )
    {
      v10 = v83;
      goto LABEL_144;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v53);
  }
  v10 = v83;
LABEL_150:
  v26 = 0;
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) == 0 && !(unsigned __int8)sub_1800D4944() )
  {
    if ( !v10 && !KeyHandle )
    {
      if ( *(_BYTE *)(a2 + 2) )
      {
        v60 = *(_QWORD *)(a2 + 32);
        v94.Buffer = (PWCH)&v104;
        *(_DWORD *)&v94.Length = 0x200000;
        if ( RtlQueryEnvironmentVariable_U(*(PVOID *)(v60 + 128), (PUNICODE_STRING)&stru_180119340, &v94) < 0
          || (v26 = RtlUnicodeStringToInteger(&v94, 0, &Value), v26 < 0)
          || !Value )
        {
          *(_DWORD *)(a2 + 188) |= 0x70u;
        }
      }
    }
    goto LABEL_159;
  }
  v26 = sub_1800D11F4(v87, a2, v8, v86, v96, v95);
  if ( v26 >= 0 )
  {
LABEL_159:
    if ( (*(_BYTE *)(a2 + 1988) & 1) != 0 )
      *(_DWORD *)(a2 + 1984) |= 1u;
    goto LABEL_161;
  }
  v61 = dword_18015FAB0;
  if ( (dword_18015FAB0 & 3) != 0 )
  {
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      8068,
      (unsigned int)"LdrpInitializeExecutionOptions",
      0,
      "Initializing the application verifier package failed with status 0x%08lx\n",
      v26);
    v61 = dword_18015FAB0;
  }
  if ( (v61 & 0x10) != 0 )
    __debugbreak();
LABEL_161:
  if ( v26 >= 0 )
  {
    sub_1800D4B50(KeyHandle);
    goto LABEL_172;
  }
LABEL_168:
  v62 = v93;
  if ( *v93 )
  {
    ZwClose(*v93);
    *v62 = 0LL;
  }
  v63 = v97;
  if ( *v97 )
  {
    ZwClose(*v97);
    *v63 = 0LL;
  }
LABEL_172:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v26;
}
