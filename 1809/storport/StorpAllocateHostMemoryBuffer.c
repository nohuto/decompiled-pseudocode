/*
 * XREFs of StorpAllocateHostMemoryBuffer @ 0x1C003F8E0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E3C0 (StorPortExtendedFunction.c)
 * Callees:
 *     McTemplateK0zdqqqqqqqqq @ 0x1C003DC3C (McTemplateK0zdqqqqqqqqq.c)
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
  unsigned __int64 v10; // r12
  char v11; // si
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rbp
  __int64 v14; // r8
  unsigned int v15; // r10d
  struct _MDL *v16; // r14
  unsigned int v17; // edi
  unsigned __int64 v18; // rdi
  unsigned __int64 v20; // r9
  SIZE_T v21; // r15
  _QWORD *p_Next; // r13
  PMDL PagesForMdl; // rax
  __int64 ByteCount; // rdx
  __int64 v25; // rcx
  SIZE_T v26; // rax
  struct _MDL *Next; // rdi
  ULONG Flags; // [rsp+28h] [rbp-A0h]
  int v29; // [rsp+40h] [rbp-88h]
  unsigned int v30; // [rsp+70h] [rbp-58h]
  unsigned __int64 v31; // [rsp+78h] [rbp-50h]
  __int64 v32; // [rsp+80h] [rbp-48h]
  unsigned int v33; // [rsp+D0h] [rbp+8h]
  __int64 v34; // [rsp+D8h] [rbp+10h]
  char v35; // [rsp+E0h] [rbp+18h]

  v35 = a3;
  v34 = a2;
  v10 = a3;
  v31 = 0LL;
  v11 = 0;
  v33 = 0;
  v12 = 0LL;
  LOBYTE(v13) = 0;
  v14 = **(_QWORD **)(a1 - 16);
  v15 = 0;
  v32 = v14;
  v16 = 0LL;
  if ( *(_QWORD *)(v14 + 5752) )
  {
    v17 = -1056964607;
    v11 = 1;
    goto LABEL_11;
  }
  v18 = a2;
  if ( !a2 )
    v18 = 4096LL;
  if ( v10 < v18 )
  {
    v11 = 2;
LABEL_10:
    v17 = -1056964602;
    goto LABEL_11;
  }
  if ( ((v10 | v18) & 0xFFF) != 0 || 0x1000 % a5 )
  {
    v11 = 3;
    goto LABEL_10;
  }
  if ( !a10 || (v30 = *a10) == 0 || a8 )
  {
    v11 = 2;
    goto LABEL_10;
  }
  if ( HmbAllocationPolicy == 1 )
    goto LABEL_26;
  if ( HmbAllocationPolicy == 2 )
  {
LABEL_25:
    v20 = v10;
    goto LABEL_27;
  }
  if ( HmbAllocationPolicy != 3 )
  {
    v17 = -1056964606;
    v11 = 4;
    goto LABEL_22;
  }
  v20 = (a4 / 0x3E8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v20 < v18 )
  {
LABEL_26:
    v20 = v18;
    goto LABEL_27;
  }
  if ( v20 > v10 )
    goto LABEL_25;
LABEL_27:
  v13 = (unsigned int)HmbMaximumSize;
  if ( v20 <= (unsigned int)HmbMaximumSize )
    v13 = v20;
  v21 = v13;
  if ( *a10 )
  {
    p_Next = (_QWORD *)a2;
    do
    {
      if ( v21 < 0x1000 || v12 >= v13 )
        break;
      PagesForMdl = MmAllocatePagesForMdlEx(LowAddress, HighAddress, 0LL, v21, MmNonCached, 0x20u);
      v12 = v31;
      if ( PagesForMdl )
      {
        ByteCount = PagesForMdl->ByteCount;
        v12 = ByteCount + v31;
        v25 = 2LL * v33;
        v15 = v33 + 1;
        v31 += ByteCount;
        ++v33;
        *(_QWORD *)(a9 + 8 * v25) = (__int64)PagesForMdl[1].Next << 12;
        *(_DWORD *)(a9 + 8 * v25 + 8) = ByteCount;
        if ( v16 )
          *p_Next = PagesForMdl;
        else
          v16 = PagesForMdl;
        p_Next = &PagesForMdl->Next;
      }
      else
      {
        v15 = v33;
        v21 -= 4096LL;
      }
      v26 = v13 - v12;
      if ( v21 <= v13 - v12 )
        v26 = v21;
      v21 = v26;
    }
    while ( v15 < v30 );
    LOBYTE(v10) = v35;
    if ( v15 )
    {
      if ( v12 < v18 )
      {
        if ( v16 )
        {
          do
          {
            Next = v16->Next;
            MmFreePagesFromMdl(v16);
            ExFreePoolWithTag(v16, 0);
            v16 = Next;
          }
          while ( Next );
          LOBYTE(v15) = v33;
          LOBYTE(v12) = v31;
        }
        v14 = v32;
        v17 = -1056964605;
        v11 = 5;
      }
      else
      {
        v14 = v32;
        v17 = 0;
        *(_QWORD *)(v32 + 5752) = v16;
        *a10 = v15;
      }
      goto LABEL_22;
    }
    v14 = v32;
  }
  v17 = -1056964605;
  v11 = 5;
LABEL_22:
  a2 = v34;
LABEL_11:
  if ( (byte_1C00617E4 & 0x10) != 0 )
    McTemplateK0zdqqqqqqqqq(
      *(unsigned int *)(v14 + 56),
      a2,
      v14,
      *(const struct _MCGEN_TRACE_CONTEXT **)(v14 + 48),
      *(_DWORD *)(v14 + 56),
      Flags,
      a2,
      v10,
      v29,
      v13,
      v12,
      v15,
      v17 == 0,
      v11);
  return v17;
}
