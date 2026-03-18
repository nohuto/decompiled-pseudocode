/*
 * XREFs of EtwpSetProviderTraitsKm @ 0x1407397D4
 * Callers:
 *     EtwSetInformation @ 0x140739780 (EtwSetInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405C48F0 (EtwpSetProviderTraitsCommon.c)
 *     EtwpEventWriteRegistrationStatus @ 0x1408F72B4 (EtwpEventWriteRegistrationStatus.c)
 */

__int64 __fastcall EtwpSetProviderTraitsKm(__int64 a1, void *Src, unsigned __int16 a3)
{
  __int16 v3; // ax
  unsigned int v7; // ebx
  char *PoolWithTag; // rax
  unsigned __int64 v9; // rbx
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
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)a3 + 28, 0x54777445u);
  v9 = (unsigned __int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag + 28, Src, a3);
    v7 = EtwpSetProviderTraitsCommon(
           0,
           0,
           (__int64)&v14,
           a1,
           v9,
           a3,
           &EtwpProviderTraitsKmMutex,
           (__int64)&EtwpProviderTraitsKmTree);
    goto LABEL_9;
  }
  v7 = -1073741670;
LABEL_10:
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SET_TRAITS_FAILED) )
    EtwpEventWriteRegistrationStatus(v11, v10, v12, a1, v7);
  return v7;
}
