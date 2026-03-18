/*
 * XREFs of ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0022DF0
 * Callers:
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C00112A4 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0015690 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreCombineRgn @ 0x1C00242A0 (GreCombineRgn.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C002EC40 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C00A2620 (EngUpdateDeviceSurface.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00B0C54 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00142F8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     Win32AllocateFromPagedLookasideList @ 0x1C002D9D0 (Win32AllocateFromPagedLookasideList.c)
 *     EngSetLastError @ 0x1C0094990 (EngSetLastError.c)
 *     memcmp @ 0x1C00C0490 (memcmp.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

__int64 __fastcall RGNOBJ::bMerge(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, unsigned __int8 a4)
{
  unsigned int *v4; // r14
  RGNOBJ *v5; // r15
  int *v6; // rsi
  int *v7; // rdi
  int v8; // r12d
  int v9; // r8d
  unsigned int *v10; // rbx
  unsigned int v11; // edx
  signed int v12; // ebp
  int *v13; // r9
  int *v14; // r13
  signed int v15; // ecx
  signed int v16; // edx
  unsigned __int8 v17; // r11
  int v18; // ecx
  _DWORD *v19; // r12
  int v20; // r10d
  unsigned __int8 v21; // al
  int v22; // edx
  __int64 v23; // r8
  unsigned int v24; // eax
  _DWORD *v25; // rcx
  signed int v26; // eax
  signed int v27; // eax
  signed int v28; // edx
  signed int v29; // eax
  int v30; // eax
  _BYTE *v31; // rax
  unsigned int v33; // r13d
  unsigned int v34; // ebp
  __int64 v35; // rbx
  int v36; // eax
  _QWORD *v37; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rbp
  int v42; // ecx
  int v43; // ecx
  _QWORD *v44; // r12
  _QWORD *v45; // r13
  _QWORD *v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rcx
  __int64 v50; // rbp
  __int64 v51; // r13
  _QWORD *v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rax
  _QWORD *v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rcx
  _QWORD *v59; // rax
  __int64 v60; // rbx
  __int64 v61; // rax
  _QWORD *v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // rbx
  BOOL v65; // [rsp+20h] [rbp-68h]
  __int64 v66; // [rsp+28h] [rbp-60h] BYREF
  int v67; // [rsp+30h] [rbp-58h]

  v4 = 0LL;
  v5 = this;
  v6 = (int *)(*(_QWORD *)a2 + 104LL);
  v7 = (int *)(*(_QWORD *)a3 + 104LL);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 40LL)
                 - 4LL
                 - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 40LL) - 4LL) + 16)
                 + 12) != 0x7FFFFFFF
    || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 40LL)
                 - 4LL
                 - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 40LL) - 4LL) + 16)
                 + 12) != 0x7FFFFFFF )
  {
    return 0LL;
  }
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + 104LL;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 104;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 88LL) = 0x7FFFFFFF;
  *(_DWORD *)(*(_QWORD *)this + 92LL) = 0x7FFFFFFF;
  *(_DWORD *)(*(_QWORD *)this + 96LL) = 0x80000000;
  *(_DWORD *)(*(_QWORD *)this + 100LL) = 0x80000000;
LABEL_4:
  v8 = 1;
  v9 = *(_DWORD *)(*(_QWORD *)v5 + 80LL);
  v10 = *(unsigned int **)(*(_QWORD *)v5 + 40LL);
  v11 = 4 * (*v6 + *v7) + 16;
  if ( v11 <= *(_DWORD *)(*(_QWORD *)v5 + 24LL) - v9 )
    goto LABEL_5;
  v33 = v11 + 2 * v9;
  v67 = 0;
  if ( v33 < 0xD8 )
    v33 = 216;
  v34 = v33;
  if ( gulGdiHmgrTraceObjectType == 4 )
    v34 = v33 + 160;
  else
    v8 = 0;
  if ( dword_1C02149A0 >= v34 )
  {
    v35 = Win32AllocateFromPagedLookasideList(qword_1C02158D0);
    if ( v35 )
    {
      *(_QWORD *)v35 = 0LL;
      *(_QWORD *)(v35 + 8) = 0LL;
      *(_QWORD *)(v35 + 16) = 0LL;
      if ( v8 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v34 + v35 - 160), 0LL);
      *(_WORD *)(v35 + 14) = 0x8000;
      goto LABEL_59;
    }
LABEL_107:
    EngSetLastError(8u);
    v35 = 0LL;
    goto LABEL_60;
  }
  v35 = 0LL;
  if ( v34 && (int)IsWin32AllocPoolImplSupported() >= 0 )
    v35 = Win32AllocPoolImpl(33LL, v34, 875587655LL);
  if ( !v35 )
    goto LABEL_107;
  *(_QWORD *)v35 = 0LL;
  *(_QWORD *)(v35 + 8) = 0LL;
  *(_QWORD *)(v35 + 16) = 0LL;
  if ( v8 )
    RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v35 + v34 - 160LL), 0LL);
LABEL_59:
  *(_DWORD *)(v35 + 80) = 120;
  *(_QWORD *)(v35 + 84) = 1LL;
  *(_QWORD *)(v35 + 92) = 0LL;
  *(_DWORD *)(v35 + 100) = 0;
  *(_DWORD *)(v35 + 104) = 0;
  v36 = *(_DWORD *)(v35 + 104);
  *(_DWORD *)(v35 + 108) = 0x80000000;
  *(_QWORD *)(v35 + 112) = 0x7FFFFFFFLL;
  *(_QWORD *)(v35 + 40) = v35 + 104 + (unsigned int)(4 * v36 + 16);
  *(_DWORD *)(v35 + 24) = v33;
  *(_QWORD *)(v35 + 28) = 0LL;
  *(_DWORD *)(v35 + 36) = 0;
  *(_QWORD *)(v35 + 56) = v35 + 48;
  *(_QWORD *)(v35 + 48) = v35 + 48;
LABEL_60:
  v66 = v35;
  if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
  {
    if ( !v35 )
      goto LABEL_112;
    v37 = (_QWORD *)(v35 + 48);
    if ( v35 != -48 )
    {
      KeEnterCriticalRegion();
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      *(_QWORD *)(v35 + 64) = v35;
      *(_QWORD *)(v35 + 72) = CleanUpRegion;
      if ( ThreadWin32Thread )
      {
        v39 = *(_QWORD *)(ThreadWin32Thread + 88);
        v40 = (_QWORD *)(ThreadWin32Thread + 88);
        if ( *(_QWORD **)(v39 + 8) != v40 )
          goto LABEL_111;
        *v37 = v39;
        *(_QWORD *)(v35 + 56) = v40;
        *(_QWORD *)(v39 + 8) = v37;
        *v40 = v37;
      }
      else
      {
        *(_QWORD *)(v35 + 56) = v35 + 48;
        *v37 = v37;
      }
      KeLeaveCriticalRegion();
    }
  }
  if ( v35 )
  {
    memmove((void *)(v35 + 80), (const void *)(*(_QWORD *)v5 + 80LL), *(unsigned int *)(*(_QWORD *)v5 + 80LL) - 80LL);
    v41 = v35 + 48;
    *(_QWORD *)(v35 + 40) = (int)(*(_DWORD *)(*(_QWORD *)v5 + 40LL) - *(_QWORD *)v5 - 104) + v35 + 104;
    v42 = *(_DWORD *)(*(_QWORD *)v5 + 32LL);
    *(_DWORD *)(*(_QWORD *)v5 + 32LL) = *(_DWORD *)(v35 + 32);
    *(_DWORD *)(v35 + 32) = v42;
    v43 = *(_DWORD *)(*(_QWORD *)v5 + 36LL);
    *(_DWORD *)(*(_QWORD *)v5 + 36LL) = *(_DWORD *)(v35 + 36);
    *(_DWORD *)(v35 + 36) = v43;
    v44 = (_QWORD *)(*(_QWORD *)v5 + 48LL);
    v45 = (_QWORD *)*v44;
    v65 = *(_QWORD *)v41 == v41;
    if ( *(_QWORD *)v5 != -48LL )
    {
      KeEnterCriticalRegion();
      v46 = (_QWORD *)*v44;
      if ( *(_QWORD **)(*v44 + 8LL) != v44 || (v47 = (_QWORD *)v44[1], (_QWORD *)*v47 != v44) )
LABEL_111:
        __fastfail(3u);
      *v47 = v46;
      v46[1] = v47;
      v44[1] = v44;
      *v44 = v44;
      KeLeaveCriticalRegion();
    }
    if ( v35 != -48 )
    {
      KeEnterCriticalRegion();
      v48 = *(_QWORD *)v41;
      if ( *(_QWORD *)(*(_QWORD *)v41 + 8LL) != v41 )
        goto LABEL_111;
      v49 = *(_QWORD **)(v35 + 56);
      if ( *v49 != v41 )
        goto LABEL_111;
      *v49 = v48;
      *(_QWORD *)(v48 + 8) = v49;
      *(_QWORD *)(v35 + 56) = v35 + 48;
      *(_QWORD *)v41 = v41;
      KeLeaveCriticalRegion();
    }
    v50 = *(_QWORD *)v5;
    *(_QWORD *)v5 = v35;
    if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
    {
      if ( v45 != v44 )
      {
        v51 = *(_QWORD *)v5;
        v52 = (_QWORD *)(*(_QWORD *)v5 + 48LL);
        if ( *(_QWORD *)v5 != -48LL )
        {
          KeEnterCriticalRegion();
          v53 = W32GetThreadWin32Thread(KeGetCurrentThread());
          v52[2] = v51;
          v52[3] = CleanUpRegion;
          if ( v53 )
          {
            v54 = *(_QWORD *)(v53 + 88);
            v55 = (_QWORD *)(v53 + 88);
            if ( *(_QWORD **)(v54 + 8) != v55 )
              goto LABEL_111;
            *v52 = v54;
            v52[1] = v55;
            *(_QWORD *)(v54 + 8) = v52;
            *v55 = v52;
          }
          else
          {
            v52[1] = v52;
            *v52 = v52;
          }
          KeLeaveCriticalRegion();
        }
      }
      if ( !v65 )
      {
        v56 = (_QWORD *)(v50 + 48);
        if ( v50 != -48 )
        {
          KeEnterCriticalRegion();
          v57 = W32GetThreadWin32Thread(KeGetCurrentThread());
          *(_QWORD *)(v50 + 64) = v50;
          *(_QWORD *)(v50 + 72) = CleanUpRegion;
          if ( v57 )
          {
            v58 = *(_QWORD *)(v57 + 88);
            v59 = (_QWORD *)(v57 + 88);
            if ( *(_QWORD **)(v58 + 8) != v59 )
              goto LABEL_111;
            *v56 = v58;
            *(_QWORD *)(v50 + 56) = v59;
            *(_QWORD *)(v58 + 8) = v56;
            *v59 = v56;
          }
          else
          {
            *(_QWORD *)(v50 + 56) = v50 + 48;
            *v56 = v56;
          }
          KeLeaveCriticalRegion();
        }
      }
    }
    if ( v50 )
    {
      v60 = v50 + 48;
      if ( v50 != -48 )
      {
        KeEnterCriticalRegion();
        v61 = *(_QWORD *)v60;
        if ( *(_QWORD *)(*(_QWORD *)v60 + 8LL) != v60 )
          goto LABEL_111;
        v62 = *(_QWORD **)(v50 + 56);
        if ( *v62 != v60 )
          goto LABEL_111;
        *v62 = v61;
        *(_QWORD *)(v61 + 8) = v62;
        *(_QWORD *)(v50 + 56) = v50 + 48;
        *(_QWORD *)v60 = v60;
        KeLeaveCriticalRegion();
      }
      if ( (struct REGION *)v50 != prgnDefault )
      {
        if ( *(__int16 *)(v50 + 14) >= 0 )
        {
          Win32FreePool(v50);
        }
        else
        {
          v63 = qword_1C02158D0;
          if ( (int)IsWin32FreeToPagedLookasideListImplSupported() >= 0 )
            Win32FreeToPagedLookasideListImpl(v63, v50);
        }
      }
    }
    v64 = *(_QWORD *)v5;
    v66 = 0LL;
    v10 = *(unsigned int **)(v64 + 40);
    if ( v4 )
      v4 = &v10[-*(v10 - 1) - 4];
LABEL_5:
    v12 = v6[2];
    v13 = v6 + 3;
    v14 = v7 + 3;
    v15 = v7[1];
    v16 = v6[1];
    v17 = a4;
    if ( v12 >= v7[2] )
      v12 = v7[2];
    v10[2] = v12;
    if ( v16 <= v15 )
      v16 = v15;
    v10[1] = v16;
    v18 = *v6;
    v19 = v10 + 3;
    v20 = *v7;
    v21 = 1;
    *v10 = 0;
    while ( 1 )
    {
      if ( v18 )
      {
        v22 = *v13;
        v23 = v21;
        if ( v20 )
        {
          v30 = *v14;
          if ( v22 < *v14 )
          {
            v31 = byte_1C01E2668;
          }
          else
          {
            ++v14;
            --v20;
            if ( v22 > v30 )
            {
              v22 = v30;
              v31 = byte_1C01E2658;
LABEL_42:
              v21 = v31[v23];
              goto LABEL_13;
            }
            v31 = &unk_1C01E2648;
          }
          ++v13;
          --v18;
          goto LABEL_42;
        }
        v21 = byte_1C01E2668[v21];
        ++v13;
        --v18;
      }
      else
      {
        if ( !v20 )
        {
          v5 = this;
          v10[*v10 + 3] = *v10;
          if ( v4 && *v4 == *v10 && !memcmp(v4 + 3, v10 + 3, 4LL * *v4) )
          {
            v24 = v10[2];
            v10 = v4;
            v4[2] = v24;
          }
          else if ( v4 != v10 )
          {
            *(_QWORD *)(*(_QWORD *)this + 40LL) = &v10[*v10 + 4];
            *(_DWORD *)(*(_QWORD *)this + 80LL) += 4 * *v10 + 16;
            ++*(_DWORD *)(*(_QWORD *)this + 84LL);
          }
          if ( v10[2] == 0x7FFFFFFF )
            return 1LL;
          if ( *v10 )
          {
            v25 = *(_DWORD **)this;
            v26 = v10[3];
            if ( v26 < *(_DWORD *)(*(_QWORD *)this + 88LL) )
            {
              v25[22] = v26;
              v25 = *(_DWORD **)this;
            }
            v27 = v10[1];
            if ( v27 < v25[23] )
            {
              v25[23] = v27;
              v25 = *(_DWORD **)this;
            }
            v28 = v10[*v10 + 2];
            if ( v28 > v25[24] )
            {
              v25[24] = v28;
              v25 = *(_DWORD **)this;
            }
            v29 = v10[2];
            if ( v29 > v25[25] )
              v25[25] = v29;
          }
          if ( v12 == v6[2] )
            v6 = (int *)((char *)v6 + (unsigned int)(4 * *v6 + 16));
          if ( v12 == v7[2] )
            v7 = (int *)((char *)v7 + (unsigned int)(4 * *v7 + 16));
          if ( (unsigned __int64)v6 >= *(_QWORD *)(*(_QWORD *)a2 + 40LL)
            || (unsigned __int64)v7 >= *(_QWORD *)(*(_QWORD *)a3 + 40LL) )
          {
            return 0LL;
          }
          v4 = v10;
          goto LABEL_4;
        }
        v22 = *v14++;
        --v20;
        v21 = byte_1C01E2658[v21];
      }
LABEL_13:
      if ( (v17 & v21) != 0 )
      {
        ++*v10;
        *v19++ = v22;
        v17 ^= 0xFu;
      }
    }
  }
LABEL_112:
  EngSetLastError(8u);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v66);
  return 0LL;
}
