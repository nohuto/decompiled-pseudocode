/*
 * XREFs of ?BlockMemoryRanges@VIDMM_SEGMENT@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@W4_DXGK_QUERYADAPTERINFOTYPE@@IAEA_K@Z @ 0x1C00BC240
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C0086DD0 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0018A40 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     ?ValidateMemoryRanges@VIDMM_SEGMENT@@QEAAJIPEAU_DXGK_MEMORYRANGE@@AEA_K@Z @ 0x1C00BFA54 (-ValidateMemoryRanges@VIDMM_SEGMENT@@QEAAJIPEAU_DXGK_MEMORYRANGE@@AEA_K@Z.c)
 *     ?MarkMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00C5F50 (-MarkMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJW4_VIDMM_POOL_BLOCK_STATE@@IPEAU_DXGK_MEMORYRANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::BlockMemoryRanges(
        __int64 a1,
        unsigned __int8 a2,
        int a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rbx
  __int64 v7; // r15
  SIZE_T v10; // rax
  struct _DXGK_MEMORYRANGE *v11; // rax
  __int64 v12; // rcx
  struct _DXGK_MEMORYRANGE *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD v27[2]; // [rsp+20h] [rbp-58h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v28; // [rsp+30h] [rbp-48h] BYREF

  LODWORD(v5) = 0;
  v7 = a3;
  if ( a4 )
  {
    v10 = 16LL * a4;
    if ( !is_mul_ok(a4, 0x10uLL) )
      v10 = -1LL;
    v11 = (struct _DXGK_MEMORYRANGE *)operator new[](v10, 0x30306956u, PagedPool);
    v13 = v11;
    if ( !v11 )
    {
      _InterlockedIncrement(&dword_1C004D5C4);
      v14 = WdLogNewEntry5_WdLowResource(v12);
      LODWORD(v5) = -1073741801;
      *(_QWORD *)(v14 + 24) = a2;
      *(_QWORD *)(v14 + 32) = -1073741801LL;
      WdLogEvent5_WdLowResource(v14);
      return (unsigned int)v5;
    }
    memset(v11, 0, 16LL * a4);
    v27[1] = v13;
    v27[0] = 0LL;
    LOWORD(v27[0]) = *(_WORD *)(a1 + 16);
    WORD1(v27[0]) = *(_WORD *)(a1 + 380);
    v28.pInputData = v27;
    v15 = *(_QWORD *)(a1 + 8);
    HIDWORD(v27[0]) = a4;
    v28.InputDataSize = 16;
    v28.Type = v7;
    v16 = DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v15 + 24), &v28);
    v5 = v16;
    if ( v16 >= 0 )
    {
      v20 = VIDMM_SEGMENT::ValidateMemoryRanges((VIDMM_SEGMENT *)a1, a4, v13, a5);
      v5 = v20;
      if ( v20 >= 0 )
      {
        LOBYTE(v21) = a2;
        v23 = VIDMM_LINEAR_POOL::MarkMemoryBlocks(*(_QWORD *)(a1 + 152), v21, a4, v13);
        v5 = v23;
        if ( v23 >= 0 )
        {
LABEL_14:
          operator delete(v13);
          return (unsigned int)v5;
        }
        v19 = (_QWORD *)WdLogNewEntry5_WdAssertion(v25, v24);
        v19[5] = 523LL;
      }
      else
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdAssertion(v22, v21);
        v19[5] = 513LL;
      }
      v19[3] = a2;
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdAssertion(v18, v17);
      v19[3] = v7;
      v19[5] = 503LL;
    }
    v19[4] = v5;
    WdLogEvent5_WdAssertion(v19);
    goto LABEL_14;
  }
  return (unsigned int)v5;
}
