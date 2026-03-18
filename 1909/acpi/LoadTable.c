/*
 * XREFs of LoadTable @ 0x1C00690A0
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     ValidateArgTypes @ 0x1C001A610 (ValidateArgTypes.c)
 *     GetNameSpaceObject @ 0x1C001AD04 (GetNameSpaceObject.c)
 *     LoadDDB @ 0x1C001EEB0 (LoadDDB.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     PushPost @ 0x1C0067DB8 (PushPost.c)
 */

__int64 __fastcall LoadTable(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // r15
  unsigned int DDB; // ebx
  __int64 v7; // rbx
  PVOID PoolWithTag; // r12
  unsigned int v9; // edi
  const void *v10; // rdx
  unsigned int v11; // r13d
  unsigned int v12; // eax
  unsigned __int64 v13; // rdx
  int v14; // ecx
  unsigned int v15; // eax
  int v16; // eax
  int v17; // ecx
  char *v18; // r13
  int v19; // eax
  int v20; // ecx
  int NameSpaceObject; // eax
  int v22; // eax
  unsigned __int64 v24; // [rsp+30h] [rbp-20h] BYREF
  const void *v25; // [rsp+38h] [rbp-18h]
  const void *v26; // [rsp+40h] [rbp-10h]
  const void *v27; // [rsp+48h] [rbp-8h]
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int64 v29; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int v30; // [rsp+A8h] [rbp+58h]

  v3 = *(_QWORD *)(a2 + 80);
  v4 = 0LL;
  v24 = 0LL;
  DDB = ValidateArgTypes(a1, v3, 0, "ZZZ");
  if ( DDB )
    return DDB;
  LODWORD(NumberOfBytes) = 0;
  v7 = *(_QWORD *)(a2 + 80);
  PoolWithTag = 0LL;
  v9 = *(_DWORD *)(v7 + 64) - 1;
  v10 = *(const void **)(v7 + 32);
  v11 = *(_DWORD *)(v7 + 104) - 1;
  v26 = *(const void **)(v7 + 72);
  v25 = *(const void **)(v7 + 112);
  v12 = *(_DWORD *)(v7 + 24) - 1;
  v27 = v10;
  v29 = v12;
  v30 = v9;
  if ( v12 > 4 )
  {
    LogError(-1072431098);
    AcpiDiagTraceAmlError(a1, -1072431098);
    v13 = v29;
    v14 = 100;
LABEL_4:
    PrintDebugMessage(v14, (const void *)v13, 0LL, 0LL, 0LL);
    return (unsigned int)-1072431098;
  }
  LODWORD(v29) = 0;
  memmove(&v29, v10, v12);
  if ( v9 > 6 )
  {
    LogError(-1072431098);
    AcpiDiagTraceAmlError(a1, -1072431098);
    v13 = v30;
    v14 = 96;
    goto LABEL_4;
  }
  if ( v11 > 8 )
  {
    LogError(-1072431098);
    AcpiDiagTraceAmlError(a1, -1072431098);
    v13 = v11;
LABEL_9:
    v14 = 101;
    goto LABEL_4;
  }
  v15 = *(_DWORD *)(a2 + 76);
  if ( v15 < 4 )
  {
    v18 = "\\";
  }
  else
  {
    v16 = ValidateArgTypes(a1, v7 + 120, 0, "Z");
    DDB = v16;
    if ( v16 )
    {
      LogError(v16);
      AcpiDiagTraceAmlError(a1, DDB);
      v17 = 99;
LABEL_13:
      PrintDebugMessage(v17, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_42;
    }
    v7 = *(_QWORD *)(a2 + 80);
    v15 = *(_DWORD *)(a2 + 76);
    v18 = *(char **)(v7 + 152);
  }
  if ( v15 >= 5 )
  {
    v19 = ValidateArgTypes(a1, v7 + 160, 0, "Z");
    DDB = v19;
    if ( v19 )
    {
      LogError(v19);
      AcpiDiagTraceAmlError(a1, DDB);
      v17 = 98;
      goto LABEL_13;
    }
    if ( *(_DWORD *)(a2 + 76) < 6u )
    {
      LogError(-1072431098);
      AcpiDiagTraceAmlError(a1, -1072431098);
      v13 = 0LL;
      goto LABEL_9;
    }
  }
  if ( ghMapTable )
  {
    DDB = ghMapTable((unsigned int)v29, v26, v25, 0LL, &NumberOfBytes);
  }
  else
  {
    LogError(-1072431098);
    AcpiDiagTraceAmlError(a1, -1072431098);
    PrintDebugMessage(94, 0LL, 0LL, 0LL, 0LL);
    DDB = -1072431098;
  }
  if ( DDB != -1073741789 )
  {
    if ( DDB == -1073741275 )
      DDB = -1073741772;
    goto LABEL_41;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x426C6D41u);
  if ( !PoolWithTag )
  {
    LogError(-1073741670);
    AcpiDiagTraceAmlError(a1, -1073741670);
    v20 = 87;
LABEL_27:
    PrintDebugMessage(v20, 0LL, 0LL, 0LL, 0LL);
LABEL_41:
    LogError(DDB);
    AcpiDiagTraceAmlError(a1, DDB);
    PrintDebugMessage(89, v27, v26, v25, 0LL);
    *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = 0LL;
    goto LABEL_42;
  }
  if ( ghMapTable )
    DDB = ghMapTable((unsigned int)v29, v26, v25, PoolWithTag, &NumberOfBytes);
  else
    DDB = -1072431098;
  if ( DDB )
  {
    LogError(-1072431098);
    AcpiDiagTraceAmlError(a1, -1072431098);
    v20 = 91;
    goto LABEL_27;
  }
  NameSpaceObject = GetNameSpaceObject(v18, *(_QWORD *)(a1 + 80), (__int64 *)&v24, 0x80000000);
  DDB = NameSpaceObject;
  if ( NameSpaceObject )
  {
    LogError(NameSpaceObject);
    AcpiDiagTraceAmlError(a1, DDB);
    PrintDebugMessage(93, v18, 0LL, 0LL, 0LL);
  }
  else
  {
    v22 = PushPost((struct _SLIST_ENTRY *)a1, (__int64)ProcessLoadTable, (__int64)PoolWithTag, a2, *(_QWORD *)(a2 + 88));
    DDB = v22;
    if ( !v22 )
    {
      DDB = LoadDDB((_QWORD *)a1, (__int64)PoolWithTag, v24, *(_QWORD *)(a2 + 88));
      DereferenceObjectEx(v24);
      goto LABEL_42;
    }
    LogError(v22);
    AcpiDiagTraceAmlError(a1, DDB);
    PrintDebugMessage(90, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = v24;
LABEL_42:
  if ( DDB && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v4 )
    DereferenceObjectEx(v4);
  return DDB;
}
