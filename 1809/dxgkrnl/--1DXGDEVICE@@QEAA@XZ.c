/*
 * XREFs of ??1DXGDEVICE@@QEAA@XZ @ 0x1C00E9684
 * Callers:
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C00315CC (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EE190 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000DEEC (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0011958 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z @ 0x1C0037270 (-VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z.c)
 */

void __fastcall DXGDEVICE::~DXGDEVICE(DXGDEVICE *this)
{
  __int64 v2; // r8
  void **v3; // rsi
  __int64 v4; // rbp
  _DWORD *v5; // rdi
  void *v6; // rcx
  CRefCountedBuffer *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rsi
  char *v15; // rdi
  __int64 v16; // rdx
  char **v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE v23[40]; // [rsp+20h] [rbp-28h] BYREF
  int v24; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 18) != 1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 674LL;
    WdLogEvent5_WdAssertion(v8);
  }
  operator delete(*((void **)this + 220));
  v3 = (void **)((char *)this + 1152);
  v4 = 16LL;
  v5 = (_DWORD *)((char *)this + 1280);
  do
  {
    if ( *(v5 - 112) )
      operator delete[](*(v3 - 56));
    if ( *v5 )
      operator delete[](*v3);
    ++v5;
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( (*((_BYTE *)this + 1749) & 2) != 0 )
  {
    v9 = *((_QWORD *)this + 43);
    if ( v9 )
    {
      v24 = 22;
      DXG_HOST_GLOBAL_VMBUS::VmBusSendSetGuestData(v9, 1, v2, &v24);
    }
    v10 = *((_QWORD *)this + 5);
    v11 = *(_BYTE *)(v10 + 323);
    if ( (v11 & 8) != 0 )
      v12 = *(_QWORD *)(v10 + 456);
    else
      v12 = v10 & -(__int64)((v11 & 4) != 0);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v23,
      (struct _KTHREAD **)(*(_QWORD *)(v12 + 456) + 64LL));
    v13 = *((_QWORD *)this + 10);
    if ( v13 )
    {
      v14 = v13 + 56;
      v15 = (char *)this + 88;
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v13 + 56));
      v16 = *((_QWORD *)this + 11);
      if ( *(char **)(*(_QWORD *)v15 + 8LL) != v15 || (v17 = (char **)*((_QWORD *)this + 12), *v17 != v15) )
        __fastfail(3u);
      *v17 = (char *)v16;
      *(_QWORD *)(v16 + 8) = v17;
      *(_QWORD *)(v14 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v14, 0LL);
      KeLeaveCriticalRegion();
      *((_QWORD *)this + 12) = 0LL;
      *(_QWORD *)v15 = 0LL;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  }
  v6 = (void *)*((_QWORD *)this + 224);
  if ( v6 )
    operator delete(v6);
  v7 = (CRefCountedBuffer *)*((_QWORD *)this + 43);
  if ( (*((_BYTE *)this + 1749) & 1) != 0 )
  {
    if ( v7 )
      CRefCountedBuffer::RefCountedBufferRelease(v7);
  }
  else
  {
    operator delete(v7);
  }
  if ( *((DXGDEVICE **)this + 53) != (DXGDEVICE *)((char *)this + 424) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v18 + 24) = 702LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( *((DXGDEVICE **)this + 51) != (DXGDEVICE *)((char *)this + 408) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v19 + 24) = 702LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( *((DXGDEVICE **)this + 49) != (DXGDEVICE *)((char *)this + 392) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v20 + 24) = 702LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( *((DXGDEVICE **)this + 47) != (DXGDEVICE *)((char *)this + 376) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v21 + 24) = 702LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( *((DXGDEVICE **)this + 45) != (DXGDEVICE *)((char *)this + 360) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v22 + 24) = 702LL;
    WdLogEvent5_WdAssertion(v22);
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
}
