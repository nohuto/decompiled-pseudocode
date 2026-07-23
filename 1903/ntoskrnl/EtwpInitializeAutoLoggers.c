/*
 * XREFs of EtwpInitializeAutoLoggers @ 0x14076D434
 * Callers:
 *     EtwInitializeSiloState @ 0x14076CFF8 (EtwInitializeSiloState.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1400025C0 (RtlInitializeGenericTableAvl.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlGetPersistedStateLocation @ 0x1405C0E20 (RtlGetPersistedStateLocation.c)
 *     EtwpEnumerateAutologgerPath @ 0x14076D7A4 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x14076DA0C (EtwStartAutoLogger.c)
 *     EtwpFreeKeyNameList @ 0x14076E67C (EtwpFreeKeyNameList.c)
 */

__int64 EtwpInitializeAutoLoggers()
{
  __int128 v0; // xmm1
  __int128 v1; // xmm0
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // rax
  PVOID TargetPath; // rbx
  PVOID PoolWithTag; // rdi
  ULONG BufferLengthOut[4]; // [rsp+48h] [rbp-C0h] BYREF
  _RTL_AVL_TABLE Table; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR SourceString[16]; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD Path[8]; // [rsp+E8h] [rbp-20h] BYREF
  int v22; // [rsp+168h] [rbp+60h]
  _OWORD v23[8]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v24; // [rsp+1F8h] [rbp+F0h]

  v0 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\WMI\\AutoLogger";
  Path[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\AutoLogger";
  v1 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\WMI\\AutoLogger";
  Path[1] = v0;
  v2 = *(_OWORD *)L"\\CurrentControlSet\\Control\\WMI\\AutoLogger";
  Path[2] = v1;
  v3 = *(_OWORD *)L"ControlSet\\Control\\WMI\\AutoLogger";
  Path[3] = v2;
  v4 = *(_OWORD *)L"et\\Control\\WMI\\AutoLogger";
  Path[4] = v3;
  v5 = *(_OWORD *)L"ol\\WMI\\AutoLogger";
  Path[5] = v4;
  Path[6] = v5;
  v6 = *(_DWORD *)L"r";
  Path[7] = *(_OWORD *)L"utoLogger";
  v22 = v6;
  v7 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\WMI\\GlobalLogger";
  v23[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\GlobalLogger";
  v8 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\WMI\\GlobalLogger";
  v23[1] = v7;
  v9 = *(_OWORD *)L"\\CurrentControlSet\\Control\\WMI\\GlobalLogger";
  v23[2] = v8;
  v10 = *(_OWORD *)L"ControlSet\\Control\\WMI\\GlobalLogger";
  v23[3] = v9;
  v11 = *(_OWORD *)L"et\\Control\\WMI\\GlobalLogger";
  v23[4] = v10;
  v12 = *(_OWORD *)L"ol\\WMI\\GlobalLogger";
  v23[5] = v11;
  v13 = *(_OWORD *)L"lobalLogger";
  v14 = *(_QWORD *)L"ger";
  v23[6] = v12;
  v23[7] = v13;
  v24 = v14;
  wcscpy(SourceString, L"GlobalLogger");
  memset(&Table, 0, sizeof(Table));
  RtlInitializeGenericTableAvl(
    &Table,
    (PRTL_AVL_COMPARE_ROUTINE)EtwpAvlCompareKeyNames,
    (PRTL_AVL_ALLOCATE_ROUTINE)EtwpAllocateKeyNameEntry,
    (PRTL_AVL_FREE_ROUTINE)EtwpFreeKeyNameEntry,
    0LL);
  TargetPath = ExAllocatePoolWithTag(PagedPool, 0x1FEuLL, 0x74777445u);
  if ( !TargetPath )
    return EtwpFreeKeyNameList(&Table);
  if ( RtlGetPersistedStateLocation(
         L"ETWAutoLoggerPath",
         0LL,
         0LL,
         LocationTypeRegistry,
         (PWCHAR)TargetPath,
         0x1FEu,
         BufferLengthOut) )
  {
    ExFreePoolWithTag(TargetPath, 0x74777445u);
    TargetPath = 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1FEuLL, 0x74777445u);
  if ( PoolWithTag )
  {
    if ( RtlGetPersistedStateLocation(
           L"ETWGlobalLoggerPath",
           0LL,
           0LL,
           LocationTypeRegistry,
           (PWCHAR)PoolWithTag,
           0x1FEu,
           BufferLengthOut) )
    {
      ExFreePoolWithTag(PoolWithTag, 0x74777445u);
      PoolWithTag = 0LL;
    }
    EtwStartAutoLogger(SourceString, (PCWSTR)v23);
    EtwpEnumerateAutologgerPath((PCWSTR)Path);
    if ( !TargetPath )
      goto LABEL_8;
    EtwpEnumerateAutologgerPath((PCWSTR)TargetPath);
  }
  if ( TargetPath )
    ExFreePoolWithTag(TargetPath, 0x74777445u);
LABEL_8:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x74777445u);
  return EtwpFreeKeyNameList(&Table);
}
