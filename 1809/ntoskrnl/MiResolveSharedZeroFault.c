/*
 * XREFs of MiResolveSharedZeroFault @ 0x1400429B0
 * Callers:
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 * Callees:
 *     MiAdvanceFaultList @ 0x14002B6E0 (MiAdvanceFaultList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiFillPteWithProto @ 0x1402BC0AC (MiFillPteWithProto.c)
 */

unsigned __int64 __fastcall MiResolveSharedZeroFault(unsigned int *a1)
{
  unsigned __int64 v2; // r10
  unsigned int v3; // r12d
  unsigned __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r11
  unsigned __int64 v8; // rdx
  unsigned int v9; // r8d
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rsi
  __int64 v16; // rbx
  unsigned __int64 result; // rax
  __int64 v18; // rbx
  int v19; // ecx
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r8
  __int16 *v24; // r14
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rcx
  unsigned int v29; // r12d
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r8
  unsigned __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // r8
  unsigned __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // rdx
  unsigned __int64 v42; // r10
  __int64 ProtoPteAddress; // rax
  _QWORD *v44; // rcx
  __int64 v45; // r11
  unsigned __int64 v46; // [rsp+28h] [rbp-91h] BYREF
  __int64 v47; // [rsp+30h] [rbp-89h]
  unsigned __int64 v48; // [rsp+38h] [rbp-81h]
  __int16 v49; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int64 *v50; // [rsp+48h] [rbp-71h]
  __int64 v51; // [rsp+50h] [rbp-69h]
  __int64 v52; // [rsp+58h] [rbp-61h]
  __int64 v53; // [rsp+60h] [rbp-59h]
  __int64 v54; // [rsp+98h] [rbp-21h]
  unsigned __int64 v55; // [rsp+A0h] [rbp-19h]
  unsigned __int64 v56; // [rsp+A8h] [rbp-11h]
  unsigned __int64 v57; // [rsp+B0h] [rbp-9h]
  __int64 v58; // [rsp+B8h] [rbp-1h]
  __int64 v59[10]; // [rsp+C0h] [rbp+7h] BYREF
  unsigned __int64 v60; // [rsp+120h] [rbp+67h] BYREF
  unsigned int v61; // [rsp+128h] [rbp+6Fh]
  unsigned __int64 v62; // [rsp+130h] [rbp+77h] BYREF
  unsigned __int64 v63; // [rsp+138h] [rbp+7Fh]

  v63 = **((_QWORD **)a1 + 1);
  v2 = v63;
  v3 = a1[8];
  v4 = ((v63 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = *((_QWORD *)a1 + 3);
  v61 = v3;
  v6 = 0LL;
  v7 = 0LL;
  v8 = (__int64)(v4 << 25) >> 16;
  v9 = 0;
  while ( v8 > 0x7FFFFFFEFFFFLL )
  {
    ++v9;
    v8 = (__int64)(v8 << 25) >> 16;
    if ( v9 >= 3 )
      goto LABEL_13;
  }
  v10 = (((unsigned __int64)((__int64)((((v63 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) << 25) >> 16) >> 18) & 0x3FFFFFF8)
      - 0x904C0000000LL;
  v11 = *(_QWORD *)v10;
  if ( v10 >= 0xFFFFF6FB7DBED000uLL
    && v10 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    v32 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v32 )
    {
      v33 = *(_QWORD *)(v32 + 8 * ((v10 >> 3) & 0x1FF));
      v34 = v11 | 0x20;
      if ( (v33 & 0x20) == 0 )
        v34 = v11;
      v11 = v34;
      if ( (v33 & 0x42) != 0 )
        v11 = v34 | 0x42;
    }
  }
  v62 = v11;
  if ( (unsigned __int64)&v62 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v62 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v11 & 1) != 0
    && ((v11 & 0x20) == 0 || (v11 & 0x42) == 0) )
  {
    v35 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v35 )
    {
      v36 = *(_QWORD *)(v35 + 8 * (((unsigned __int64)&v62 >> 3) & 0x1FF));
      v37 = v11 | 0x20;
      if ( (v36 & 0x20) == 0 )
        v37 = v11;
      v11 = v37;
      if ( (v36 & 0x42) != 0 )
        v11 = v37 | 0x42;
    }
  }
  v12 = 48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  LODWORD(v60) = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v60);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) );
    v2 = v63;
    v7 = 0LL;
  }
  *(_QWORD *)(v12 + 16) ^= ((unsigned int)*(_QWORD *)(v12 + 16) ^ ((unsigned int)*(_QWORD *)(v12 + 16) + 0x10000)) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v6 = *(_QWORD *)(v12 + 8) | 0x8000000000000000uLL;
  if ( v6 >> 47 == -1 || v6 >> 47 == 0 )
  {
    v55 = (((unsigned __int64)v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v56 = ((v55 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v57 = ((v56 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v58 = ((v57 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = 4LL;
    do
    {
      v14 = *(&v54 + v13--);
      v6 = *(_QWORD *)v14;
      if ( v14 >= 0xFFFFF6FB7DBED000uLL
        && v14 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
      {
        if ( (v6 & 1) == 0 )
          break;
        if ( (v6 & 0x20) == 0 || (v6 & 0x42) == 0 )
        {
          v38 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v38 )
          {
            v39 = *(_QWORD *)(v38 + 8 * ((v14 >> 3) & 0x1FF));
            v40 = v6 | 0x20;
            if ( (v39 & 0x20) == 0 )
              v40 = v6;
            v6 = v40;
            if ( (v39 & 0x42) != 0 )
              v6 = v40 | 0x42;
          }
        }
      }
    }
    while ( (v6 & 1) != 0 && (v6 & 0x80u) == 0LL && v13 );
  }
LABEL_13:
  v15 = 256LL;
  if ( v3 != 256 )
  {
    v16 = 32 * (v3 & 0x1F | 0xFFFFFFFFF8000020uLL);
    if ( !qword_14043B180 )
      goto LABEL_17;
    if ( (qword_14043B180 & v16) != 0 )
      goto LABEL_16;
    goto LABEL_34;
  }
  v16 = (v5 << 16) | 0x400;
  if ( qword_14043B180 )
  {
    if ( (v16 & qword_14043B180) != 0 )
    {
LABEL_16:
      v16 |= 0x10uLL;
      goto LABEL_17;
    }
LABEL_34:
    v16 |= qword_14043B180;
  }
LABEL_17:
  result = 0xFFFFF6FB7DBED000uLL;
  if ( v4 < 0xFFFFF6FB7DBED000uLL || (result = 0xFFFFF6FB7DBED7F8uLL, v4 > 0xFFFFF6FB7DBED7F8uLL) )
  {
LABEL_18:
    *(_QWORD *)v4 = v16;
    goto LABEL_19;
  }
  if ( !(unsigned int)MiPteHasShadow(v6, 0x8000000000000000uLL) )
  {
    result = (unsigned __int64)KeGetCurrentThread();
    if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 1740LL) & 0x1000) != 0 && (v16 & 1) != 0 )
      v16 |= v41;
    goto LABEL_18;
  }
  if ( !HIBYTE(word_14043B26C) && (v16 & 1) != 0 )
    v16 |= v41;
  *(_QWORD *)v4 = v16;
  result = MiWritePteShadow(v4);
  v2 = v63;
LABEL_19:
  v18 = *((_QWORD *)a1 + 8);
  if ( !v18 )
    return result;
  v19 = *(_DWORD *)(v18 + 48);
  v20 = *(unsigned int *)(v18 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 32) << 32);
  v21 = *(unsigned int *)(v18 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 33) << 32);
  if ( (v19 & 0x40000) != 0 )
  {
    v42 = v2 & 0xFFFFFFFFFFFF0000uLL;
    v47 = 0x10000LL;
    v46 = v42;
    result = v42 >> 12;
    if ( v42 >> 12 < v20 )
      return result;
    result = (v42 + 0xFFFF) >> 12;
    if ( result > v21 )
      return result;
    v2 = v42 - 4096;
    v15 = 16LL;
  }
  else
  {
    result = *a1;
    if ( (result & 2) != 0 )
    {
      v24 = (__int16 *)*((_QWORD *)a1 + 7);
      result = v2 >> 12;
      v31 = v21 - (v2 >> 12) + 1;
      if ( v31 < 0x100 )
        v15 = v31;
      if ( !v24 )
        return result;
      goto LABEL_41;
    }
    if ( (v19 & 7) == 2 )
      return result;
    v22 = 8LL;
    v23 = v21 - (v2 >> 12);
    v46 = v2 & 0xFFFFFFFFFFFFF000uLL;
    v2 &= 0xFFFFFFFFFFFFF000uLL;
    if ( v23 + 1 < 8 )
      v22 = v23 + 1;
    v15 = 512 - ((v4 >> 3) & 0x1FF);
    if ( v22 <= v15 )
      v15 = v22;
    v47 = v15 << 12;
  }
  v53 = v7;
  v50 = &v46;
  v24 = &v49;
  v52 = v7;
  v51 = 1LL;
  v49 = 2;
LABEL_41:
  v25 = *((_QWORD *)v24 + 3);
  v26 = *((_QWORD *)v24 + 2);
  result = *((_QWORD *)v24 + 4);
  v63 = v25;
  v48 = result;
  v62 = v26;
  if ( v25 < v26 )
  {
    v27 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
    if ( v15 )
    {
      v28 = v25;
      v29 = v61;
      while ( (v27 & 0xFFF) != 0 || v24 == &v49 )
      {
        v30 = *(_QWORD *)(*((_QWORD *)v24 + 1) + 16 * v28) + (*((_QWORD *)v24 + 4) << 12);
        if ( (v30 & 0xFFFFFFFFFFFFF000uLL) - 4096 != (v2 & 0xFFFFFFFFFFFFF000uLL) )
          break;
        if ( !MI_READ_PTE_LOCK_FREE(v27) )
        {
          v60 = v30 >> 12;
          ProtoPteAddress = MiGetProtoPteAddress(v18, v30 >> 12, 0, v59);
          if ( !ProtoPteAddress )
            break;
          v44 = *(_QWORD **)(v18 + 120);
          if ( (__int64)v44 < 0 && v60 - v20 > (unsigned __int64)(*v44 - 1LL) >> 12 )
            break;
          MiFillPteWithProto(v27, ProtoPteAddress, v29);
        }
        v27 += 8LL;
        MiAdvanceFaultList(v24);
        v28 = *((_QWORD *)v24 + 3);
        if ( v28 != v62 )
        {
          v2 = v30;
          if ( v45 + 1 < v15 )
            continue;
        }
        break;
      }
      v25 = v63;
      result = v48;
    }
  }
  *((_QWORD *)v24 + 3) = v25;
  *((_QWORD *)v24 + 4) = result;
  return result;
}
