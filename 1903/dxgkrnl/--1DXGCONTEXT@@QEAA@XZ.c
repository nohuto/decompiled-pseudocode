/*
 * XREFs of ??1DXGCONTEXT@@QEAA@XZ @ 0x1C0120A60
 * Callers:
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x1C000C95C (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000C9C4 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C000CA30 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGPRESENT@@QEAA@XZ @ 0x1C01488E4 (--1DXGPRESENT@@QEAA@XZ.c)
 *     ?DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C014BB6C (-DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0247404 (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGCONTEXT::~DXGCONTEXT(DXGCONTEXT *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGPRESENT *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  DXGDEVICESYNCOBJECT *v13; // rcx
  DXGDEVICESYNCOBJECT *v14; // rcx
  struct DXGHWQUEUE **v15; // rbx
  struct DXGHWQUEUE *v16; // rdx
  void *v17; // rcx
  __int64 v18; // rdx
  void *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax

  v2 = (_QWORD *)WdLogNewEntry5_WdEvent(this);
  v2[3] = this;
  v2[4] = *((unsigned int *)this + 6);
  v2[5] = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  WdLogEvent5_WdEvent(v2);
  v3 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v3 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v3 + 104)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v20 + 24) = 658LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v21 + 24) = 659LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !*((_BYTE *)this + 444) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v22 + 24) = 665LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v8 = (DXGPRESENT *)*((_QWORD *)this + 19);
  if ( v8 )
  {
    DXGPRESENT::DestroyStagingBuffer(v8, *((struct DXGDEVICE **)this + 2));
    v19 = (void *)*((_QWORD *)this + 19);
    if ( v19 )
    {
      DXGPRESENT::~DXGPRESENT(*((DXGPRESENT **)this + 19));
      ExFreePoolWithTag(v19, 0);
    }
    *((_QWORD *)this + 19) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 17);
  if ( v9 )
  {
    MmUnsecureVirtualMemory(v9);
    *((_QWORD *)this + 17) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 16);
  if ( v10 )
  {
    if ( !*((_QWORD *)this + 15) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v10, v6);
      *(_QWORD *)(v23 + 24) = 699LL;
      WdLogEvent5_WdAssertion(v23);
      v10 = (void *)*((_QWORD *)this + 16);
    }
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( *((_QWORD *)this + 15) )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 15, (PSIZE_T)this + 14, 0x8000u);
    *((_QWORD *)this + 15) = 0LL;
    *((_DWORD *)this + 26) = 0;
    *((_QWORD *)this + 14) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 12);
  if ( v11 )
  {
    MmUnsecureVirtualMemory(v11);
    *((_QWORD *)this + 12) = 0LL;
  }
  if ( *((_QWORD *)this + 11) )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 11, (PSIZE_T)this + 10, 0x8000u);
    *((_QWORD *)this + 11) = 0LL;
    *((_DWORD *)this + 18) = 0;
    *((_QWORD *)this + 10) = 0LL;
  }
  if ( *((_QWORD *)this + 45) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v11, v6);
    *(_QWORD *)(v24 + 24) = 741LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( *((_QWORD *)this + 49) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 616LL))();
    *((_QWORD *)this + 49) = 0LL;
  }
  v12 = (void *)*((_QWORD *)this + 8);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0);
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((_QWORD *)this + 7) )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 7, (PSIZE_T)this + 6, 0x8000u);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  v13 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
  if ( v13 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v13);
  v14 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 32);
  if ( v14 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v14);
  v15 = (struct DXGHWQUEUE **)((char *)this + 416);
  while ( 1 )
  {
    v16 = *v15;
    if ( *v15 == (struct DXGHWQUEUE *)v15 )
      break;
    DXGCONTEXT::DestroyHwQueue(this, v16, 0LL);
  }
  if ( *((DXGCONTEXT **)this + 43) != (DXGCONTEXT *)((char *)this + 344) )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v16);
    v25[3] = 275LL;
    v25[4] = 44LL;
    v25[5] = this;
    v25[6] = 0LL;
    v25[7] = 0LL;
    WdLogEvent5_WdCriticalError(v25);
  }
  v17 = (void *)*((_QWORD *)this + 60);
  if ( v17 )
    ExFreePoolWithTag(v17, 0x4B677844u);
  v18 = *((unsigned int *)this + 6);
  *((_QWORD *)this + 60) = 0LL;
  if ( (_DWORD)v18 )
  {
    DXGPROCESS::FreeHandleSafe(*(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL), v18);
    *((_DWORD *)this + 6) = 0;
  }
  if ( *v15 != (struct DXGHWQUEUE *)v15 )
  {
    v26 = WdLogNewEntry5_WdAssertion(v17, v18);
    *(_QWORD *)(v26 + 24) = 850LL;
    WdLogEvent5_WdAssertion(v26);
  }
  *((_QWORD *)this + 2) = 0LL;
}
