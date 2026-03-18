/*
 * XREFs of ?PrepareDripsBlockerProcessName@DXGGLOBAL@@QEAAXPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@W4_SLEEPSTUDY_CONNECTION_ID@@PEADIPEA_KH@Z @ 0x1C0210EC4
 * Callers:
 *     ?DoGetProcessEntry@DripsBlockerTrackingHelper@@AEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@PEAI@Z @ 0x1C020E988 (-DoGetProcessEntry@DripsBlockerTrackingHelper@@AEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@P.c)
 *     ?RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C02116A4 (-RemoveProcessEntry@DripsBlockerTrackingHelper@@QEAAJ_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@.c)
 *     ?ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCESS@@_KI@Z @ 0x1C0211828 (-ReportDripsBlocker@DXGGLOBAL@@QEAAXW4_SLEEPSTUDY_CONNECTION_ID@@PEAU_DEVICE_OBJECT@@PEAU_EPROCE.c)
 *     ?StartStopAccounting@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1C02121E8 (-StartStopAccounting@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 * Callees:
 *     RtlStringCopyWorkerA @ 0x1C003BEFC (RtlStringCopyWorkerA.c)
 */

int __fastcall DXGGLOBAL::PrepareDripsBlockerProcessName(
        size_t a1,
        __int64 a2,
        ULONG a3,
        int a4,
        NTSTRSAFE_PSTR pszDest,
        __int64 a6,
        __int64 *a7,
        int a8)
{
  __int64 v8; // rdi
  __int64 v11; // rbx
  unsigned __int64 v12; // r14
  __int64 ProcessImageFileName; // rax
  __int64 v14; // rdx
  size_t v15; // rcx
  NTSTATUS v16; // esi
  const char *v17; // r9
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // r8
  __int64 v23; // rcx
  signed int v24; // ebx
  __int64 v25; // rax
  size_t v27; // [rsp+20h] [rbp-38h]
  size_t pcchNewDestLength; // [rsp+60h] [rbp+8h] BYREF

  pcchNewDestLength = a1;
  v8 = (__int64)pszDest;
  v11 = 0LL;
  v12 = 0LL;
  ProcessImageFileName = PsGetProcessImageFileName(a2);
  v15 = -v8;
  v16 = v8 == 0 ? 0xC000000D : 0;
  if ( v8 )
  {
    v17 = File;
    if ( ProcessImageFileName )
      v17 = (const char *)ProcessImageFileName;
    pcchNewDestLength = 0LL;
    v16 = RtlStringCopyWorkerA((NTSTRSAFE_PSTR)v8, 0x21uLL, &pcchNewDestLength, v17, v27);
    LODWORD(ProcessImageFileName) = pcchNewDestLength;
    v15 = 33 - pcchNewDestLength;
    v14 = pcchNewDestLength + v8;
    if ( v16 >= 0 || (*(_BYTE *)v8 = 0, v14 = v8, v15 = 33LL, v16 == -2147483643) )
    {
      v11 = v14;
      v12 = v15;
    }
  }
  else
  {
    MEMORY[0] = 0;
  }
  if ( v16 >= 0 )
  {
    if ( a8 && (!a4 || a4 == 3) && v12 >= 0xF )
    {
      if ( !v11 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v15);
        *(_QWORD *)(v18 + 24) = 4767LL;
        LODWORD(ProcessImageFileName) = WdLogEvent5_WdAssertion(v18);
      }
      if ( a3 != -1 )
      {
        *(_WORD *)v11 = 17247;
        if ( a4 )
          *(_BYTE *)(v11 + 2) = 65;
        else
          *(_BYTE *)(v11 + 2) = 87;
        v19 = v11 + 3;
        *(_WORD *)v19 = 12383;
        *(_BYTE *)(v19 + 2) = 120;
        LODWORD(ProcessImageFileName) = RtlIntegerToChar(a3, 0x10u, 9u, (PCHAR)(v19 + 3));
        v16 = ProcessImageFileName;
        if ( (int)ProcessImageFileName >= 0 )
        {
LABEL_22:
          v22 = a7;
          if ( a7 )
          {
            v23 = 0LL;
            if ( v8 )
            {
              v14 = 33LL;
              do
              {
                if ( !*(_BYTE *)v8 )
                  break;
                ++v8;
                --v14;
              }
              while ( v14 );
              v24 = v14 == 0 ? 0xC000000D : 0;
              if ( v14 )
                v23 = 33 - v14;
            }
            else
            {
              v24 = -1073741811;
            }
            ProcessImageFileName = 0LL;
            if ( v24 >= 0 )
              ProcessImageFileName = v23;
            *a7 = ProcessImageFileName;
            if ( v24 < 0 )
            {
              v25 = WdLogNewEntry5_WdWarning(v23, v14, v22);
              *(_QWORD *)(v25 + 24) = v24;
              LODWORD(ProcessImageFileName) = WdLogEvent5_WdWarning(v25);
            }
          }
          return ProcessImageFileName;
        }
        v21 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v21 + 24) = 4794LL;
        LODWORD(ProcessImageFileName) = WdLogEvent5_WdAssertion(v21);
      }
    }
    if ( v16 < 0 )
      return ProcessImageFileName;
    goto LABEL_22;
  }
  return ProcessImageFileName;
}
