/*
 * XREFs of IopRetestConfiguration @ 0x1408607E8
 * Callers:
 *     PnpFindBestConfigurationWorker @ 0x140752A60 (PnpFindBestConfigurationWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PnpLookupArbitersNewResources @ 0x140752C6C (PnpLookupArbitersNewResources.c)
 */

__int64 __fastcall IopRetestConfiguration(__int64 a1, unsigned int a2, _QWORD **a3)
{
  _QWORD *v6; // rdi
  __int64 result; // rax
  _QWORD *v8; // r8
  __int64 v9; // rbx
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF

  memset(v10, 0, 0x20uLL);
  v6 = *a3;
  result = 0LL;
  while ( v6 != a3 )
  {
    v8 = v6;
    v6 = (_QWORD *)*v6;
    if ( *((_BYTE *)v8 + 17) )
    {
      v9 = *(v8 - 8);
      LODWORD(v10[1]) = 0;
      v10[2] = 0LL;
      v10[0] = v8 - 6;
      PnpLookupArbitersNewResources(a1, a2, *(v8 - 7), *((_BYTE *)v8 - 72), &v10[2], (unsigned int *)&v10[1]);
      result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(v9 + 32))(*(_QWORD *)(v9 + 8), 1LL, v10);
      if ( (int)result < 0 )
        break;
    }
  }
  return result;
}
