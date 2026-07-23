/*
 * XREFs of HvlNotifyPageHeat @ 0x14032BE28
 * Callers:
 *     MiNotifyPageHeat @ 0x1402CF130 (MiNotifyPageHeat.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x140279770 (HvlpHvToNtStatus.c)
 *     KeWaitPhysicalFaultCompletion @ 0x14029BE38 (KeWaitPhysicalFaultCompletion.c)
 */

__int64 __fastcall HvlNotifyPageHeat(int a1, char a2, unsigned int a3, __int64 a4)
{
  int v4; // r13d
  __int64 v7; // rbx
  unsigned int v8; // esi
  __int64 v9; // r15
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  unsigned int v12; // edx
  _QWORD *v13; // rcx
  unsigned int v14; // r9d
  _QWORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // rax
  unsigned __int16 v24; // bx
  _QWORD *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned int v28; // edi
  __int64 *v29; // rbx
  __int16 v30; // [rsp+2Ch] [rbp-54h]
  _QWORD *v31; // [rsp+30h] [rbp-50h]
  PHYSICAL_ADDRESS v32[4]; // [rsp+38h] [rbp-48h] BYREF
  PHYSICAL_ADDRESS v33[3]; // [rsp+58h] [rbp-28h] BYREF

  v4 = 0;
  if ( a1 )
  {
    if ( a1 != 1 )
      return 3221225485LL;
    if ( (HvlEnlightenments & 0x200000) != 0 )
    {
      v7 = 1LL;
      goto LABEL_9;
    }
    return 3221225659LL;
  }
  if ( (HvlEnlightenments & 0x400000) == 0 )
    return 3221225659LL;
  v7 = 0LL;
LABEL_9:
  v8 = 0;
  if ( a2 && (HvlpFlags & 0x200000) != 0 )
  {
    v9 = a4;
    v10 = HvlpAcquireHypercallPage(v32, 2, 0LL, 0LL);
  }
  else
  {
    v9 = 0LL;
    v10 = 0LL;
    memset(v32, 0, sizeof(v32));
  }
  v11 = HvlpAcquireHypercallPage(v33, 1, 0LL, 0LL);
  v12 = a3;
  v13 = v11;
  v31 = v11;
  *v11 = v7;
  do
  {
    v14 = 0;
    if ( v12 >= 0x1FF )
      v12 = 511;
    if ( v12 )
    {
      v15 = v13 + 1;
      while ( 1 )
      {
        v16 = v14 + v4;
        *v15 = 0LL;
        v17 = *(_QWORD *)(a4 + 8 * v16) & 0x3FFLL;
        v18 = (unsigned int)v16;
        *v15 = v17;
        v19 = *(_QWORD *)(a4 + 8 * v16);
        if ( (v19 & 0xC00) == 0 )
          break;
        v21 = v17 | 0x800;
        *v15 = v21;
        v20 = v21 | *(_QWORD *)(a4 + 8 * v18) & 0xFFFFFFFFFFE00000uLL;
        *v15 = v20;
        v22 = *(_QWORD *)(a4 + 8 * v18) & 0xC00LL;
        if ( v22 == 1024 )
          goto LABEL_23;
        if ( v22 == 2048 )
        {
          v20 |= 0x1000uLL;
          goto LABEL_23;
        }
LABEL_24:
        ++v14;
        ++v15;
        if ( v14 >= v12 )
          goto LABEL_25;
      }
      v20 = v17 | v19 & 0xFFFFFFFFFFFFF000uLL;
LABEL_23:
      *v15 = v20;
      goto LABEL_24;
    }
LABEL_25:
    v23 = HvcallCodeVa();
    v30 = WORD2(v23);
    v24 = v23;
    if ( (_WORD)v23 )
      break;
    if ( v10 && (v23 & 0xFFF00000000LL) != 0 )
    {
      v25 = v10;
      v26 = WORD2(v23) & 0xFFF;
      do
      {
        if ( *v25 )
        {
          v27 = v8++;
          *(_QWORD *)(v9 + 8 * v27) = *v25;
        }
        ++v25;
        --v26;
      }
      while ( v26 );
    }
    v13 = v31;
    v4 += v30 & 0xFFF;
    v12 = a3 - v4;
  }
  while ( a3 != v4 );
  HvlpReleaseHypercallPage((unsigned int *)v33);
  if ( v10 )
    HvlpReleaseHypercallPage((unsigned int *)v32);
  if ( v24 )
    v28 = HvlpHvToNtStatus(v24);
  else
    v28 = 0;
  if ( v8 )
  {
    v29 = (__int64 *)(v9 + 8LL * v8);
    do
    {
      KeWaitPhysicalFaultCompletion(*--v29);
      --v8;
    }
    while ( v8 );
  }
  return v28;
}
