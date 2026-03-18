/*
 * XREFs of PnpiUpdateForceActiveBothInterrupts @ 0x1C00B3A64
 * Callers:
 *     PnpiBiosExtendedIrqToIoDescriptor @ 0x1C00B3758 (PnpiBiosExtendedIrqToIoDescriptor.c)
 * Callees:
 *     AMLIGetNSObjectNameSegment @ 0x1C00018A0 (AMLIGetNSObjectNameSegment.c)
 *     AMLIFreeDataBuffs @ 0x1C000A45C (AMLIFreeDataBuffs.c)
 *     PnpiCleanupForceActiveBothInterrupts @ 0x1C002BD70 (PnpiCleanupForceActiveBothInterrupts.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIRegLocalCopyString @ 0x1C008F5E0 (ACPIRegLocalCopyString.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0093754 (ACPIAmliEvaluateDsm.c)
 *     OSCreateHandle @ 0x1C009C988 (OSCreateHandle.c)
 *     OSWriteRegValue @ 0x1C009CA98 (OSWriteRegValue.c)
 */

__int64 __fastcall PnpiUpdateForceActiveBothInterrupts(__int64 a1)
{
  __int64 *v2; // rcx
  __int64 result; // rax
  _QWORD *v4; // rdi
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 *v6; // rcx
  unsigned int *v7; // rsi
  __int64 v8; // rax
  PVOID PoolWithTag; // rax
  __int64 v10; // rdx
  unsigned int Data; // [rsp+30h] [rbp-39h] BYREF
  PVOID P; // [rsp+38h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-29h] BYREF
  __int128 v14; // [rsp+50h] [rbp-19h] BYREF
  char v15[48]; // [rsp+60h] [rbp-9h] BYREF
  char SourceString[8]; // [rsp+90h] [rbp+27h] BYREF

  P = 0LL;
  if ( *(_DWORD *)(a1 + 656) != -1 )
    return 0LL;
  if ( !gAcpiHonorBiosPolarities )
  {
LABEL_37:
    *(_DWORD *)(a1 + 656) = 0;
    return 0LL;
  }
  memset(v15, 0, sizeof(v15));
  v2 = *(__int64 **)(a1 + 712);
  v14 = INTERRUPT_DSM_GUID;
  result = ACPIAmliEvaluateDsm(v2, (__int64)&v14, 0, 0, (__int64)v15, &P);
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
  v4 = P;
  if ( *((_WORD *)P + 1) != 3 || !*((_DWORD *)P + 6) )
  {
    BugCheckParameter4 = 1LL;
    goto LABEL_41;
  }
  BugCheckParameter4 = 2LL;
  if ( (**((_BYTE **)P + 4) & 2) == 0 )
  {
    *(_DWORD *)(a1 + 656) = 0;
    goto LABEL_17;
  }
  memset(v15, 0, sizeof(v15));
  AMLIFreeDataBuffs(P);
  ExFreePoolWithTag(v4, 0x52706341u);
  v6 = *(__int64 **)(a1 + 712);
  P = 0LL;
  v14 = INTERRUPT_DSM_GUID;
  result = ACPIAmliEvaluateDsm(v6, (__int64)&v14, 0, 1u, (__int64)v15, &P);
  Data = result;
  if ( (int)result < 0 )
  {
LABEL_6:
    v4 = P;
    goto LABEL_7;
  }
  v4 = P;
  if ( *((_WORD *)P + 1) != 4 )
  {
LABEL_41:
    Data = -1073741823;
LABEL_42:
    KeBugCheckEx(0xA5u, 0x1000CuLL, 0LL, 1uLL, BugCheckParameter4);
  }
  v7 = (unsigned int *)*((_QWORD *)P + 4);
  v8 = *v7;
  if ( (unsigned int)v8 > 0x3FFFFFFF )
  {
    BugCheckParameter4 = 3LL;
    goto LABEL_41;
  }
  *(_DWORD *)(a1 + 656) = v8;
  if ( (_DWORD)v8 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4 * v8, 0x44706341u);
    *(_QWORD *)(a1 + 648) = PoolWithTag;
    if ( !PoolWithTag )
    {
      Data = -1073741823;
      goto LABEL_18;
    }
  }
  v10 = 0LL;
  if ( *(_DWORD *)(a1 + 656) )
  {
    while ( HIWORD(v7[10 * v10 + 2]) == 1 && *(_QWORD *)&v7[10 * v10 + 6] <= 0xFFFFFFFFuLL )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 648) + 4 * v10) = v7[10 * v10 + 6];
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 656) )
        goto LABEL_17;
    }
    BugCheckParameter4 = 4LL;
    goto LABEL_41;
  }
LABEL_17:
  Data = 0;
LABEL_18:
  AMLIFreeDataBuffs(v4);
  result = Data;
LABEL_7:
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x52706341u);
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
        goto LABEL_42;
      }
      LODWORD(P) = AMLIGetNSObjectNameSegment(*(_QWORD *)(a1 + 712));
      ACPIRegLocalCopyString(SourceString, (__int64)&P, 4u);
      if ( !SourceString[0] )
      {
        BugCheckParameter4 = 11LL;
        goto LABEL_42;
      }
      if ( (int)OSWriteRegValue(SourceString, Handle, &Data, 4u) < 0 )
      {
        BugCheckParameter4 = 12LL;
        goto LABEL_42;
      }
      ZwClose(Handle);
    }
    goto LABEL_37;
  }
  return result;
}
