/*
 * XREFs of NtDCompositionSubmitDWMBatch @ 0x1C0014DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0017660 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z @ 0x1C009F134 (-SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C009F19C (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     McTemplateK0x @ 0x1C0145760 (McTemplateK0x.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C014596C (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
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
  struct DirectComposition::CBatch *BatchFragment; // rax
  struct DirectComposition::CBatch *v18; // rsi
  _QWORD *v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  _QWORD *v23; // r8
  struct _ERESOURCE *v24; // rdi
  struct _ERESOURCE *v25; // rdi
  __int64 v26; // rbp
  struct _ERESOURCE *v27; // rdi
  __int64 v28; // r8
  struct DirectComposition::CBatch *v29; // rcx
  char v30; // al
  __int64 v31; // rdi
  struct _ERESOURCE *v32; // rcx
  int v34; // eax
  __int64 v35; // rcx
  struct DirectComposition::CBatch *v36; // rdi
  int Buffer; // [rsp+20h] [rbp-48h] BYREF
  __int64 v38; // [rsp+28h] [rbp-40h]
  struct DirectComposition::SynchronizationObject *v40; // [rsp+88h] [rbp+20h] BYREF

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
    v38 = 0LL;
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
      v40 = 0LL;
      if ( a3 )
      {
        v34 = DirectComposition::SynchronizationObject::ResolveHandle(a3, 1u, 1, &v40);
        v16 = v40;
        v8 = v34;
      }
      if ( v8 >= 0 )
      {
        BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                          (DirectComposition::CApplicationChannel *)v6,
                          1,
                          1);
        v18 = BatchFragment;
        v19 = 0LL;
        *((_BYTE *)BatchFragment + 32) = ((*(_BYTE *)(v6 + 48) & 2) == 0) | *((_BYTE *)BatchFragment + 32) & 0xFE;
        *(_BYTE *)(v6 + 48) |= 2u;
        v20 = *((_QWORD *)BatchFragment + 17);
        *((_DWORD *)BatchFragment + 5) = 8;
        v21 = *(_QWORD *)(v20 + 40);
        if ( (unsigned __int64)(4096 - v21) >= 8 )
        {
          v22 = *(_QWORD *)(v20 + 56);
          *(_QWORD *)(v20 + 40) = v21 + 8;
          v23 = (_QWORD *)(v21 + v22);
          if ( v23 )
          {
            *((_QWORD *)BatchFragment + 19) += 8LL;
            v19 = v23;
          }
        }
        *v19 = v4;
        *(_BYTE *)(*((_QWORD *)BatchFragment + 17) + 64LL) = 0;
        *((_QWORD *)BatchFragment + 8) = 0LL;
        v24 = *(struct _ERESOURCE **)(*(_QWORD *)(v6 + 40) + 8LL);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v24, 1u);
        if ( v16 && !*((_BYTE *)v16 + 33) )
          DirectComposition::CBatch::SetSynchronizationObject(v18, v16);
        v25 = *(struct _ERESOURCE **)(v6 + 368);
        if ( v25 )
        {
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(v25, 1u);
        }
        if ( *(int *)(v6 + 24) <= 0
          && (v26 = *(_QWORD *)(v6 + 40),
              v27 = *(struct _ERESOURCE **)(v26 + 8),
              KeEnterCriticalRegion(),
              ExAcquireResourceSharedLite(v27, 1u),
              LOBYTE(v27) = *(_DWORD *)(v26 + 148) != 0,
              ExReleaseResourceLite(*(PERESOURCE *)(v26 + 8)),
              KeLeaveCriticalRegion(),
              (_BYTE)v27) )
        {
          v29 = *(struct DirectComposition::CBatch **)v18;
          v30 = *(_BYTE *)(v6 + 241) & 1;
          v31 = *(_QWORD *)(v6 + 40);
          *((_QWORD *)v18 + 3) = *(_QWORD *)v18;
          if ( v29 )
            *((_QWORD *)v29 + 3) = v18;
          if ( v30 )
          {
            v35 = (unsigned int)(*(_DWORD *)(v31 + 256) + 1);
            *(_DWORD *)(v31 + 256) = v35;
            if ( (WORD2(Microsoft_Windows_Win32kEnableBits) & 0x100) != 0 )
              McTemplateK0x(v35, &HighWorkLoadBatchCountUpdatedPending, v28, (int)v35);
          }
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(v31 + 96), (PSLIST_ENTRY)v18);
          KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v31 + 80) + 8LL), 1, 0);
          *(_BYTE *)(v6 + 241) &= ~1u;
        }
        else
        {
          if ( (*((_BYTE *)v18 + 32) & 1) != 0 )
            *(_BYTE *)(v6 + 48) &= ~2u;
          do
          {
            v36 = *(struct DirectComposition::CBatch **)v18;
            *(_QWORD *)v18 = 0LL;
            DirectComposition::CBatch::ReturnToApplication(v18, 0);
            v18 = v36;
          }
          while ( v36 );
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
        v32 = *(struct _ERESOURCE **)(v6 + 368);
        if ( v32 )
        {
          ExReleaseResourceLite(v32);
          KeLeaveCriticalRegion();
        }
        ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v6 + 40) + 8LL));
        KeLeaveCriticalRegion();
        v16 = v40;
      }
      if ( v16 )
        ObfDereferenceObject(v16);
      (**(void (__fastcall ***)(__int64))v6)(v6);
    }
  }
  return (unsigned int)v8;
}
