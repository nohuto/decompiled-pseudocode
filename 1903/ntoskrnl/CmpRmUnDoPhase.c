/*
 * XREFs of CmpRmUnDoPhase @ 0x1408328AC
 * Callers:
 *     CmpStartRMLog @ 0x1406993A0 (CmpStartRMLog.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenTransaction @ 0x1401C2630 (ZwOpenTransaction.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpTransMgrFreeVolatileData @ 0x140631678 (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrCommit @ 0x140632E20 (CmpTransMgrCommit.c)
 *     CmpTransMgrPrepare @ 0x14063302C (CmpTransMgrPrepare.c)
 *     CmListGetNextElement @ 0x140633584 (CmListGetNextElement.c)
 *     CmpTransMgrRollback @ 0x1406E2020 (CmpTransMgrRollback.c)
 */

char *__fastcall CmpRmUnDoPhase(__int64 a1)
{
  char *result; // rax
  __int64 v3; // r8
  char *v4; // rbx
  int v5; // edx
  __int64 v6; // rcx
  char **v7; // rax
  __int64 v8; // [rsp+28h] [rbp-39h]
  char v9[4]; // [rsp+38h] [rbp-29h] BYREF
  int v10; // [rsp+3Ch] [rbp-25h] BYREF
  _QWORD *v11; // [rsp+40h] [rbp-21h] BYREF
  HANDLE TransactionHandle; // [rsp+48h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v14[48]; // [rsp+80h] [rbp+1Fh] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v14, 0, sizeof(v14));
LABEL_2:
  v11 = 0LL;
  while ( 1 )
  {
    result = CmListGetNextElement((_QWORD **)(a1 + 16), &v11, 0);
    v4 = result;
    if ( !result )
      return result;
    if ( (*((_DWORD *)result + 12) & 2) != 0 )
    {
      CmpTransMgrRollback((__int64)result, &v10);
      CmpAttachToRegistryProcess((__int64)v14);
      v5 = 8;
LABEL_12:
      CmpTransMgrFreeVolatileData((__int64)v4, v5);
      KiUnstackDetachProcess((struct _KTHREAD *)v14, 0);
      v6 = *(_QWORD *)v4;
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || (v7 = (char **)*((_QWORD *)v4 + 1), *v7 != v4) )
        __fastfail(3u);
      *v7 = (char *)v6;
      *(_QWORD *)(v6 + 8) = v7;
      ExFreePoolWithTag(v4, 0x72544D43u);
      goto LABEL_2;
    }
    ObjectAttributes.RootDirectory = (HANDLE)((__int64)ObjectAttributes.RootDirectory & v3);
    ObjectAttributes.ObjectName = (PUNICODE_STRING)((__int64)ObjectAttributes.ObjectName & v3);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenTransaction(&TransactionHandle, 0x1F003Fu, &ObjectAttributes, (LPGUID)(result + 88), (HANDLE)(v3 & v8)) < 0 )
    {
      if ( (int)CmpTransMgrPrepare(a1, (__int64)v4, &v10, v9) < 0 || (int)CmpTransMgrCommit(a1, (__int64)v4, &v10) < 0 )
      {
        *((_DWORD *)v4 + 12) |= 2u;
        goto LABEL_2;
      }
      CmpAttachToRegistryProcess((__int64)v14);
      v5 = 4;
      goto LABEL_12;
    }
    ZwClose(TransactionHandle);
  }
}
