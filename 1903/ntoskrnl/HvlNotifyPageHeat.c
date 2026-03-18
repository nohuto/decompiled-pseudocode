/*
 * XREFs of HvlNotifyPageHeat @ 0x14034D450
 * Callers:
 *     MiNotifyPageHeat @ 0x1402EBFB4 (MiNotifyPageHeat.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x14028D8C8 (HvlpHvToNtStatus.c)
 *     KeWaitPhysicalFaultCompletion @ 0x1402B317C (KeWaitPhysicalFaultCompletion.c)
 */

__int64 __fastcall HvlNotifyPageHeat(int a1, char a2, unsigned int a3, __int64 a4)
{
  int v7; // r12d
  __int64 v9; // rbx
  unsigned int v10; // esi
  __int64 v11; // r15
  _QWORD *v12; // r14
  _QWORD *v13; // rax
  unsigned int v14; // edx
  _QWORD *v15; // rcx
  unsigned int v16; // r10d
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r11
  __int64 v21; // rax
  __int64 v22; // r9
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  unsigned __int16 v25; // bx
  _QWORD *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  unsigned int v29; // edi
  __int64 *v30; // rbx
  __int64 v31; // [rsp+20h] [rbp-60h]
  __int16 v32; // [rsp+34h] [rbp-4Ch]
  _QWORD *v33; // [rsp+38h] [rbp-48h]
  PHYSICAL_ADDRESS v34[4]; // [rsp+40h] [rbp-40h] BYREF
  PHYSICAL_ADDRESS v35[4]; // [rsp+60h] [rbp-20h] BYREF

  memset(v34, 0, sizeof(v34));
  memset(v35, 0, sizeof(v35));
  v7 = 0;
  if ( !a1 )
  {
    if ( (HvlEnlightenments & 0x400000) != 0 )
    {
      v9 = 0LL;
      goto LABEL_9;
    }
    return 3221225659LL;
  }
  if ( a1 != 1 )
    return 3221225485LL;
  if ( (HvlEnlightenments & 0x200000) == 0 )
    return 3221225659LL;
  v9 = 1LL;
LABEL_9:
  v10 = 0;
  if ( a2 && (HvlpFlags & 0x200000) != 0 )
  {
    v31 = a4;
    v11 = a4;
    v12 = HvlpAcquireHypercallPage(v35, 2, 0LL, 0LL);
  }
  else
  {
    v11 = 0LL;
    v31 = 0LL;
    v12 = 0LL;
  }
  v13 = HvlpAcquireHypercallPage(v34, 1, 0LL, 0LL);
  v14 = a3;
  v15 = v13;
  v33 = v13;
  *v13 = v9;
  do
  {
    v16 = 0;
    if ( v14 >= 0x1FF )
      v14 = 511;
    if ( v14 )
    {
      v17 = v15 + 1;
      do
      {
        v18 = v16 + v7;
        *v17 = 0LL;
        v19 = *(_QWORD *)(a4 + 8 * v18) & 0x3FFLL;
        v20 = (unsigned int)v18;
        *v17 = v19;
        v21 = *(_QWORD *)(a4 + 8 * v18);
        if ( (v21 & 0xC00) != 0 )
        {
          v22 = v19 | 0x800;
          *v17 = v22;
          v23 = v22 | *(_QWORD *)(a4 + 8 * v20) & 0xFFFFFFFFFFE00000uLL;
          *v17 = v23;
          if ( (*(_DWORD *)(a4 + 8 * v20) & 0xC00) == 0x800LL )
            *v17 = v23 | 0x1000;
        }
        else
        {
          *v17 = v19 | v21 & 0xFFFFFFFFFFFFF000uLL;
        }
        ++v16;
        ++v17;
      }
      while ( v16 < v14 );
      v11 = v31;
    }
    v24 = HvcallCodeVa();
    v32 = WORD2(v24);
    v25 = v24;
    if ( (_WORD)v24 )
      break;
    if ( v12 && (v24 & 0xFFF00000000LL) != 0 )
    {
      v26 = v12;
      v27 = WORD2(v24) & 0xFFF;
      do
      {
        if ( *v26 )
        {
          v28 = v10++;
          *(_QWORD *)(v11 + 8 * v28) = *v26;
        }
        ++v26;
        --v27;
      }
      while ( v27 );
    }
    v15 = v33;
    v7 += v32 & 0xFFF;
    v14 = a3 - v7;
  }
  while ( a3 != v7 );
  HvlpReleaseHypercallPage((unsigned int *)v34);
  if ( v12 )
    HvlpReleaseHypercallPage((unsigned int *)v35);
  if ( v25 )
    v29 = HvlpHvToNtStatus(v25);
  else
    v29 = 0;
  if ( v10 )
  {
    v30 = (__int64 *)(v11 + 8LL * v10);
    do
    {
      KeWaitPhysicalFaultCompletion(*--v30);
      --v10;
    }
    while ( v10 );
  }
  return v29;
}
