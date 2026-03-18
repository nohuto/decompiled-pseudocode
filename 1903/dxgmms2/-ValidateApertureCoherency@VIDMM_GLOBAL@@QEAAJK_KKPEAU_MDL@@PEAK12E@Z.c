/*
 * XREFs of ?ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z @ 0x1C00C2EC4
 * Callers:
 *     ?RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00C2AD8 (-RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z @ 0x1C005A0C4 (-FlushPagingBuffer@VIDMM_GLOBAL@@QEAAXEP6AXPEAX@Z0@Z.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C005D3F0 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0081FE8 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 */

__int64 __fastcall VIDMM_GLOBAL::ValidateApertureCoherency(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        union _LARGE_INTEGER a3,
        unsigned int a4,
        struct _MDL *a5,
        unsigned int *a6,
        struct _MDL *a7,
        unsigned int *a8,
        unsigned __int8 a9)
{
  __int64 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned int v13; // edi
  unsigned int *v14; // r12
  unsigned int v15; // r14d
  __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // rcx
  unsigned int v19; // r15d
  signed __int64 v20; // r13
  unsigned int *v21; // r12
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rcx
  union _LARGE_INTEGER v34; // [rsp+60h] [rbp-59h] BYREF
  __int64 v35; // [rsp+68h] [rbp-51h]
  __int64 v36; // [rsp+70h] [rbp-49h] BYREF
  __int64 v37; // [rsp+78h] [rbp-41h] BYREF
  union _LARGE_INTEGER v38; // [rsp+80h] [rbp-39h] BYREF
  union _LARGE_INTEGER v39; // [rsp+88h] [rbp-31h] BYREF
  union _LARGE_INTEGER v40; // [rsp+90h] [rbp-29h] BYREF
  _QWORD v41[11]; // [rsp+98h] [rbp-21h] BYREF
  union _LARGE_INTEGER v42; // [rsp+100h] [rbp+47h] BYREF
  union _LARGE_INTEGER v43; // [rsp+110h] [rbp+57h]

  v43 = a3;
  v37 = 0LL;
  v36 = 0LL;
  v42.QuadPart = 0LL;
  v10 = a2;
  v11 = a4;
  memset(v41, 0, 0x20uLL);
  v12 = *((_QWORD *)this + 464);
  v13 = a9;
  v14 = a6;
  BYTE4(v41[1]) = a9;
  v41[3] = this;
  v41[2] = *(_QWORD *)(v12 + 8 * v11);
  memset(a6, 186, 0x1000uLL);
  memset(a8, 205, 0x1000uLL);
  v15 = v13;
  v16 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v11);
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, struct _MDL *, _QWORD, __int64 *, union _LARGE_INTEGER *))(*(_QWORD *)v16 + 200LL))(
          v16,
          1LL,
          a5,
          v13,
          &v37,
          &v38);
  if ( v17 >= 0 )
  {
    v18 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v11);
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, struct _MDL *, _QWORD, __int64 *, union _LARGE_INTEGER *))(*(_QWORD *)v18 + 200LL))(
            v18,
            1LL,
            a7,
            v15,
            &v36,
            &v42);
    if ( v17 >= 0 )
    {
      v35 = v10;
      v19 = 0;
      v20 = (char *)v14 - (char *)a8;
      do
      {
        v21 = a8;
        v22 = 0LL;
        while ( 1 )
        {
          VIDMM_GLOBAL::FlushPagingBuffer(this, 1u, 0LL, 0LL);
          v23 = *((_QWORD *)this + 464);
          v34 = v43;
          v39 = v38;
          VIDMM_GLOBAL::MemoryTransferInternal(
            this,
            0,
            0LL,
            0x1000uLL,
            0LL,
            *(struct VIDMM_SEGMENT **)(v23 + 8 * v11),
            &v39,
            0LL,
            *(struct VIDMM_SEGMENT **)(v23 + 8 * v35),
            &v34,
            0LL,
            0);
          v24 = *((_QWORD *)this + 464);
          v40 = v42;
          VIDMM_GLOBAL::MemoryTransferInternal(
            this,
            0,
            0LL,
            0x1000uLL,
            0LL,
            *(struct VIDMM_SEGMENT **)(v24 + 8 * v35),
            &v34,
            0LL,
            *(struct VIDMM_SEGMENT **)(v24 + 8 * v11),
            &v40,
            0LL,
            0);
          LODWORD(v41[1]) = v19 + 868941431;
          v41[0] = &a6[v22];
          VIDMM_GLOBAL::FlushPagingBuffer(this, 0, (void (*)(void *))VIDMM_SEGMENT::Defragment, v41);
          VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
          v25 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v11);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 72LL))(v25);
          VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
          if ( *(unsigned int *)((char *)v21 + v20) != *v21 )
            break;
          v22 = (unsigned int)(v22 + 1);
          ++v21;
          if ( (unsigned int)v22 >= 0x400 )
            goto LABEL_12;
        }
        v28 = WdLogNewEntry5_WdAssertion(v27, v26);
        v29 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v11);
        if ( (*(_DWORD *)(v29 + 80) & 0x1000) != 0 )
          v30 = 0;
        else
          v30 = *(_DWORD *)(v29 + 16) + 1;
        *(_QWORD *)(v28 + 24) = v30;
        WdLogEvent5_WdAssertion(v28);
        v17 = -1073741823;
LABEL_12:
        ++v19;
      }
      while ( v19 < 0xA );
    }
  }
  if ( v36 )
  {
    v31 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v11);
    (*(void (__fastcall **)(__int64, __int64, struct _MDL *))(*(_QWORD *)v31 + 208LL))(v31, 1LL, a7);
  }
  if ( v37 )
  {
    v32 = *(_QWORD *)(*((_QWORD *)this + 464) + 8 * v11);
    (*(void (__fastcall **)(__int64, __int64, struct _MDL *))(*(_QWORD *)v32 + 208LL))(v32, 1LL, a5);
  }
  return (unsigned int)v17;
}
