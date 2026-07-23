/*
 * XREFs of KiMarkBugCheckRegions @ 0x1401A0270
 * Callers:
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 * Callees:
 *     MmQueryApiSetSchema @ 0x14013917C (MmQueryApiSetSchema.c)
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     sub_1401AEF74 @ 0x1401AEF74 (sub_1401AEF74.c)
 *     MmIsAddressValid @ 0x1402ABBA0 (MmIsAddressValid.c)
 */

__int64 __fastcall KiMarkBugCheckRegions(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v7; // esi
  __int64 v8; // r14
  unsigned int v9; // edi
  unsigned __int64 *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  int v14; // ebx
  __int64 v15; // rcx
  __int64 *v16; // rdi
  __int64 v17; // r14
  int *v18; // rbx
  unsigned __int64 v19; // rdi
  unsigned __int64 *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  int v24; // ebx
  __int64 v25; // rcx
  unsigned __int64 *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  unsigned __int64 v29; // rdi
  __int64 v30; // rcx
  __int64 result; // rax
  _QWORD v32[4]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v33[4]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v34[4]; // [rsp+60h] [rbp-20h] BYREF
  PVOID VirtualAddress; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v37; // [rsp+D8h] [rbp+58h] BYREF

  _mm_lfence();
  v7 = 4;
  if ( KdpBreakpointChangeCount )
    IoAddTriageDumpDataBlock((int)&KdpBreakpointChangeCount, 4);
  if ( qword_140406660 )
  {
    KiMismatchSummary = qword_140406660;
    IoAddTriageDumpDataBlock((int)&KiMismatchSummary, 8);
  }
  if ( (_DWORD)a4 == 257 && dword_140406658 )
  {
    v8 = qword_140406648;
    v9 = 0;
    do
    {
      _mm_lfence();
      if ( MmIsAddressValid((PVOID)((v8 + v9) & 0xFFFFFFFFFFFFF000uLL)) )
      {
        v10 = v32;
        v11 = 4LL;
        LODWORD(v12) = 4;
        v13 = MmPteBase + ((((v8 + v9) & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL);
        do
        {
          *v10++ = v13;
          v13 = MmPteBase + ((v13 >> 9) & 0x7FFFFFFFF8LL);
          --v11;
        }
        while ( v11 );
        do
        {
          v12 = (unsigned int)(v12 - 1);
          if ( (_DWORD)v11 )
          {
            v32[v12] = 0LL;
          }
          else
          {
            if ( !(_DWORD)v12 )
              break;
            LODWORD(v11) = *(char *)v32[v12] < 0;
          }
        }
        while ( (_DWORD)v12 );
        v14 = 4;
        do
        {
          v15 = v32[v14 - 1];
          if ( !v15 )
            break;
          IoAddTriageDumpDataBlock(v15, 8);
          --v14;
        }
        while ( v14 );
      }
      v9 += 4096;
    }
    while ( v9 < dword_140406658 );
    dword_140406658 = 4096;
  }
  v16 = &qword_140406648;
  v17 = 2LL;
  v18 = &dword_140406658;
  do
  {
    if ( *v18 )
      IoAddTriageDumpDataBlock(*v16, *v18);
    ++v18;
    ++v16;
    --v17;
  }
  while ( v17 );
  if ( a3 )
  {
    IoAddTriageDumpDataBlock(a3 & 0xFFFFF000, 4096);
    v19 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    IoAddTriageDumpDataBlock((a3 & 0xFFFFF000) + 4096, 4096);
    _mm_lfence();
    if ( MmIsAddressValid((PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL)) )
    {
      v20 = v33;
      v21 = 4LL;
      LODWORD(v22) = 4;
      v23 = MmPteBase + (((a3 & 0xFFFFFFFFFFFFF000uLL) >> 9) & 0x7FFFFFFFF8LL);
      do
      {
        *v20++ = v23;
        v23 = MmPteBase + ((v23 >> 9) & 0x7FFFFFFFF8LL);
        --v21;
      }
      while ( v21 );
      do
      {
        v22 = (unsigned int)(v22 - 1);
        if ( (_DWORD)v21 )
        {
          v33[v22] = 0LL;
        }
        else
        {
          if ( !(_DWORD)v22 )
            break;
          LODWORD(v21) = *(char *)v33[v22] < 0;
        }
      }
      while ( (_DWORD)v22 );
      v24 = 4;
      do
      {
        v25 = v33[v24 - 1];
        if ( !v25 )
          break;
        IoAddTriageDumpDataBlock(v25, 8);
        --v24;
      }
      while ( v24 );
    }
    _mm_lfence();
    if ( MmIsAddressValid((PVOID)v19) )
    {
      v26 = v34;
      v27 = 4LL;
      LODWORD(v28) = 4;
      v29 = MmPteBase + ((v19 >> 9) & 0x7FFFFFFFF8LL);
      do
      {
        *v26++ = v29;
        v29 = MmPteBase + ((v29 >> 9) & 0x7FFFFFFFF8LL);
        --v27;
      }
      while ( v27 );
      do
      {
        v28 = (unsigned int)(v28 - 1);
        if ( (_DWORD)v27 )
        {
          v34[v28] = 0LL;
        }
        else
        {
          if ( !(_DWORD)v28 )
            goto LABEL_45;
          LODWORD(v27) = *(char *)v34[v28] < 0;
        }
      }
      while ( (_DWORD)v28 );
      do
      {
LABEL_45:
        v30 = v34[v7 - 1];
        if ( !v30 )
          break;
        IoAddTriageDumpDataBlock(v30, 8);
        --v7;
      }
      while ( v7 );
    }
    if ( (PVOID)a3 == HvlpHypercallCodeVa )
      IoAddTriageDumpDataBlock((int)&HvlpHypercallCodeVa, 8);
    if ( a3 == HvlpVsmVtlCallVa )
      IoAddTriageDumpDataBlock((int)&HvlpVsmVtlCallVa, 8);
    MmQueryApiSetSchema(&VirtualAddress, &v37);
    if ( MmIsAddressValid(VirtualAddress) && a3 == *(_QWORD *)VirtualAddress )
      IoAddTriageDumpDataBlock((int)VirtualAddress, 8);
  }
  result = sub_1401AEF74(a1, a2, a3, a4);
  if ( Src )
    return IoAddTriageDumpDataBlock((int)Src, 2672);
  return result;
}
