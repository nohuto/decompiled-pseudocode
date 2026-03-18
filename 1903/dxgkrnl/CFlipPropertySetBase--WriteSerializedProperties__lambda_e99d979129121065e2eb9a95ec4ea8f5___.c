/*
 * XREFs of CFlipPropertySetBase::WriteSerializedProperties__lambda_e99d979129121065e2eb9a95ec4ea8f5___ @ 0x1C005E1AC
 * Callers:
 *     NtFlipObjectConsumerAcquirePresent @ 0x1C005EE00 (NtFlipObjectConsumerAcquirePresent.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x1C005FB80 (NtFlipObjectReadNextMessageToProducer.c)
 * Callees:
 *     memmove @ 0x1C0024FC0 (memmove.c)
 */

unsigned __int64 __fastcall CFlipPropertySetBase::WriteSerializedProperties__lambda_e99d979129121065e2eb9a95ec4ea8f5___(
        __int64 a1,
        __int64 a2,
        char *a3)
{
  unsigned __int64 result; // rax
  char *v4; // r14
  unsigned int v5; // ebp
  __int64 v8; // rdx
  char *v9; // rcx
  __int64 v10; // rsi
  char *v11; // rbx
  __int64 v12; // r8
  size_t v13; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v4 = *(char **)(a1 + 24);
  v5 = 0;
  if ( *(_DWORD *)(a1 + 12) )
  {
    v8 = *(_QWORD *)(a1 + 16);
    do
    {
      v9 = a3 + 16;
      v10 = 32LL * v5;
      if ( (unsigned __int64)(a3 + 16) > MmUserProbeAddress || v9 <= a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)a3 = *(_OWORD *)(v10 + v8);
      v11 = a3 + 20;
      v12 = *(_QWORD *)(a1 + 16);
      if ( (unsigned __int64)(v9 + 4) > MmUserProbeAddress || v11 <= v9 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_DWORD *)v9 = *(_DWORD *)(v12 + v10 + 16);
      v13 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + v10 + 16);
      if ( (unsigned __int64)&v11[v13] > MmUserProbeAddress || &v11[v13] <= v11 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v11, v4, v13);
      v8 = *(_QWORD *)(a1 + 16);
      ++v5;
      result = *(unsigned int *)(v10 + v8 + 16);
      a3 = &v11[result];
      v4 += result;
    }
    while ( v5 < *(_DWORD *)(a1 + 12) );
  }
  return result;
}
