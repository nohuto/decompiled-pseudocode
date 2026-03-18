/*
 * XREFs of ?TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@@Z @ 0x1C00BB92C
 * Callers:
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C007F404 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006F4CC (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ @ 0x1C0070FA4 (-IsTdrPending@VIDMM_GLOBAL@@QEBAEXZ.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C007F6B4 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C00800C4 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 *     ?Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00BBBFC (-Use64KbPagesForTransfer@@YAEPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_SEGMENT@@@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::TransferMemorySlow(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _DXGK_MEMORY_TRANSFER_DIRECTION a3,
        struct VIDMM_SEGMENT *a4,
        union _LARGE_INTEGER a5)
{
  unsigned __int64 v7; // r8
  __int64 v9; // r11
  __int64 v10; // rax
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  int v16; // esi
  struct _MDL *MDLForRange; // rdx
  int v18; // eax
  struct _MDL *v19; // r11
  struct _MDL *v20; // rsi
  struct VIDMM_SEGMENT *v21; // r8
  union _LARGE_INTEGER *v22; // rax
  union _LARGE_INTEGER *v23; // rcx
  struct VIDMM_SEGMENT *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  struct VIDMM_SEGMENT *v27; // [rsp+20h] [rbp-50h]
  struct _MDL *v28; // [rsp+60h] [rbp-10h] BYREF
  struct _DXGK_TRANSFERFLAGS v29[2]; // [rsp+68h] [rbp-8h]
  char v30; // [rsp+B0h] [rbp+40h] BYREF
  char v31; // [rsp+B8h] [rbp+48h]
  struct VIDMM_SEGMENT *v32; // [rsp+C8h] [rbp+58h]

  v32 = a4;
  *(_QWORD *)&v29[0].0 = 0LL;
  v7 = *((_QWORD *)a2 + 1);
  v9 = 1560LL * *((unsigned int *)this + 95);
  v10 = *((_QWORD *)this + 1);
  v30 = 0;
  v11 = 0LL;
  v12 = v7 >> 1;
  v31 = *(_BYTE *)(v9 + *(_QWORD *)(v10 + 40184) + 436);
  v28 = 0LL;
  if ( (v31 & 4) == 0 || (v13 = 0x10000LL, !Use64KbPagesForTransfer(a2, this)) )
    v13 = 4096LL;
  if ( v7 )
  {
    do
    {
      if ( VIDMM_GLOBAL::IsTdrPending(*((VIDMM_GLOBAL **)this + 1)) )
        return;
      v15 = ~(v13 - 1) & (v13 - 1 + v12);
      if ( (*(_DWORD *)(v14 + 7040) & 0x800) == 0 || v13 == v15 )
      {
        LOBYTE(v27) = v13 == v15;
        v16 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, struct VIDMM_SEGMENT *, char *, struct _MDL **))(**((_QWORD **)a2 + 33) + 96LL))(
                *((_QWORD *)a2 + 33),
                a2,
                v11,
                v15,
                v27,
                &v30,
                &v28);
        if ( v16 >= 0 )
        {
          MDLForRange = v28;
          if ( !v28 )
          {
            MDLForRange = VidMmGetMDLForRange(a2, v11, v15);
            v28 = MDLForRange;
            if ( !MDLForRange )
              v16 = -1071775487;
          }
          if ( v16 >= 0 )
          {
            if ( !v30 )
            {
              v18 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, struct _MDL *))(**((_QWORD **)a2 + 33) + 112LL))(
                      *((_QWORD *)a2 + 33),
                      a2,
                      v11,
                      v15,
                      MDLForRange);
              MDLForRange = v28;
              v16 = v18;
            }
            if ( v16 >= 0 )
            {
              v19 = 0LL;
              v20 = 0LL;
              if ( (v31 & 4) != 0 )
              {
                if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
                  v19 = MDLForRange;
                else
                  v20 = MDLForRange;
                v21 = v32;
                v22 = &a5;
                v23 = &a5;
                v24 = 0LL;
                if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
                  v22 = 0LL;
                else
                  v24 = v32;
                if ( a3 != DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
                {
                  v21 = 0LL;
                  v23 = 0LL;
                }
              }
              else if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
              {
                v21 = v32;
                v23 = &a5;
                v22 = (union _LARGE_INTEGER *)((char *)a2 + 256);
                v24 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 33);
              }
              else
              {
                v24 = v32;
                v22 = &a5;
                v23 = (union _LARGE_INTEGER *)((char *)a2 + 256);
                v21 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 33);
              }
              VIDMM_GLOBAL::MemoryTransfer(
                *((VIDMM_GLOBAL **)this + 1),
                a2,
                v15,
                v11,
                v24,
                v22,
                v19,
                v21,
                v23,
                v20,
                v29[0]);
              VIDMM_GLOBAL::WaitForAllPagingEngines(*((VIDMM_GLOBAL **)this + 1), a2);
              (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, unsigned __int64, unsigned __int64, struct _MDL *))(**((_QWORD **)a2 + 33) + 120LL))(
                *((_QWORD *)a2 + 33),
                a2,
                v11,
                v15,
                v28);
              LOBYTE(v25) = 1;
              (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, __int64))(**((_QWORD **)a2 + 33) + 104LL))(
                *((_QWORD *)a2 + 33),
                a2,
                v25);
              v26 = *((_QWORD *)a2 + 1);
              v11 += v15;
              v12 = v26 - v11;
              continue;
            }
          }
          (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD))(**((_QWORD **)a2 + 33) + 104LL))(
            *((_QWORD *)a2 + 33),
            a2,
            0LL,
            0LL);
        }
      }
      v26 = *((_QWORD *)a2 + 1);
      v12 = v15 >> 1;
    }
    while ( v11 != v26 );
  }
}
