/*
 * XREFs of ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C01A6DF4
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C00071C0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C00080A8 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C000B0E8 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z @ 0x1C000C448 (-RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0013C00 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0055CB0 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C008FD40 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 *     ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C00931B0 (-UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z.c)
 *     ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C01A710C (-Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CBatch::Clear(DirectComposition::CBatch *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  DirectComposition::CAnimationMarshaler **v4; // r14
  unsigned __int64 v5; // rbp
  DirectComposition::CApplicationChannel *v6; // r15
  DirectComposition::CAnimationMarshaler *v7; // rbx
  DirectComposition::CAnimationMarshaler **v8; // rdi
  DirectComposition::CAnimationMarshaler *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdi
  DirectComposition::CEvent *v12; // rcx
  DirectComposition::CEvent *v13; // rbx
  int v14; // edx

  if ( *((_QWORD *)this + 5) )
  {
    DirectComposition::CSynchronizationManager::RemoveFromSynchronizationTable(this);
    *((_QWORD *)this + 5) = 0LL;
  }
  v2 = *((_QWORD *)this + 17);
  v3 = *((_QWORD *)this + 19) + 40LL + *(_QWORD *)(v2 + 32);
  *(_QWORD *)(v2 + 32) = v3;
  if ( !*(_BYTE *)(v2 + 64) && *(_QWORD *)(v2 + 40) == v3 )
    DirectComposition::CBatchSharedMemoryPool::Reset((DirectComposition::CBatchSharedMemoryPool *)v2);
  *((_BYTE *)this + 32) &= 0xF2u;
  v4 = (DirectComposition::CAnimationMarshaler **)*((_QWORD *)this + 10);
  v5 = *((_QWORD *)this + 9);
  v6 = (DirectComposition::CApplicationChannel *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  if ( v4 )
  {
    do
    {
      v7 = *v4;
      v8 = (DirectComposition::CAnimationMarshaler **)v4[1];
      v9 = *v4;
      v4[1] = 0LL;
      DirectComposition::CAnimationMarshaler::UpdateAnimationTimeState(v9, v5);
      DirectComposition::CAnimationTimeList::Release((DirectComposition::CAnimationTimeList *)v4);
      DirectComposition::CApplicationChannel::ReleaseResource(
        v6,
        (struct DirectComposition::CResourceMarshaler *)(((unsigned __int64)v7 + 16) & -(__int64)(v7 != 0LL)));
      v4 = v8;
    }
    while ( v8 );
  }
  v10 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 10) = 0LL;
  if ( v10 )
  {
    do
    {
      v11 = *(_QWORD *)v10;
      if ( *(_DWORD *)(v10 + 8) )
      {
        DirectComposition::CConnection::ReleaseSystemResource(
          *(_QWORD *)(*((_QWORD *)this + 1) + 40LL),
          *(_DWORD *)(v10 + 8));
        *(_DWORD *)(v10 + 8) = 0;
      }
      Win32FreePool(v10);
      *((_QWORD *)this + 11) = v11;
      v10 = v11;
    }
    while ( v11 );
  }
  v12 = (DirectComposition::CEvent *)*((_QWORD *)this + 13);
  if ( v12 )
  {
    do
    {
      v13 = *(DirectComposition::CEvent **)v12;
      DirectComposition::CEvent::`scalar deleting destructor'(v12);
      *((_QWORD *)this + 13) = v13;
      v12 = v13;
    }
    while ( v13 );
  }
  v14 = *((_DWORD *)this + 28);
  if ( v14 )
  {
    DirectComposition::CConnection::ReleaseShellResourceAccess(
      *(DirectComposition::CConnection **)(*((_QWORD *)this + 1) + 40LL),
      v14);
    *((_DWORD *)this + 28) = 0;
  }
}
