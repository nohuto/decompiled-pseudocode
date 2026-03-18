/*
 * XREFs of InitIllegalIOAddressListFromHAL @ 0x1C00BD00C
 * Callers:
 *     AMLIInitialize @ 0x1C00BC5B4 (AMLIInitialize.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     FreellegalIOAddressList @ 0x1C00C078C (FreellegalIOAddressList.c)
 */

void InitIllegalIOAddressListFromHAL()
{
  int v0; // eax
  int v1; // eax
  SIZE_T v2; // rbx
  PVOID PoolWithTag; // rax
  const void *v4; // rdx
  int v5; // ecx
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp+8h] BYREF

  LODWORD(NumberOfBytes) = 0;
  if ( !gpBadIOAddressList )
  {
    v0 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, SIZE_T *))HalDispatchTable->HalQuerySystemInformation)(
           16LL,
           0LL,
           0LL,
           &NumberOfBytes);
    if ( v0 != -1073741820 )
    {
      if ( v0 == -1073741496 )
      {
        v4 = 0LL;
        v5 = 74;
      }
      else
      {
        v4 = (const void *)v0;
        v5 = 73;
      }
      goto LABEL_17;
    }
    if ( !(_DWORD)NumberOfBytes )
    {
      v4 = 0LL;
      v5 = 75;
      goto LABEL_17;
    }
    gpBadIOAddressList = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x496C6D41u);
    if ( !gpBadIOAddressList )
    {
      LogError(-1073741670);
      AcpiDiagTraceAmlError(0LL, -1073741670);
      v4 = 0LL;
      v5 = 71;
      goto LABEL_17;
    }
    v1 = ((__int64 (__fastcall *)(__int64, _QWORD, PVOID, SIZE_T *))HalDispatchTable->HalQuerySystemInformation)(
           16LL,
           (unsigned int)NumberOfBytes,
           gpBadIOAddressList,
           &NumberOfBytes);
    if ( v1 )
    {
      PrintDebugMessage(73, (const void *)v1, 0LL, 0LL, 0LL);
      FreellegalIOAddressList();
      return;
    }
    if ( (unsigned int)NumberOfBytes / 0x18 != 1 )
    {
      v2 = 4LL * ((unsigned int)NumberOfBytes / 0x18 - 1);
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x496C6D41u);
      gpBadIOErrorLogDoneList = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v2);
        return;
      }
      LogError(-1073741670);
      AcpiDiagTraceAmlError(0LL, -1073741670);
      v4 = 0LL;
      v5 = 72;
LABEL_17:
      PrintDebugMessage(v5, v4, 0LL, 0LL, 0LL);
    }
  }
}
