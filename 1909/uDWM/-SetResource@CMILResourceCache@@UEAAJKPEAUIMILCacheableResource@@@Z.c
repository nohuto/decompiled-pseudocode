/*
 * XREFs of ?SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z @ 0x1800BA660
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?EnsureCount@CMILResourceCache@@IEAAJI@Z @ 0x1800BA428 (-EnsureCount@CMILResourceCache@@IEAAJI@Z.c)
 */

__int64 __fastcall CMILResourceCache::SetResource(
        CMILResourceCache *this,
        unsigned int a2,
        struct IMILCacheableResource *a3)
{
  unsigned int v3; // esi
  __int64 v4; // rbp
  int v7; // eax
  int i; // eax
  int v10; // eax
  __int64 v11; // r14
  int v12; // eax
  __int64 v13; // rdi

  v3 = 0;
  v4 = a2;
  v7 = _InterlockedIncrement((volatile signed __int32 *)this + 14);
  if ( v7 < 0 )
  {
    if ( (v7 & 0x40000000) != 0 )
      return 2147942405LL;
    for ( i = *((_DWORD *)this + 14); i < 0; i = *((_DWORD *)this + 14) )
      SleepEx(0, 1);
  }
  if ( (unsigned int)v4 < *((_DWORD *)this + 8)
    || (v10 = CMILResourceCache::EnsureCount(this, (int)v4 + 1), v3 = v10, v10 >= 0) )
  {
    v11 = *((_QWORD *)this + 1);
    if ( a3
      && (v12 = (*(__int64 (__fastcall **)(struct IMILCacheableResource *))(*(_QWORD *)a3 + 16LL))(a3), v3 = v12, v12 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x233u);
    }
    else
    {
      v13 = _InterlockedExchange64((volatile __int64 *)(v11 + 8 * v4), (__int64)a3);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x228u);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 14);
  return v3;
}
