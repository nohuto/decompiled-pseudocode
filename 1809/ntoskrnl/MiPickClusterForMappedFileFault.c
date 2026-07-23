/*
 * XREFs of MiPickClusterForMappedFileFault @ 0x14002A2B0
 * Callers:
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiStartingOffset @ 0x140031170 (MiStartingOffset.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSufficientAvailablePages @ 0x140055A50 (MiSufficientAvailablePages.c)
 *     MiObtainFaultCharges @ 0x140064D50 (MiObtainFaultCharges.c)
 */

__int64 __fastcall MiPickClusterForMappedFileFault(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  __int64 *v8; // r14
  __int64 v10; // rbx
  unsigned int v11; // edi
  unsigned __int64 v12; // rsi
  struct _KTHREAD *CurrentThread; // r15
  int v14; // ebp
  unsigned int v15; // edx
  unsigned __int64 v16; // r9
  __int64 v17; // r8
  unsigned __int64 v18; // r12
  __int64 v19; // r15
  unsigned int v20; // r10d
  unsigned __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r9
  unsigned __int64 i; // rbp
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned int v29; // ecx
  __int64 result; // rax
  __int64 v31; // r9
  int v32; // ecx
  __int64 v33; // rdx
  unsigned __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // r9
  __int64 v38; // [rsp+78h] [rbp+10h]

  v8 = *(__int64 **)(a2 + 208);
  v10 = *(_QWORD *)(a2 + 168);
  v11 = 1;
  v12 = *(_QWORD *)(a2 + 232);
  CurrentThread = KeGetCurrentThread();
  v38 = *v8;
  if ( (v10 & 0x400) == 0 )
    goto LABEL_47;
  if ( BYTE5(CurrentThread[1].Queue) )
    goto LABEL_47;
  v14 = *(_DWORD *)(*v8 + 56);
  if ( (v14 & 8) != 0 && BYTE4(CurrentThread[1].Queue) != 2 )
    goto LABEL_47;
  if ( *(__int64 *)(a1 + 7360) < 160 )
    goto LABEL_47;
  if ( dword_14043BE64 )
  {
    --dword_14043BE64;
LABEL_47:
    i = v12;
    v18 = v12;
    goto LABEL_33;
  }
  if ( !(unsigned int)MiSufficientAvailablePages(a1, 320LL) )
    goto LABEL_47;
  v15 = *(_DWORD *)(a2 + 184);
  if ( v15 == 1 )
    goto LABEL_47;
  v16 = a4;
  v17 = a3;
  v18 = a4 + 8 * (*((unsigned int *)v8 + 11) - (unsigned __int64)(*((_DWORD *)v8 + 13) & 0x3FFFFFFF) - 1);
  if ( !a3 )
  {
    if ( (v14 & 0x20) != 0 )
    {
      v15 = 4;
      if ( (v8[4] & 4) != 0 )
        v15 = 8;
    }
    else if ( !v15 )
    {
      v15 = LODWORD(CurrentThread[1].WaitListEntry.Flink) + 1;
    }
  }
  v19 = 8LL * v15;
  if ( v18 > v19 + v12 - 8 )
    v18 = v19 + v12 - 8;
  if ( !a3 && (v14 & 0x20000000) != 0 )
  {
    v20 = MiStartingOffset(v8, v12, a5);
    v17 = 0LL;
    v16 = a4;
    v32 = v20 & (dword_14043BE6C - 1);
    if ( v18 > v12 + 8 * (((unsigned int)(dword_14043BE6C - v32) >> 12) - 1LL) )
      v18 = v12 + 8 * (((unsigned int)(dword_14043BE6C - v32) >> 12) - 1LL);
  }
  else
  {
    v20 = 0;
  }
  if ( v18 > (v12 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
    v18 = v12 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
  v21 = v18;
  if ( v18 > v12 )
  {
    do
    {
      v22 = *(_QWORD *)v21;
      if ( v21 >= 0xFFFFF6FB7DBED000uLL
        && v21 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v22 & 1) != 0
        && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
      {
        v34 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v34 )
        {
          v35 = *(_QWORD *)(v34 + 8 * ((v21 >> 3) & 0x1FF));
          v36 = v22 | 0x20;
          if ( (v35 & 0x20) == 0 )
            v36 = *(_QWORD *)v21;
          v22 = v36;
          if ( (v35 & 0x42) != 0 )
            v22 = v36 | 0x42;
        }
      }
      if ( v22 == v10 )
      {
        ++v11;
      }
      else if ( v21 == v18 )
      {
        v18 -= 8LL;
      }
      v21 -= 8LL;
    }
    while ( v21 > v12 );
    v17 = a3;
    v16 = a4;
  }
  v23 = v18 - v19 + 8;
  if ( v23 < v16 )
    v23 = v16;
  v24 = v12 & 0xFFFFFFFFFFFFF000uLL;
  if ( v23 >= (v12 & 0xFFFFFFFFFFFFF000uLL) )
    v24 = v23;
  if ( v17 || (*(_DWORD *)(a2 + 192) & 0x40) != 0 )
  {
    v25 = v12;
  }
  else
  {
    v25 = v24;
    if ( (*(_DWORD *)(v38 + 56) & 0x20000000) != 0 )
    {
      v33 = (v20 >> 12) & ((unsigned int)(dword_14043BE6C - 1) >> 12);
      if ( v24 < v12 - 8 * v33 )
        v25 = v12 - 8 * v33;
    }
  }
  for ( i = v25; v25 < v12; v25 = v31 + 8 )
  {
    if ( MI_READ_PTE_LOCK_FREE(v25) == v10 )
    {
      ++v11;
    }
    else if ( v31 == i )
    {
      i += 8LL;
    }
  }
LABEL_33:
  v27 = v11 - 1;
  if ( a6 == -1 )
    v27 = v11;
  if ( (_DWORD)v27 )
  {
    v28 = 1LL;
    if ( a6 == -1 )
      v28 = 3LL;
    v29 = MiObtainFaultCharges(a1, v27, v28);
  }
  else
  {
    v29 = 0;
  }
  result = v29 + 1;
  if ( a6 == -1 )
    result = v29;
  *a7 = i;
  *a8 = v18;
  return result;
}
