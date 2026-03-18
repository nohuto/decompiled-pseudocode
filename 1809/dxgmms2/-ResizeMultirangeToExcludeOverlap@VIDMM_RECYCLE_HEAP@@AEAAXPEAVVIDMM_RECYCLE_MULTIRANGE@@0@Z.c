/*
 * XREFs of ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C005C370
 * Callers:
 *     ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005D13C (-RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@.c)
 * Callees:
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C005A33C (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005AFAC (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C005B610 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005CDA8 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C005CF70 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005D0C8 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1C005D37C (-ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00B7668 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2,
        struct VIDMM_RECYCLE_MULTIRANGE *a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  unsigned int v10; // r14d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  struct VIDMM_RECYCLE_MULTIRANGE *v13; // r8
  __int64 v14; // rbx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  struct VIDMM_RECYCLE_RANGE *v16; // r13
  struct VIDMM_RECYCLE_RANGE *v17; // rsi
  PSLIST_ENTRY Multirange; // rax
  struct VIDMM_RECYCLE_MULTIRANGE *v19; // rbx
  struct VIDMM_RECYCLE_RANGE *i; // rcx
  int v21; // edx
  int v22; // edx
  int v23; // ecx
  int v24; // ecx
  __int64 v25; // rdx

  v3 = *((_QWORD *)a3 + 4);
  v5 = *((_QWORD *)a3 + 5);
  v7 = *((_QWORD *)a2 + 4);
  v8 = *((_QWORD *)a2 + 5);
  v10 = *((_DWORD *)a2 + 22);
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(this, v10, a2);
  if ( v3 > v7 )
  {
    if ( v5 >= v8 )
    {
      v12 = *((_QWORD *)a2 + 4);
      v11 = v3;
      goto LABEL_4;
    }
    v14 = *((_QWORD *)a2 + 5);
    NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(*((VIDMM_RECYCLE_RANGE **)a3 + 9));
    v16 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 9);
    v17 = NextRange;
    VIDMM_RECYCLE_MULTIRANGE::ShrinkTo(a2, *((_QWORD *)a2 + 4), v3);
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v10, a2);
    Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                   *((_QWORD *)this + 1),
                   *((_DWORD *)a2 + 54),
                   *((_QWORD *)a2 + 10),
                   v5,
                   v14);
    v19 = (struct VIDMM_RECYCLE_MULTIRANGE *)Multirange;
    if ( Multirange )
    {
      Multirange[4].Next = (struct _SLIST_ENTRY *)v17;
      *((_QWORD *)&Multirange[4].Next + 1) = v16;
      VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner((VIDMM_RECYCLE_MULTIRANGE *)Multirange);
      v13 = v19;
      goto LABEL_5;
    }
    while ( 1 )
    {
      v23 = *((_DWORD *)v17 + 16);
      if ( v23 )
      {
        v24 = v23 - 4;
        if ( v24 )
        {
          if ( v24 != 1 )
            goto LABEL_28;
          v25 = 1LL;
        }
        else
        {
          v25 = 0LL;
        }
      }
      else
      {
        v25 = 2LL;
      }
      VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v25, v17);
LABEL_28:
      if ( v17 == v16 )
        return;
      v17 = VIDMM_RECYCLE_RANGE::GetNextRange(v17);
    }
  }
  if ( v5 < v8 )
  {
    v11 = *((_QWORD *)a2 + 5);
    v12 = v5;
LABEL_4:
    VIDMM_RECYCLE_MULTIRANGE::ShrinkTo(a2, v12, v11);
    v13 = a2;
LABEL_5:
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v10, v13);
    return;
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v21 = *((_DWORD *)a2 + 54);
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        if ( v22 == 1 )
          *((_QWORD *)i + 19) = 0LL;
      }
      else
      {
        *((_QWORD *)i + 18) = 0LL;
      }
    }
    else
    {
      *((_QWORD *)i + 17) = 0LL;
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
      break;
  }
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), (struct _SLIST_ENTRY *)a2);
}
