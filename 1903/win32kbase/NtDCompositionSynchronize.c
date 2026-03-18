/*
 * XREFs of NtDCompositionSynchronize @ 0x1C000C4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Synchronize@CSynchronizationManager@DirectComposition@@SAJPEAVCBatch@2@@Z @ 0x1C000C5BC (-Synchronize@CSynchronizationManager@DirectComposition@@SAJPEAVCBatch@2@@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C000C67C (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C000F2C4 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSynchronize(unsigned int a1, _QWORD *a2)
{
  __int64 v3; // r14
  int v4; // ebx
  DirectComposition::CApplicationChannel *v5; // rsi
  DirectComposition::CApplicationChannel *v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h]

  v7 = 0LL;
  v3 = 0LL;
  v8 = 0LL;
  v4 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v7);
  if ( v4 >= 0 )
  {
    v5 = v7;
    DirectComposition::CApplicationChannel::PreallocateNextBatch(v7);
    v4 = DirectComposition::CSynchronizationManager::Synchronize(*((struct DirectComposition::CBatch **)v5 + 21));
    if ( v4 >= 0 )
    {
      v3 = *(_QWORD *)(*((_QWORD *)v5 + 21) + 40LL);
      v8 = v3;
    }
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v5)(v5);
  }
  if ( v4 >= 0 )
  {
    if ( a2 )
    {
      if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a2 = v3;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v4;
}
