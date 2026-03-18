/*
 * XREFs of MiResolveSharedZeroFault @ 0x1400C8250
 * Callers:
 *     MiZeroFault @ 0x1400C99E0 (MiZeroFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1400C7FF0 (MiGetProtoPteAddress.c)
 *     MiAdvanceFaultList @ 0x1400F57E0 (MiAdvanceFaultList.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiFillPteWithProto @ 0x1402D26F8 (MiFillPteWithProto.c)
 */

unsigned __int64 __fastcall MiResolveSharedZeroFault(unsigned int *a1)
{
  unsigned int v2; // r11d
  unsigned __int64 v3; // r15
  __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  unsigned int v6; // r8d
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  signed __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  __int64 v16; // rbx
  unsigned __int64 result; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // r10
  __int64 v20; // rbx
  unsigned int v21; // ecx
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r8
  _QWORD *v26; // r14
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // r13
  unsigned __int64 v32; // r8
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  char v38; // r9
  unsigned __int64 v39; // r10
  __int64 ProtoPteAddress; // rax
  _QWORD *v41; // rcx
  unsigned __int64 v42; // [rsp+20h] [rbp-99h] BYREF
  unsigned __int64 v43; // [rsp+28h] [rbp-91h] BYREF
  __int64 v44; // [rsp+30h] [rbp-89h]
  unsigned __int64 v45; // [rsp+38h] [rbp-81h]
  unsigned __int64 v46; // [rsp+40h] [rbp-79h]
  unsigned __int64 v47; // [rsp+48h] [rbp-71h]
  __int64 v48; // [rsp+50h] [rbp-69h]
  _QWORD v49[12]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v50[10]; // [rsp+C0h] [rbp+7h] BYREF
  unsigned int v51; // [rsp+120h] [rbp+67h]
  unsigned __int64 v52; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int64 v53; // [rsp+130h] [rbp+77h]
  __int64 v54; // [rsp+138h] [rbp+7Fh]

  memset(v49, 0, 0x58uLL);
  v43 = 0LL;
  v44 = 0LL;
  v53 = **((_QWORD **)a1 + 1);
  v2 = a1[8];
  v3 = ((v53 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = *((_QWORD *)a1 + 3);
  v51 = v2;
  v5 = (__int64)(v3 << 25) >> 16;
  v54 = 0LL;
  v6 = 0;
  while ( v5 > 0x7FFFFFFEFFFFLL )
  {
    ++v6;
    v5 = (__int64)(v5 << 25) >> 16;
    if ( v6 >= 3 )
      goto LABEL_12;
  }
  v7 = (((unsigned __int64)((__int64)((((v53 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) << 25) >> 16) >> 18) & 0x3FFFFFF8)
     - 0x904C0000000LL;
  v8 = *(_QWORD *)v7;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v8 & 1) != 0
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
    if ( DeepFreezeStartTime )
    {
      v34 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v7 >> 3) & 0x1FF));
      v35 = v8 | 0x20;
      if ( (v34 & 0x20) == 0 )
        v35 = v8;
      v8 = v35;
      if ( (v34 & 0x42) != 0 )
        v8 = v35 | 0x42;
    }
  }
  v42 = v8;
  v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v42) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  LODWORD(v52) = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v52);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
    v2 = v51;
  }
  *(_QWORD *)(v9 + 16) ^= ((unsigned int)*(_QWORD *)(v9 + 16) ^ ((unsigned int)*(_QWORD *)(v9 + 16) + 0x10000)) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v10 = *(_QWORD *)(v9 + 8);
  v45 = 0LL;
  v46 = 0LL;
  v11 = v10 | 0x8000000000000000uLL;
  v47 = 0LL;
  v48 = 0LL;
  if ( v11 >> 47 == -1 || v11 >> 47 == 0 )
  {
    v45 = (((unsigned __int64)v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v46 = ((v45 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v47 = ((v46 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v48 = ((v47 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = 4LL;
    do
    {
      v13 = *(&v44 + v12--);
      v14 = *(_QWORD *)v13;
      if ( v13 >= 0xFFFFF6FB7DBED000uLL
        && v13 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
      {
        if ( (v14 & 1) == 0 )
          break;
        if ( (v14 & 0x20) == 0 || (v14 & 0x42) == 0 )
        {
          v36 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( v36 )
          {
            v37 = *(_QWORD *)(v36 + 8 * ((v13 >> 3) & 0x1FF));
            v38 = v14 | 0x20;
            if ( (v37 & 0x20) == 0 )
              v38 = v14;
            LOBYTE(v14) = v38;
            if ( (v37 & 0x42) != 0 )
              LOBYTE(v14) = v38 | 0x42;
          }
        }
      }
    }
    while ( (v14 & 1) != 0 && (v14 & 0x80u) == 0LL && v12 );
  }
LABEL_12:
  v15 = 256LL;
  if ( v2 == 256 )
  {
    v16 = (v4 << 16) | 0x400;
    if ( !qword_140465B00 )
      goto LABEL_16;
    if ( (v16 & qword_140465B00) == 0 )
      goto LABEL_15;
  }
  else
  {
    v16 = 32 * (v2 & 0x1F | 0xFFFFFFFFF8000020uLL);
    if ( !qword_140465B00 )
      goto LABEL_16;
    if ( (qword_140465B00 & v16) == 0 )
    {
LABEL_15:
      v16 |= qword_140465B00;
      goto LABEL_16;
    }
  }
  v16 |= 0x10uLL;
LABEL_16:
  result = MiPteInShadowRange(v3);
  if ( !(_DWORD)result )
  {
LABEL_17:
    *(_QWORD *)v3 = v16;
    goto LABEL_18;
  }
  if ( !(unsigned int)MiPteHasShadow(v18) )
  {
    result = (unsigned __int64)KeGetCurrentThread();
    if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 1788LL) & 0x1000) != 0 && (v16 & 1) != 0 )
      v16 |= 0x8000000000000000uLL;
    goto LABEL_17;
  }
  if ( !HIBYTE(word_140465BEC) && (v16 & 1) != 0 )
    v16 |= 0x8000000000000000uLL;
  *(_QWORD *)v3 = v16;
  result = MiWritePteShadow(v3, v16);
  v19 = v53;
LABEL_18:
  v20 = *((_QWORD *)a1 + 8);
  if ( !v20 )
    return result;
  v21 = *(_DWORD *)(v20 + 48);
  v22 = *(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32);
  v23 = *(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32);
  if ( MiVadPageSizes[(v21 >> 18) & 3] == 16 )
  {
    v39 = v19 & 0xFFFFFFFFFFFF0000uLL;
    v44 = 0x10000LL;
    v43 = v39;
    result = v39 >> 12;
    if ( v39 >> 12 < v22 )
      return result;
    result = (v39 + 0xFFFF) >> 12;
    if ( result > v23 )
      return result;
    v19 = v39 - 4096;
    v15 = 16LL;
  }
  else
  {
    result = *a1;
    if ( (result & 2) != 0 )
    {
      v26 = (_QWORD *)*((_QWORD *)a1 + 7);
      result = v19 >> 12;
      v32 = v23 - (v19 >> 12) + 1;
      if ( v32 < 0x100 )
        v15 = v32;
      if ( !v26 )
        return result;
      goto LABEL_38;
    }
    if ( (v21 & 0x70) == 0x20 )
      return result;
    v24 = 8LL;
    v25 = v23 - (v19 >> 12);
    v43 = v19 & 0xFFFFFFFFFFFFF000uLL;
    v19 &= 0xFFFFFFFFFFFFF000uLL;
    if ( v25 + 1 < 8 )
      v24 = v25 + 1;
    v15 = 512 - ((v3 >> 3) & 0x1FF);
    if ( v24 <= v15 )
      v15 = v24;
    v44 = v15 << 12;
  }
  v49[4] = 0LL;
  v49[1] = &v43;
  v26 = v49;
  v49[3] = 0LL;
  v49[2] = 1LL;
  LOWORD(v49[0]) = 2;
LABEL_38:
  v27 = v26[3];
  v28 = v26[2];
  result = v26[4];
  v53 = v27;
  v42 = result;
  v52 = v28;
  if ( v27 < v28 )
  {
    v29 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
    if ( v15 )
    {
      v30 = v27;
      while ( (v29 & 0xFFF) != 0 || v26 == v49 )
      {
        v31 = *(_QWORD *)(v26[1] + 16 * v30) + (v26[4] << 12);
        if ( (v31 & 0xFFFFFFFFFFFFF000uLL) - 4096 != (v19 & 0xFFFFFFFFFFFFF000uLL) )
          break;
        if ( !MI_READ_PTE_LOCK_FREE(v29) )
        {
          ProtoPteAddress = MiGetProtoPteAddress(v20, v31 >> 12, 0, v50);
          if ( !ProtoPteAddress )
            break;
          v41 = *(_QWORD **)(v20 + 120);
          if ( (__int64)v41 < 0 && (v31 >> 12) - v22 > (unsigned __int64)(*v41 - 1LL) >> 12 )
            break;
          MiFillPteWithProto(v29, ProtoPteAddress, v51);
        }
        v29 += 8LL;
        MiAdvanceFaultList(v26);
        v30 = v26[3];
        if ( v30 != v52 )
        {
          v19 = v31;
          if ( ++v54 < v15 )
            continue;
        }
        break;
      }
      v27 = v53;
      result = v42;
    }
  }
  v26[3] = v27;
  v26[4] = result;
  return result;
}
