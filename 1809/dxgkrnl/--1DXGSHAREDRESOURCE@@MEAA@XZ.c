/*
 * XREFs of ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C012C1C0
 * Callers:
 *     ??_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z @ 0x1C00162E0 (--_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z.c)
 *     ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x1C01D82A4 (--1DXGSHAREDRESOURCECA@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z @ 0x1C0035278 (--_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z.c)
 *     ??1DXGADAPTERALLOCATION@@QEAA@XZ @ 0x1C01109A8 (--1DXGADAPTERALLOCATION@@QEAA@XZ.c)
 *     ??1DXGSHAREDRESOURCEACCESS@@QEAA@XZ @ 0x1C012C460 (--1DXGSHAREDRESOURCEACCESS@@QEAA@XZ.c)
 *     ?DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1C01E876C (-DeleteGpadl@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 */

void __fastcall DXGSHAREDRESOURCE::~DXGSHAREDRESOURCE(DXGSHAREDRESOURCE *this)
{
  void *v2; // rdi
  void **v3; // rcx
  void ***v4; // rdi
  void **v5; // rax
  void **v6; // rsi
  char *v7; // rcx
  DXGADAPTER **v8; // rcx
  __int64 v9; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // rax

  *(_QWORD *)this = &DXGSHAREDRESOURCE::`vftable';
  operator delete[](*((void **)this + 12));
  operator delete[](*((void **)this + 14));
  v2 = (void *)*((_QWORD *)this + 18);
  if ( v2 )
  {
    DXGSHAREDRESOURCEACCESS::~DXGSHAREDRESOURCEACCESS(*((DXGSHAREDRESOURCEACCESS **)this + 18));
    operator delete(v2);
  }
  v3 = (void **)*((_QWORD *)this + 21);
  if ( v3 )
    DXGSHAREDRESOURCE_NONPAGED::`scalar deleting destructor'(v3);
  v4 = (void ***)((char *)this + 128);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == (void **)v4 )
      break;
    if ( v5[1] != v4 || (v3 = (void **)*v5, *((void ***)*v5 + 1) != v5) )
      __fastfail(3u);
    v6 = v5 - 6;
    *v4 = v3;
    v3[1] = v4;
    if ( v5 != (void **)48 )
    {
      DXGADAPTERALLOCATION::~DXGADAPTERALLOCATION(v5 - 6);
      operator delete(v6);
    }
  }
  if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 14) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v9 + 24) = 369LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v7 = (char *)*((_QWORD *)this + 20);
  if ( v7 != (char *)this + 152 )
    operator delete[](v7);
  if ( *((_DWORD *)this + 48) )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)v7);
    DXG_GUEST_GLOBAL_VMBUS::DeleteGpadl(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 168), *((_DWORD *)this + 48));
    *((_DWORD *)this + 48) = 0;
  }
  v8 = (DXGADAPTER **)*((_QWORD *)this + 9);
  if ( v8 )
    DXGADAPTER::ReleaseReference(v8[2]);
  if ( (*((_DWORD *)this + 3) & 0x400) != 0 )
  {
    v8 = (DXGADAPTER **)*((_QWORD *)this + 23);
    if ( v8 )
    {
      ObfDereferenceObject(v8);
      *((_QWORD *)this + 23) = 0LL;
    }
  }
  if ( *((_QWORD *)this + 23) && (*((_DWORD *)this + 3) & 0x200) == 0 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v11 + 24) = 391LL;
    WdLogEvent5_WdAssertion(v11);
  }
}
