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

__int64 __fastcall sub_1800D16F0(unsigned __int16 *a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5, __int64 a6)
{
  unsigned __int16 *v6; // r14
  char v8; // r13
  unsigned int v9; // ebx
  __int64 v10; // rsi
  char v11; // r12
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // r15
  unsigned int v15; // ecx
  char v16; // al
  int inited; // ebx
  char *v18; // rsi
  int ValueKey; // eax
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ebx
  char *v26; // rbx
  int v27; // eax
  __int64 v28; // rsi
  int v29; // ecx
  void *v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rbx
  wchar_t *v34; // rdx
  bool *v35; // rcx
  char *v36; // rbx
  int v37; // eax
  __int64 v38; // rsi
  int v39; // ecx
  void *v40; // rcx
  __int64 v41; // rax
  int v42; // eax
  unsigned int v43; // ecx
  int v44; // ebx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r12
  int v48; // ebx
  unsigned int *v49; // r14
  int v50; // eax
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // rcx
  char v54; // al
  _QWORD *v55; // rdi
  _QWORD *v56; // rdi
  int v58; // [rsp+30h] [rbp-D0h]
  int v59; // [rsp+30h] [rbp-D0h]
  int v60; // [rsp+30h] [rbp-D0h]
  int v61; // [rsp+30h] [rbp-D0h]
  int v62; // [rsp+30h] [rbp-D0h]
  int v63; // [rsp+30h] [rbp-D0h]
  int v64; // [rsp+30h] [rbp-D0h]
  int v65; // [rsp+30h] [rbp-D0h]
  int v66; // [rsp+30h] [rbp-D0h]
  int v67; // [rsp+30h] [rbp-D0h]
  unsigned int v68; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v69; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v70; // [rsp+50h] [rbp-B0h]
  unsigned int v71; // [rsp+54h] [rbp-ACh]
  unsigned int v72; // [rsp+58h] [rbp-A8h]
  unsigned int v73; // [rsp+5Ch] [rbp-A4h]
  unsigned int v74; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v75; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v76; // [rsp+70h] [rbp-90h] BYREF
  __int64 v77; // [rsp+78h] [rbp-88h] BYREF
  __int64 v78; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 *v79; // [rsp+88h] [rbp-78h]
  int v80; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 v81[4]; // [rsp+98h] [rbp-68h] BYREF
  _DWORD *v82; // [rsp+A0h] [rbp-60h]
  unsigned __int16 v83[4]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD *v84; // [rsp+B0h] [rbp-50h]
  unsigned __int16 v85[4]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD *v86; // [rsp+C0h] [rbp-40h]
  unsigned __int16 v87[4]; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int *v88; // [rsp+D0h] [rbp-30h]
  _QWORD *v89; // [rsp+D8h] [rbp-28h]
  int v90; // [rsp+E0h] [rbp-20h] BYREF
  char *v91; // [rsp+E8h] [rbp-18h]
  __int64 v92; // [rsp+F0h] [rbp-10h]
  __int64 v93; // [rsp+F8h] [rbp-8h]
  _QWORD *v94; // [rsp+100h] [rbp+0h]
  UNICODE_STRING DestinationString; // [rsp+108h] [rbp+8h] BYREF
  int v96; // [rsp+118h] [rbp+18h]
  __int64 v97; // [rsp+120h] [rbp+20h]
  void *v98; // [rsp+128h] [rbp+28h]
  int v99; // [rsp+130h] [rbp+30h]
  __int128 v100; // [rsp+138h] [rbp+38h]
  char v101; // [rsp+150h] [rbp+50h] BYREF
  char v102; // [rsp+550h] [rbp+450h] BYREF
  char v103; // [rsp+950h] [rbp+850h] BYREF
  char v104; // [rsp+D50h] [rbp+C50h] BYREF
  char v105; // [rsp+1150h] [rbp+1050h] BYREF
  WCHAR SourceString[200]; // [rsp+1170h] [rbp+1070h] BYREF

  v6 = a1;
  v79 = a1;
  v92 = a6;
  *a4 = 0LL;
  v8 = 0;
  v89 = a4;
  v9 = 0;
  v93 = a3;
  v10 = 0LL;
  v11 = 1;
  v94 = a5;
  v69 = 0LL;
  v77 = 0LL;
  v76 = 0;
  v75 = 0LL;
  *a5 = 0LL;
  v78 = 0LL;
  sub_1800D15E0();
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) & 0x4000) != 0 || (int)sub_180073150(v6, 9LL, 0, &v69) < 0 )
    goto LABEL_114;
  v12 = v69;
  *v89 = v69;
  if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && (int)sub_1800D0EBC(SourceString) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v13 = sub_1800E0B08(&DestinationString, v12, &v75);
    v10 = v75;
    if ( v13 >= 0 )
      *a5 = v75;
  }
  v14 = 0LL;
  sub_1800798FC(v10, v12, (__int64)L"DisableHeapLookaside", 4u, (__int64)&dword_180166554, 4, v58, 0LL);
  sub_1800798FC(v10, v12, (__int64)L"FrontEndHeapDebugOptions", 4u, (__int64)&v76, 4, v59, 0LL);
  sub_1800798FC(v10, v12, (__int64)L"ShutdownFlags", 4u, (__int64)&byte_180166558, 4, v60, 0LL);
  v68 = 0;
  sub_1800798FC(v10, v12, (__int64)L"UnloadEventTraceDepth", 4u, (__int64)&v68, 4, v61, 0LL);
  v15 = dword_180162790;
  if ( v68 )
    v15 = v68;
  dword_180162790 = v15;
  v68 = 0;
  sub_1800798FC(v10, v12, (__int64)L"MaxLoaderThreads", 4u, (__int64)&v68, 4, v62, 0LL);
  if ( v68 )
    *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = v68;
  v68 = 0;
  sub_1800798FC(v10, v12, (__int64)L"UseImpersonatedDeviceMap", 4u, (__int64)&v68, 4, v63, 0LL);
  v16 = byte_180165380;
  if ( v68 )
    v16 = 1;
  byte_180165380 = v16;
  v68 = 0;
  sub_1800798FC(v10, v12, (__int64)L"TracingFlags", 4u, (__int64)&v68, 4, v64, 0LL);
  if ( v68 )
  {
    _InterlockedOr((volatile signed __int32 *)(a2 + 888), v68);
    v12 = v69;
    v10 = v75;
  }
  v68 = 0;
  if ( (int)sub_1800798FC(v10, v12, (__int64)L"RaiseExceptionOnPossibleDeadlock", 4u, (__int64)&v68, 4, v65, 0LL) >= 0 )
    byte_180163EC1 = v68 != 0;
  v68 = 0;
  inited = RtlInitUnicodeStringEx((__int64)v81, (__int64)L"CFGOptions");
  if ( inited < 0 )
    goto LABEL_41;
  v18 = &v101;
  ValueKey = ZwQueryValueKey();
  inited = ValueKey;
  if ( ValueKey >= 0 )
  {
LABEL_25:
    v23 = *((_DWORD *)v18 + 1);
    if ( ((v23 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v23 == 4 )
      {
        if ( *((_DWORD *)v18 + 2) == 4 )
        {
          v70 = 4;
          v68 = *((_DWORD *)v18 + 3);
        }
        else
        {
          inited = -1073741820;
        }
        goto LABEL_39;
      }
      if ( v23 != 1 )
      {
LABEL_31:
        inited = -1073741788;
        goto LABEL_39;
      }
      if ( ((unsigned __int8)&v68 & 3) != 0 )
      {
        inited = -2147483646;
      }
      else
      {
        v70 = 4;
        v82 = v18 + 12;
        v81[0] = *((_WORD *)v18 + 4);
        v81[1] = *((_WORD *)v18 + 4);
        inited = RtlUnicodeStringToInteger(v81, 0, (int *)&v68);
      }
    }
    else
    {
      if ( v23 != 4 )
        goto LABEL_31;
      v70 = *((_DWORD *)v18 + 2);
      if ( *((_DWORD *)v18 + 2) > 4u )
        inited = -2147483643;
      else
        memmove(&v68, v18 + 12, *((unsigned int *)v18 + 2));
    }
LABEL_39:
    if ( v14 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
      v12 = v69;
    }
    goto LABEL_41;
  }
  if ( ValueKey != -2147483643 )
  {
LABEL_41:
    if ( inited >= 0 && (v68 & 1) != 0 )
    {
      sub_180035F18(0);
      byte_18017A29A = 1;
      sub_180035F18(1);
    }
    goto LABEL_45;
  }
  while ( 1 )
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !ProcessHeap )
      break;
    Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18016542C + 1572864, v70);
    v14 = Heap;
    if ( !Heap )
      break;
    v12 = v69;
    v18 = (char *)Heap;
    v22 = ZwQueryValueKey();
    inited = v22;
    if ( v22 >= 0 )
      goto LABEL_25;
    if ( v22 != -2147483643 )
      goto LABEL_39;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v18);
  }
  v12 = v69;
LABEL_45:
  if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
  {
    v96 = 48;
    v98 = &unk_1801193A0;
    v97 = v12;
    v99 = 64;
    v100 = 0LL;
    v24 = ZwOpenKey();
    v25 = v24;
    if ( v24 == -1073741772 )
    {
      qword_180164F20 = 0LL;
    }
    else if ( v24 < 0 )
    {
      goto LABEL_168;
    }
  }
  if ( (int)RtlInitUnicodeStringEx((__int64)v83, (__int64)L"MinimumStackCommitInBytes") >= 0 )
  {
    v26 = &v102;
    v27 = ZwQueryValueKey();
    if ( v27 < 0 )
    {
      if ( v27 != -2147483643 )
        goto LABEL_71;
      while ( 1 )
      {
        v30 = NtCurrentPeb()->ProcessHeap;
        if ( !v30 )
          goto LABEL_70;
        v31 = RtlAllocateHeap((__int64)v30, dword_18016542C + 1572864, v71);
        v28 = v31;
        if ( !v31 )
          goto LABEL_70;
        v26 = (char *)v31;
        v12 = v69;
        v32 = ZwQueryValueKey();
        if ( v32 >= 0 )
          goto LABEL_52;
        if ( v32 != -2147483643 )
          goto LABEL_68;
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v26);
      }
    }
    v28 = 0LL;
LABEL_52:
    v29 = *((_DWORD *)v26 + 1);
    if ( ((v29 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v29 == 4 )
      {
        if ( *((_DWORD *)v26 + 2) == 4 )
        {
          v71 = 4;
          v68 = *((_DWORD *)v26 + 3);
        }
      }
      else if ( v29 == 1 && ((unsigned __int8)&v68 & 3) == 0 )
      {
        v71 = 4;
        v84 = v26 + 12;
        v83[0] = *((_WORD *)v26 + 4);
        v83[1] = *((_WORD *)v26 + 4);
        RtlUnicodeStringToInteger(v83, 0, (int *)&v68);
      }
    }
    else if ( v29 == 4 )
    {
      v71 = *((_DWORD *)v26 + 2);
      if ( *((_DWORD *)v26 + 2) <= 4u )
        memmove(&v68, v26 + 12, *((unsigned int *)v26 + 2));
    }
LABEL_68:
    if ( v28 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v28);
LABEL_70:
      v12 = v69;
    }
  }
LABEL_71:
  if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)v68 )
    *(_QWORD *)(a2 + 792) = v68;
  v33 = 0LL;
  while ( 1 )
  {
    v34 = (&off_1801192E0)[v33];
    v68 = 0;
    LdrQueryImageFileKeyOption(v12, (__int64)v34, 4, (int *)&v68, 4u, 0LL);
    v35 = (bool *)*(&off_1801192E0 + v33 + 1);
    v33 += 2LL;
    *v35 = v68 != 0;
    if ( v33 == 6 )
      break;
    v12 = v69;
  }
  v68 = 0;
  if ( (int)RtlInitUnicodeStringEx((__int64)v85, (__int64)L"MaxDeadActivationContexts") >= 0 )
  {
    v36 = &v103;
    v37 = ZwQueryValueKey();
    if ( v37 < 0 )
    {
      if ( v37 == -2147483643 )
      {
        while ( 1 )
        {
          v40 = NtCurrentPeb()->ProcessHeap;
          if ( !v40 )
            break;
          v41 = RtlAllocateHeap((__int64)v40, dword_18016542C + 1572864, v72);
          v38 = v41;
          if ( !v41 )
            break;
          v36 = (char *)v41;
          v42 = ZwQueryValueKey();
          if ( v42 >= 0 )
            goto LABEL_79;
          if ( v42 != -2147483643 )
            goto LABEL_95;
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v36);
        }
      }
    }
    else
    {
      v38 = 0LL;
LABEL_79:
      v39 = *((_DWORD *)v36 + 1);
      if ( ((v39 - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( v39 == 4 )
        {
          if ( *((_DWORD *)v36 + 2) == 4 )
          {
            v72 = 4;
            v68 = *((_DWORD *)v36 + 3);
          }
        }
        else if ( v39 == 1 && ((unsigned __int8)&v68 & 3) == 0 )
        {
          v72 = 4;
          v86 = v36 + 12;
          v85[0] = *((_WORD *)v36 + 4);
          v85[1] = *((_WORD *)v36 + 4);
          RtlUnicodeStringToInteger(v85, 0, (int *)&v68);
        }
      }
      else if ( v39 == 4 )
      {
        v72 = *((_DWORD *)v36 + 2);
        if ( *((_DWORD *)v36 + 2) <= 4u )
          memmove(&v68, v36 + 12, *((unsigned int *)v36 + 2));
      }
LABEL_95:
      if ( v38 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v38);
      v43 = dword_1801627C8;
      if ( v68 )
        v43 = v68;
      dword_1801627C8 = v43;
    }
  }
  v10 = v75;
  v8 = BYTE1(*(_DWORD *)(a2 + 188)) & 1;
  if ( (int)sub_1800798FC(v75, v69, (__int64)L"GlobalFlag", 4u, (__int64)&v74, 4, v66, &v78) < 0 )
    goto LABEL_109;
  v44 = v74;
  if ( (v74 & 0x2000100) == 0 )
    goto LABEL_108;
  if ( !(unsigned int)sub_1800D4744(a2, v10, v69) )
  {
    v44 &= 0xFDFFFEFF;
    v74 = v44;
  }
  if ( (v44 & 0x2000100) == 0 )
    goto LABEL_108;
  if ( (int)sub_1800D4A28(v79, &v80) >= 0 )
  {
    if ( !v80 )
    {
      v44 &= 0xFDFFFEFF;
      v74 = v44;
    }
LABEL_108:
    *(_DWORD *)(a2 + 188) = v44;
  }
LABEL_109:
  if ( (int)sub_1800798FC(v10, v69, (__int64)L"GlobalFlag2", 4u, (__int64)&v74, 4, v67, 0LL) >= 0 )
    *(_DWORD *)(a2 + 1988) = v74;
  v9 = v76;
  v6 = v79;
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    v11 = 0;
  else
    v78 = 0LL;
LABEL_114:
  if ( (unsigned int)LdrControlFlowGuardEnforced() )
    v9 |= 1u;
  sub_18010A234(v9, *(unsigned int *)(*(_QWORD *)(a2 + 32) + 8LL));
  if ( !v11 || byte_180165430 || (MEMORY[0x7FFE03A0] & 1) == 0 )
    goto LABEL_150;
  if ( (int)sub_1800D9678(v6, v45, &v77) < 0 )
  {
    v77 = 0LL;
    goto LABEL_150;
  }
  v47 = 0LL;
  v48 = RtlInitUnicodeStringEx((__int64)v87, (__int64)L"GlobalFlag");
  if ( v48 < 0 )
  {
LABEL_147:
    if ( v48 >= 0 )
    {
      *(_DWORD *)(a2 + 188) |= v74 & 0x2000100;
      v78 = v77;
    }
    goto LABEL_150;
  }
  v49 = (unsigned int *)&v104;
  v50 = ZwQueryValueKey();
  v48 = v50;
  if ( v50 >= 0 )
  {
LABEL_130:
    v46 = v49[1];
    if ( (((_DWORD)v46 - 3) & 0xFFFFFFFB) != 0 )
    {
      v45 = 4LL;
      if ( (_DWORD)v46 == 4 )
      {
        if ( v49[2] == 4 )
        {
          v73 = 4;
          v74 = v49[3];
        }
        else
        {
          v48 = -1073741820;
        }
        goto LABEL_144;
      }
      if ( (_DWORD)v46 != 1 )
      {
LABEL_136:
        v48 = -1073741788;
        goto LABEL_144;
      }
      if ( ((unsigned __int8)&v74 & 3) != 0 )
      {
        v48 = -2147483646;
      }
      else
      {
        v73 = 4;
        v88 = v49 + 3;
        v87[0] = *((_WORD *)v49 + 4);
        v87[1] = *((_WORD *)v49 + 4);
        v48 = RtlUnicodeStringToInteger(v87, 0, (int *)&v74);
      }
    }
    else
    {
      if ( (_DWORD)v46 != 4 )
        goto LABEL_136;
      v73 = v49[2];
      if ( v49[2] > 4 )
        v48 = -2147483643;
      else
        memmove(&v74, v49 + 3, v49[2]);
    }
LABEL_144:
    if ( v47 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v47);
      v10 = v75;
    }
    goto LABEL_147;
  }
  if ( v50 != -2147483643 )
    goto LABEL_147;
  while ( 1 )
  {
    v46 = (__int64)NtCurrentPeb()->ProcessHeap;
    if ( !v46 )
      break;
    v51 = RtlAllocateHeap(v46, dword_18016542C + 1572864, v73);
    v47 = v51;
    if ( !v51 )
      break;
    v49 = (unsigned int *)v51;
    v52 = ZwQueryValueKey();
    v48 = v52;
    if ( v52 >= 0 )
    {
      v10 = v75;
      goto LABEL_130;
    }
    if ( v52 != -2147483643 )
    {
      v10 = v75;
      goto LABEL_144;
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v49);
  }
  v10 = v75;
LABEL_150:
  v25 = 0;
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) == 0 && !(unsigned __int8)sub_1800D4944(v46, v45) )
  {
    if ( !v10 && !v69 )
    {
      if ( *(_BYTE *)(a2 + 2) )
      {
        v53 = *(_QWORD *)(a2 + 32);
        v91 = &v105;
        v90 = 0x200000;
        if ( (int)RtlQueryEnvironmentVariable_U(*(char **)(v53 + 128), &qword_180119340, (__int64)&v90) < 0
          || (v25 = RtlUnicodeStringToInteger((unsigned __int16 *)&v90, 0, (int *)&v68), v25 < 0)
          || !v68 )
        {
          *(_DWORD *)(a2 + 188) |= 0x70u;
        }
      }
    }
    goto LABEL_159;
  }
  v25 = sub_1800D11F4(v79, a2, v8, v78, v93, v92);
  if ( v25 >= 0 )
  {
LABEL_159:
    if ( (*(_BYTE *)(a2 + 1988) & 1) != 0 )
      *(_DWORD *)(a2 + 1984) |= 1u;
    goto LABEL_161;
  }
  v54 = dword_18015FAB0;
  if ( (dword_18015FAB0 & 3) != 0 )
  {
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      8068,
      (unsigned int)"LdrpInitializeExecutionOptions",
      0,
      "Initializing the application verifier package failed with status 0x%08lx\n",
      v25);
    v54 = dword_18015FAB0;
  }
  if ( (v54 & 0x10) != 0 )
    __debugbreak();
LABEL_161:
  if ( v25 >= 0 )
  {
    sub_1800D4B50(v69);
    goto LABEL_172;
  }
LABEL_168:
  v55 = v89;
  if ( *v89 )
  {
    ZwClose();
    *v55 = 0LL;
  }
  v56 = v94;
  if ( *v94 )
  {
    ZwClose();
    *v56 = 0LL;
  }
LABEL_172:
  if ( v77 )
    ZwClose();
  return (unsigned int)v25;
}
