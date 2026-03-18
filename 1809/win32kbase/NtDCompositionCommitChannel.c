/*
 * XREFs of NtDCompositionCommitChannel @ 0x1C000EB60
 * Callers:
 *     <none>
 * Callees:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C000EDE0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1C000FEF8 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0167E40 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionCommitChannel(int a1, _DWORD *a2, bool *a3, int a4, void *a5)
{
  _DWORD *v7; // rcx
  _BYTE *v8; // rcx
  DirectComposition::CApplicationChannel *v9; // rsi
  int v10; // ebx
  __int64 v11; // r14
  __int64 v12; // r12
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v14; // rdi
  struct _RTL_GENERIC_TABLE *v15; // rcx
  _QWORD *v16; // rax
  struct _ERESOURCE *v17; // rdi
  int v18; // r12d
  struct DirectComposition::SynchronizationObject *v19; // rdi
  bool v20; // bl
  bool v21; // r14
  struct DirectComposition::SynchronizationObject *v23; // [rsp+40h] [rbp-68h] BYREF
  DirectComposition::CApplicationChannel *v24; // [rsp+48h] [rbp-60h]
  struct DirectComposition::CBatch *v25; // [rsp+50h] [rbp-58h] BYREF
  struct DirectComposition::CBatch *v26; // [rsp+58h] [rbp-50h] BYREF
  int Buffer; // [rsp+60h] [rbp-48h] BYREF
  __int64 v28; // [rsp+68h] [rbp-40h]

  if ( !a3 )
    return (unsigned int)-1073741811;
  if ( a2 )
  {
    v7 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    *v7 = *v7;
  }
  v8 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v8 = (_BYTE *)MmUserProbeAddress;
  *v8 = *v8;
  v9 = 0LL;
  v24 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( CurrentProcessWin32Process )
    v12 = *(_QWORD *)(CurrentProcessWin32Process + 256);
  if ( v12 )
  {
    v14 = *(struct _ERESOURCE **)(v12 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v14, 1u);
    v15 = *(struct _RTL_GENERIC_TABLE **)v12;
    Buffer = a1;
    v28 = 0LL;
    v16 = RtlLookupElementGenericTable(v15, &Buffer);
    if ( v16 )
      v11 = v16[1];
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v9 = v24;
    }
    else
    {
      v10 = -1073741790;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v12 + 8));
    KeLeaveCriticalRegion();
  }
  else
  {
    v10 = -1073741823;
  }
  if ( v11 )
  {
    v17 = *(struct _ERESOURCE **)(v11 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v17, 1u);
    v9 = (DirectComposition::CApplicationChannel *)v11;
  }
  if ( v10 < 0 )
    goto LABEL_37;
  if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)v9 + 8LL))(v9) != 1 )
  {
    v10 = -1073741811;
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v9)(v9);
LABEL_37:
    v9 = 0LL;
  }
  v18 = 0;
  if ( v10 < 0 )
  {
    v21 = 0;
  }
  else
  {
    v19 = 0LL;
    v23 = 0LL;
    if ( a5 )
    {
      DirectComposition::SynchronizationObject::ResolveHandle(a5, 1u, 1, &v23);
      v19 = v23;
    }
    do
    {
      v20 = DirectComposition::CApplicationChannel::BuildBatch(v9, &v25, &v26, a4 != 0);
      if ( v25 )
        DirectComposition::CApplicationChannel::SubmitBatch(v9, v25, v26, *((_BYTE *)v9 + 48) & 1, v19);
    }
    while ( !v20 );
    v21 = *((_DWORD *)v9 + 129) != 0;
    v10 = 0;
    v18 = *((_DWORD *)v9 + 94);
    if ( v19 )
      ObfDereferenceObject(v19);
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v9)(v9);
  }
  if ( v10 >= 0 )
  {
    if ( a2 )
      *a2 = v18;
    *a3 = v21;
  }
  return (unsigned int)v10;
}
