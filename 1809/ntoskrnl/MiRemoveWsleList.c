/*
 * XREFs of MiRemoveWsleList @ 0x14007AF40
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140078700 (MmUnmapViewInSystemCache.c)
 *     MiFreeWsleList @ 0x1400B29F0 (MiFreeWsleList.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400BC5E0 (ExpAcquireSpinLockExclusive.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiLookupDataTableEntry @ 0x1400DA610 (MiLookupDataTableEntry.c)
 *     MiWriteWsle @ 0x1400DB218 (MiWriteWsle.c)
 *     MiLogRemoveWsleEvent @ 0x1402A7FDC (MiLogRemoveWsleEvent.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiRemoveWsleList(__int64 a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  char v5; // al
  int *v6; // rcx
  bool v8; // zf
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r10
  unsigned __int64 *v12; // rdi
  char *v13; // r14
  unsigned __int64 v14; // rbp
  int v15; // r12d
  __int64 v16; // rsi
  int v17; // r15d
  char v18; // cl
  unsigned __int64 v19; // r8
  int v20; // r13d
  unsigned __int64 *v21; // rbx
  char *v22; // r15
  unsigned __int64 v23; // rsi
  __int64 v24; // rbp
  LONG *v25; // rcx
  unsigned __int64 v26; // rdi
  __int64 v27; // r12
  unsigned __int64 v28; // rdx
  int *v29; // r8
  char v30; // r9
  __int64 v31; // rax
  unsigned __int8 v32; // r9
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // r8
  __int64 *v36; // r8
  __int64 v37; // rdx
  unsigned __int8 v38; // al
  __int64 v39; // r13
  __int64 v40; // r12
  __int64 *v41; // rbp
  volatile LONG *v42; // rcx
  __int64 v43; // r8
  unsigned __int64 v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 **v49; // rcx
  __int64 v50; // r13
  __int64 **v51; // rax
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // r8
  unsigned __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // r8
  int v58; // [rsp+20h] [rbp-A8h]
  int *v59; // [rsp+28h] [rbp-A0h]
  int v60; // [rsp+30h] [rbp-98h]
  __int64 v61; // [rsp+38h] [rbp-90h]
  __int64 v62; // [rsp+40h] [rbp-88h]
  __int64 v63; // [rsp+48h] [rbp-80h]
  __int64 v64; // [rsp+50h] [rbp-78h]
  __int64 v65; // [rsp+58h] [rbp-70h]
  unsigned __int64 *v66; // [rsp+60h] [rbp-68h]
  _QWORD v67[12]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v70; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v72; // [rsp+E8h] [rbp+20h] BYREF

  v72 = a4;
  v5 = *(_BYTE *)(a1 + 184) & 7;
  v6 = &dword_14043C840;
  v8 = v5 == 2;
  v61 = 0LL;
  result = 0LL;
  v63 = 0LL;
  if ( !v8 )
    v6 = 0LL;
  v65 = 0LL;
  v59 = v6;
  v10 = 0LL;
  v62 = 0LL;
  v58 = 0;
  v11 = 0LL;
  if ( a4 )
  {
    v66 = (unsigned __int64 *)(a2 + 24);
    v12 = (unsigned __int64 *)(a2 + 24);
    v13 = &a3[-a2];
    v14 = a4;
    v15 = 0;
    v16 = 0LL;
    v17 = 0;
    do
    {
      v18 = *((_BYTE *)v12 + (_QWORD)v13 - 23);
      if ( (v18 & 1) != 0 )
      {
        v19 = *v12;
        v61 = ++v11;
        if ( *v12 < 0xFFFFF68000000000uLL || v19 > 0xFFFFF6FFFFFFFFFFuLL )
        {
          v58 = 2;
          v65 = ((v19 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        }
        else
        {
          v58 = 1;
        }
        if ( (v18 & 2) != 0 )
        {
          v62 = ++v10;
          if ( v19 < 0xFFFFF68000000000uLL || v19 > 0xFFFFF6FFFFFFFFFFuLL )
            ++v16;
        }
        if ( (*(_BYTE *)(a1 + 184) & 7) == 4 )
        {
          if ( PsNtosImageBase
            && (v19 < PsNtosImageEnd && v19 >= (unsigned __int64)PsNtosImageBase
             || v19 < PsHalImageEnd && v19 >= (unsigned __int64)PsHalImageBase) )
          {
            ++v17;
          }
          else if ( (unsigned int)MiGetSystemRegionType(v19) == 12 )
          {
            v47 = MiLookupDataTableEntry((__int64)((v46 & 0xFFFFFFFFFFFFF000uLL) << 16) >> 16, 2LL);
            v10 = v62;
            v11 = v61;
            if ( v47 )
              ++v15;
          }
        }
      }
      ++v12;
      --v14;
    }
    while ( v14 );
    v20 = v58;
    v21 = v66;
    v60 = v17;
    v22 = a3;
    v64 = v16;
    v23 = v72;
    if ( v58 )
    {
      v24 = a1;
      if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
        v25 = &dword_14043C7E8;
      else
        v25 = (LONG *)(a1 + 232);
      LOBYTE(v10) = -1;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v25, v10);
      else
        ExpAcquireSpinLockExclusive(v25, v10);
      if ( v62 )
      {
        *(_QWORD *)(a1 + 144) -= v62;
        if ( v64 )
          *(_QWORD *)(a1 + 128) -= v64;
      }
      if ( v60 )
        LODWORD(xmmword_140439FE0) = xmmword_140439FE0 - v60;
      if ( v15 )
        DWORD1(xmmword_140439FE0) -= v15;
      v26 = 0LL;
      *(_QWORD *)(a1 + 136) -= v61;
      v27 = a2 - (_QWORD)a3;
      v70 = a2 - (_QWORD)a3;
      while ( 1 )
      {
        if ( (v22[v27 + 1 + (_QWORD)v13] & 1) != 0 )
        {
          v28 = *(_QWORD *)&v22[v27 + 24];
          if ( v20 != 1 )
          {
            --*(_QWORD *)(v24 + 120);
            v29 = v59;
            v30 = *v22;
            v31 = v63 + 1;
            if ( !v59 )
              v31 = v63;
            v63 = v31;
            if ( (v30 & 0xF) == 8 )
              goto LABEL_42;
            v63 = v31;
            goto LABEL_28;
          }
          if ( (*(_BYTE *)(v24 + 184) & 7) == 0 )
          {
            v30 = *v22;
LABEL_28:
            v32 = v30 & 0xF;
            if ( v28 < 0xFFFFF68000000000uLL || v28 > 0xFFFFF6FFFFFFFFFFuLL )
            {
              v33 = (v28 >> 18) & 0x3FFFFFF8;
              v34 = *(_QWORD *)(v33 - 0x904C0000000LL);
              v35 = v33 - 0x904C0000000LL;
              if ( (unsigned __int64)(v33 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
                && v35 <= 0xFFFFF6FB7DBED7F8uLL
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v34 & 1) != 0
                && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
              {
                v52 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                if ( v52 )
                {
                  v53 = *(_QWORD *)(v52 + 8 * ((v35 >> 3) & 0x1FF));
                  v54 = v34 | 0x20;
                  if ( (v53 & 0x20) == 0 )
                    v54 = *(_QWORD *)(v33 - 0x904C0000000LL);
                  v34 = v54;
                  if ( (v53 & 0x42) != 0 )
                    v34 = v54 | 0x42;
                }
              }
              v72 = v34;
              if ( (unsigned __int64)&v72 >= 0xFFFFF6FB7DBED000uLL
                && (unsigned __int64)&v72 <= 0xFFFFF6FB7DBED7F8uLL
                && (MiFlags & 0xC00000) != 0
                && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
                && (v34 & 1) != 0
                && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
              {
                v55 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
                if ( v55 )
                {
                  v56 = *(_QWORD *)(v55 + 8 * (((unsigned __int64)&v72 >> 3) & 0x1FF));
                  v57 = v34 | 0x20;
                  if ( (v56 & 0x20) == 0 )
                    v57 = v34;
                  v34 = v57;
                  if ( (v56 & 0x42) != 0 )
                    v34 = v57 | 0x42;
                }
              }
              v36 = (__int64 *)(48 * ((v34 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
              v37 = *v36;
              v38 = ((unsigned __int64)*v36 >> 14) & 7;
              if ( (((unsigned __int64)*v36 >> 4) & 0x3FF) != 0 )
              {
                if ( v32 == v38 )
                {
                  *v36 = v37 ^ ((unsigned __int16)v37 ^ (unsigned __int16)(16
                                                                         * ((((unsigned __int64)*v36 >> 4) & 0x3FF) - 1))) & 0x3FF0;
                }
                else if ( v32 > v38 )
                {
                  *v36 = v37 ^ ((unsigned int)v37 ^ (v32 << 14)) & 0x1C000 | 0x3FF0;
                }
              }
            }
            --*(_QWORD *)(v24 + 8LL * v32 + 40);
            if ( v32 == 7 )
            {
              v39 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(v24 + 174));
              v40 = *(_QWORD *)(v39 + 7024);
              if ( *(_QWORD *)(v24 + 96) < *(_QWORD *)(v40 + 64) )
              {
                v41 = (__int64 *)(v24 + 24);
                if ( *v41 && *(__int64 **)(v39 + 7040) != v41 )
                {
                  v67[0] = 0LL;
                  v67[1] = &qword_14043BF40;
                  KxAcquireQueuedSpinLock(v67);
                  if ( *(_BYTE *)(v40 + 53) || (v48 = *v41) == 0 )
                  {
                    *(_BYTE *)(v40 + 54) = 1;
                  }
                  else
                  {
                    if ( *(__int64 **)(v48 + 8) != v41
                      || (v49 = (__int64 **)v41[1], *v49 != v41)
                      || (*v49 = (__int64 *)v48,
                          v50 = v39 + 7032,
                          *(_QWORD *)(v48 + 8) = v49,
                          v51 = *(__int64 ***)(v50 + 8),
                          *v51 != (__int64 *)v50) )
                    {
                      __fastfail(3u);
                    }
                    *v41 = v50;
                    v41[1] = (__int64)v51;
                    *v51 = v41;
                    *(_QWORD *)(v50 + 8) = v41;
                  }
                  KxReleaseQueuedSpinLock(v67);
                }
                v24 = a1;
              }
              v27 = v70;
              v20 = v58;
            }
          }
        }
        v29 = v59;
LABEL_42:
        ++v26;
        v22 += 8;
        if ( v26 >= v23 )
        {
          if ( v29 )
          {
            *((_QWORD *)v29 + 1) -= v61;
            if ( v63 )
              *((_QWORD *)v59 + 2) -= v63;
          }
          if ( (*(_BYTE *)(v24 + 184) & 7) == 2 )
            v42 = &dword_14043C7E8;
          else
            v42 = (volatile LONG *)(v24 + 232);
          ExReleaseSpinLockExclusiveFromDpcLevel(v42);
          do
          {
            if ( (v13[(_QWORD)v21 - 23] & 1) != 0 )
            {
              v44 = *v21;
              if ( v20 == 2 )
              {
                v45 = *(unsigned __int8 *)(((v44 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                if ( (v45 & 1) != 0 )
                {
                  LOBYTE(v43) = 10;
                  MiWriteWsle(v45, *v21, v43);
                }
              }
              if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
                MiLogRemoveWsleEvent(v44, *(_BYTE *)(v24 + 184) & 7, v43);
            }
            ++v21;
            --v23;
          }
          while ( v23 );
          return v65;
        }
      }
    }
    return v65;
  }
  return result;
}
