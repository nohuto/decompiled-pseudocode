/*
 * XREFs of ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C00DC7E8
 * Callers:
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00DC48C (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA1E4 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EE608 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00F0070 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C021371C (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C02384FC (-DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z @ 0x1C003E154 (-FindAdapterObject@DXGSYNCOBJECTCA@@QEAAPEAVDXGADAPTERSYNCOBJECTCA@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::DestroyCoreState(DXGDEVICESYNCOBJECT *this)
{
  DXGADAPTER *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // r10d
  bool v9; // r10
  __int64 v10; // rdi
  struct ADAPTER_RENDER *v11; // rdx
  __int64 v12; // r11
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  DXGFASTMUTEX *v22; // [rsp+30h] [rbp-18h] BYREF
  char v23; // [rsp+38h] [rbp-10h]

  v2 = *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
  if ( !*((_BYTE *)v2 + 185) )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v2) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v3);
      *(_QWORD *)(v17 + 24) = 118LL;
      WdLogEvent5_WdAssertion(v17);
    }
    if ( (*((_BYTE *)this + 92) & 1) != 0 )
    {
      v4 = *((_QWORD *)this + 4);
      v23 = 0;
      v22 = (DXGFASTMUTEX *)(v4 + 32);
      if ( v4 == -32 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v3);
        *(_QWORD *)(v18 + 24) = 511LL;
        WdLogEvent5_WdAssertion(v18);
      }
      CurrentThread = KeGetCurrentThread();
      if ( *((struct _KTHREAD **)v22 + 1) == CurrentThread )
      {
        v19 = WdLogNewEntry5_WdAssertion(CurrentThread);
        *(_QWORD *)(v19 + 24) = 518LL;
        WdLogEvent5_WdAssertion(v19);
      }
      if ( v23 )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
        v20[5] = &v22;
        v20[3] = 275LL;
        v20[4] = 4LL;
        v20[6] = 0LL;
        v20[7] = 0LL;
        WdLogEvent5_WdCriticalError(v20);
      }
      DXGFASTMUTEX::Acquire(v22);
      v6 = *((_QWORD *)this + 2);
      v7 = *((_QWORD *)this + 4);
      v8 = *((_DWORD *)this + 18) >> 5;
      v23 = 1;
      v9 = (v8 & 1) == 0;
      v10 = *(_QWORD *)(v6 + 656);
      v11 = *(struct ADAPTER_RENDER **)(v6 + 16);
      if ( (*(_DWORD *)(v7 + 172) & 4) != 0 )
        v12 = *((_QWORD *)DXGSYNCOBJECTCA::FindAdapterObject((DXGSYNCOBJECTCA *)v7, v11) + 4);
      else
        v12 = *(_QWORD *)(v7 + 296);
      LOBYTE(v7) = v9;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)v11 + 65) + 8LL) + 672LL))(
        v12,
        v10,
        v7,
        *((_QWORD *)this + 3));
      operator delete(*((void **)this + 3));
      *((_QWORD *)this + 3) = 0LL;
      *((_BYTE *)this + 92) &= ~1u;
      if ( v23 )
      {
        v23 = 0;
        DXGFASTMUTEX::Release((struct _KTHREAD **)v22);
      }
    }
    if ( *((_QWORD *)this + 6) )
    {
      v13 = *((_QWORD *)this + 4);
      if ( (unsigned int)(*(_DWORD *)(v13 + 168) - 5) > 1 )
      {
        v21 = WdLogNewEntry5_WdAssertion(v3);
        *(_QWORD *)(v21 + 24) = 374LL;
        WdLogEvent5_WdAssertion(v21);
      }
      v14 = *((_QWORD *)this + 2);
      v15 = *(_QWORD *)(*(_QWORD *)(v14 + 40) + 72LL);
      if ( v15 )
        v16 = *(_QWORD *)(v15 + 8);
      else
        v16 = 0LL;
      (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 544LL) + 8LL)
                                                       + 960LL))(
        *(_QWORD *)(*(_QWORD *)(v14 + 16) + 552LL),
        v16,
        v13 + 120);
      *((_QWORD *)this + 6) = 0LL;
    }
  }
}
