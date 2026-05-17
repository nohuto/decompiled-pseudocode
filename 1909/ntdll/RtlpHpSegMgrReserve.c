/*
 * XREFs of RtlpHpSegMgrReserve @ 0x18004E96C
 * Callers:
 *     RtlpHpSegMgrAllocate @ 0x18004E8C8 (RtlpHpSegMgrAllocate.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpAllocVA @ 0x1800479C8 (RtlpHpAllocVA.c)
 *     RtlpHpHeapValidateProtection @ 0x180047CBC (RtlpHpHeapValidateProtection.c)
 *     RtlpHpFreeVA @ 0x180048170 (RtlpHpFreeVA.c)
 *     RtlpHpSegMgrVaCtxInitialize @ 0x18010B834 (RtlpHpSegMgrVaCtxInitialize.c)
 */

__int64 __fastcall RtlpHpSegMgrReserve(__int64 a1, int a2, void **a3, unsigned int *a4, _DWORD *a5)
{
  _QWORD **v5; // r13
  _QWORD **v6; // rbx
  unsigned int *v7; // r12
  unsigned int v8; // esi
  void *v10; // r14
  unsigned __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rcx
  bool v14; // cf
  int v15; // eax
  __int64 v16; // rcx
  int v17; // ebx
  _DWORD *v18; // rax
  void **v19; // rcx
  void *v20; // rax
  volatile signed __int64 *v22; // r12
  _QWORD *v23; // rdi
  unsigned int v24; // eax
  int v25; // r13d
  int v26; // eax
  __int64 v27; // rdx
  void *v28[2]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v29; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 v30; // [rsp+A0h] [rbp+48h] BYREF
  int v31; // [rsp+A8h] [rbp+50h]
  void **v32; // [rsp+B0h] [rbp+58h]
  unsigned int *v33; // [rsp+B8h] [rbp+60h]

  v33 = a4;
  v32 = a3;
  v31 = a2;
  v5 = (_QWORD **)(a1 + 120);
  v6 = (_QWORD **)(a1 + 128);
  v7 = a4;
  v8 = -*(_DWORD *)a1;
  v10 = 0LL;
  v11 = v8;
  v30 = v8;
  v12 = v8;
  if ( *(_QWORD *)(a1 + 120) || *v6 )
  {
    v22 = (volatile signed __int64 *)(a1 + 112);
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 112));
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
      v27 = qword_180167340[6 * *((unsigned __int8 *)v23 - 15)];
      v10 = (void *)(*(_QWORD *)(v27 + 8)
                   + v8 * v25
                   + (((__int64)v23 - *(_QWORD *)(v27 + 40) - 16) >> *(_DWORD *)(v27 + 24) << 20));
    }
    else
    {
      RtlReleaseSRWLockExclusive(v22);
    }
    v7 = v33;
    v11 = v8;
    v12 = v30;
  }
  v28[0] = v10;
  if ( v10 )
    goto LABEL_8;
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    if ( v8 < 0x200000 )
      v12 = 0x200000LL;
    v30 = v12;
  }
  v13 = *(_QWORD *)(a1 + 56);
  v14 = (*(_DWORD *)(v13 + 20) & 0x40000000) != 0;
  v29 = *(_OWORD *)(a1 + 40);
  v15 = RtlpHpHeapValidateProtection(v13, v14 ? 64 : 4);
  v17 = RtlpHpAllocVA(v28, &v30, v30, 0x2000, v15, &v29);
  if ( v17 >= 0 )
  {
    LODWORD(v12) = v30;
    if ( v11 < v30 )
    {
      RtlpHpSegMgrVaCtxInitialize(v16, v28[0], v8);
      LODWORD(v12) = v30;
    }
LABEL_8:
    v18 = a5;
    v17 = 0;
    v19 = v32;
    *v7 = v8;
    *v18 = v12;
    *v19 = v28[0];
    v20 = 0LL;
    v28[0] = 0LL;
    goto LABEL_9;
  }
  v20 = v28[0];
LABEL_9:
  if ( v20 )
  {
    v29 = *(_OWORD *)(a1 + 40);
    RtlpHpFreeVA((unsigned __int64 *)v28, &v30, 0x8000, &v29);
  }
  return (unsigned int)v17;
}
