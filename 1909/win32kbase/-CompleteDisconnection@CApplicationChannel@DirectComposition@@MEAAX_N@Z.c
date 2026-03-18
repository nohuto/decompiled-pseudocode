/*
 * XREFs of ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C006D990
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C000B874 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C000BD18 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C006DB48 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C006DB8C (-ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshale.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C006DBC8 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C006EC48 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C006F7C0 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C007EBB8 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::CompleteDisconnection(
        DirectComposition::CApplicationChannel *this,
        char a2)
{
  int v2; // edi
  __int64 v5; // rcx
  void *v6; // rax
  DirectComposition::CAnimationBinding *v7; // rcx
  struct DirectComposition::CResourceMarshaler *v8; // r14
  _DWORD *v9; // rax
  __int64 v10; // rax
  struct DirectComposition::CResourceMarshaler *v11; // rbx
  DirectComposition::CBatchSharedMemoryPool *i; // rbx
  unsigned int v13; // edx
  DirectComposition::CEvent *v14; // rcx
  DirectComposition::CAnimationBinding *v15; // rbx
  int v16; // ecx
  __int64 v17; // rdx
  unsigned __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 27) )
    DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this);
  v5 = *((_QWORD *)this + 92);
  if ( v5 )
  {
    KeSetEvent(*(PRKEVENT *)(v5 + 8), 1, 0);
    v14 = (DirectComposition::CEvent *)*((_QWORD *)this + 92);
    if ( v14 )
      DirectComposition::CEvent::`scalar deleting destructor'(v14, v13);
    *((_QWORD *)this + 92) = 0LL;
  }
  DirectComposition::CApplicationChannel::ReleaseResource(
    this,
    *((struct DirectComposition::CResourceMarshaler **)this + 93));
  *((_QWORD *)this + 93) = 0LL;
  v18 = 0LL;
  while ( 1 )
  {
    v6 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
           (DirectComposition::CApplicationChannel *)((char *)this + 112),
           &v18);
    if ( !v6 )
      break;
    (*(void (__fastcall **)(void *, DirectComposition::CApplicationChannel *))(*(_QWORD *)v6 + 96LL))(v6, this);
  }
  if ( !a2 )
  {
    for ( i = (DirectComposition::CBatchSharedMemoryPool *)*((_QWORD *)this + 75);
          i != (DirectComposition::CApplicationChannel *)((char *)this + 600);
          i = *(DirectComposition::CBatchSharedMemoryPool **)i )
    {
      DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(i);
    }
    DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
      (DirectComposition::CApplicationChannel *)((char *)this + 600),
      0LL);
    *((_BYTE *)this + 48) &= ~2u;
  }
  v7 = (DirectComposition::CAnimationBinding *)*((_QWORD *)this + 56);
  *((_DWORD *)this + 164) = 0;
  if ( v7 )
  {
    do
    {
      v15 = *(DirectComposition::CAnimationBinding **)v7;
      *(_QWORD *)v7 = 0LL;
      DirectComposition::CAnimationBinding::DetachAndDelete(v7, this);
      v7 = v15;
    }
    while ( v15 );
  }
  v8 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 53);
  if ( v8 )
  {
    do
    {
      v11 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v8 + 1);
      DirectComposition::CApplicationChannel::ReleaseShellResourceReference(this, v8);
      (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v8 + 104LL))(v8, 1LL);
      v8 = v11;
    }
    while ( v11 );
  }
  DirectComposition::CApplicationChannel::ClearAnimationTimeList(this);
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  v18 = 0LL;
  while ( 1 )
  {
    v9 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
           (DirectComposition::CApplicationChannel *)((char *)this + 112),
           &v18);
    if ( !v9 )
      break;
    v9[4] &= 0xFFFFFFEE;
    *((_QWORD *)v9 + 1) = 0LL;
    v10 = *((_QWORD *)v9 + 4);
    if ( v10 )
    {
      do
      {
        v16 = *(_DWORD *)(v10 + 8);
        v17 = *(_QWORD *)(v10 + 32);
        if ( (v16 & 1) != 0 )
          *(_DWORD *)(v10 + 8) = v16 & 0xFFFFFFFC | 2;
        *(_QWORD *)v10 = 0LL;
        v10 = v17;
      }
      while ( v17 );
    }
  }
  LOBYTE(v2) = (unsigned int)(*((_DWORD *)this + 148) - 1) <= 1;
  *((_DWORD *)this + 148) = v2;
  *((_DWORD *)this + 6) = a2 != 0 ? 6 : 3;
}
