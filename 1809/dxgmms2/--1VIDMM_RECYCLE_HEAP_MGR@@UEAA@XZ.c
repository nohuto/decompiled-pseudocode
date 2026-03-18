/*
 * XREFs of ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C005E47C
 * Callers:
 *     ??_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z @ 0x1C0001340 (--_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0001384 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C00013AC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00013D8 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0001448 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00023E8 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0018BA0 (__security_check_cookie.c)
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ @ 0x1C0059684 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXXZ.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C005A230 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005C270 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005DCEC (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP@@QEAA@XZ @ 0x1C005E780 (--1VIDMM_RECYCLE_HEAP@@QEAA@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::~VIDMM_RECYCLE_HEAP_MGR(VIDMM_RECYCLE_HEAP_MGR *this)
{
  char *v2; // rcx
  __int64 v3; // rax
  char **v4; // rdx
  VIDMM_RECYCLE_HEAP_MGR *v5; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v6; // rsi
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  struct _LOOKASIDE_LIST_EX *v9; // rcx
  struct _LOOKASIDE_LIST_EX *v10; // rcx
  void *v11; // rcx
  struct _SLIST_ENTRY **v12; // rsi
  struct VIDMM_RECYCLE_RANGE *v13; // rbx
  int v14; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v15[16]; // [rsp+40h] [rbp-21h] BYREF
  _BYTE v16[24]; // [rsp+50h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp+7h] BYREF

  *(_QWORD *)this = &VIDMM_RECYCLE_HEAP_MGR::`vftable';
  KeStackAttachProcess(**((PRKPROCESS **)this + 1), &ApcState);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v16,
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
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1328));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  _InterlockedExchange((volatile __int32 *)this + 394, 1);
  v5 = (VIDMM_RECYCLE_HEAP_MGR *)*((unsigned int *)this + 382);
  if ( (_DWORD)v5 && !KeCancelTimer((PKTIMER)((char *)this + 1368)) )
  {
    KeFlushQueuedDpcs();
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
    KeWaitForSingleObject(*((PVOID *)this + 198), Executive, 0, 0, 0LL);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  }
  v6 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 192);
  while ( v6 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1536) )
  {
    v13 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)v6 - 104);
    v6 = *(VIDMM_RECYCLE_HEAP_MGR **)v6;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v5, v13);
    VIDMM_RECYCLE_RANGE::FinalizedUnlock(v13);
    v5 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)v13 + 17);
    if ( v5 )
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible((struct _SLIST_ENTRY *)v5);
  }
  v7 = (_QWORD *)((char *)this + 1552);
  while ( 1 )
  {
    v8 = (_QWORD *)*v7;
    if ( (_QWORD *)*v7 == v7 )
      break;
    v12 = (struct _SLIST_ENTRY **)(v8 - 13);
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v5, (struct VIDMM_RECYCLE_RANGE *)(v8 - 13));
    VIDMM_RECYCLE_RANGE::DebouncedDecommit((VIDMM_RECYCLE_RANGE *)v12, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v14);
    if ( !v14 )
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v12[17]);
  }
  v9 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 164);
  if ( v9 )
  {
    ExDeleteLookasideListEx(v9);
    operator delete(*((void **)this + 164));
  }
  v10 = (struct _LOOKASIDE_LIST_EX *)*((_QWORD *)this + 165);
  if ( v10 )
  {
    ExDeleteLookasideListEx(v10);
    operator delete(*((void **)this + 165));
  }
  v11 = (void *)*((_QWORD *)this + 198);
  if ( v11 )
    operator delete(v11);
  KeUnstackDetachProcess(&ApcState);
  if ( v15[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
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
