/*
 * XREFs of InitIllegalIOAddressListFromHAL @ 0x1C00B99F0
 * Callers:
 *     AMLIInitialize @ 0x1C00B8B2C (AMLIInitialize.c)
 * Callees:
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     FreellegalIOAddressList @ 0x1C00BCB40 (FreellegalIOAddressList.c)
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
