/*
 * XREFs of ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C00FD18C
 * Callers:
 *     ??_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z @ 0x1C0019500 (--_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z.c)
 *     ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x1C02066DC (--1DXGSHAREDRESOURCECA@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009668 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z @ 0x1C003BB98 (--_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C00FDC9C (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ??1DXGSHAREDRESOURCEACCESS@@QEAA@XZ @ 0x1C013CF08 (--1DXGSHAREDRESOURCEACCESS@@QEAA@XZ.c)
 *     ?DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C0217EE0 (-DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0241BC8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGSHAREDRESOURCE::~DXGSHAREDRESOURCE(DXGSHAREDRESOURCE *this)
{
  __int64 v2; // rdx
  void *v3; // rdi
  _QWORD *v4; // rcx
  _QWORD **v5; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  char *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rax

  *(_QWORD *)this = &DXGSHAREDRESOURCE::`vftable';
  operator delete[](*((void **)this + 12));
  operator delete[](*((void **)this + 14));
  v3 = (void *)*((_QWORD *)this + 18);
  if ( v3 )
  {
    DXGSHAREDRESOURCEACCESS::~DXGSHAREDRESOURCEACCESS(*((DXGSHAREDRESOURCEACCESS **)this + 18));
    operator delete(v3);
  }
  v4 = (_QWORD *)*((_QWORD *)this + 21);
  if ( v4 )
    DXGSHAREDRESOURCE_NONPAGED::`scalar deleting destructor'(v4);
  v5 = (_QWORD **)((char *)this + 128);
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == v5 )
      break;
    if ( (_QWORD **)v6[1] != v5 || (v4 = (_QWORD *)*v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    v7 = v6 - 6;
    *v5 = v4;
    v4[1] = v5;
    if ( v6 != (_QWORD *)48 )
    {
      DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION((DXGADAPTERALLOCATION *)(v6 - 6));
      operator delete(v7);
    }
  }
  if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 14) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v4, v2);
    *(_QWORD *)(v10 + 24) = 370LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v8 = (char *)*((_QWORD *)this + 20);
  if ( v8 != (char *)this + 152 )
    operator delete[](v8);
  if ( *((_DWORD *)this + 48) )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)v8, v2);
    DXG_GUEST_GLOBAL_VMBUS::DeleteGpadl(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 164), *((_DWORD *)this + 48));
    *((_DWORD *)this + 48) = 0;
  }
  v9 = *((_QWORD *)this + 9);
  if ( v9 )
  {
    v9 = *(_QWORD *)(v9 + 16);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v9 + 16), (struct DXGADAPTER *)v9);
  }
  if ( (*((_DWORD *)this + 3) & 0x400) != 0 )
  {
    v9 = *((_QWORD *)this + 23);
    if ( v9 )
    {
      ObfDereferenceObject((PVOID)v9);
      *((_QWORD *)this + 23) = 0LL;
    }
  }
  if ( *((_QWORD *)this + 23) && (*((_DWORD *)this + 3) & 0x200) == 0 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v2);
    *(_QWORD *)(v12 + 24) = 392LL;
    WdLogEvent5_WdAssertion(v12);
  }
}
