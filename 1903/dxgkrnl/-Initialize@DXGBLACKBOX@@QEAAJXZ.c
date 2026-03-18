/*
 * XREFs of ?Initialize@DXGBLACKBOX@@QEAAJXZ @ 0x1C016C3B4
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0169FCC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGBLACKBOX::Initialize(DXGBLACKBOX *this)
{
  _DWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v7; // rax

  v2 = operator new[](0x1000uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 6) = v2;
  if ( v2 )
  {
    *v2 = 2;
    *(_DWORD *)(*((_QWORD *)this + 6) + 4LL) = 8;
    return 0LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v4, v3, v5);
    *(_QWORD *)(v7 + 24) = 42LL;
    WdLogEvent5_WdError(v7);
    return 3221225495LL;
  }
}
