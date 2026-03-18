/*
 * XREFs of NtDCompositionCommitChannel @ 0x1C00608E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0014B84 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C001555C (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C014596C (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionCommitChannel(unsigned int a1, _DWORD *a2, bool *a3, int a4, void *a5)
{
  _DWORD *v6; // r14
  int v7; // edi
  int v8; // r13d
  _BYTE *v9; // rdx
  struct DirectComposition::CApplicationChannel *v10; // rsi
  struct DirectComposition::SynchronizationObject *v11; // r15
  bool v13; // [rsp+20h] [rbp-58h] BYREF
  struct DirectComposition::CApplicationChannel *v14; // [rsp+28h] [rbp-50h] BYREF
  struct DirectComposition::SynchronizationObject *v15; // [rsp+30h] [rbp-48h] BYREF

  v6 = a2;
  v7 = 0;
  v14 = 0LL;
  v8 = 0;
  v13 = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = *a2;
    }
    v9 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 >= 0 )
  {
    v7 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v14);
    v10 = v14;
    if ( v7 >= 0 )
    {
      v11 = 0LL;
      v15 = 0LL;
      if ( a5 )
      {
        DirectComposition::SynchronizationObject::ResolveHandle(a5, 1u, 1, &v15);
        v11 = v15;
      }
      v7 = DirectComposition::CApplicationChannel::Commit(v10, &v13, a4 != 0, v11);
      if ( v7 >= 0 )
        v8 = *((_DWORD *)v10 + 94);
      if ( v11 )
        ObfDereferenceObject(v11);
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v10)(v10);
      if ( v7 >= 0 )
      {
        if ( v6 )
          *v6 = v8;
        *a3 = v13;
      }
    }
  }
  return (unsigned int)v7;
}
