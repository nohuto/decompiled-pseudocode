/*
 * XREFs of _lambda_8005b057a5d97ca351a0db5179b44427_::operator() @ 0x140012298
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXI_J3PEA_K4@Z @ 0x14000F420 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXI_J3PEA_K4@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall lambda_8005b057a5d97ca351a0db5179b44427_::operator()(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(*a1 + 8LL);
  if ( v2 )
  {
    LocalFree(v2);
    *(_QWORD *)(*a1 + 8LL) = 0LL;
  }
  v3 = *(void **)(a1[1] + 8LL);
  if ( v3 )
  {
    LocalFree(v3);
    *(_QWORD *)(a1[1] + 8LL) = 0LL;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1[2] + 16LL));
}
