/*
 * XREFs of KiEnumerateCallback @ 0x140001B90
 * Callers:
 *     <none>
 * Callees:
 *     KiEnumerateNmiSxCallback @ 0x140001BF0 (KiEnumerateNmiSxCallback.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExReferenceCallBackBlock @ 0x140088AE0 (ExReferenceCallBackBlock.c)
 */

__int64 __fastcall KiEnumerateCallback(int a1, struct _EX_RUNDOWN_REF **a2, __int64 a3, _QWORD *a4)
{
  struct _EX_RUNDOWN_REF *v7; // r8
  __int64 v8; // rax
  signed __int64 v10; // rax
  signed __int64 v11; // rtt

  if ( !a1 )
    return KiEnumerateNmiSxCallback(a2, a3, a4);
  if ( a1 != 1 )
    return 0LL;
  v7 = *a2;
  if ( *a2 )
  {
    _m_prefetchw(&KiBoundsCallback);
    v10 = KiBoundsCallback;
    if ( ((unsigned __int64)v7 ^ KiBoundsCallback) >= 0xF )
    {
LABEL_11:
      ExReleaseRundownProtection_0(v7);
    }
    else
    {
      while ( 1 )
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange64(&KiBoundsCallback, v10 + 1, v10);
        if ( v11 == v10 )
          break;
        if ( ((unsigned __int64)v7 ^ v10) >= 0xF )
          goto LABEL_11;
      }
    }
    *a2 = 0LL;
    return 0LL;
  }
  v8 = ExReferenceCallBackBlock(&KiBoundsCallback, a2, 0LL, a3);
  if ( !v8 )
    return 0LL;
  *a2 = (struct _EX_RUNDOWN_REF *)v8;
  *a4 = *(_QWORD *)(v8 + 8);
  return 1LL;
}
