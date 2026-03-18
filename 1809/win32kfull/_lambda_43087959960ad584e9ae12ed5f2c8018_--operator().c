/*
 * XREFs of _lambda_43087959960ad584e9ae12ed5f2c8018_::operator() @ 0x1C000B858
 * Callers:
 *     _lambda_43087959960ad584e9ae12ed5f2c8018_::_lambda_invoker_cdecl_ @ 0x1C000B840 (_lambda_43087959960ad584e9ae12ed5f2c8018_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     SkipWindowOnMonitor @ 0x1C000B5C4 (SkipWindowOnMonitor.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C000B8FC (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall lambda_43087959960ad584e9ae12ed5f2c8018_::operator()(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int128 v7; // [rsp+20h] [rbp-18h]

  v7 = 0uLL;
  *a3 = 0uLL;
  if ( gpqForegroundPrev )
  {
    if ( IsWindowActivateable(*(const struct tagWND **)(gpqForegroundPrev + 128LL)) )
    {
      v5 = *(_QWORD *)(gpqForegroundPrev + 128LL);
      v6 = *(_QWORD *)(v5 + 40);
      if ( (*(_BYTE *)(v6 + 20) & 0x20) == 0
        && (*(_BYTE *)(v6 + 31) & 0x20) == 0
        && !(unsigned int)SkipWindowOnMonitor(v5) )
      {
        DWORD2(v7) = 4;
        *(_QWORD *)&v7 = *(_QWORD *)(gpqForegroundPrev + 128LL);
        *a3 = v7;
      }
    }
  }
  return *(_QWORD *)a3 != 0LL;
}
