/*
 * XREFs of ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C0270FF4
 * Callers:
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00F3B40 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C02709C4 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C0273424 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0007434 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00EEE94 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F51B0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C02712DC (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::CloseFromDevice(DXGDXGIKEYEDMUTEX *this, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  struct DXGRESOURCE *v18; // rsi
  __int64 v19; // rax
  unsigned int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // r9
  int v23; // edx
  unsigned int v24; // ebx
  unsigned int v25; // eax
  struct DXGSYNCOBJECT *v26; // rsi
  PERESOURCE *Global; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  _BYTE v33[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v3[3] = this;
  v3[4] = *((_QWORD *)this + 1);
  v5 = *((_QWORD *)this + 4);
  v3[5] = v5;
  if ( !*((_QWORD *)this + 1) )
    return;
  if ( *((_QWORD *)this + 4) != PsGetCurrentProcess(v4, v5)
    || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL)) )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
    v30[3] = PsGetCurrentProcess(v32, v31);
    v30[4] = *((_QWORD *)this + 4);
    v30[5] = *((_QWORD *)this + 1);
    return;
  }
  v8 = *((_QWORD *)this + 1);
  if ( !*(_DWORD *)(v8 + 72) )
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v8 + 104));
  if ( *((_DWORD *)this + 22) )
  {
    Current = DXGPROCESS::GetCurrent(v8, v6);
    if ( !Current )
    {
      v12 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v12 + 24) = 577LL;
      WdLogEvent5_WdAssertion(v12);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v33,
      (struct _KTHREAD **)Current);
    v14 = *((unsigned int *)this + 22);
    v15 = (*((_DWORD *)this + 22) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v15 < *((_DWORD *)Current + 56) )
    {
      v16 = *((_QWORD *)Current + 26);
      v14 = ((unsigned int)v14 >> 25) & 0x60;
      v13 = *(unsigned int *)(v16 + 16 * v15 + 8);
      if ( (_BYTE)v14 == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60) && (v13 & 0x2000) == 0 && (v13 & 0x1F) != 0 )
      {
        v13 &= 0x1Fu;
        if ( (_BYTE)v13 == 4 )
        {
          v18 = *(struct DXGRESOURCE **)(v16 + 16LL * (unsigned int)v15);
          if ( v18 )
          {
LABEL_17:
            v20 = *((_DWORD *)this + 22);
            v21 = (v20 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v21 < *((_DWORD *)Current + 56) )
            {
              v22 = *((_QWORD *)Current + 26);
              v23 = *(_DWORD *)(v22 + 16 * v21 + 8);
              if ( ((v20 >> 25) & 0x60) == (*(_BYTE *)(v22 + 16 * v21 + 8) & 0x60)
                && (v23 & 0x2000) == 0
                && (v23 & 0x1F) != 0 )
              {
                *(_DWORD *)(v22 + 16LL * ((v20 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
              }
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
            DXGDEVICE::DestroyAllocationInternal(
              *((DXGDEVICE **)this + 1),
              0,
              0LL,
              v18,
              0LL,
              DXGDEVICE::DestroyFlagsDefault);
            *((_DWORD *)this + 22) = 0;
            *((_DWORD *)this + 23) = 0;
            goto LABEL_23;
          }
LABEL_16:
          v19 = WdLogNewEntry5_WdAssertion(v13, v14);
          *(_QWORD *)(v19 + 24) = 583LL;
          WdLogEvent5_WdAssertion(v19);
          goto LABEL_17;
        }
        v17 = WdLogNewEntry5_WdError(v13, v14, v16);
        *(_QWORD *)(v17 + 24) = 267LL;
        WdLogEvent5_WdError(v17);
      }
    }
    v18 = 0LL;
    goto LABEL_16;
  }
LABEL_23:
  v24 = *((_DWORD *)this + 24);
  v25 = v24;
  if ( v24 )
  {
    v26 = (struct DXGSYNCOBJECT *)*((_QWORD *)this + 13);
    if ( v26 )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v8, v6);
      DXGGLOBAL::DestroySyncObject(Global, v26, v24);
      *((_DWORD *)this + 24) = 0;
      *((_QWORD *)this + 13) = 0LL;
      v25 = 0;
    }
  }
  if ( *((_QWORD *)this + 13) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v8, v6);
    *(_QWORD *)(v28 + 24) = 603LL;
    WdLogEvent5_WdAssertion(v28);
    v25 = *((_DWORD *)this + 24);
  }
  if ( v25 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v8, v6);
    *(_QWORD *)(v29 + 24) = 604LL;
    WdLogEvent5_WdAssertion(v29);
  }
  if ( *((_DWORD *)this + 4) )
    DXGDXGIKEYEDMUTEX::CloseLocalMutex(this, 0LL, 1LL);
  *((_QWORD *)this + 1) = 0LL;
}
