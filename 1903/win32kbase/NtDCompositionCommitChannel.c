/*
 * XREFs of NtDCompositionCommitChannel @ 0x1C000E1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C000E430 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1C000EFD8 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C01A3E54 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionCommitChannel(int a1, _DWORD *a2, bool *a3, int a4, void *a5)
{
  _DWORD *v6; // r15
  _BYTE *v7; // rdx
  DirectComposition::CApplicationChannel *v8; // rsi
  int v9; // ebx
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v13; // rdi
  struct _RTL_GENERIC_TABLE *v14; // rcx
  _QWORD *v15; // rax
  struct _ERESOURCE *v16; // rdi
  int v17; // r12d
  struct DirectComposition::SynchronizationObject *v18; // rdi
  bool v19; // bl
  bool v20; // r14
  struct DirectComposition::SynchronizationObject *v22; // [rsp+40h] [rbp-68h] BYREF
  DirectComposition::CApplicationChannel *v23; // [rsp+48h] [rbp-60h]
  struct DirectComposition::CBatch *v24; // [rsp+50h] [rbp-58h] BYREF
  struct DirectComposition::CBatch *v25; // [rsp+58h] [rbp-50h] BYREF
  int Buffer; // [rsp+60h] [rbp-48h] BYREF
  __int64 v27; // [rsp+64h] [rbp-44h]
  int v28; // [rsp+6Ch] [rbp-3Ch]

  v6 = a2;
  if ( !a3 )
    return (unsigned int)-1073741811;
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = *a2;
  }
  v7 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v7 = (_BYTE *)MmUserProbeAddress;
  *v7 = *v7;
  v8 = 0LL;
  v23 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  if ( CurrentProcessWin32Process )
    v11 = *(_QWORD *)(CurrentProcessWin32Process + 256);
  if ( v11 )
  {
    v13 = *(struct _ERESOURCE **)(v11 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v13, 1u);
    v14 = *(struct _RTL_GENERIC_TABLE **)v11;
    Buffer = a1;
    v27 = 0LL;
    v28 = 0;
    v15 = RtlLookupElementGenericTable(v14, &Buffer);
    if ( v15 )
      v10 = v15[1];
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v8 = v23;
    }
    else
    {
      v9 = -1073741790;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v11 + 8));
    KeLeaveCriticalRegion();
  }
  else
  {
    v9 = -1073741823;
  }
  if ( v10 )
  {
    v16 = *(struct _ERESOURCE **)(v10 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v16, 1u);
    v8 = (DirectComposition::CApplicationChannel *)v10;
  }
  if ( v9 < 0 )
    goto LABEL_37;
  if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)v8 + 8LL))(v8) != 1 )
  {
    v9 = -1073741811;
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v8)(v8);
LABEL_37:
    v8 = 0LL;
  }
  v17 = 0;
  if ( v9 < 0 )
  {
    v20 = 0;
  }
  else
  {
    v18 = 0LL;
    v22 = 0LL;
    if ( a5 )
    {
      DirectComposition::SynchronizationObject::ResolveHandle(a5, 1u, 1, &v22);
      v18 = v22;
    }
    do
    {
      v19 = DirectComposition::CApplicationChannel::BuildBatch(v8, &v24, &v25, a4 != 0);
      if ( v24 )
        DirectComposition::CApplicationChannel::SubmitBatch(v8, v24, v25, *((_BYTE *)v8 + 48) & 1, v18);
    }
    while ( !v19 );
    v20 = *((_DWORD *)v8 + 129) != 0;
    v9 = 0;
    v17 = *((_DWORD *)v8 + 94);
    if ( v18 )
      ObfDereferenceObject(v18);
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v8)(v8);
  }
  if ( v9 >= 0 )
  {
    if ( v6 )
      *v6 = v17;
    *a3 = v20;
  }
  return (unsigned int)v9;
}
