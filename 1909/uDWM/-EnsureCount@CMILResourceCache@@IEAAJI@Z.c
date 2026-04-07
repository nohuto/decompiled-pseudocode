/*
 * XREFs of ?EnsureCount@CMILResourceCache@@IEAAJI@Z @ 0x1800BA428
 * Callers:
 *     ?SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z @ 0x1800BA660 (-SetResource@CMILResourceCache@@UEAAJKPEAUIMILCacheableResource@@@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800175C0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FB12 (memset_0.c)
 */

__int64 __fastcall CMILResourceCache::EnsureCount(CMILResourceCache *this, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v5; // eax
  unsigned int v6; // esi
  int v7; // eax
  signed __int32 v8; // edx

  _InterlockedDecrement((volatile signed __int32 *)this + 14);
  v2 = 0;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)this + 14, 0x80000000, 0) )
    SleepEx(0, 1);
  v5 = *((_DWORD *)this + 8);
  if ( a2 > v5 )
  {
    v6 = a2 - v5;
    if ( a2 > *((_DWORD *)this + 7) )
    {
      v7 = DynArrayImpl<0>::Grow((char **)this + 1, 8u, v6, 1, 0LL);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x346u);
        goto LABEL_9;
      }
      v5 = *((_DWORD *)this + 8);
    }
    memset_0((void *)(*((_QWORD *)this + 1) + 8LL * v5), 0, 8LL * v6);
    *((_DWORD *)this + 8) = a2;
  }
LABEL_9:
  _m_prefetchw((char *)this + 56);
  do
    v8 = *((_DWORD *)this + 14);
  while ( v8 != _InterlockedCompareExchange((volatile signed __int32 *)this + 14, v8 - 0x7FFFFFFF, v8) );
  return v2;
}
