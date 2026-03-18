/*
 * XREFs of PnpiUpdateForceActiveBothInterrupts @ 0x1C00B00EC
 * Callers:
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1C00AFDE0 (PnpiBiosExtendedIrqToIoDescriptor.c)
 * Callees:
 *     AMLIGetNSObjectNameSegment @ 0x1C00023D8 (AMLIGetNSObjectNameSegment.c)
 *     AMLIFreeDataBuffs @ 0x1C001D1E4 (AMLIFreeDataBuffs.c)
 *     PnpiCleanupForceActiveBothInterrupts @ 0x1C002DFBC (PnpiCleanupForceActiveBothInterrupts.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIRegLocalCopyString @ 0x1C008D584 (ACPIRegLocalCopyString.c)
 *     OSCreateHandle @ 0x1C0093C84 (OSCreateHandle.c)
 *     OSWriteRegValue @ 0x1C0093D78 (OSWriteRegValue.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0096C9C (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall PnpiUpdateForceActiveBothInterrupts(__int64 a1)
{
  __int64 *v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  PVOID v7; // rdi
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rcx
  unsigned int *v13; // rsi
  __int64 v14; // rax
  PVOID PoolWithTag; // rax
  __int64 v16; // rcx
  unsigned int Data; // [rsp+30h] [rbp-39h] BYREF
  PVOID P; // [rsp+38h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-29h] BYREF
  __int128 v20; // [rsp+50h] [rbp-19h] BYREF
  char v21[48]; // [rsp+60h] [rbp-9h] BYREF
  char SourceString[8]; // [rsp+90h] [rbp+27h] BYREF

  P = 0LL;
  if ( *(_DWORD *)(a1 + 656) != -1 )
    return 0LL;
  if ( !gAcpiHonorBiosPolarities )
  {
LABEL_38:
    *(_DWORD *)(a1 + 656) = 0;
    return 0LL;
  }
  memset(v21, 0, sizeof(v21));
  v2 = *(__int64 **)(a1 + 712);
  v20 = INTERRUPT_DSM_GUID;
  result = ACPIAmliEvaluateDsm(v2, (__int64)&v20, 0, 0, (__int64)v21, &P);
  Data = result;
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 )
    {
      *(_DWORD *)(a1 + 656) = 0;
      result = 0LL;
      Data = 0;
    }
    goto LABEL_6;
  }
  v7 = P;
  if ( *((_WORD *)P + 1) != 3 || !*((_DWORD *)P + 6) )
  {
    BugCheckParameter4 = 1LL;
    goto LABEL_42;
  }
  BugCheckParameter4 = 2LL;
  if ( (**((_BYTE **)P + 4) & 2) == 0 )
  {
    *(_DWORD *)(a1 + 656) = 0;
    goto LABEL_17;
  }
  memset(v21, 0, sizeof(v21));
  AMLIFreeDataBuffs((__int64)P, v9, v10, v11);
  ExFreePoolWithTag(v7, 0x52706341u);
  v12 = *(__int64 **)(a1 + 712);
  P = 0LL;
  v20 = INTERRUPT_DSM_GUID;
  result = ACPIAmliEvaluateDsm(v12, (__int64)&v20, 0, 1u, (__int64)v21, &P);
  Data = result;
  if ( (int)result < 0 )
  {
LABEL_6:
    v7 = P;
    goto LABEL_7;
  }
  v7 = P;
  if ( *((_WORD *)P + 1) != 4 )
  {
LABEL_42:
    Data = -1073741823;
LABEL_43:
    KeBugCheckEx(0xA5u, 0x1000CuLL, 0LL, 1uLL, BugCheckParameter4);
  }
  v13 = (unsigned int *)*((_QWORD *)P + 4);
  v14 = *v13;
  if ( (unsigned int)v14 > 0x3FFFFFFF )
  {
    BugCheckParameter4 = 3LL;
    goto LABEL_42;
  }
  *(_DWORD *)(a1 + 656) = v14;
  if ( (_DWORD)v14 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4 * v14, 0x44706341u);
    *(_QWORD *)(a1 + 648) = PoolWithTag;
    if ( !PoolWithTag )
    {
      Data = -1073741823;
      goto LABEL_18;
    }
  }
  v16 = 0LL;
  if ( *(_DWORD *)(a1 + 656) )
  {
    v6 = 0xFFFFFFFFLL;
    while ( HIWORD(v13[10 * v16 + 2]) == 1 )
    {
      v5 = *(_QWORD *)&v13[10 * v16 + 6];
      if ( v5 > 0xFFFFFFFF )
        break;
      *(_DWORD *)(*(_QWORD *)(a1 + 648) + 4 * v16) = v5;
      v16 = (unsigned int)(v16 + 1);
      if ( (unsigned int)v16 >= *(_DWORD *)(a1 + 656) )
        goto LABEL_17;
    }
    BugCheckParameter4 = 4LL;
    goto LABEL_42;
  }
LABEL_17:
  Data = 0;
LABEL_18:
  AMLIFreeDataBuffs((__int64)v7, v4, v5, v6);
  result = Data;
LABEL_7:
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x52706341u);
    result = Data;
  }
  if ( (int)result < 0 )
  {
    PnpiCleanupForceActiveBothInterrupts(a1);
    if ( (AcpiOverrideAttributes & 0x10000) != 0 )
    {
      if ( (int)OSCreateHandle(
                  "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\DSMFailures",
                  0LL,
                  &Handle) < 0 )
      {
        BugCheckParameter4 = 10LL;
        goto LABEL_43;
      }
      LODWORD(P) = AMLIGetNSObjectNameSegment(*(_QWORD *)(a1 + 712));
      ACPIRegLocalCopyString(SourceString, (__int64)&P, 4u);
      if ( !SourceString[0] )
      {
        BugCheckParameter4 = 11LL;
        goto LABEL_43;
      }
      if ( (int)OSWriteRegValue(SourceString, Handle, &Data, 4u) < 0 )
      {
        BugCheckParameter4 = 12LL;
        goto LABEL_43;
      }
      ZwClose(Handle);
    }
    goto LABEL_38;
  }
  return result;
}
