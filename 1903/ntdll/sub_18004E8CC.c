/*
 * XREFs of sub_18004E8CC @ 0x18004E8CC
 * Callers:
 *     sub_18004E828 @ 0x18004E828 (sub_18004E828.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800479C8 @ 0x1800479C8 (sub_1800479C8.c)
 *     sub_180047CBC @ 0x180047CBC (sub_180047CBC.c)
 *     sub_180048170 @ 0x180048170 (sub_180048170.c)
 *     sub_18010B704 @ 0x18010B704 (sub_18010B704.c)
 */

__int64 __fastcall sub_18004E8CC(__int64 a1, int a2, PVOID *a3, unsigned int *a4, _DWORD *a5)
{
  _QWORD **v5; // r13
  _QWORD **v6; // rbx
  unsigned int *v7; // r12
  unsigned int v8; // esi
  void *v10; // r14
  ULONG_PTR v11; // rdi
  ULONG_PTR v12; // r9
  _DWORD *v13; // rcx
  bool v14; // cf
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
  v7 = a4;
  v8 = -*(_DWORD *)a1;
  v10 = 0LL;
  v11 = v8;
  RegionSize = v8;
  v12 = v8;
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
      v27 = qword_180167330[6 * *((unsigned __int8 *)v23 - 15)];
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
    v12 = RegionSize;
  }
  BaseAddress[0] = v10;
  if ( v10 )
    goto LABEL_8;
  if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
  {
    if ( v8 < 0x200000 )
      v12 = 0x200000LL;
    RegionSize = v12;
  }
  v13 = *(_DWORD **)(a1 + 56);
  v14 = (v13[5] & 0x40000000) != 0;
  *(_OWORD *)v29 = *(_OWORD *)(a1 + 40);
  v15 = sub_180047CBC(v13, v14 ? 64 : 4);
  v17 = sub_1800479C8(BaseAddress, &RegionSize, RegionSize, 0x2000, v15, (__int128 *)v29);
  if ( v17 >= 0 )
  {
    LODWORD(v12) = RegionSize;
    if ( v11 < RegionSize )
    {
      sub_18010B704(v16, BaseAddress[0], v8);
      LODWORD(v12) = RegionSize;
    }
LABEL_8:
    v18 = a5;
    v17 = 0;
    v19 = v32;
    *v7 = v8;
    *v18 = v12;
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
    sub_180048170(BaseAddress, &RegionSize, 0x8000, v29);
  }
  return (unsigned int)v17;
}
