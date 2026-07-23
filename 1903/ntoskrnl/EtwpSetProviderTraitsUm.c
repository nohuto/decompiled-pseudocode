/*
 * XREFs of EtwpSetProviderTraitsUm @ 0x1405C424C
 * Callers:
 *     NtTraceControl @ 0x1406865C0 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405C43F0 (EtwpSetProviderTraitsCommon.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     EtwpEventWriteRegistrationStatus @ 0x1408F7944 (EtwpEventWriteRegistrationStatus.c)
 */

__int64 __fastcall EtwpSetProviderTraitsUm(__int64 a1, int a2, int a3)
{
  PVOID v6; // rsi
  NTSTATUS v7; // ebx
  unsigned __int16 v8; // dx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  _RTL_BALANCED_NODE *PoolWithTag; // rax
  _RTL_BALANCED_NODE *Node; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  PVOID Object; // [rsp+80h] [rbp+8h] BYREF
  PVOID v18; // [rsp+98h] [rbp+20h]

  v6 = 0LL;
  if ( !*(_QWORD *)(a1 + 8) || !*(_WORD *)(a1 + 16) )
    goto LABEL_18;
  v7 = ObReferenceObjectByHandle(*(HANDLE *)a1, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  v6 = Object;
  v18 = Object;
  if ( v7 < 0 )
    goto LABEL_13;
  if ( (*((_BYTE *)Object + 98) & 8) == 0 )
  {
    if ( *((_QWORD *)Object + 13) )
    {
      v7 = -1073741823;
    }
    else
    {
      v8 = *(_WORD *)(a1 + 16);
      if ( v8 )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v10 = v9 + v8;
        if ( v10 > 0x7FFFFFFF0000LL || v10 < v9 )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          v8 = *(_WORD *)(a1 + 16);
        }
      }
      PoolWithTag = (_RTL_BALANCED_NODE *)ExAllocatePoolWithTag(PagedPool, v8 + 28LL, 0x54777445u);
      Node = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove((char *)&PoolWithTag[1].Left + 4, *(const void **)(a1 + 8), *(unsigned __int16 *)(a1 + 16));
        v7 = EtwpSetProviderTraitsCommon(
               a1,
               a2,
               a3,
               (int)v6,
               Node,
               *(unsigned __int16 *)(a1 + 16),
               &EtwpProviderTraitsUmMutex,
               &EtwpProviderTraitsUmTree);
      }
      else
      {
        v7 = -1073741670;
      }
    }
  }
  else
  {
LABEL_18:
    v7 = -1073741811;
  }
LABEL_13:
  if ( v6 )
  {
    if ( v7 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SET_TRAITS_FAILED) )
      EtwpEventWriteRegistrationStatus(v15, v14, v16, v6, v7);
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v7;
}
