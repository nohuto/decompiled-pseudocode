/*
 * XREFs of CmpRmUnDoPhase @ 0x1407F93C0
 * Callers:
 *     CmpStartRMLog @ 0x14070E334 (CmpStartRMLog.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwOpenTransaction @ 0x1401BA6B0 (ZwOpenTransaction.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405A9000 (CmpTransMgrFreeVolatileData.c)
 *     CmpAttachToRegistryProcess @ 0x1405D4048 (CmpAttachToRegistryProcess.c)
 *     CmpTransMgrRollback @ 0x140694214 (CmpTransMgrRollback.c)
 *     CmListGetNextElement @ 0x1406948E0 (CmListGetNextElement.c)
 *     CmpTransMgrPrepare @ 0x1406FCDFC (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1406FCFD0 (CmpTransMgrCommit.c)
 */

char *__fastcall CmpRmUnDoPhase(__int64 a1)
{
  char *result; // rax
  __int64 v3; // r8
  char *v4; // rbx
  __int64 v5; // rcx
  int v6; // edx
  __int64 v7; // rcx
  char **v8; // rax
  __int64 v9; // [rsp+28h] [rbp-39h]
  char v10[4]; // [rsp+38h] [rbp-29h] BYREF
  int v11; // [rsp+3Ch] [rbp-25h] BYREF
  _QWORD *v12; // [rsp+40h] [rbp-21h] BYREF
  HANDLE TransactionHandle; // [rsp+48h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v15[48]; // [rsp+80h] [rbp+1Fh] BYREF

LABEL_1:
  v12 = 0LL;
  while ( 1 )
  {
    result = CmListGetNextElement((_QWORD **)(a1 + 16), &v12, 0);
    v4 = result;
    if ( !result )
      return result;
    if ( (*((_DWORD *)result + 12) & 2) != 0 )
    {
      CmpTransMgrRollback((__int64)result, &v11);
      CmpAttachToRegistryProcess((__int64)v15);
      v6 = 8;
LABEL_11:
      CmpTransMgrFreeVolatileData((ULONG_PTR)v4, v6);
      KiUnstackDetachProcess((__int64)v15, 0LL);
      v7 = *(_QWORD *)v4;
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v8 = (char **)*((_QWORD *)v4 + 1), *v8 != v4) )
        __fastfail(3u);
      *v8 = (char *)v7;
      *(_QWORD *)(v7 + 8) = v8;
      ExFreePoolWithTag(v4, 0x72544D43u);
      goto LABEL_1;
    }
    ObjectAttributes.RootDirectory = (HANDLE)((__int64)ObjectAttributes.RootDirectory & v3);
    ObjectAttributes.ObjectName = (PUNICODE_STRING)((__int64)ObjectAttributes.ObjectName & v3);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenTransaction(&TransactionHandle, 0x1F003Fu, &ObjectAttributes, (LPGUID)(result + 88), (HANDLE)(v3 & v9)) < 0 )
    {
      if ( (int)CmpTransMgrPrepare(a1, (__int64)v4, &v11, v10) < 0 || (int)CmpTransMgrCommit(v5, (__int64)v4, &v11) < 0 )
      {
        *((_DWORD *)v4 + 12) |= 2u;
        goto LABEL_1;
      }
      CmpAttachToRegistryProcess((__int64)v15);
      v6 = 4;
      goto LABEL_11;
    }
    ZwClose(TransactionHandle);
  }
}
