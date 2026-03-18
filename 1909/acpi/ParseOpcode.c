/*
 * XREFs of ParseOpcode @ 0x1C0012CB0
 * Callers:
 *     ParseArg @ 0x1C0012808 (ParseArg.c)
 *     ParsePackage @ 0x1C0012880 (ParsePackage.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     FindOpcodeTerm @ 0x1C000CDF0 (FindOpcodeTerm.c)
 *     ParseIntObj @ 0x1C001162C (ParseIntObj.c)
 *     ParseNameObj @ 0x1C0011FCC (ParseNameObj.c)
 *     ParseString @ 0x1C001ABC0 (ParseString.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     ParseLocalObj @ 0x1C002A1B8 (ParseLocalObj.c)
 *     ParseArgObj @ 0x1C002A218 (ParseArgObj.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     AMLIDebugger @ 0x1C00657A8 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 */

__int64 __fastcall ParseOpcode(__int64 a1, __int64 a2, __int64 a3)
{
  PVOID *v3; // rax
  unsigned int v4; // r15d
  int v7; // edx
  unsigned __int8 *v9; // rsi
  __int64 v10; // r8
  __int64 OpcodeTerm; // rdi
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  void *v17; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9

  v3 = (PVOID *)&unk_1C0082790;
  v4 = 0;
  v7 = 0;
  do
  {
    if ( *(PVOID *)(a1 + 120) == *v3 )
      break;
    ++v7;
    v3 += 2;
  }
  while ( (__int64)v3 < (__int64)&qword_1C0082830 );
  if ( v7 != 10 && (dword_1C0082788[4 * v7] & 1) != 0 && v7 != -1 )
  {
    ConPrintf("\nHit Breakpoint %d.\n");
    AMLIDebugger(v20, v19, v21, v22);
  }
  v9 = *(unsigned __int8 **)(a1 + 120);
  if ( *v9 == 91 )
  {
    *(_QWORD *)(a1 + 120) = v9 + 1;
    OpcodeTerm = FindOpcodeTerm(v9[1]);
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 120);
    OpcodeTerm = (__int64)*(&OpcodeTable + *v9);
  }
  if ( OpcodeTerm )
  {
    v12 = *(_DWORD *)(OpcodeTerm + 28);
    if ( (v12 & 8) != 0 )
    {
      return ParseIntObj(a1, (_WORD **)(a1 + 120), a3, 0);
    }
    else if ( (v12 & 0x10) != 0 )
    {
      return ParseString(a1, a1 + 120, a3, 0LL);
    }
    else if ( (v12 & 2) != 0 )
    {
      return ParseArgObj(a1, a3, v10);
    }
    else if ( (v12 & 4) != 0 )
    {
      return ParseLocalObj(a1, a3, v10);
    }
    else if ( (v12 & 0x20) != 0 )
    {
      return ParseNameObj((struct _SLIST_ENTRY *)a1, a3);
    }
    else if ( (v12 & 0x40) != 0 )
    {
      LogError(3222536198LL);
      AcpiDiagTraceAmlError(a1, 3222536198LL);
      PrintDebugMessage(133, 0, 0, 0, 0LL);
      return 3222536198LL;
    }
    else
    {
      *(_QWORD *)(a1 + 120) = v10 + 1;
      v13 = HeapAlloc((struct _SLIST_ENTRY *)(a1 + 480), 1297237576, 0x60u);
      v14 = v13;
      if ( v13 )
      {
        *(_QWORD *)(v13 + 8) = *(_QWORD *)(a1 + 416);
        *(_QWORD *)(a1 + 416) = v13;
        *(_QWORD *)(v13 + 24) = ParseTerm;
        *(_DWORD *)v13 = 1297237332;
        *(_QWORD *)(v13 + 32) = v9;
        *(_QWORD *)(v13 + 48) = a2;
        *(_QWORD *)(v13 + 56) = OpcodeTerm;
        *(_QWORD *)(v13 + 88) = a3;
        v15 = *(_QWORD *)(OpcodeTerm + 16);
        if ( v15 )
        {
          v16 = -1LL;
          do
            ++v16;
          while ( *(_BYTE *)(v15 + v16) );
        }
        else
        {
          LODWORD(v16) = 0;
        }
        *(_DWORD *)(v14 + 76) = v16;
        if ( (_DWORD)v16 )
        {
          v17 = (void *)HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1413563464, 40 * (int)v16);
          *(_QWORD *)(v14 + 80) = v17;
          if ( v17 )
          {
            memset(v17, 0, 40LL * *(unsigned int *)(v14 + 76));
          }
          else
          {
            LogError(3221225626LL);
            AcpiDiagTraceAmlError(a1, 3221225626LL);
            PrintDebugMessage(154, 0, 0, 0, 0LL);
            return (unsigned int)-1073741670;
          }
        }
      }
      else
      {
        LogError(3222536194LL);
        AcpiDiagTraceAmlError(a1, 3222536194LL);
        PrintDebugMessage(153, 0, 0, 0, 0LL);
        return (unsigned int)-1072431102;
      }
      return v4;
    }
  }
  else
  {
    LogError(3222536193LL);
    AcpiDiagTraceAmlError(a1, 3222536193LL);
    PrintDebugMessage(134, **(unsigned __int8 **)(a1 + 120), *(_QWORD *)(a1 + 120), 0, 0LL);
    return 3222536193LL;
  }
}
