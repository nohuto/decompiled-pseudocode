/*
 * XREFs of VfFreeCommonBuffer @ 0x14092BF70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x14092A324 (DECREMENT_COMMON_BUFFERS.c)
 *     VF_ASSERT_MAX_IRQL @ 0x14092A720 (VF_ASSERT_MAX_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x14092E868 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14092EB34 (ViGetRealDmaOperation.c)
 *     ViHalFreeDomainCommonBuffer @ 0x14092EC34 (ViHalFreeDomainCommonBuffer.c)
 *     ViSpecialFreeCommonBuffer @ 0x14092F900 (ViSpecialFreeCommonBuffer.c)
 */

void __fastcall VfFreeCommonBuffer(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, char a5)
{
  void (__fastcall *RealDmaOperation)(__int64, _QWORD, __int64, __int64, char); // r14
  __int64 AdapterInformationInternal; // rdi
  char v11; // al
  char v12; // r15
  char v13; // si
  __int64 v14; // r9
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = a3;
  RealDmaOperation = (void (__fastcall *)(__int64, _QWORD, __int64, __int64, char))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v11 = ViHalFreeDomainCommonBuffer(&v15);
  v12 = a5;
  v13 = v11;
  if ( !AdapterInformationInternal
    || v11
    || (VF_ASSERT_MAX_IRQL(),
        LOBYTE(v14) = v12,
        !(unsigned int)ViSpecialFreeCommonBuffer(RealDmaOperation, AdapterInformationInternal, a4, v14)) )
  {
    RealDmaOperation(a1, a2, a3, a4, v12);
    if ( AdapterInformationInternal )
    {
      if ( !v13 )
        DECREMENT_COMMON_BUFFERS(AdapterInformationInternal);
    }
  }
}
