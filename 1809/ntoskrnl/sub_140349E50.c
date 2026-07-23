/*
 * XREFs of sub_140349E50 @ 0x140349E50
 * Callers:
 *     sub_1401A1880 @ 0x1401A1880 (sub_1401A1880.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140333010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     KiAccessPage @ 0x14034B820 (KiAccessPage.c)
 *     KeGuardCheckICall @ 0x14034BB50 (KeGuardCheckICall.c)
 */

int __fastcall sub_140349E50(__int64 a1, char *a2, unsigned int a3)
{
  unsigned int v4; // r15d
  __int64 *v5; // r14
  const char *v6; // rax
  unsigned __int64 v7; // rcx
  int v8; // r8d
  unsigned __int64 v9; // rbx
  char *v10; // rdi
  char v11; // al
  unsigned __int8 CurrentIrql; // r12
  volatile signed __int32 *v13; // rbp
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v18; // rcx
  __int64 v19; // r13
  char v20; // al
  __int64 v21; // r13
  unsigned __int8 v22; // r12
  volatile signed __int32 *v23; // rbp
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  unsigned int v26; // eax
  struct _KPRCB *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rbx
  unsigned __int64 v30; // rcx
  bool v31; // zf
  unsigned int v32; // r15d
  char *v33; // rdi
  unsigned __int64 v34; // r13
  char v35; // al
  unsigned __int8 v36; // r12
  volatile signed __int32 *v37; // rbp
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // eax
  struct _KPRCB *v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  char v44; // cl
  volatile signed __int32 *v45; // rdi
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  unsigned int v48; // eax
  unsigned __int8 v49; // r12
  struct _KPRCB *v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  int i; // eax
  unsigned int v56; // [rsp+20h] [rbp-98h]
  unsigned __int64 v57; // [rsp+30h] [rbp-88h]
  __int64 v58; // [rsp+38h] [rbp-80h] BYREF
  __int64 v59; // [rsp+40h] [rbp-78h]
  __int64 v60; // [rsp+48h] [rbp-70h]
  __int64 v61; // [rsp+50h] [rbp-68h]
  __int64 v62; // [rsp+58h] [rbp-60h]
  __int64 v63; // [rsp+60h] [rbp-58h]
  char v64; // [rsp+C0h] [rbp+8h]
  char *v65; // [rsp+C8h] [rbp+10h]
  char v66; // [rsp+D0h] [rbp+18h]
  unsigned int v67; // [rsp+D8h] [rbp+20h]

  v66 = a3;
  v65 = a2;
  v4 = a3;
  *(_DWORD *)(a1 + 2064) += a3;
  v5 = (__int64 *)a2;
  v6 = a2;
  v7 = (unsigned __int64)&a2[a3];
  if ( (unsigned __int64)a2 < v7 )
  {
    do
    {
      _mm_prefetch(v6, 0);
      v6 += 64;
    }
    while ( (unsigned __int64)v6 < v7 );
  }
  v8 = *(_DWORD *)(a1 + 2044);
  v9 = *(_QWORD *)(a1 + 2048);
  v57 = v9;
  v64 = v8;
  v56 = v4 >> 7;
  if ( v4 >> 7 )
  {
    v10 = a2 - 6;
    do
    {
      v67 = 128;
      do
      {
        v11 = v10[5];
        if ( *v10 == 76 && v10[1] == -121 && !v10[2] && v10[3] == -104 && v10[4] == -61 && (v11 == -112 || v11 == -15) )
        {
          CurrentIrql = -1;
          v13 = 0LL;
          v14 = __rdtsc();
          v15 = __ROR8__(v14, 3) ^ v14;
          v59 = (v15 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v16 = ((unsigned __int8)v59 ^ (unsigned __int8)v15) & 3;
          if ( v16 <= 1 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            CurrentPrcb = KeGetCurrentPrcb();
            v18 = *(_QWORD *)(a1 + 1584);
            v13 = v16
                ? *(volatile signed __int32 **)(*(_QWORD *)(a1 + 1680)
                                              + *(_QWORD *)((char *)&CurrentPrcb->MxCsr + v18)
                                              + *(_QWORD *)(a1 + 1648))
                : *(volatile signed __int32 **)((char *)&CurrentPrcb->MxCsr + v18);
            if ( _interlockedbittestandset(v13, (*(_DWORD *)(a1 + 2416) >> 10) & 0x1F) )
            {
              v13 = 0LL;
              __writecr8(CurrentIrql);
            }
          }
          v19 = KiAccessPage(v10, v5, *v5);
          if ( v13 )
          {
            _InterlockedAnd(v13, ~(1 << ((*(_DWORD *)(a1 + 2416) >> 10) & 0x1F)));
            __writecr8(CurrentIrql);
          }
          LOBYTE(v8) = v64;
        }
        else
        {
          v19 = 0LL;
        }
        v20 = v10[5];
        v21 = __ROL8__(v9 ^ v19, v8);
        if ( *v10 == 76 && v10[1] == -121 && !v10[2] && v10[3] == -104 && v10[4] == -61 && (v20 == -112 || v20 == -15) )
        {
          v22 = -1;
          v23 = 0LL;
          v24 = __rdtsc();
          v25 = __ROR8__(v24, 3) ^ v24;
          v60 = (v25 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v26 = ((unsigned __int8)v60 ^ (unsigned __int8)v25) & 3;
          if ( v26 <= 1 )
          {
            v22 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v27 = KeGetCurrentPrcb();
            v28 = *(_QWORD *)(a1 + 1584);
            v23 = v26
                ? *(volatile signed __int32 **)(*(_QWORD *)(a1 + 1680)
                                              + *(_QWORD *)((char *)&v27->MxCsr + v28)
                                              + *(_QWORD *)(a1 + 1648))
                : *(volatile signed __int32 **)((char *)&v27->MxCsr + v28);
            if ( _interlockedbittestandset(v23, (*(_DWORD *)(a1 + 2416) >> 10) & 0x1F) )
            {
              v23 = 0LL;
              __writecr8(v22);
            }
          }
          v29 = KiAccessPage(v10, v5 + 1, v5[1]);
          if ( v23 )
          {
            _InterlockedAnd(v23, ~(1 << ((*(_DWORD *)(a1 + 2416) >> 10) & 0x1F)));
            __writecr8(v22);
          }
          LOBYTE(v8) = v64;
        }
        else
        {
          v29 = 0LL;
        }
        v9 = __ROL8__(v21 ^ v29, v8);
        v5 += 2;
        v67 -= 16;
      }
      while ( v67 >= 8 );
      v30 = __ROL8__(v57 ^ ((char *)v5 - v65), 17) ^ v57 ^ ((char *)v5 - v65);
      v61 = (v30 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v8 = ((unsigned __int8)v8 ^ (unsigned __int8)(v61 ^ v30)) & 0x3F;
      if ( !v8 )
        LOBYTE(v8) = 1;
      v31 = v56-- == 1;
      v64 = v8;
    }
    while ( !v31 );
    LOBYTE(v4) = v66;
    a2 = v65;
  }
  v32 = v4 & 0x7F;
  if ( v32 >= 8 )
  {
    v33 = a2 - 6;
    v34 = (unsigned __int64)v32 >> 3;
    do
    {
      v35 = v33[5];
      if ( *v33 == 76 && v33[1] == -121 && !v33[2] && v33[3] == -104 && v33[4] == -61 && (v35 == -112 || v35 == -15) )
      {
        v36 = -1;
        v37 = 0LL;
        v38 = __rdtsc();
        v39 = __ROR8__(v38, 3);
        v62 = ((v39 ^ v38) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v40 = ((unsigned __int8)v62 ^ (unsigned __int8)(v39 ^ v38)) & 3;
        if ( v40 <= 1 )
        {
          v36 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v41 = KeGetCurrentPrcb();
          v42 = *(_QWORD *)(a1 + 1584);
          v37 = v40
              ? *(volatile signed __int32 **)(*(_QWORD *)(a1 + 1680)
                                            + *(_QWORD *)((char *)&v41->MxCsr + v42)
                                            + *(_QWORD *)(a1 + 1648))
              : *(volatile signed __int32 **)((char *)&v41->MxCsr + v42);
          if ( _interlockedbittestandset(v37, (*(_DWORD *)(a1 + 2416) >> 10) & 0x1F) )
          {
            v37 = 0LL;
            __writecr8(v36);
          }
        }
        v43 = KiAccessPage(v33, v5, *v5);
        if ( v37 )
        {
          _InterlockedAnd(v37, ~(1 << ((*(_DWORD *)(a1 + 2416) >> 10) & 0x1F)));
          __writecr8(v36);
        }
      }
      else
      {
        v43 = 0LL;
      }
      v9 = __ROL8__(v43 ^ v9, v64);
      ++v5;
      v32 -= 8;
      --v34;
    }
    while ( v34 );
  }
  if ( ((unsigned __int16)v5 & 0xFFFu) <= 0xFF8 )
  {
    v44 = *(v65 - 1);
    if ( *(v65 - 6) == 76
      && *(v65 - 5) == -121
      && !*(v65 - 4)
      && *(v65 - 3) == -104
      && *(v65 - 2) == -61
      && (v44 == -112 || v44 == -15) )
    {
      v45 = 0LL;
      v46 = __rdtsc();
      v47 = __ROR8__(v46, 3);
      v63 = ((v47 ^ v46) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v48 = ((unsigned __int8)v63 ^ (unsigned __int8)(v47 ^ v46)) & 3;
      if ( v48 > 1 )
      {
        v49 = -1;
      }
      else
      {
        v49 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v50 = KeGetCurrentPrcb();
        v51 = *(_QWORD *)(a1 + 1584);
        if ( v48 )
          v45 = *(volatile signed __int32 **)(*(_QWORD *)(a1 + 1680)
                                            + *(_QWORD *)((char *)&v50->MxCsr + v51)
                                            + *(_QWORD *)(a1 + 1648));
        else
          v45 = *(volatile signed __int32 **)((char *)&v50->MxCsr + v51);
        if ( _interlockedbittestandset(v45, (*(_DWORD *)(a1 + 2416) >> 10) & 0x1F) )
        {
          v45 = 0LL;
          __writecr8(v49);
        }
      }
      v52 = KiAccessPage(v65 - 6, v5, *v5);
      if ( v45 )
      {
        _InterlockedAnd(v45, ~(1 << ((*(_DWORD *)(a1 + 2416) >> 10) & 0x1F)));
        __writecr8(v49);
      }
    }
    else
    {
      v52 = 0LL;
    }
    v58 = v52;
    v5 = &v58;
  }
  for ( ; v32; --v32 )
  {
    v53 = *(unsigned __int8 *)v5;
    v5 = (__int64 *)((char *)v5 + 1);
    v9 = __ROL8__(v53 ^ v9, v64);
  }
  for ( i = v9; ; i ^= v9 )
  {
    v9 >>= 31;
    if ( !v9 )
      break;
  }
  return i & 0x7FFFFFFF;
}
