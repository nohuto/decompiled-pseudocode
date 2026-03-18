/*
 * XREFs of ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C023C39C
 * Callers:
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00E1440 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C023BCE4 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C023E10C (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00DC96C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F7E34 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C023C684 (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::CloseFromDevice(DXGDXGIKEYEDMUTEX *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  struct DXGRESOURCE *v20; // rsi
  __int64 v21; // rax
  unsigned int v22; // r8d
  __int64 v23; // rax
  __int64 v24; // r9
  int v25; // edx
  unsigned int v26; // ebx
  unsigned int v27; // eax
  struct DXGSYNCOBJECT *v28; // rsi
  PERESOURCE *Global; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  _BYTE v35[40]; // [rsp+30h] [rbp-28h] BYREF

  v5 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v5[3] = this;
  v5[4] = *((_QWORD *)this + 1);
  v7 = *((_QWORD *)this + 4);
  v5[5] = v7;
  if ( !*((_QWORD *)this + 1) )
    return;
  if ( *((_QWORD *)this + 4) != PsGetCurrentProcess(v6, v7)
    || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL)) )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    v32[3] = PsGetCurrentProcess(v34, v33);
    v32[4] = *((_QWORD *)this + 4);
    v32[5] = *((_QWORD *)this + 1);
    return;
  }
  v12 = *((_QWORD *)this + 1);
  if ( !*(_DWORD *)(v12 + 72) )
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v12 + 104));
  if ( *((_DWORD *)this + 22) )
  {
    Current = DXGPROCESS::GetCurrent();
    if ( !Current )
    {
      v15 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v15 + 24) = 577LL;
      WdLogEvent5_WdAssertion(v15);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v35,
      (struct _KTHREAD **)Current);
    v17 = (*((_DWORD *)this + 22) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v17 < *((_DWORD *)Current + 62) )
    {
      v18 = *((_QWORD *)Current + 29);
      v16 = *(unsigned int *)(v18 + 16 * v17 + 8);
      if ( ((*((_DWORD *)this + 22) >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
        && (v16 & 0x2000) == 0
        && (v16 & 0x1F) != 0 )
      {
        v16 &= 0x1Fu;
        if ( (_BYTE)v16 == 4 )
        {
          v20 = *(struct DXGRESOURCE **)(v18 + 16LL * (unsigned int)v17);
          if ( v20 )
          {
LABEL_17:
            v22 = *((_DWORD *)this + 22);
            v23 = (v22 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v23 < *((_DWORD *)Current + 62) )
            {
              v24 = *((_QWORD *)Current + 29);
              v25 = *(_DWORD *)(v24 + 16 * v23 + 8);
              if ( ((v22 >> 25) & 0x60) == (*(_BYTE *)(v24 + 16 * v23 + 8) & 0x60)
                && (v25 & 0x2000) == 0
                && (v25 & 0x1F) != 0 )
              {
                *(_DWORD *)(v24 + 16LL * ((v22 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
              }
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v35);
            DXGDEVICE::DestroyAllocationInternal(
              *((DXGDEVICE **)this + 1),
              0,
              0LL,
              v20,
              0LL,
              DXGDEVICE::DestroyFlagsDefault);
            *((_DWORD *)this + 22) = 0;
            *((_DWORD *)this + 23) = 0;
            goto LABEL_23;
          }
LABEL_16:
          v21 = WdLogNewEntry5_WdAssertion(v16);
          *(_QWORD *)(v21 + 24) = 583LL;
          WdLogEvent5_WdAssertion(v21);
          goto LABEL_17;
        }
        v19 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v19 + 24) = 316LL;
        WdLogEvent5_WdError(v19);
      }
    }
    v20 = 0LL;
    goto LABEL_16;
  }
LABEL_23:
  v26 = *((_DWORD *)this + 24);
  v27 = v26;
  if ( v26 )
  {
    v28 = (struct DXGSYNCOBJECT *)*((_QWORD *)this + 13);
    if ( v28 )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v12);
      DXGGLOBAL::DestroySyncObject(Global, v28, v26);
      *((_DWORD *)this + 24) = 0;
      *((_QWORD *)this + 13) = 0LL;
      v27 = 0;
    }
  }
  if ( *((_QWORD *)this + 13) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v30 + 24) = 603LL;
    WdLogEvent5_WdAssertion(v30);
    v27 = *((_DWORD *)this + 24);
  }
  if ( v27 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v31 + 24) = 604LL;
    WdLogEvent5_WdAssertion(v31);
  }
  if ( *((_DWORD *)this + 4) )
    DXGDXGIKEYEDMUTEX::CloseLocalMutex(this, 0LL, 1LL);
  *((_QWORD *)this + 1) = 0LL;
}
