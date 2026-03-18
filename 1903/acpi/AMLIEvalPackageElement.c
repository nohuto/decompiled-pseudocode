/*
 * XREFs of AMLIEvalPackageElement @ 0x1C00246E0
 * Callers:
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BE954 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     SyncEvalObject @ 0x1C0002800 (SyncEvalObject.c)
 *     GetObjectPath @ 0x1C0006C18 (GetObjectPath.c)
 *     GetBaseObject @ 0x1C0010D44 (GetBaseObject.c)
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     EvalPackageElement @ 0x1C00247D0 (EvalPackageElement.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     GetObjectTypeName @ 0x1C0064F74 (GetObjectTypeName.c)
 *     AMLIDebugger @ 0x1C00657A8 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 */

__int64 __fastcall AMLIEvalPackageElement(__int64 *a1, unsigned int a2, void *a3)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 BaseObject; // rdi
  __int16 v8; // ax
  _QWORD *v9; // rcx
  unsigned int v10; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *ObjectPath; // rax
  struct _KTHREAD *CurrentThread; // rdx
  const void *v18; // r8
  void *v19; // rbx
  const void *ObjectTypeName; // rax
  int v21; // ecx
  _WORD v22[24]; // [rsp+30h] [rbp-38h] BYREF

  dword_1C0082858 = 0;
  v5 = a2;
  pszDest = 0;
  if ( (gDebugger & 0x1000) != 0 )
  {
    ConPrintf("\nProcess AML Debugger Request.\n");
    _InterlockedAnd(&gDebugger, 0xFFFFEFFF);
    AMLIDebugger(v13, v12, v14, v15);
  }
  v6 = *a1;
  if ( (*(_BYTE *)(v6 + 64) & 4) != 0 )
    return (unsigned int)-1073741738;
  memset(a3, 0, 0x28uLL);
  memset(v22, 0, 0x28uLL);
  BaseObject = GetBaseObject(v6);
  if ( (gDebugger & 8) != 0 )
  {
    ObjectPath = GetObjectPath(BaseObject);
    CurrentThread = KeGetCurrentThread();
    v18 = &unk_1C006FE7D;
    v19 = ObjectPath;
    if ( ObjectPath )
      v18 = ObjectPath;
    PrintDebugMessage(46, CurrentThread, v18, (const void *)v5, 0LL);
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
  }
  v8 = *(_WORD *)(BaseObject + 66);
  if ( v8 == 8 )
  {
    v10 = SyncEvalObject(BaseObject, (int)v22, 0, 0);
    if ( v10 )
      goto LABEL_9;
    if ( v22[1] == 4 )
    {
      v9 = &v22[16];
      goto LABEL_8;
    }
    v10 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(0LL, -1072431095);
    ObjectTypeName = (const void *)GetObjectTypeName(v22[1]);
    v21 = 48;
LABEL_23:
    PrintDebugMessage(v21, ObjectTypeName, 0LL, 0LL, 0LL);
    goto LABEL_9;
  }
  if ( v8 != 4 )
  {
    v10 = -1072431095;
    LogError(-1072431095);
    AcpiDiagTraceAmlError(0LL, -1072431095);
    ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(BaseObject + 66));
    v21 = 47;
    goto LABEL_23;
  }
  v9 = (_QWORD *)(BaseObject + 96);
LABEL_8:
  v10 = EvalPackageElement(*v9, (unsigned int)v5, a3);
LABEL_9:
  FreeDataBuffs((__int64)v22, 1u);
  if ( v10 == 32772 )
    v10 = 259;
  DereferenceObjectEx(BaseObject);
  return v10;
}
