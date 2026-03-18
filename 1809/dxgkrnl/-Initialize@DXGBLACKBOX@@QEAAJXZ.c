/*
 * XREFs of ?Initialize@DXGBLACKBOX@@QEAAJXZ @ 0x1C0155368
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C015434C (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGBLACKBOX::Initialize(DXGBLACKBOX *this)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v5; // rax

  v2 = operator new[](0x1000uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 6) = v2;
  if ( v2 )
  {
    *((_QWORD *)this + 6) = v2;
    *v2 = 1;
    *(_DWORD *)(*((_QWORD *)this + 6) + 4LL) = 8;
    return 0LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v5 + 24) = 42LL;
    WdLogEvent5_WdError(v5);
    return 3221225495LL;
  }
}
