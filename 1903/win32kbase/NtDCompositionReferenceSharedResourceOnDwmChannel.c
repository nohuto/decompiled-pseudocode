/*
 * XREFs of NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C00095E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C000957C (-ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?IsSystemResourceOfType@CConnection@DirectComposition@@QEAA_NVResourceHandle@@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C0009740 (-IsSystemResourceOfType@CConnection@DirectComposition@@QEAA_NVResourceHandle@@W4MIL_RESOURCE_TYP.c)
 *     ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z @ 0x1C000AF8C (-AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C000C67C (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     UserIsCurrentProcessDwm @ 0x1C0037DC0 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00806AC (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionReferenceSharedResourceOnDwmChannel(
        __int64 a1,
        void *a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned int *a5)
{
  unsigned int v8; // edi
  unsigned int v9; // ebx
  int v10; // edi
  _QWORD *v11; // rsi
  struct DirectComposition::CDwmChannel *v12; // r14
  int v14; // [rsp+24h] [rbp-24h]
  struct DirectComposition::CDwmChannel *v15; // [rsp+28h] [rbp-20h] BYREF
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF

  v8 = a1;
  v9 = 0;
  if ( (unsigned int)UserIsCurrentProcessDwm(a1) )
  {
    v15 = 0LL;
    v10 = DirectComposition::CDwmChannel::ReferenceHandleAndLock(v8, &v15);
    if ( v10 >= 0 )
    {
      v10 = DirectComposition::ResourceObject::ResolveHandle(
              a2,
              1u,
              1,
              (struct DirectComposition::ResourceObject **)&Object);
      if ( v10 >= 0 )
      {
        v11 = Object;
        if ( (unsigned __int8)DirectComposition::CConnection::IsSystemResourceOfType(
                                *((_QWORD *)Object + 5),
                                *((unsigned int *)Object + 12),
                                a3) )
        {
          v14 = *(_DWORD *)(*(_QWORD *)(v11[5] + 152LL) + 28LL);
          v9 = *((_DWORD *)v11 + 12);
          v12 = v15;
          DirectComposition::CApplicationChannel::PreallocateNextBatch(v15);
          v10 = DirectComposition::CBatch::AddSystemResourceRef(*((_QWORD *)v12 + 21), v9);
        }
        else
        {
          v10 = -1073741790;
        }
        ObfDereferenceObject(v11);
      }
      (**(void (__fastcall ***)(struct DirectComposition::CDwmChannel *))v15)(v15);
    }
  }
  else
  {
    v10 = -1073741790;
  }
  if ( v10 >= 0 )
  {
    if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = v14;
    if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a5 = v9;
  }
  return (unsigned int)v10;
}
