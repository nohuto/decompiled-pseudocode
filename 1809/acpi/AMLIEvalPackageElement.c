/*
 * XREFs of AMLIEvalPackageElement @ 0x1C0011EC4
 * Callers:
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00B9CA4 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     SyncEvalObject @ 0x1C0003F70 (SyncEvalObject.c)
 *     EvalPackageElement @ 0x1C0011FB4 (EvalPackageElement.c)
 *     GetBaseObject @ 0x1C00141B8 (GetBaseObject.c)
 *     GetObjectPath @ 0x1C0023478 (GetObjectPath.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     GetObjectTypeName @ 0x1C0062FC4 (GetObjectTypeName.c)
 *     AMLIDebugger @ 0x1C0063760 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 */

__int64 __fastcall AMLIEvalPackageElement(__int64 *a1, unsigned int a2, void *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 BaseObject; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  __int16 v11; // ax
  _QWORD *v12; // rcx
  unsigned int v13; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 ObjectPath; // rax
  unsigned int CurrentThread; // edx
  void *v21; // r8
  void *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int ObjectTypeName; // eax
  int v27; // ecx
  _WORD v28[24]; // [rsp+30h] [rbp-38h] BYREF

  dword_1C0080868 = 0;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v16, v15, v17, v18);
  }
  v6 = *a1;
  if ( (*(_BYTE *)(v6 + 64) & 4) != 0 )
    return (unsigned int)-1073741738;
  memset(a3, 0, 0x28uLL);
  memset(v28, 0, 0x28uLL);
  BaseObject = GetBaseObject(v6);
  if ( (gDebugger & 8) != 0 )
  {
    ObjectPath = GetObjectPath(BaseObject);
    CurrentThread = (unsigned int)KeGetCurrentThread();
    v21 = &unk_1C006E28A;
    v22 = (void *)ObjectPath;
    if ( ObjectPath )
      LODWORD(v21) = ObjectPath;
    PrintDebugMessage(46, CurrentThread, (_DWORD)v21, a2, 0LL);
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
  }
  v11 = *(_WORD *)(BaseObject + 66);
  if ( v11 == 8 )
  {
    v13 = SyncEvalObject(BaseObject, (int)v28, 0, 0);
    if ( v13 )
      goto LABEL_9;
    if ( v28[1] == 4 )
    {
      v12 = &v28[16];
      goto LABEL_8;
    }
    v13 = -1072431095;
    LogError(3222536201LL, v23, v24, v25);
    AcpiDiagTraceAmlError(0LL, 3222536201LL);
    ObjectTypeName = GetObjectTypeName(v28[1]);
    v27 = 48;
LABEL_23:
    PrintDebugMessage(v27, ObjectTypeName, 0, 0, 0LL);
    goto LABEL_9;
  }
  if ( v11 != 4 )
  {
    v13 = -1072431095;
    LogError(3222536201LL, v7, v9, v10);
    AcpiDiagTraceAmlError(0LL, 3222536201LL);
    ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(BaseObject + 66));
    v27 = 47;
    goto LABEL_23;
  }
  v12 = (_QWORD *)(BaseObject + 96);
LABEL_8:
  v13 = EvalPackageElement(*v12, a2, a3);
LABEL_9:
  FreeDataBuffs((__int64)v28, 1u);
  if ( v13 == 32772 )
    v13 = 259;
  DereferenceObjectEx(BaseObject);
  return v13;
}
