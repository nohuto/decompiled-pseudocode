/*
 * XREFs of RtlpHpSegMgrReserve @ 0x18005D6A4
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x18005D600 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpHeapValidateProtection @ 0x180060C34 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpAllocVA @ 0x180060CA0 (RtlpHpAllocVA.c)
 *     RtlpHpFreeVA @ 0x1800611FC (RtlpHpFreeVA.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x18010DD08 (RtlpHpSegMgrVaCtxInitialize.c)
 */

__int64 __fastcall RtlpHpSegMgrReserve(__int64 a1, int a2, PVOID *a3, unsigned int *a4, _DWORD *a5)
{
  _QWORD **v5; // r13
  _QWORD **v6; // rbx
  int v7; // esi
  unsigned int v8; // esi
  unsigned int *v9; // r12
  ULONG_PTR v11; // rdi
  void *v12; // r14
  ULONG_PTR v13; // r9
  void *v14; // rcx
  ULONG v15; // eax
  __int64 v16; // rcx
  int v17; // ebx
  _DWORD *v18; // rax
  PVOID *v19; // rcx
  PVOID v20; // rax
  _RTL_SRWLOCK *v22; // r12
  _QWORD *v23; // rdi
  unsigned int v24; // eax
  int v25; // r13d
  int v26; // eax
  __int64 v27; // rdx
  PVOID BaseAddress[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v29[2]; // [rsp+40h] [rbp-18h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp+48h] BYREF
  int v31; // [rsp+A8h] [rbp+50h]
  PVOID *v32; // [rsp+B0h] [rbp+58h]
  unsigned int *v33; // [rsp+B8h] [rbp+60h]

  v33 = a4;
  v32 = a3;
  v31 = a2;
  v5 = (_QWORD **)(a1 + 120);
  v6 = (_QWORD **)(a1 + 128);
  v7 = ~*(_DWORD *)a1;
  BaseAddress[0] = 0LL;
  v8 = v7 + 1;
  v9 = a4;
  v11 = v8;
  v12 = 0LL;
  RegionSize = v8;
  v13 = v8;
  if ( *(_QWORD *)(a1 + 120) || *v6 )
  {
    v22 = (_RTL_SRWLOCK *)(a1 + 112);
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 112));
    v23 = *v6;
    if ( *v6 || (v31 & 2) == 0 && (v23 = *v5, v6 = v5, *v5) )
    {
      v24 = *((unsigned __int16 *)v23 - 3);
      _BitScanForward((unsigned int *)&v25, v24);
      v26 = v24 ^ (1 << v25);
      *((_WORD *)v23 - 3) = v26;
      if ( !(_WORD)v26 )
      {
        if ( *v6 )
          *v6 = (_QWORD *)**v6;
        *v23 = 0LL;
      }
      RtlReleaseSRWLockExclusive(v22);
      v27 = qword_1801669D8[6 * *((unsigned __int8 *)v23 - 15)];
      v12 = (void *)(*(_QWORD *)(v27 + 8)
                   + v8 * v25
                   + (((__int64)v23 - *(_QWORD *)(v27 + 32) - 16) >> *(_DWORD *)(v27 + 88) << 20));
    }
    else
    {
      RtlReleaseSRWLockExclusive(v22);
    }
    v9 = v33;
    v11 = v8;
    v13 = RegionSize;
  }
  BaseAddress[0] = v12;
  if ( v12 )
    goto LABEL_8;
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    if ( v8 < 0x200000 )
      v13 = 0x200000LL;
    RegionSize = v13;
  }
  v14 = *(void **)(a1 + 56);
  *(_OWORD *)v29 = *(_OWORD *)(a1 + 40);
  v15 = RtlpHpHeapValidateProtection(v14);
  v17 = RtlpHpAllocVA(BaseAddress, v15, (__int64)v29);
  if ( v17 >= 0 )
  {
    LODWORD(v13) = RegionSize;
    if ( v11 < RegionSize )
    {
      RtlpHpSegMgrVaCtxInitialize(v16, BaseAddress[0], v8);
      LODWORD(v13) = RegionSize;
    }
LABEL_8:
    v18 = a5;
    v17 = 0;
    v19 = v32;
    *v9 = v8;
    *v18 = v13;
    *v19 = BaseAddress[0];
    v20 = 0LL;
    BaseAddress[0] = 0LL;
    goto LABEL_9;
  }
  v20 = BaseAddress[0];
LABEL_9:
  if ( v20 )
  {
    *(_OWORD *)v29 = *(_OWORD *)(a1 + 40);
    RtlpHpFreeVA(BaseAddress, &RegionSize);
  }
  return (unsigned int)v17;
}
