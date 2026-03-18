/*
 * XREFs of ?RegisterCompositionSurfaceProxy@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C0232494
 * Callers:
 *     ?VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z @ 0x1C025BE28 (-VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA@@QEAAJPEAVDXGCOMPOSITIONSURFACEPROXY@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::RegisterCompositionSurfaceProxy(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        struct DXGCOMPOSITIONSURFACEPROXY *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // edi
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  __int64 v10; // rax

  v3 = (*(__int64 (__fastcall **)(_QWORD, struct DXGCOMPOSITIONSURFACEPROXY *, __int64))(**((_QWORD **)this + 1) + 56LL))(
         *((_QWORD *)this + 1),
         a2,
         18LL);
  v7 = 0;
  if ( v3 )
  {
    *((_DWORD *)a2 + 4) = v3;
    _m_prefetchw((char *)a2 + 8);
    v8 = *((_DWORD *)a2 + 2);
    do
    {
      if ( !v8 )
        break;
      v9 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)a2 + 2, v8 + 1, v8);
    }
    while ( v9 != v8 );
  }
  else
  {
    v7 = -1073741801;
    v10 = WdLogNewEntry5_WdWarning(v5, v4, v6);
    *(_QWORD *)(v10 + 24) = a2;
    *(_QWORD *)(v10 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v10);
  }
  return v7;
}
