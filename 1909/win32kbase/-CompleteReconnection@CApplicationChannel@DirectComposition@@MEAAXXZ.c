/*
 * XREFs of ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C006D3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C000CF38 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C006DBC8 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C007EBB8 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::CompleteReconnection(
        DirectComposition::CApplicationChannel *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  char v4; // al
  char v5; // cl
  __int64 v6; // rax
  struct _ERESOURCE *v7; // rbx
  __int64 v8; // rax
  _QWORD *i; // rcx
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  while ( 1 )
  {
    v2 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
           (DirectComposition::CApplicationChannel *)((char *)this + 112),
           &v10);
    v3 = v2;
    if ( !v2 )
      break;
    v2[1] = *((_QWORD *)this + 50);
    *((_QWORD *)this + 50) = v2;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v2 + 88LL))(v2) )
      *((_DWORD *)v3 + 4) |= 2u;
    for ( i = (_QWORD *)v3[4]; i; i = (_QWORD *)i[4] )
    {
      *i = *((_QWORD *)this + 55);
      *((_QWORD *)this + 55) = i;
    }
  }
  v4 = *((_BYTE *)this + 240);
  if ( *((_QWORD *)this + 83) )
  {
    v4 |= 0x20u;
    *((_BYTE *)this + 240) = v4;
  }
  if ( *((_QWORD *)this + 84) )
  {
    v4 |= 0x40u;
    *((_BYTE *)this + 240) = v4;
  }
  v5 = *((_BYTE *)this + 241);
  if ( (v5 & 1) != 0 )
    *((_BYTE *)this + 240) = v4 | 0x80;
  v6 = *((_QWORD *)this + 5);
  *((_BYTE *)this + 241) = v5 | 2;
  *((_DWORD *)this + 6) = 0;
  v7 = *(struct _ERESOURCE **)(v6 + 8);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v7, 1u);
  DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
    (DirectComposition::CApplicationChannel *)((char *)this + 600),
    *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 208LL));
  ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
  KeLeaveCriticalRegion();
  if ( (*((_BYTE *)this + 240) & 1) == 0 )
  {
    v8 = *((_QWORD *)this + 21);
    if ( !v8 || !*(_QWORD *)(v8 + 40) )
      DirectComposition::CApplicationChannel::Commit(this, 0LL, 0, 0LL);
  }
}
