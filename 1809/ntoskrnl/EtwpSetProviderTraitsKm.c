/*
 * XREFs of EtwpSetProviderTraitsKm @ 0x14070D0A4
 * Callers:
 *     EtwSetInformation @ 0x14070D050 (EtwSetInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405C5A10 (EtwpSetProviderTraitsCommon.c)
 *     EtwpEventWriteRegistrationStatus @ 0x1408BC070 (EtwpEventWriteRegistrationStatus.c)
 */

__int64 __fastcall EtwpSetProviderTraitsKm(__int64 a1, void *Src, unsigned __int16 a3)
{
  __int16 v3; // ax
  unsigned int v7; // ebx
  _RTL_BALANCED_NODE *PoolWithTag; // rax
  _RTL_BALANCED_NODE *Node; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v14; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_WORD *)(a1 + 98);
  if ( (v3 & 8) != 0 || (v3 & 1) == 0 )
  {
    v7 = -1073741811;
LABEL_9:
    if ( !v7 )
      return v7;
    goto LABEL_10;
  }
  if ( *(_QWORD *)(a1 + 104) )
  {
    v7 = -1073741823;
    goto LABEL_10;
  }
  PoolWithTag = (_RTL_BALANCED_NODE *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)a3 + 28, 0x54777445u);
  Node = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove((char *)&PoolWithTag[1].Left + 4, Src, a3);
    v7 = EtwpSetProviderTraitsCommon(
           0LL,
           0,
           (unsigned int *)&v14,
           a1,
           Node,
           a3,
           &EtwpProviderTraitsKmMutex,
           &EtwpProviderTraitsKmTree);
    goto LABEL_9;
  }
  v7 = -1073741670;
LABEL_10:
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SET_TRAITS_FAILED) )
    EtwpEventWriteRegistrationStatus(v11, v10, v12, a1, v7);
  return v7;
}
