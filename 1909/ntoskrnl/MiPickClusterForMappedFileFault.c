/*
 * XREFs of MiPickClusterForMappedFileFault @ 0x140093ED0
 * Callers:
 *     MiResolveMappedFileFault @ 0x1400931C0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiObtainFaultCharges @ 0x140053830 (MiObtainFaultCharges.c)
 *     MiSufficientAvailablePages @ 0x14007D460 (MiSufficientAvailablePages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     MiStartingOffset @ 0x1400B8AD0 (MiStartingOffset.c)
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
  __int64 *v8; // r13
  unsigned int v9; // r12d
  __int64 v10; // rbx
  char v11; // r14
  unsigned __int64 v12; // rsi
  int v13; // edi
  struct _KTHREAD *CurrentThread; // r15
  int v15; // ebp
  __int64 v16; // r8
  unsigned int v17; // edx
  unsigned __int64 v18; // r10
  __int64 v19; // r9
  unsigned __int64 v20; // r15
  __int64 v21; // r11
  unsigned int v22; // ebp
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r9
  unsigned __int64 i; // rbp
  __int64 v30; // r9
  unsigned int v31; // edx
  __int64 result; // rax
  int v33; // ecx
  __int64 v34; // rdx
  unsigned __int64 DeepFreezeStartTime; // r9
  __int64 v36; // rax
  __int64 v37; // r9
  __int64 v38; // [rsp+20h] [rbp-68h]
  __int64 v39; // [rsp+30h] [rbp-58h]

  v8 = *(__int64 **)(a2 + 208);
  v9 = 0;
  v10 = *(_QWORD *)(a2 + 168);
  v11 = 1;
  v12 = *(_QWORD *)(a2 + 232);
  v13 = 1;
  CurrentThread = KeGetCurrentThread();
  v39 = *v8;
  if ( (v10 & 0x400) == 0 )
    goto LABEL_38;
  if ( BYTE5(CurrentThread[1].Queue) )
    goto LABEL_38;
  v15 = *(_DWORD *)(*v8 + 56);
  if ( (v15 & 8) != 0 && BYTE4(CurrentThread[1].Queue) != 2 )
    goto LABEL_38;
  if ( *(__int64 *)(a1 + 8128) < 160 )
    goto LABEL_38;
  if ( dword_140466524 )
  {
    --dword_140466524;
LABEL_38:
    i = v12;
    v20 = v12;
    goto LABEL_39;
  }
  if ( !(unsigned int)MiSufficientAvailablePages(a1, 0x140uLL) )
    goto LABEL_38;
  v16 = a2;
  v17 = *(_DWORD *)(a2 + 184);
  if ( v17 == 1 )
    goto LABEL_38;
  v18 = a4;
  v19 = a3;
  if ( !a3 )
  {
    if ( (v15 & 0x20) != 0 )
    {
      v17 = 4;
      if ( (v8[4] & 4) != 0 )
        v17 = 8;
    }
    else if ( !v17 )
    {
      v17 = LODWORD(CurrentThread[1].WaitListEntry.Flink) + 1;
    }
  }
  v20 = a4 - 8 + 8 * (*((unsigned int *)v8 + 11) - (unsigned __int64)(*((_DWORD *)v8 + 13) & 0x3FFFFFFF));
  v21 = 8LL * v17;
  v38 = v21;
  if ( v20 > v21 + v12 - 8 )
    v20 = v21 + v12 - 8;
  if ( !a3 && (v15 & 0x20000000) != 0 )
  {
    v22 = MiStartingOffset(v8, v12, a5);
    v16 = a2;
    v19 = 0LL;
    v18 = a4;
    v21 = v38;
    v33 = v22 & (dword_14046652C - 1);
    if ( v20 > v12 + 8 * (((unsigned int)(dword_14046652C - v33) >> 12) - 1LL) )
      v20 = v12 + 8 * (((unsigned int)(dword_14046652C - v33) >> 12) - 1LL);
  }
  else
  {
    v22 = 0;
  }
  if ( v20 > (v12 & 0xFFFFFFFFFFFFF000uLL | 0xFF8) )
    v20 = v12 & 0xFFFFFFFFFFFFF000uLL | 0xFF8;
  v23 = v20;
  if ( v20 > v12 )
  {
    do
    {
      if ( MiPteInShadowRange(v23)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v24 & 1) != 0
        && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
      {
        DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( DeepFreezeStartTime )
        {
          v36 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v25 >> 3) & 0x1FF));
          v37 = v24 | 0x20;
          if ( (v36 & 0x20) == 0 )
            v37 = v24;
          v24 = v37;
          if ( (v36 & 0x42) != 0 )
            v24 = v37 | 0x42;
        }
      }
      if ( v24 == v10 )
      {
        ++v13;
      }
      else if ( v25 == v20 )
      {
        v20 -= 8LL;
      }
      v23 = v25 - 8;
    }
    while ( v23 > v12 );
    v16 = a2;
    v19 = a3;
  }
  v26 = v20 - v21 + 8;
  if ( v26 < v18 )
    v26 = v18;
  v27 = v12 & 0xFFFFFFFFFFFFF000uLL;
  if ( v26 >= (v12 & 0xFFFFFFFFFFFFF000uLL) )
    v27 = v26;
  if ( v19 || (*(_DWORD *)(v16 + 192) & 0x40) != 0 )
  {
    v28 = v12;
  }
  else
  {
    v28 = v27;
    if ( (*(_DWORD *)(v39 + 56) & 0x20000000) != 0 )
    {
      v34 = (v22 >> 12) & ((unsigned int)(dword_14046652C - 1) >> 12);
      if ( v27 < v12 - 8 * v34 )
        v28 = v12 - 8 * v34;
    }
  }
  for ( i = v28; v28 < v12; v28 = v30 + 8 )
  {
    if ( MI_READ_PTE_LOCK_FREE(v28) == v10 )
    {
      ++v13;
    }
    else if ( v30 == i )
    {
      i += 8LL;
    }
  }
LABEL_39:
  v31 = v13 - 1;
  if ( a6 == -1 )
    v31 = v13;
  if ( v31 )
  {
    if ( a6 == -1 )
      v11 = 3;
    v9 = MiObtainFaultCharges((ULONG_PTR *)a1, v31, v11);
  }
  result = v9 + 1;
  if ( a6 == -1 )
    result = v9;
  *a7 = i;
  *a8 = v20;
  return result;
}
