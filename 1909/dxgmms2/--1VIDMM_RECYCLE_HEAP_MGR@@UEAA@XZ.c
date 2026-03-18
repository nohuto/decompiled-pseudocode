/*
 * XREFs of ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C006515C
 * Callers:
 *     ??_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z @ 0x1C0001E30 (--_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001710 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001E74 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0001EBC (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0001EE4 (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00021D8 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002280 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003750 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0018050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0064720 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP@@QEAA@XZ @ 0x1C0065550 (--1VIDMM_RECYCLE_HEAP@@QEAA@XZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C0067778 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00693D0 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1C0082374 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::~VIDMM_RECYCLE_HEAP_MGR(VIDMM_RECYCLE_HEAP_MGR *this)
{
  char *v2; // rdx
  __int64 v3; // rax
  char **v4; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v5; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v6; // rdi
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  struct _SLIST_ENTRY **v9; // rsi
  __int64 v10; // r15
  struct _SLIST_ENTRY *v11; // r14
  __int64 v12; // rdi
  struct _SLIST_ENTRY *v13; // r14
  __int64 v14; // rdi
  struct _LOOKASIDE_LIST_EX *v15; // rcx
  struct _LOOKASIDE_LIST_EX *v16; // rcx
  void *v17; // rcx
  VIDMM_RECYCLE_RANGE *v18; // rsi
  unsigned __int8 v19; // dl
  struct VIDMM_RECYCLE_RANGE *v20; // r14
  unsigned __int8 v21; // dl
  bool v22; // [rsp+30h] [rbp-39h] BYREF
  int v23; // [rsp+34h] [rbp-35h] BYREF
  _BYTE v24[16]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v25[24]; // [rsp+48h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-9h] BYREF

  *(_QWORD *)this = &VIDMM_RECYCLE_HEAP_MGR::`vftable';
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(**((PRKPROCESS **)this + 1), &ApcState);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v25,
    (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock);
  v2 = (char *)this + 1592;
  v3 = *((_QWORD *)this + 199);
  if ( v3 )
  {
    if ( *(char **)(v3 + 8) != v2 || (v4 = (char **)*((_QWORD *)this + 200), *v4 != v2) )
      __fastfail(3u);
    *v4 = (char *)v3;
    *(_QWORD *)(v3 + 8) = v4;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  _InterlockedExchange((volatile __int32 *)this + 394, 1);
  v5 = (VIDMM_RECYCLE_HEAP_MGR *)*((unsigned int *)this + 382);
  if ( (_DWORD)v5 && !KeCancelTimer((PKTIMER)((char *)this + 1368)) )
  {
    KeFlushQueuedDpcs();
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
    KeWaitForSingleObject(*((PVOID *)this + 198), Executive, 0, 0, 0LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  }
  v6 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 192);
  while ( v6 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1536) )
  {
    v20 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v6 - 104);
    v6 = *(VIDMM_RECYCLE_HEAP_MGR **)v6;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v5, v20);
    v22 = 0;
    VIDMM_RECYCLE_RANGE::FinalizedUnlock(v20, &v22);
    if ( !v22 )
    {
      v5 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v20 + 17);
      if ( v5 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v5, v21);
    }
  }
  v7 = (_QWORD *)((char *)this + 1552);
  while ( 1 )
  {
    v8 = (_QWORD *)*v7;
    if ( (_QWORD *)*v7 == v7 )
      break;
    v18 = (VIDMM_RECYCLE_RANGE *)(v8 - 13);
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v5, (struct VIDMM_RECYCLE_RANGE *)(v8 - 13));
    VIDMM_RECYCLE_RANGE::DebouncedDecommit(v18, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v23);
    if ( !v23 )
    {
      v5 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v18 + 17);
      if ( v5 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v5, v19);
    }
  }
  v9 = (struct _SLIST_ENTRY **)((char *)this + 1648);
  v10 = 4LL;
  do
  {
    v11 = *(v9 - 4);
    if ( v11 )
    {
      v12 = *((_QWORD *)this + 164);
      ++*(_DWORD *)(v12 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v12) >= *(_WORD *)(v12 + 16) )
      {
        ++*(_DWORD *)(v12 + 32);
        (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v12 + 56))(v11, v12);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v12, v11);
      }
    }
    v13 = *v9;
    if ( *v9 )
    {
      v14 = *((_QWORD *)this + 165);
      ++*(_DWORD *)(v14 + 28);
      if ( ExQueryDepthSList((PSLIST_HEADER)v14) >= *(_WORD *)(v14 + 16) )
      {
        ++*(_DWORD *)(v14 + 32);
        (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v14 + 56))(v13, v14);
      }
      else
      {
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v14, v13);
      }
    }
    ++v9;
    --v10;
  }
  while ( v10 );
  v15 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 164);
  if ( v15 )
  {
    ExDeleteLookasideListEx(v15);
    operator delete(*((void **)this + 164));
  }
  v16 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 165);
  if ( v16 )
  {
    ExDeleteLookasideListEx(v16);
    operator delete(*((void **)this + 165));
  }
  v17 = (void *)*((_QWORD *)this + 198);
  if ( v17 )
    operator delete(v17);
  KeUnstackDetachProcess(&ApcState);
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  DXGFASTMUTEX::~DXGFASTMUTEX((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1240));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1168));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1096));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1024));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 952));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 880));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 808));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 736));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 664));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 592));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 520));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 448));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 376));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 304));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 232));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 160));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 88));
  VIDMM_RECYCLE_HEAP::~VIDMM_RECYCLE_HEAP((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 16));
  *(_QWORD *)this = &VIDMM_PROCESS_HEAP_INTERFACE::`vftable';
}
