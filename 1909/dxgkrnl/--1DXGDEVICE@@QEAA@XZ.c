/*
 * XREFs of ??1DXGDEVICE@@QEAA@XZ @ 0x1C0124D88
 * Callers:
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x1C000CB9C (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008A64 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C708 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001CA58 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z @ 0x1C003D810 (-VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z.c)
 */

void __fastcall DXGDEVICE::~DXGDEVICE(DXGDEVICE *this, __int64 a2)
{
  __int64 v3; // rdx
  const GUID *v4; // r8
  void **v5; // rsi
  __int64 v6; // rbp
  _DWORD *v7; // rdi
  void *v8; // rcx
  CRefCountedBuffer *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rsi
  char *v17; // rdi
  __int64 v18; // rdx
  char **v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _BYTE v25[40]; // [rsp+20h] [rbp-28h] BYREF
  int v26; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 18) != 1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 673LL;
    WdLogEvent5_WdAssertion(v10);
  }
  operator delete(*((void **)this + 220));
  v5 = (void **)((char *)this + 1152);
  v6 = 16LL;
  v7 = (_DWORD *)((char *)this + 1280);
  do
  {
    if ( *(v7 - 112) )
      operator delete[](*(v5 - 56));
    if ( *v7 )
      operator delete[](*v5);
    ++v7;
    ++v5;
    --v6;
  }
  while ( v6 );
  if ( (*((_BYTE *)this + 1749) & 2) != 0 )
  {
    v11 = *((_QWORD *)this + 43);
    if ( v11 )
    {
      v26 = 22;
      DXG_HOST_GLOBAL_VMBUS::VmBusSendSetGuestData(v11, 1, v4, (struct _MDL *)&v26);
    }
    v12 = *((_QWORD *)this + 5);
    v13 = *(_BYTE *)(v12 + 299);
    if ( (v13 & 8) != 0 )
      v14 = *(_QWORD *)(v12 + 432);
    else
      v14 = v12 & -(__int64)((v13 & 4) != 0);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v25,
      (struct _KTHREAD **)(*(_QWORD *)(v14 + 432) + 64LL));
    v15 = *((_QWORD *)this + 10);
    if ( v15 )
    {
      v16 = v15 + 56;
      v17 = (char *)this + 88;
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v15 + 56));
      v18 = *((_QWORD *)this + 11);
      if ( *(char **)(*(_QWORD *)v17 + 8LL) != v17 || (v19 = (char **)*((_QWORD *)this + 12), *v19 != v17) )
        __fastfail(3u);
      *v19 = (char *)v18;
      *(_QWORD *)(v18 + 8) = v19;
      *(_QWORD *)(v16 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v16, 0LL);
      KeLeaveCriticalRegion();
      *((_QWORD *)this + 12) = 0LL;
      *(_QWORD *)v17 = 0LL;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  }
  v8 = (void *)*((_QWORD *)this + 224);
  if ( v8 )
    operator delete(v8);
  v9 = (CRefCountedBuffer *)*((_QWORD *)this + 43);
  if ( (*((_BYTE *)this + 1749) & 1) != 0 )
  {
    if ( v9 )
      CRefCountedBuffer::RefCountedBufferRelease(v9);
  }
  else
  {
    operator delete(v9);
  }
  if ( *((DXGDEVICE **)this + 53) != (DXGDEVICE *)((char *)this + 424) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v9, v3);
    *(_QWORD *)(v20 + 24) = 851LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( *((DXGDEVICE **)this + 51) != (DXGDEVICE *)((char *)this + 408) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v9, v3);
    *(_QWORD *)(v21 + 24) = 851LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( *((DXGDEVICE **)this + 49) != (DXGDEVICE *)((char *)this + 392) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v9, v3);
    *(_QWORD *)(v22 + 24) = 851LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( *((DXGDEVICE **)this + 47) != (DXGDEVICE *)((char *)this + 376) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v9, v3);
    *(_QWORD *)(v23 + 24) = 851LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( *((DXGDEVICE **)this + 45) != (DXGDEVICE *)((char *)this + 360) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v9, v3);
    *(_QWORD *)(v24 + 24) = 851LL;
    WdLogEvent5_WdAssertion(v24);
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
}
