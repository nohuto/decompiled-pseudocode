/*
 * XREFs of ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C00813E8
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C00672A4 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     ?GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C00023C4 (-GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C001451C (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C00145E8 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     McTemplateK0pppppppqq @ 0x1C0028C34 (McTemplateK0pppppppqq.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0066C20 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0068620 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0081158 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C008150C (-CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 *     ?CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z @ 0x1C008157C (-CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_HEAP::CreateBlockAndRange(VIDMM_RECYCLE_HEAP_MGR **this)
{
  unsigned __int64 SmallAllocationSize; // rax
  char v3; // dl
  VIDMM_RECYCLE_HEAP_MGR *v4; // rcx
  unsigned __int8 v5; // r9
  unsigned __int64 SmallAllocationBlockSize; // r10
  unsigned __int64 *BlockForType; // rax
  __int64 v8; // rdi
  struct VIDMM_RECYCLE_RANGE *Range; // rbx
  __int64 v10; // r9
  PSLIST_ENTRY Multirange; // rax
  const GUID *v12; // r8
  PSLIST_ENTRY v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  const GUID *v16; // r8

  SmallAllocationSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
                          (VIDMM_RECYCLE_HEAP_MGR *)this,
                          (unsigned int)(*(_DWORD *)this - 5) <= 1);
  if ( SmallAllocationSize > SmallAllocationBlockSize )
    SmallAllocationBlockSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(v4, v3);
  BlockForType = (unsigned __int64 *)VIDMM_RECYCLE_HEAP::CreateBlockForType(v4, SmallAllocationBlockSize, v5);
  v8 = (__int64)BlockForType;
  if ( !BlockForType )
    return 0LL;
  Range = VIDMM_RECYCLE_HEAP_MGR::CreateRange(
            this[1],
            (struct VIDMM_RECYCLE_BLOCK *)BlockForType,
            BlockForType[5],
            BlockForType[6]);
  if ( !Range )
  {
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'((VIDMM_RECYCLE_BLOCK *)v8);
    return 0LL;
  }
  if ( (unsigned int)(*(_DWORD *)this - 3) <= 3 || (unsigned int)(*(_DWORD *)this - 9) <= 1 )
    *((_DWORD *)Range + 20) = 1;
  *((_QWORD *)Range + 16) = v8 + 72;
  *((_QWORD *)Range + 15) = v8 + 72;
  v10 = *(_QWORD *)(v8 + 40);
  *(_QWORD *)(v8 + 80) = (char *)Range + 120;
  *(_QWORD *)(v8 + 72) = (char *)Range + 120;
  Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange((__int64)this[1], 0, v8, v10, *(_QWORD *)(v8 + 48));
  v13 = Multirange;
  if ( !Multirange )
  {
    VIDMM_RECYCLE_HEAP_MGR::DestroyRange(this[1], Range, v12);
    return 0LL;
  }
  Multirange[4].Next = (struct _SLIST_ENTRY *)Range;
  *((_QWORD *)&Multirange[4].Next + 1) = Range;
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(*(_QWORD **)(v8 + 32), 2LL, (__int64)Multirange);
  *((_QWORD *)Range + 17) = v13;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0pppppppqq(
      v15,
      v14,
      v16,
      **((_QWORD **)this[1] + 1),
      Range,
      v8,
      *(_QWORD *)(v8 + 56),
      this,
      *((_QWORD *)Range + 4),
      *((_QWORD *)Range + 5),
      *(_DWORD *)this,
      *((_DWORD *)Range + 16));
  return (struct VIDMM_RECYCLE_MULTIRANGE *)v13;
}
