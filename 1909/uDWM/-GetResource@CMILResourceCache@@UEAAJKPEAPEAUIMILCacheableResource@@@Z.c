/*
 * XREFs of ?GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z @ 0x1800BA540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILResourceCache::GetResource(CMILResourceCache *this, unsigned int a2, void ****a3)
{
  __int64 v4; // rbx
  int v6; // eax
  int i; // eax
  __int64 v9; // r14
  __int64 v10; // rsi
  void ***v11; // rbx
  char v12; // al
  void **v13; // rdx

  v4 = a2;
  v6 = _InterlockedIncrement((volatile signed __int32 *)this + 14);
  if ( v6 < 0 )
  {
    if ( (v6 & 0x40000000) != 0 )
      return 2147942405LL;
    for ( i = *((_DWORD *)this + 14); i < 0; i = *((_DWORD *)this + 14) )
      SleepEx(0, 1);
  }
  *a3 = 0LL;
  if ( (unsigned int)v4 < *((_DWORD *)this + 8) )
  {
    v9 = *((_QWORD *)this + 1);
    v10 = v4;
    do
    {
      v11 = *(void ****)(v9 + 8 * v10);
      if ( v11 == &g_MILCacheableResourceDummy )
      {
        SleepEx(0, 1);
        v11 = 0LL;
      }
    }
    while ( v11 != (void ***)_InterlockedCompareExchange64(
                               (volatile signed __int64 *)(v9 + 8 * v10),
                               (signed __int64)&g_MILCacheableResourceDummy,
                               (signed __int64)v11) );
    if ( v11 )
    {
      v12 = ((__int64 (__fastcall *)(void ***))(*v11)[4])(v11);
      v13 = *v11;
      if ( v12 )
      {
        ((void (__fastcall *)(void ***))*v13)(v11);
        *a3 = v11;
      }
      else
      {
        ((void (__fastcall *)(void ***))v13[3])(v11);
        v11 = 0LL;
      }
    }
    if ( &g_MILCacheableResourceDummy != (void ***)_InterlockedCompareExchange64(
                                                     (volatile signed __int64 *)(v9 + 8 * v10),
                                                     (signed __int64)v11,
                                                     (signed __int64)&g_MILCacheableResourceDummy) )
    {
      if ( v11 )
        ((void (__fastcall *)(void ***))(*v11)[3])(v11);
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 14);
  return 0LL;
}
