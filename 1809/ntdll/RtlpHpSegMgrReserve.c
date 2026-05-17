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

__int64 __fastcall RtlpHpSegMgrReserve(__int64 a1, int a2, unsigned __int64 *a3, unsigned int *a4, _DWORD *a5)
{
  _QWORD **v5; // r13
  _QWORD **v6; // rbx
  int v7; // esi
  unsigned int v8; // esi
  unsigned int *v9; // r12
  unsigned __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // r9
  __int64 v14; // rcx
  bool v15; // cf
  int v16; // eax
  __int64 v17; // rcx
  int v18; // ebx
  _DWORD *v19; // rax
  unsigned __int64 *v20; // rcx
  __int64 v21; // rax
  volatile signed __int64 *v23; // r12
  _QWORD *v24; // rdi
  unsigned int v25; // eax
  int v26; // r13d
  int v27; // eax
  __int64 v28; // rdx
  _QWORD v29[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v30; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 v31; // [rsp+A0h] [rbp+48h] BYREF
  int v32; // [rsp+A8h] [rbp+50h]
  unsigned __int64 *v33; // [rsp+B0h] [rbp+58h]
  unsigned int *v34; // [rsp+B8h] [rbp+60h]

  v34 = a4;
  v33 = a3;
  v32 = a2;
  v5 = (_QWORD **)(a1 + 120);
  v6 = (_QWORD **)(a1 + 128);
  v7 = ~*(_DWORD *)a1;
  v29[0] = 0LL;
  v8 = v7 + 1;
  v9 = a4;
  v11 = v8;
  v12 = 0LL;
  v31 = v8;
  v13 = v8;
  if ( *(_QWORD *)(a1 + 120) || *v6 )
  {
    v23 = (volatile signed __int64 *)(a1 + 112);
    RtlAcquireSRWLockExclusive(a1 + 112, 0LL, a3, v8);
    v24 = *v6;
    if ( *v6 || (v32 & 2) == 0 && (v24 = *v5, v6 = v5, *v5) )
    {
      v25 = *((unsigned __int16 *)v24 - 3);
      _BitScanForward((unsigned int *)&v26, v25);
      v27 = v25 ^ (1 << v26);
      *((_WORD *)v24 - 3) = v27;
      if ( !(_WORD)v27 )
      {
        if ( *v6 )
          *v6 = (_QWORD *)**v6;
        *v24 = 0LL;
      }
      RtlReleaseSRWLockExclusive(v23);
      v28 = qword_1801669D8[6 * *((unsigned __int8 *)v24 - 15)];
      v12 = *(_QWORD *)(v28 + 8)
          + v8 * v26
          + (((__int64)v24 - *(_QWORD *)(v28 + 32) - 16) >> *(_DWORD *)(v28 + 88) << 20);
    }
    else
    {
      RtlReleaseSRWLockExclusive(v23);
    }
    v9 = v34;
    v11 = v8;
    v13 = v31;
  }
  v29[0] = v12;
  if ( v12 )
    goto LABEL_8;
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    if ( v8 < 0x200000 )
      v13 = 0x200000LL;
    v31 = v13;
  }
  v14 = *(_QWORD *)(a1 + 56);
  v15 = (*(_DWORD *)(v14 + 20) & 0x40000000) != 0;
  v30 = *(_OWORD *)(a1 + 40);
  v16 = RtlpHpHeapValidateProtection(v14, v15 ? 64 : 4);
  v18 = RtlpHpAllocVA((unsigned int)v29, (unsigned int)&v31, v31, 0x2000, v16, (__int64)&v30);
  if ( v18 >= 0 )
  {
    LODWORD(v13) = v31;
    if ( v11 < v31 )
    {
      RtlpHpSegMgrVaCtxInitialize(v17, v29[0], v8);
      LODWORD(v13) = v31;
    }
LABEL_8:
    v19 = a5;
    v18 = 0;
    v20 = v33;
    *v9 = v8;
    *v19 = v13;
    *v20 = v29[0];
    v21 = 0LL;
    v29[0] = 0LL;
    goto LABEL_9;
  }
  v21 = v29[0];
LABEL_9:
  if ( v21 )
  {
    v30 = *(_OWORD *)(a1 + 40);
    RtlpHpFreeVA(v29, &v31, 0x8000LL, &v30);
  }
  return (unsigned int)v18;
}
