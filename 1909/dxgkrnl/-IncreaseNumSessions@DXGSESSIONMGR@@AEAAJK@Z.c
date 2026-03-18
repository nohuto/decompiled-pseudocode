/*
 * XREFs of ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1C02774E0
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C00C61D8 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall DXGSESSIONMGR::IncreaseNumSessions(DXGSESSIONMGR *this, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int v6; // edi
  _QWORD *v7; // rax
  SIZE_T v8; // rax
  char *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  char *v14; // rsi
  __int64 v15; // rax
  __int64 result; // rax
  char *v17; // rcx

  v3 = (unsigned int)a2;
  if ( *((struct _KTHREAD **)this + 2) != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 3956LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( *((struct _KTHREAD **)this + 12) != KeGetCurrentThread() )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 3957LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *((_DWORD *)this + 18);
  do
    v6 *= 2;
  while ( (unsigned int)v3 >= v6 );
  v7 = (_QWORD *)WdLogNewEntry5_WdEvent(this);
  v7[3] = *((unsigned int *)this + 18);
  v7[4] = v6;
  v7[5] = v3;
  WdLogEvent5_WdEvent(v7);
  v8 = 8LL * v6;
  if ( !is_mul_ok(v6, 8uLL) )
    v8 = -1LL;
  v9 = (char *)operator new[](v8, 0x4B677844u, PagedPool);
  v14 = v9;
  if ( v9 )
  {
    memmove(v9, *((const void **)this + 5), 8LL * *((unsigned int *)this + 18));
    memset(&v14[8 * *((unsigned int *)this + 18)], 0, 8LL * (v6 - *((_DWORD *)this + 18)));
    v17 = (char *)*((_QWORD *)this + 5);
    if ( v17 != (char *)this + 48 )
      operator delete[](v17);
    *((_QWORD *)this + 5) = v14;
    result = 0LL;
    *((_DWORD *)this + 18) = v6;
  }
  else
  {
    *((_DWORD *)this + 33) |= 1u;
    v15 = WdLogNewEntry5_WdLowResource(v11, v10, v12, v13);
    *(_QWORD *)(v15 + 24) = v6;
    WdLogEvent5_WdLowResource(v15);
    return 3221225495LL;
  }
  return result;
}
