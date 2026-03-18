/*
 * XREFs of RtlApplyHotPatch @ 0x1405AE038
 * Callers:
 *     MiApplyImageHotPatchDpc @ 0x1405AC5E0 (MiApplyImageHotPatchDpc.c)
 *     MiApplyImageHotPatch @ 0x14088DB44 (MiApplyImageHotPatch.c)
 *     MiPerformImageHotPatch @ 0x1408905D8 (MiPerformImageHotPatch.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x140085350 (RtlFindClearBitsAndSet.c)
 *     RtlGetHotPatchSize @ 0x1403154D0 (RtlGetHotPatchSize.c)
 *     RtlpCheckFunctionPatchApplied @ 0x1405AE388 (RtlpCheckFunctionPatchApplied.c)
 */

__int64 __fastcall RtlApplyHotPatch(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        unsigned int a11,
        _DWORD *a12,
        _DWORD *a13,
        __int64 a14,
        char a15,
        PRTL_BITMAP BitMapHeader,
        __int64 a17)
{
  __int64 v17; // rbx
  unsigned int v18; // r14d
  _DWORD *v19; // r12
  unsigned int HotPatchSize; // eax
  __int64 v22; // rdx
  int *v23; // r8
  __int64 v24; // r9
  int v25; // r10d
  int *v26; // rcx
  __int64 v27; // rbp
  int v28; // r15d
  int v29; // r14d
  int v30; // r10d
  unsigned __int64 v31; // rax
  _QWORD *v32; // r9
  _BYTE *v33; // rbx
  unsigned int *v34; // rdx
  _QWORD *v35; // rax
  _WORD *v36; // r9
  __int64 v37; // r11
  __int64 v38; // rdx
  _QWORD *v39; // r11
  int v40; // r11d
  __int64 v41; // rcx
  int v42; // eax
  ULONG i; // r8d
  unsigned int v45; // ecx
  ULONG ClearBitsAndSet; // eax
  int v47; // [rsp+20h] [rbp-58h]
  __int64 v48; // [rsp+30h] [rbp-48h]
  unsigned int v51; // [rsp+A8h] [rbp+30h]
  __int64 v52; // [rsp+B0h] [rbp+38h]
  unsigned int v53; // [rsp+E8h] [rbp+70h]

  v51 = 0;
  v17 = 0LL;
  v47 = 0;
  v18 = a4;
  v19 = 0LL;
  v52 = 0LL;
  v48 = 0LL;
  if ( a14 )
  {
    HotPatchSize = RtlGetHotPatchSize(a13);
    v53 = HotPatchSize;
    while ( 1 )
    {
      v25 = *v23;
      v26 = v23;
      if ( !*v23 )
        break;
      v27 = 0LL;
      LOBYTE(v28) = 0;
      if ( v25 < 0 )
      {
        if ( (a15 & 2) != 0 )
        {
          v17 = v24;
          v19 = a12;
          v27 = a8;
          v51 = a11;
          v47 = a9;
          v22 = a1;
          v52 = a1;
          v48 = v24;
        }
      }
      else
      {
        v28 = a15 & 1;
        if ( (a15 & 1) != 0 )
        {
          v22 = a8;
          v17 = a9;
          v19 = a5;
          v52 = a8;
          v48 = a9;
          v51 = v18;
          v47 = v24;
        }
        HotPatchSize = v53;
        v27 = a1 & -(__int64)(v28 != 0);
      }
      ++v23;
      v29 = v25 & 0xFC000;
      v30 = v25 & 0xFFF;
      if ( v27 )
      {
        if ( v30 )
        {
          while ( 1 )
          {
            v31 = (unsigned int)v23[1];
            v32 = (_QWORD *)(v27 + (unsigned int)*v23);
            v33 = (_BYTE *)(v31 + v17);
            switch ( v29 )
            {
              case 114688:
                v34 = 0LL;
                if ( v53 != 2 )
                  v34 = (unsigned int *)(v23 + 2);
                v35 = (_QWORD *)RtlpCheckFunctionPatchApplied(v27 + (unsigned int)*v23, v34, v23, v32);
                if ( v35 == (_QWORD *)-1LL )
                  return 3221225496LL;
                if ( v35 )
                {
                  *v35 = v33;
                  v38 = ((__int64)v35 - v37) >> 3;
                }
                else
                {
                  v38 = (unsigned int)*v19;
                  if ( (unsigned int)v38 >= v51 )
                    return 3221226668LL;
                  v39 = (_QWORD *)(v37 + 8 * v38);
                  *v39 = v33;
                  v40 = v47 + (_DWORD)v39 - v27;
                  if ( a17 && (_BYTE)v28 )
                  {
                    v41 = 3 * v38;
                    *(_DWORD *)(a17 + 2 * v41) = *v23;
                    *(_WORD *)(a17 + 2 * v41 + 4) = *v36;
                  }
                  v42 = v47 + *v23;
                  *(v36 - 3) = 9727;
                  *((_DWORD *)v36 - 1) = v40 - v42;
                  *v36 = -1813;
                  ++*v19;
                }
                if ( BitMapHeader && (_BYTE)v28 )
                  _bittestandset((signed __int32 *)BitMapHeader->Buffer, v38);
                v22 = v52;
                break;
              case 180224:
                *v32 = v33;
                break;
              case 376832:
                *v32 = *(_QWORD *)(v31 + v22);
                break;
              default:
                if ( v29 == 491520 && *(_BYTE *)v31 == 0xFF )
                  *v32 += *(_QWORD *)(8 * v31);
                break;
            }
            v17 = v48;
            v23 += v53;
            if ( !--v30 )
            {
              v24 = a2;
              break;
            }
          }
        }
      }
      else
      {
        v23 = &v26[HotPatchSize * v30 + 1];
      }
      if ( !v23 )
        break;
      HotPatchSize = v53;
      v18 = a4;
    }
  }
  if ( BitMapHeader )
  {
    for ( i = 0; ; i = ClearBitsAndSet )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(BitMapHeader, 1u, i);
      if ( ClearBitsAndSet == -1 )
        break;
      v45 = *(_DWORD *)(a17 + 6LL * ClearBitsAndSet);
      if ( v45 )
      {
        *(_WORD *)(v45 + a1) = *(_WORD *)(a17 + 6LL * ClearBitsAndSet + 4);
        *(_DWORD *)(a17 + 6LL * ClearBitsAndSet) = 0;
      }
    }
  }
  return 0LL;
}
