/*
 * XREFs of ParseOpcode @ 0x1C0022000
 * Callers:
 *     ParseArg @ 0x1C0021B5C (ParseArg.c)
 *     ParsePackage @ 0x1C0021BD0 (ParsePackage.c)
 * Callees:
 *     ParseString @ 0x1C00022CC (ParseString.c)
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     ParseNameObj @ 0x1C0021368 (ParseNameObj.c)
 *     ParseIntObj @ 0x1C00221F4 (ParseIntObj.c)
 *     ParseArgObj @ 0x1C00222B8 (ParseArgObj.c)
 *     FindOpcodeTerm @ 0x1C0022330 (FindOpcodeTerm.c)
 *     ParseLocalObj @ 0x1C0022CB4 (ParseLocalObj.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     AMLIDebugger @ 0x1C0063760 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 */

__int64 __fastcall ParseOpcode(__int64 a1, __int64 a2, __int64 a3)
{
  PVOID v3; // r9
  PVOID *v4; // rax
  unsigned int v5; // r15d
  __int64 v8; // rdx
  unsigned __int8 *v10; // rsi
  __int64 v11; // r8
  __int64 OpcodeTerm; // rdi
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rax
  void *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9

  v3 = *(PVOID *)(a1 + 120);
  v4 = (PVOID *)&unk_1C00807A0;
  v5 = 0;
  v8 = 0LL;
  do
  {
    if ( v3 == *v4 )
      break;
    v8 = (unsigned int)(v8 + 1);
    v4 += 2;
  }
  while ( (__int64)v4 < (__int64)&qword_1C0080840 );
  if ( (_DWORD)v8 != 10 && (dword_1C0080798[4 * (int)v8] & 1) != 0 && (_DWORD)v8 != -1 )
  {
    ConPrintf("\nHit Breakpoint %d.\n");
    AMLIDebugger(v27, v26, v28, v29);
  }
  v10 = *(unsigned __int8 **)(a1 + 120);
  if ( *v10 == 91 )
  {
    *(_QWORD *)(a1 + 120) = v10 + 1;
    OpcodeTerm = FindOpcodeTerm(v10[1]);
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 120);
    OpcodeTerm = (__int64)*(&OpcodeTable + *v10);
  }
  if ( OpcodeTerm )
  {
    v13 = *(_DWORD *)(OpcodeTerm + 28);
    if ( (v13 & 8) != 0 )
    {
      return ParseIntObj(a1, a1 + 120, a3, 0LL);
    }
    else if ( (v13 & 0x10) != 0 )
    {
      return ParseString(a1, (const void **)(a1 + 120), a3, 0LL);
    }
    else if ( (v13 & 2) != 0 )
    {
      return ParseArgObj(a1, a3, v11);
    }
    else if ( (v13 & 4) != 0 )
    {
      return ParseLocalObj(a1, a3, v11);
    }
    else if ( (v13 & 0x20) != 0 )
    {
      return ParseNameObj(a1, a3);
    }
    else if ( (v13 & 0x40) != 0 )
    {
      LogError(3222536198LL, v8, v11, v3);
      AcpiDiagTraceAmlError(a1, 3222536198LL);
      PrintDebugMessage(133, 0, 0, 0, 0LL);
      return 3222536198LL;
    }
    else
    {
      *(_QWORD *)(a1 + 120) = v11 + 1;
      v14 = HeapAlloc((struct _SLIST_ENTRY *)(a1 + 480), 1297237576, 0x60u);
      v18 = v14;
      if ( v14 )
      {
        *(_QWORD *)(v14 + 8) = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v14;
        *(_QWORD *)(v14 + 24) = ParseTerm;
        *(_DWORD *)v14 = 1297237332;
        *(_QWORD *)(v14 + 32) = v10;
        *(_QWORD *)(v14 + 48) = a2;
        *(_QWORD *)(v14 + 56) = OpcodeTerm;
        *(_QWORD *)(v14 + 88) = a3;
        v19 = *(_QWORD *)(OpcodeTerm + 16);
        if ( v19 )
        {
          v20 = -1LL;
          do
            ++v20;
          while ( *(_BYTE *)(v19 + v20) );
        }
        else
        {
          LODWORD(v20) = 0;
        }
        *(_DWORD *)(v18 + 76) = v20;
        if ( (_DWORD)v20 )
        {
          v21 = (void *)HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1413563464, 40 * (int)v20);
          *(_QWORD *)(v18 + 80) = v21;
          if ( v21 )
          {
            memset(v21, 0, 40LL * *(unsigned int *)(v18 + 76));
          }
          else
          {
            LogError(3221225626LL, v22, v23, v24);
            AcpiDiagTraceAmlError(a1, 3221225626LL);
            PrintDebugMessage(154, 0, 0, 0, 0LL);
            return (unsigned int)-1073741670;
          }
        }
      }
      else
      {
        LogError(3222536194LL, v15, v16, v17);
        AcpiDiagTraceAmlError(a1, 3222536194LL);
        PrintDebugMessage(153, 0, 0, 0, 0LL);
        return (unsigned int)-1072431102;
      }
      return v5;
    }
  }
  else
  {
    LogError(3222536193LL, v8, v11, v3);
    AcpiDiagTraceAmlError(a1, 3222536193LL);
    PrintDebugMessage(134, **(unsigned __int8 **)(a1 + 120), *(_QWORD *)(a1 + 120), 0, 0LL);
    return 3222536193LL;
  }
}
