/*
 * XREFs of ProcessLoadTable @ 0x1C0067C40
 * Callers:
 *     <none>
 * Callees:
 *     HeapFree @ 0x1C0001FAC (HeapFree.c)
 *     FreeObjData @ 0x1C0002EB0 (FreeObjData.c)
 *     ValidateArgTypes @ 0x1C00099D0 (ValidateArgTypes.c)
 *     DupObjData @ 0x1C000A090 (DupObjData.c)
 *     GetNameSpaceObject @ 0x1C0021288 (GetNameSpaceObject.c)
 *     RtlStringCchCopyNA @ 0x1C0027FEC (RtlStringCchCopyNA.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     AMLIDebugger @ 0x1C0063760 (AMLIDebugger.c)
 */

__int64 __fastcall ProcessLoadTable(ULONG_PTR BugCheckParameter2, _QWORD *a2, int a3)
{
  int v3; // ebx
  void *v4; // r14
  __int64 v6; // r13
  ULONG_PTR v8; // rdi
  unsigned int v9; // eax
  int v10; // eax
  const char *v11; // rbp
  int v12; // eax
  unsigned int v13; // ecx
  const char *v14; // r12
  __int64 v15; // rbx
  __int64 v16; // r14
  char *PoolWithTag; // rax
  char *v18; // rbp
  int v19; // ecx
  char *v20; // rax
  int NameSpaceObject; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rcx
  __int64 v27; // rbx
  __int64 v28; // r9
  int v29; // eax
  void *v30; // [rsp+40h] [rbp-48h]
  const char *pszSrc; // [rsp+98h] [rbp+10h]
  unsigned int v32; // [rsp+A0h] [rbp+18h]
  __int64 v33; // [rsp+A8h] [rbp+20h] BYREF

  v33 = 0LL;
  v3 = a3;
  v4 = (void *)a2[4];
  v6 = a2[5];
  v30 = v4;
  if ( a3 )
  {
    v8 = 1LL;
    goto LABEL_43;
  }
  if ( (gdwfAMLIInit & 2) != 0 )
  {
    PrintDebugMessage(16, 0LL, 0LL, 0LL, 0LL);
    AMLIDebugger();
  }
  v9 = *(_DWORD *)(v6 + 76);
  if ( v9 < 4 )
  {
    v11 = "\\";
  }
  else
  {
    v10 = ValidateArgTypes(BugCheckParameter2, *(_QWORD *)(v6 + 80) + 120LL, 0, "Z");
    v3 = v10;
    if ( v10 )
    {
      LogError(v10);
      AcpiDiagTraceAmlError(BugCheckParameter2, v3);
      PrintDebugMessage(148, 0LL, 0LL, 0LL, 0LL);
      v8 = 5LL;
      goto LABEL_43;
    }
    v11 = *(const char **)(*(_QWORD *)(v6 + 80) + 152LL);
    v9 = *(_DWORD *)(v6 + 76);
  }
  pszSrc = v11;
  if ( v9 >= 5 )
  {
    v12 = ValidateArgTypes(BugCheckParameter2, *(_QWORD *)(v6 + 80) + 160LL, 0, "Z");
    v3 = v12;
    if ( v12 )
    {
      LogError(v12);
      AcpiDiagTraceAmlError(BugCheckParameter2, v3);
      PrintDebugMessage(148, 0LL, 0LL, 0LL, 0LL);
      v8 = 6LL;
      goto LABEL_43;
    }
    v13 = *(_DWORD *)(v6 + 76);
    v14 = *(const char **)(*(_QWORD *)(v6 + 80) + 192LL);
    if ( v13 >= 5 && v14 && *v14 )
    {
      if ( v13 < 6 )
      {
        v3 = -1072431098;
        LogError(-1072431098);
        AcpiDiagTraceAmlError(BugCheckParameter2, -1072431098);
        PrintDebugMessage(150, 0LL, 0LL, 0LL, 0LL);
        v8 = 7LL;
        goto LABEL_43;
      }
      v15 = -1LL;
      if ( ((*v14 - 92) & 0xFD) != 0 )
      {
        v16 = -1LL;
        do
          ++v16;
        while ( v11[v16] );
        do
          ++v15;
        while ( v14[v15] );
        v32 = v15 + v16 + 2;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v32, 0x496C6D41u);
        v18 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v3 = -1073741670;
          LogError(-1073741670);
          AcpiDiagTraceAmlError(BugCheckParameter2, -1073741670);
          v19 = 86;
LABEL_24:
          PrintDebugMessage(v19, 0LL, 0LL, 0LL, 0LL);
          *(_WORD *)(a2[6] + 2LL) = 1;
          v8 = 4LL;
LABEL_42:
          *(_QWORD *)(a2[6] + 16LL) = 0LL;
LABEL_43:
          KeBugCheckEx(0xA5u, 0x15uLL, BugCheckParameter2, v8, v3);
        }
        RtlStringCchCopyNA(PoolWithTag, (unsigned int)(v15 + v16 + 2), pszSrc, (unsigned int)v16);
        if ( pszSrc[(unsigned int)v16 - 1] != 92 )
        {
          v18[(unsigned int)v16] = 46;
          LODWORD(v16) = v16 + 1;
        }
        RtlStringCchCopyNA(&v18[(unsigned int)v16], v32 - (unsigned int)v16, v14, (unsigned int)v15);
        v18[(unsigned int)(v15 + v16)] = 0;
      }
      else
      {
        do
          ++v15;
        while ( v14[v15] );
        v20 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v15 + 1), 0x496C6D41u);
        v18 = v20;
        if ( !v20 )
        {
          v3 = -1073741670;
          LogError(-1073741670);
          AcpiDiagTraceAmlError(BugCheckParameter2, -1073741670);
          v19 = 92;
          goto LABEL_24;
        }
        RtlStringCchCopyNA(v20, (unsigned int)(v15 + 1), v14, (unsigned int)v15);
      }
      NameSpaceObject = GetNameSpaceObject(v18, *(_QWORD *)(BugCheckParameter2 + 80), &v33, 0x80000000);
      v3 = NameSpaceObject;
      if ( NameSpaceObject )
      {
        LogError(NameSpaceObject);
        AcpiDiagTraceAmlError(BugCheckParameter2, v3);
        PrintDebugMessage(92, v18, 0LL, 0LL, 0LL);
        *(_WORD *)(a2[6] + 2LL) = 1;
        v8 = 2LL;
        goto LABEL_42;
      }
      if ( v33 == gpnsNameSpaceRoot )
      {
        LogError(0);
        AcpiDiagTraceAmlError(BugCheckParameter2, 0);
        PrintDebugMessage(97, 0LL, 0LL, 0LL, 0LL);
        *(_WORD *)(a2[6] + 2LL) = 1;
        *(_QWORD *)(a2[6] + 16LL) = 0LL;
      }
      else
      {
        v27 = v33 + 64;
        FreeObjData(v33 + 64, v22, v23, v24);
        v29 = DupObjData((struct _SLIST_ENTRY *)gpheapGlobal, v27, *(_QWORD *)(v6 + 80) + 200LL, v28);
        v3 = v29;
        if ( v29 )
        {
          LogError(v29);
          AcpiDiagTraceAmlError(BugCheckParameter2, v3);
          PrintDebugMessage(88, 0LL, 0LL, 0LL, 0LL);
          *(_WORD *)(a2[6] + 2LL) = 1;
          v8 = 3LL;
          goto LABEL_42;
        }
      }
      ExFreePoolWithTag(v18, 0);
      v4 = v30;
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v25 = *(_QWORD **)(BugCheckParameter2 + 416);
  *(_QWORD *)(BugCheckParameter2 + 416) = v25[1];
  HeapFree(v25);
  return (unsigned int)v3;
}
