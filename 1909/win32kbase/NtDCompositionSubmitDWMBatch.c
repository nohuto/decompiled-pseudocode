/*
 * XREFs of NtDCompositionSubmitDWMBatch @ 0x1C000AE40
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C000B874 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedMemoryPool@2@PEA_K@Z @ 0x1C000BA9C (-BeginDynamicAllocation@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAJ_KPEAPEAVCBatchSharedM.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C000D5CC (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C006E4F0 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z @ 0x1C006E608 (-SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N0@Z @ 0x1C0094EC0 (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C01A1B94 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionSubmitDWMBatch(int a1, __int64 a2, void *a3)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  int v7; // r12d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // r15
  struct _ERESOURCE *v10; // rdi
  struct _RTL_GENERIC_TABLE *v11; // rcx
  __int64 v12; // rsi
  _QWORD *v13; // rax
  struct _ERESOURCE *v14; // rdi
  struct DirectComposition::SynchronizationObject *v15; // rbp
  struct DirectComposition::CBatch *v16; // rsi
  __int64 v17; // rax
  struct DirectComposition::CBatchSharedMemoryPool *v18; // rdi
  __int64 v19; // rcx
  struct _ERESOURCE *v20; // rdi
  _QWORD *v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  _QWORD *v25; // rcx
  struct _ERESOURCE *v26; // rdi
  struct _ERESOURCE *v27; // rdi
  __int64 v28; // rbp
  struct _ERESOURCE *v29; // rdi
  __int64 v30; // rax
  union _SLIST_HEADER *v31; // rdi
  struct _ERESOURCE *v32; // rcx
  int v34; // eax
  struct DirectComposition::CBatch *v35; // rdi
  struct DirectComposition::CBatchSharedMemoryPool *v36; // [rsp+20h] [rbp-68h] BYREF
  struct DirectComposition::CBatch *v37; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v38; // [rsp+30h] [rbp-58h] BYREF
  int Buffer; // [rsp+38h] [rbp-50h] BYREF
  __int64 v40; // [rsp+3Ch] [rbp-4Ch]
  int v41; // [rsp+44h] [rbp-44h]
  struct DirectComposition::SynchronizationObject *v43; // [rsp+A8h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( CurrentProcessWin32Process && (v9 = *(_QWORD *)(CurrentProcessWin32Process + 256)) != 0 )
  {
    v10 = *(struct _ERESOURCE **)(v9 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v10, 1u);
    v11 = *(struct _RTL_GENERIC_TABLE **)v9;
    Buffer = a1;
    v40 = 0LL;
    v12 = 0LL;
    v41 = 0;
    v13 = RtlLookupElementGenericTable(v11, &Buffer);
    if ( v13 && (v12 = v13[1]) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    else
      v7 = -1073741790;
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 8));
    KeLeaveCriticalRegion();
    if ( v12 )
    {
      v14 = *(struct _ERESOURCE **)(v12 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v14, 1u);
      v6 = v12;
    }
  }
  else
  {
    v7 = -1073741823;
  }
  if ( v7 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6) == 2 )
    {
      v5 = v6;
    }
    else
    {
      v7 = -1073741811;
      (**(void (__fastcall ***)(__int64))v6)(v6);
    }
    if ( v7 >= 0 )
    {
      v15 = 0LL;
      v43 = 0LL;
      if ( a3 )
      {
        v34 = DirectComposition::SynchronizationObject::ResolveHandle(a3, 1u, 1, &v43);
        v15 = v43;
        v7 = v34;
      }
      if ( v7 < 0 )
        goto LABEL_40;
      v16 = 0LL;
      v37 = 0LL;
      v36 = 0LL;
      v38 = 0LL;
      DirectComposition::CApplicationChannel::ProcessReturnedBatches((DirectComposition::CApplicationChannel *)v5);
      if ( !*(_QWORD *)(v5 + 168) )
      {
        while ( 1 )
        {
          v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
          if ( (int)DirectComposition::CBatchSharedMemoryPoolSet::BeginDynamicAllocation(
                      (DirectComposition::CBatchSharedMemoryPoolSet *)(v5 + 600),
                      v17 + 40,
                      &v36,
                      &v38) >= 0 )
            break;
          DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(
            (DirectComposition::CApplicationChannel *)v5,
            0,
            0);
        }
        v18 = v36;
        if ( v36 )
        {
          v19 = *((_QWORD *)v36 + 5);
          if ( (unsigned __int64)(4096 - v19) >= 0x28 )
            *((_QWORD *)v36 + 5) = v19 + 40;
          v16 = *(struct DirectComposition::CBatch **)(v5 + 184);
          if ( v16 )
          {
            *(_QWORD *)(v5 + 184) = *(_QWORD *)v16;
          }
          else
          {
            do
            {
              if ( (int)DirectComposition::CApplicationChannel::CreateBatch(
                          (DirectComposition::CApplicationChannel *)v5,
                          &v37) >= 0 )
              {
                v16 = v37;
                goto LABEL_22;
              }
            }
            while ( *(int *)(v5 + 228) <= 0
                 || !DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(
                       (DirectComposition::CApplicationChannel *)v5,
                       0,
                       0) );
            v16 = *(struct DirectComposition::CBatch **)(v5 + 184);
            *(_QWORD *)(v5 + 184) = *(_QWORD *)v16;
          }
LABEL_22:
          if ( v16 )
          {
            *((_QWORD *)v16 + 18) = v38;
            *((_QWORD *)v16 + 17) = v18;
LABEL_24:
            if ( v16 )
            {
              *(_QWORD *)v16 = 0LL;
              *((_DWORD *)v16 + 4) = ++*(_DWORD *)(v5 + 376);
              ++*(_DWORD *)(v5 + 228);
              *(_BYTE *)(v5 + 240) |= 8u;
              v20 = *(struct _ERESOURCE **)(v5 + 368);
              if ( v20 )
              {
                KeEnterCriticalRegion();
                ExAcquireResourceExclusiveLite(v20, 1u);
                if ( ++*(_DWORD *)(v5 + 224) == 1 )
                  KeResetEvent(*(PRKEVENT *)(*(_QWORD *)(v5 + 360) + 8LL));
                ExReleaseResourceLite(*(PERESOURCE *)(v5 + 368));
                KeLeaveCriticalRegion();
              }
            }
            goto LABEL_26;
          }
          *((_BYTE *)v18 + 64) = 0;
        }
LABEL_26:
        v21 = 0LL;
        *((_BYTE *)v16 + 32) ^= (*((_BYTE *)v16 + 32) ^ ~(*(_BYTE *)(v5 + 48) >> 1)) & 1;
        *(_BYTE *)(v5 + 48) |= 2u;
        v22 = *((_QWORD *)v16 + 17);
        *((_DWORD *)v16 + 5) = 8;
        v23 = *(_QWORD *)(v22 + 40);
        if ( (unsigned __int64)(4096 - v23) >= 8 )
        {
          v24 = *(_QWORD *)(v22 + 56);
          *(_QWORD *)(v22 + 40) = v23 + 8;
          v25 = (_QWORD *)(v23 + v24);
          if ( v25 )
          {
            *((_QWORD *)v16 + 19) += 8LL;
            v21 = v25;
          }
        }
        *v21 = a2;
        *(_BYTE *)(*((_QWORD *)v16 + 17) + 64LL) = 0;
        *((_QWORD *)v16 + 8) = 0LL;
        v26 = *(struct _ERESOURCE **)(*(_QWORD *)(v5 + 40) + 8LL);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v26, 1u);
        if ( v15 && !*((_BYTE *)v15 + 33) )
          DirectComposition::CBatch::SetSynchronizationObject(v16, v15);
        v27 = *(struct _ERESOURCE **)(v5 + 368);
        if ( v27 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(v27, 1u);
        }
        if ( *(int *)(v5 + 24) <= 0
          && (v28 = *(_QWORD *)(v5 + 40),
              v29 = *(struct _ERESOURCE **)(v28 + 8),
              KeEnterCriticalRegion(),
              ExAcquireResourceSharedLite(v29, 1u),
              LOBYTE(v29) = *(_DWORD *)(v28 + 148) != 0,
              ExReleaseResourceLite(*(PERESOURCE *)(v28 + 8)),
              KeLeaveCriticalRegion(),
              (_BYTE)v29) )
        {
          v30 = *(_QWORD *)v16;
          v31 = *(union _SLIST_HEADER **)(v5 + 40);
          *((_QWORD *)v16 + 3) = *(_QWORD *)v16;
          if ( v30 )
            *(_QWORD *)(v30 + 24) = v16;
          ExpInterlockedPushEntrySList(v31 + 6, (PSLIST_ENTRY)v16);
          KeSetEvent(*(PRKEVENT *)(v31[5].Alignment + 8), 1, 0);
        }
        else
        {
          if ( (*((_BYTE *)v16 + 32) & 1) != 0 )
            *(_BYTE *)(v5 + 48) &= ~2u;
          do
          {
            v35 = *(struct DirectComposition::CBatch **)v16;
            *(_QWORD *)v16 = 0LL;
            DirectComposition::CBatch::ReturnToApplication(v16, 0);
            v16 = v35;
          }
          while ( v35 );
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        v32 = *(struct _ERESOURCE **)(v5 + 368);
        if ( v32 )
        {
          ExReleaseResourceLite(v32);
          KeLeaveCriticalRegion();
        }
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v5 + 40) + 8LL));
        KeLeaveCriticalRegion();
        v15 = v43;
LABEL_40:
        if ( v15 )
          ObfDereferenceObject(v15);
        (**(void (__fastcall ***)(__int64))v5)(v5);
        return (unsigned int)v7;
      }
      v16 = *(struct DirectComposition::CBatch **)(v5 + 168);
      *(_QWORD *)(v5 + 168) = 0LL;
      goto LABEL_24;
    }
  }
  return (unsigned int)v7;
}
