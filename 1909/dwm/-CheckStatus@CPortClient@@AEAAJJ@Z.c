/*
 * XREFs of ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140001660
 * Callers:
 *     ?SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z @ 0x140001590 (-SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequestWow64@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x140002A60 (-SendComplexSyncRequestWow64@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z @ 0x140002B70 (-SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z.c)
 *     ?SendComplexAsyncRequestNative@CPortClient@@AEAAJKPEBXF@Z @ 0x140006150 (-SendComplexAsyncRequestNative@CPortClient@@AEAAJKPEBXF@Z.c)
 *     ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x140006470 (-SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z.c)
 *     ?SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z @ 0x1400067D0 (-SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPortClient::CheckStatus(CPortClient *this, unsigned int a2)
{
  if ( a2 == -1073741769 || a2 == -1073741229 )
    _InterlockedCompareExchange((volatile signed __int32 *)this + 10, 1, 0);
  return a2;
}
