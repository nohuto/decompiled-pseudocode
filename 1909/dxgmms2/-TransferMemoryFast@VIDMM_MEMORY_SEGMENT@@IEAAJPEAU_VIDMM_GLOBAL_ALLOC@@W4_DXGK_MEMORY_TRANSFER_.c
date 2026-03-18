/*
 * XREFs of ?TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N@Z @ 0x1C0082F34
 * Callers:
 *     ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C0082E94 (-TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00830D8 (-ReleaseTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0083134 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 *     ?VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1C0083B54 (-VidMmGetMDLForRange@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::TransferMemoryFast(
        VIDMM_MEMORY_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _DXGK_MEMORY_TRANSFER_DIRECTION a3,
        struct VIDMM_SEGMENT *a4,
        union _LARGE_INTEGER a5,
        bool *a6)
{
  __int64 v8; // rdx
  __int64 v11; // r9
  __int64 v12; // rcx
  char v13; // r15
  __int64 v14; // rcx
  int v15; // edi
  struct _MDL *MDLForRange; // rax
  struct _MDL *v17; // rdx
  int v18; // eax
  struct _MDL *v19; // r10
  struct _MDL *v20; // r11
  struct VIDMM_SEGMENT *v21; // rdx
  union _LARGE_INTEGER *v22; // rax
  union _LARGE_INTEGER *v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v27; // rax
  struct _MDL *v28; // [rsp+60h] [rbp-38h] BYREF
  char v29; // [rsp+A0h] [rbp+8h] BYREF

  v8 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v8 + 7040) & 0x400) == 0 )
  {
    v11 = *((_QWORD *)a2 + 1);
    v12 = 1560LL * *((unsigned int *)this + 95);
    v29 = 0;
    v13 = *(_BYTE *)(v12 + *(_QWORD *)(v8 + 40184) + 436);
    v14 = *((_QWORD *)a2 + 33);
    v28 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64, _BYTE, char *, struct _MDL **))(*(_QWORD *)v14 + 96LL))(
            v14,
            a2,
            0LL,
            v11,
            0,
            &v29,
            &v28);
    if ( v15 >= 0 )
    {
      MDLForRange = VidMmGetMDLForRange(a2, 0LL, *((_QWORD *)a2 + 1));
      v28 = MDLForRange;
      v17 = MDLForRange;
      if ( MDLForRange )
      {
        if ( !v29 )
        {
          v18 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, _QWORD, struct _MDL *))(**((_QWORD **)a2 + 33) + 112LL))(
                  *((_QWORD *)a2 + 33),
                  a2,
                  0LL,
                  *((_QWORD *)a2 + 1),
                  MDLForRange);
          v17 = v28;
          v15 = v18;
        }
        if ( v15 >= 0 )
        {
          v19 = 0LL;
          v20 = 0LL;
          if ( (v13 & 4) != 0 )
          {
            if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
              v19 = v17;
            else
              v20 = v17;
            v21 = 0LL;
            v22 = &a5;
            v23 = &a5;
            if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
            {
              v22 = 0LL;
            }
            else
            {
              v21 = a4;
              a4 = 0LL;
              v23 = 0LL;
            }
          }
          else if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
          {
            v23 = &a5;
            v22 = (union _LARGE_INTEGER *)((char *)a2 + 256);
            v21 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 33);
          }
          else
          {
            v21 = a4;
            v22 = &a5;
            a4 = (struct VIDMM_SEGMENT *)*((_QWORD *)a2 + 33);
            v23 = (union _LARGE_INTEGER *)((char *)a2 + 256);
          }
          VIDMM_GLOBAL::MemoryTransfer(
            *((VIDMM_GLOBAL **)this + 1),
            a2,
            *((_QWORD *)a2 + 1),
            0LL,
            v21,
            v22,
            v19,
            a4,
            v23,
            v20,
            0);
          if ( (*((_DWORD *)a2 + 21) & 4) != 0 )
          {
            v27 = WdLogNewEntry5_WdEvent(v25, v24);
            *(_QWORD *)(v27 + 24) = a2;
            WdLogEvent5_WdEvent(v27);
            *a6 = 1;
          }
          else
          {
            VIDMM_GLOBAL::ReleaseTemporaryResourcesForAllocation(*((VIDMM_GLOBAL **)this + 1), a2);
          }
          return (unsigned int)v15;
        }
      }
      else
      {
        v15 = -1071775487;
      }
      (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD))(**((_QWORD **)a2 + 33) + 104LL))(
        *((_QWORD *)a2 + 33),
        a2,
        0LL);
    }
    return (unsigned int)v15;
  }
  return 3223191809LL;
}
