/*
 * XREFs of ?SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z @ 0x18021B340
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureCount@CMILResourceCache@@IEAAJI@Z @ 0x18021B114 (-EnsureCount@CMILResourceCache@@IEAAJI@Z.c)
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
  __int64 v11; // rcx
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi

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
    v12 = *((_QWORD *)this + 1);
    if ( a3
      && (v13 = (*(__int64 (__fastcall **)(struct IMILCacheableResource *))(*(_QWORD *)a3 + 16LL))(a3), v3 = v13, v13 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x226u);
    }
    else
    {
      v15 = _InterlockedExchange64((volatile __int64 *)(v12 + 8 * v4), (__int64)a3);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x21Bu);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 14);
  return v3;
}
