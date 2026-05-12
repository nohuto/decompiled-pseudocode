/*
 * XREFs of StorpAllocateHostMemoryBuffer @ 0x1C003D3F0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E6C0 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024A40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 *     McTemplateK0zdqqqqqqqqq @ 0x1C003B574 (McTemplateK0zdqqqqqqqqq.c)
 */

__int64 __fastcall StorpAllocateHostMemoryBuffer(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        __int64 a8,
        __int64 a9,
        unsigned int *a10)
{
  __int64 *v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r12
  unsigned int v14; // r13d
  unsigned int *v15; // rdi
  __int64 v16; // r8
  unsigned int v17; // edi
  char v18; // si
  unsigned __int64 v19; // r15
  unsigned __int64 v21; // r9
  SIZE_T v22; // r14
  _QWORD *v23; // rsi
  __int64 v24; // r15
  unsigned int *PoolWithTag; // rax
  unsigned int *v26; // rbp
  __int64 (__fastcall *v27)(__int64, PHYSICAL_ADDRESS *, PHYSICAL_ADDRESS *, _QWORD, _DWORD); // r10
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  SIZE_T v32; // rax
  unsigned int *v33; // rax
  struct _MDL *v34; // rcx
  unsigned int *v35; // rsi
  int *Flags; // [rsp+28h] [rbp-B0h]
  int v37; // [rsp+40h] [rbp-98h]
  unsigned int v38; // [rsp+70h] [rbp-68h]
  unsigned __int64 v39; // [rsp+78h] [rbp-60h]
  __int64 v40; // [rsp+80h] [rbp-58h]
  __int64 v41; // [rsp+88h] [rbp-50h]
  unsigned __int64 v42; // [rsp+90h] [rbp-48h]
  int v43; // [rsp+E0h] [rbp+8h] BYREF
  _QWORD *v44; // [rsp+E8h] [rbp+10h]
  unsigned __int64 v45; // [rsp+F0h] [rbp+18h]

  v45 = a3;
  v44 = (_QWORD *)a2;
  v10 = *(__int64 **)(a1 - 16);
  v11 = a3;
  v39 = 0LL;
  v12 = 0LL;
  LOBYTE(v13) = 0;
  v14 = 0;
  v15 = 0LL;
  v16 = *v10;
  v43 = 0;
  v40 = v16;
  if ( *(_QWORD *)(v16 + 5616) )
  {
    v17 = -1056964607;
    v18 = 1;
    goto LABEL_12;
  }
  v19 = a2;
  if ( !a2 )
    v19 = 4096LL;
  v42 = v19;
  if ( v11 < v19 )
  {
    v18 = 2;
LABEL_11:
    v17 = -1056964602;
    goto LABEL_12;
  }
  if ( ((v11 | v19) & 0xFFF) != 0 )
  {
LABEL_10:
    v18 = 3;
    goto LABEL_11;
  }
  if ( 0x1000 % a5 )
  {
    a2 = (__int64)v44;
    goto LABEL_10;
  }
  if ( !a10 || (v38 = *a10) == 0 || a8 )
  {
    a2 = (__int64)v44;
    v18 = 2;
    goto LABEL_11;
  }
  if ( HmbAllocationPolicy == 1 )
    goto LABEL_27;
  if ( HmbAllocationPolicy == 2 )
  {
LABEL_26:
    v21 = v11;
    goto LABEL_28;
  }
  if ( HmbAllocationPolicy != 3 )
  {
    v17 = -1056964606;
    v18 = 4;
    goto LABEL_23;
  }
  v21 = (a4 / 0x3E8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v21 < v19 )
  {
LABEL_27:
    v21 = v19;
    goto LABEL_28;
  }
  if ( v21 > v11 )
    goto LABEL_26;
LABEL_28:
  v13 = (unsigned int)HmbMaximumSize;
  v41 = *(_QWORD *)(v16 + 696);
  if ( v21 <= (unsigned int)HmbMaximumSize )
    v13 = v21;
  v22 = v13;
  v23 = v44;
  v24 = a9;
  while ( v22 >= 0x1000 && v12 < v13 )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x45416152u);
    v26 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v12 = v39;
      break;
    }
    memset(PoolWithTag, 0, 0x28uLL);
    v27 = *(__int64 (__fastcall **)(__int64, PHYSICAL_ADDRESS *, PHYSICAL_ADDRESS *, _QWORD, _DWORD))(*(_QWORD *)(v41 + 8) + 272LL);
    if ( v27 )
    {
      Flags = &v43;
      *((_QWORD *)v26 + 3) = v27(v41, &LowAddress, &HighAddress, (unsigned int)v22, 0);
    }
    else
    {
      *((_QWORD *)v26 + 1) = MmAllocatePagesForMdlEx(LowAddress, HighAddress, 0LL, v22, MmNonCached, 0x20u);
    }
    v28 = *((_QWORD *)v26 + 1);
    if ( v28 )
    {
      v29 = *(unsigned int *)(v28 + 40);
      v30 = 2LL * v14;
      *(_QWORD *)(v24 + 8 * v30) = *(_QWORD *)(v28 + 48) << 12;
      *(_DWORD *)(v24 + 8 * v30 + 8) = v29;
      v12 = v29 + v39;
LABEL_39:
      ++v14;
      v39 = v12;
      if ( v15 )
        *v23 = v26;
      else
        v15 = v26;
      v23 = v26;
      goto LABEL_46;
    }
    if ( *((_QWORD *)v26 + 3) )
    {
      v31 = 2LL * v14;
      *(_QWORD *)(v24 + 8 * v31) = *((_QWORD *)v26 + 2);
      *(_DWORD *)(v24 + 8 * v31 + 8) = v22;
      v12 = v22 + v39;
      *((_QWORD *)v26 + 4) = v22;
      goto LABEL_39;
    }
    v12 = v39;
    v22 -= 4096LL;
LABEL_46:
    v32 = v13 - v12;
    if ( v22 <= v13 - v12 )
      v32 = v22;
    v22 = v32;
    if ( v14 >= v38 )
      break;
  }
  v18 = 0;
  if ( v14 )
  {
    if ( v12 < v42 )
    {
      if ( v15 )
      {
        do
        {
          v34 = (struct _MDL *)*((_QWORD *)v15 + 1);
          v35 = *(unsigned int **)v15;
          if ( v34 )
          {
            MmFreePagesFromMdl(v34);
            ExFreePoolWithTag(*((PVOID *)v15 + 1), 0);
          }
          if ( *((_QWORD *)v15 + 3) )
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v41 + 8) + 24LL))(
              v41,
              v15[8],
              *((_QWORD *)v15 + 2));
          ExFreePoolWithTag(v15, 0);
          v15 = v35;
        }
        while ( v35 );
        LOBYTE(v12) = v39;
      }
      v16 = v40;
      v17 = -1056964605;
      v18 = 5;
    }
    else
    {
      v16 = v40;
      v33 = a10;
      *(_QWORD *)(v40 + 5616) = v15;
      v17 = 0;
      *v33 = v14;
    }
    LOBYTE(v11) = v45;
  }
  else
  {
    LOBYTE(v11) = v45;
    v16 = v40;
    v17 = -1056964605;
    v18 = 5;
  }
LABEL_23:
  a2 = (__int64)v44;
LABEL_12:
  if ( (byte_1C0062744 & 0x10) != 0 )
    McTemplateK0zdqqqqqqqqq(
      *(unsigned int *)(v16 + 56),
      a2,
      v16,
      *(char **)(v16 + 48),
      *(_DWORD *)(v16 + 56),
      (int)Flags,
      a2,
      v11,
      v37,
      v13,
      v12,
      v14,
      v17 == 0,
      v18);
  return v17;
}
