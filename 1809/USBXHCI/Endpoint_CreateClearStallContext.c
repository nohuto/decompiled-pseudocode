/*
 * XREFs of Endpoint_CreateClearStallContext @ 0x1C00151C4
 * Callers:
 *     Endpoint_Create @ 0x1C005D370 (Endpoint_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 */

__int64 __fastcall Endpoint_CreateClearStallContext(__int64 a1)
{
  PIRP *PoolWithTag; // rax
  PIRP *v3; // rbx
  int v4; // edi
  PIRP Irp; // rax
  _QWORD v7[8]; // [rsp+30h] [rbp-48h] BYREF

  PoolWithTag = (PIRP *)ExAllocatePoolWithTag(
                          *((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1),
                          0x98uLL,
                          0x49434858u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x98uLL);
    Irp = IoAllocateIrp(4, 0);
    *v3 = Irp;
    if ( Irp )
    {
      memset(v7, 0, 0x38uLL);
      v7[3] = 0x100000001LL;
      v7[6] = off_1C004F068;
      LODWORD(v7[0]) = 56;
      v4 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, _QWORD, PIRP *))(WdfFunctions_01023 + 1976))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             v7,
             0LL,
             v3 + 18);
      if ( v4 >= 0 )
      {
        *(_QWORD *)(a1 + 264) = v3;
        return (unsigned int)v4;
      }
    }
    else
    {
      v4 = -1073741670;
    }
    if ( *v3 )
    {
      IoFreeIrp(*v3);
      *v3 = 0LL;
    }
    if ( v3[18] )
    {
      (*(void (__fastcall **)(unsigned __int64))(WdfFunctions_01023 + 1664))(WPP_MAIN_CB.Dpc.ProcessorHistory);
      v3[18] = 0LL;
    }
    ExFreePoolWithTag(v3, 0x49434858u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v4;
}
