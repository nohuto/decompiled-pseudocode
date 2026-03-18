/*
 * XREFs of NtDCompositionSubmitDWMBatch @ 0x1C000F3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C000F704 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C0059FE4 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z @ 0x1C005A0FC (-SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0x @ 0x1C00EB524 (McTemplateK0x.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0167E40 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionSubmitDWMBatch(int a1, __int64 a2, void *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rbx
  __int64 v7; // r14
  int v8; // r12d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // r15
  struct _ERESOURCE *v11; // rdi
  struct _RTL_GENERIC_TABLE *v12; // rcx
  __int64 v13; // rsi
  _QWORD *v14; // rax
  struct _ERESOURCE *v15; // rdi
  struct DirectComposition::SynchronizationObject *v16; // rbp
  struct DirectComposition::CBatch *BatchFragment; // rsi
  _QWORD *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  struct _ERESOURCE *v23; // rdi
  struct _ERESOURCE *v24; // rdi
  __int64 v25; // rbp
  struct _ERESOURCE *v26; // rdi
  __int64 v27; // r8
  struct DirectComposition::CBatch *v28; // rcx
  char v29; // al
  __int64 v30; // rdi
  struct _ERESOURCE *v31; // rcx
  int v33; // eax
  __int64 v34; // rcx
  struct DirectComposition::CBatch *v35; // rdi
  int Buffer; // [rsp+20h] [rbp-48h] BYREF
  __int64 v37; // [rsp+28h] [rbp-40h]
  struct DirectComposition::SynchronizationObject *v39; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( CurrentProcessWin32Process && (v10 = *(_QWORD *)(CurrentProcessWin32Process + 256)) != 0 )
  {
    v11 = *(struct _ERESOURCE **)(v10 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v11, 1u);
    v12 = *(struct _RTL_GENERIC_TABLE **)v10;
    Buffer = a1;
    v37 = 0LL;
    v13 = 0LL;
    v14 = RtlLookupElementGenericTable(v12, &Buffer);
    if ( v14 && (v13 = v14[1]) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    else
      v8 = -1073741790;
    ExReleaseResourceLite(*(PERESOURCE *)(v10 + 8));
    KeLeaveCriticalRegion();
    if ( v13 )
    {
      v15 = *(struct _ERESOURCE **)(v13 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v15, 1u);
      v7 = v13;
    }
    v4 = a2;
  }
  else
  {
    v8 = -1073741823;
  }
  if ( v8 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7) == 2 )
    {
      v6 = v7;
    }
    else
    {
      v8 = -1073741811;
      (**(void (__fastcall ***)(__int64))v7)(v7);
    }
    if ( v8 >= 0 )
    {
      v16 = 0LL;
      v39 = 0LL;
      if ( a3 )
      {
        v33 = DirectComposition::SynchronizationObject::ResolveHandle(a3, 1u, 1, &v39);
        v16 = v39;
        v8 = v33;
      }
      if ( v8 >= 0 )
      {
        BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                          (DirectComposition::CApplicationChannel *)v6,
                          1,
                          1);
        v18 = 0LL;
        *((_BYTE *)BatchFragment + 32) ^= (*((_BYTE *)BatchFragment + 32) ^ ~(*(_BYTE *)(v6 + 48) >> 1)) & 1;
        *(_BYTE *)(v6 + 48) |= 2u;
        v19 = *((_QWORD *)BatchFragment + 17);
        *((_DWORD *)BatchFragment + 5) = 8;
        v20 = *(_QWORD *)(v19 + 40);
        if ( (unsigned __int64)(4096 - v20) >= 8 )
        {
          v21 = *(_QWORD *)(v19 + 56);
          *(_QWORD *)(v19 + 40) = v20 + 8;
          v22 = (_QWORD *)(v20 + v21);
          if ( v22 )
          {
            *((_QWORD *)BatchFragment + 19) += 8LL;
            v18 = v22;
          }
        }
        *v18 = v4;
        *(_BYTE *)(*((_QWORD *)BatchFragment + 17) + 64LL) = 0;
        *((_QWORD *)BatchFragment + 8) = 0LL;
        v23 = *(struct _ERESOURCE **)(*(_QWORD *)(v6 + 40) + 8LL);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v23, 1u);
        if ( v16 && !*((_BYTE *)v16 + 33) )
          DirectComposition::CBatch::SetSynchronizationObject(BatchFragment, v16);
        v24 = *(struct _ERESOURCE **)(v6 + 368);
        if ( v24 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(v24, 1u);
        }
        if ( *(int *)(v6 + 24) <= 0
          && (v25 = *(_QWORD *)(v6 + 40),
              v26 = *(struct _ERESOURCE **)(v25 + 8),
              KeEnterCriticalRegion(),
              ExAcquireResourceSharedLite(v26, 1u),
              LOBYTE(v26) = *(_DWORD *)(v25 + 148) != 0,
              ExReleaseResourceLite(*(PERESOURCE *)(v25 + 8)),
              KeLeaveCriticalRegion(),
              (_BYTE)v26) )
        {
          v28 = *(struct DirectComposition::CBatch **)BatchFragment;
          v29 = *(_BYTE *)(v6 + 241) & 1;
          v30 = *(_QWORD *)(v6 + 40);
          *((_QWORD *)BatchFragment + 3) = *(_QWORD *)BatchFragment;
          if ( v28 )
            *((_QWORD *)v28 + 3) = BatchFragment;
          if ( v29 )
          {
            v34 = (unsigned int)(*(_DWORD *)(v30 + 256) + 1);
            *(_DWORD *)(v30 + 256) = v34;
            if ( (BYTE5(Microsoft_Windows_Win32kEnableBits) & 1) != 0 )
              McTemplateK0x(v34, &HighWorkLoadBatchCountUpdatedPending, v27, (int)v34);
          }
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(v30 + 96), (PSLIST_ENTRY)BatchFragment);
          KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v30 + 80) + 8LL), 1, 0);
          *(_BYTE *)(v6 + 241) &= ~1u;
        }
        else
        {
          if ( (*((_BYTE *)BatchFragment + 32) & 1) != 0 )
            *(_BYTE *)(v6 + 48) &= ~2u;
          do
          {
            v35 = *(struct DirectComposition::CBatch **)BatchFragment;
            *(_QWORD *)BatchFragment = 0LL;
            DirectComposition::CBatch::ReturnToApplication(BatchFragment, 0);
            BatchFragment = v35;
          }
          while ( v35 );
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
        v31 = *(struct _ERESOURCE **)(v6 + 368);
        if ( v31 )
        {
          ExReleaseResourceLite(v31);
          KeLeaveCriticalRegion();
        }
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v6 + 40) + 8LL));
        KeLeaveCriticalRegion();
        v16 = v39;
      }
      if ( v16 )
        ObfDereferenceObject(v16);
      (**(void (__fastcall ***)(__int64))v6)(v6);
    }
  }
  return (unsigned int)v8;
}
