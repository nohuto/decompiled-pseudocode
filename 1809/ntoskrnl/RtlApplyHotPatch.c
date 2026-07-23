/*
 * XREFs of RtlApplyHotPatch @ 0x14057F148
 * Callers:
 *     MiApplyImageHotPatchDpc @ 0x14057D730 (MiApplyImageHotPatchDpc.c)
 *     MiApplyImageHotPatch @ 0x1408558E8 (MiApplyImageHotPatch.c)
 *     MiPerformImageHotPatch @ 0x140857EE0 (MiPerformImageHotPatch.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1400D9660 (RtlFindClearBitsAndSet.c)
 *     RtlGetHotPatchSize @ 0x1402F8064 (RtlGetHotPatchSize.c)
 *     RtlpCheckFunctionPatchApplied @ 0x14057F480 (RtlpCheckFunctionPatchApplied.c)
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
  __int64 v17; // r13
  unsigned int v18; // ebp
  _DWORD *v19; // r15
  unsigned int HotPatchSize; // eax
  __int64 v22; // rdx
  int *v23; // r8
  __int64 v24; // r9
  __int64 v25; // r10
  int v26; // r11d
  int *v27; // rcx
  __int64 v28; // rsi
  int v29; // r14d
  int v30; // ebp
  int v31; // r11d
  unsigned __int64 v32; // rax
  _QWORD *v33; // r9
  _BYTE *v34; // r10
  unsigned int *v35; // rdx
  _QWORD *v36; // rax
  _WORD *v37; // r9
  __int64 v38; // r10
  __int64 v39; // rdx
  _QWORD *v40; // rax
  int v41; // r10d
  __int64 v42; // rcx
  int v43; // eax
  ULONG i; // r8d
  unsigned int v46; // ecx
  ULONG ClearBitsAndSet; // eax
  int v48; // [rsp+20h] [rbp-48h]
  __int64 v49; // [rsp+28h] [rbp-40h]
  unsigned int v53; // [rsp+98h] [rbp+30h]
  __int64 v54; // [rsp+A0h] [rbp+38h]
  unsigned int v55; // [rsp+D8h] [rbp+70h]

  v17 = 0LL;
  v53 = 0;
  v48 = 0;
  v18 = a4;
  v19 = 0LL;
  v54 = 0LL;
  v49 = 0LL;
  if ( a14 )
  {
    HotPatchSize = RtlGetHotPatchSize(a13);
    v55 = HotPatchSize;
    while ( 1 )
    {
      v26 = *v23;
      v27 = v23;
      if ( !*v23 )
        break;
      v28 = 0LL;
      LOBYTE(v29) = 0;
      if ( v26 < 0 )
      {
        if ( (a15 & 2) != 0 )
        {
          v25 = v24;
          v17 = a10;
          v19 = a12;
          v28 = a8;
          v53 = a11;
          v48 = a9;
          v22 = a1;
          v54 = a1;
          v49 = v24;
        }
      }
      else
      {
        v29 = a15 & 1;
        if ( (a15 & 1) != 0 )
        {
          v22 = a8;
          v25 = a9;
          v17 = a3;
          v19 = a5;
          v54 = a8;
          v49 = a9;
          v53 = v18;
          v48 = v24;
        }
        HotPatchSize = v55;
        v28 = a1 & -(__int64)(v29 != 0);
      }
      ++v23;
      v30 = v26 & 0xFC000;
      v31 = v26 & 0xFFF;
      if ( v28 )
      {
        if ( v31 )
        {
          while ( 1 )
          {
            v32 = (unsigned int)v23[1];
            v33 = (_QWORD *)(v28 + (unsigned int)*v23);
            v34 = (_BYTE *)(v32 + v25);
            switch ( v30 )
            {
              case 114688:
                v35 = 0LL;
                if ( v55 != 2 )
                  v35 = (unsigned int *)(v23 + 2);
                v36 = (_QWORD *)RtlpCheckFunctionPatchApplied(v28 + (unsigned int)*v23, v35, v23, v33);
                if ( v36 == (_QWORD *)-1LL )
                  return 3221225496LL;
                if ( v36 )
                {
                  *v36 = v38;
                  v39 = ((__int64)v36 - v17) >> 3;
                }
                else
                {
                  v39 = (unsigned int)*v19;
                  if ( (unsigned int)v39 >= v53 )
                    return 3221226668LL;
                  v40 = (_QWORD *)(v17 + 8 * v39);
                  *v40 = v38;
                  v41 = (_DWORD)v40 - v28 + v48;
                  if ( a17 && (_BYTE)v29 )
                  {
                    v42 = 3 * v39;
                    *(_DWORD *)(a17 + 2 * v42) = *v23;
                    *(_WORD *)(a17 + 2 * v42 + 4) = *v37;
                  }
                  v43 = v48 + *v23;
                  *(v37 - 3) = 9727;
                  *((_DWORD *)v37 - 1) = v41 - v43;
                  *v37 = -1813;
                  ++*v19;
                }
                if ( BitMapHeader && (_BYTE)v29 )
                  _bittestandset((signed __int32 *)BitMapHeader->Buffer, v39);
                v22 = v54;
                break;
              case 180224:
                *v33 = v34;
                break;
              case 376832:
                *v33 = *(_QWORD *)(v32 + v22);
                break;
              default:
                if ( v30 == 491520 && *(_BYTE *)v32 == 0xFF )
                  *v33 += *(_QWORD *)(8 * v32);
                break;
            }
            v25 = v49;
            v23 += v55;
            if ( !--v31 )
            {
              v24 = a2;
              break;
            }
          }
        }
      }
      else
      {
        v23 = &v27[HotPatchSize * v31 + 1];
      }
      if ( !v23 )
        break;
      HotPatchSize = v55;
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
      v46 = *(_DWORD *)(a17 + 6LL * ClearBitsAndSet);
      if ( v46 )
      {
        *(_WORD *)(v46 + a1) = *(_WORD *)(a17 + 6LL * ClearBitsAndSet + 4);
        *(_DWORD *)(a17 + 6LL * ClearBitsAndSet) = 0;
      }
    }
  }
  return 0LL;
}
