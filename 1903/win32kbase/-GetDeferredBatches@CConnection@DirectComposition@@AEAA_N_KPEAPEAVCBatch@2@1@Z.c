/*
 * XREFs of ?GetDeferredBatches@CConnection@DirectComposition@@AEAA_N_KPEAPEAVCBatch@2@1@Z @ 0x1C01A392C
 * Callers:
 *     ?GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z @ 0x1C01A39E0 (-GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CConnection::GetDeferredBatches(
        DirectComposition::CConnection *this,
        LARGE_INTEGER a2,
        struct DirectComposition::CBatch **a3,
        struct DirectComposition::CBatch **a4)
{
  struct DirectComposition::CBatch *v4; // rdi
  __int64 v9; // rsi
  LARGE_INTEGER *v10; // rbx
  struct DirectComposition::CBatch *v11; // rcx
  struct DirectComposition::CBatch *v12; // rax
  bool result; // al

  v4 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 17);
  if ( !v4 )
    return 0;
  do
  {
    v9 = *((_QWORD *)v4 + 1);
    if ( *(_BYTE *)(v9 + 49) )
    {
      if ( (*(_BYTE *)(v9 + 241) & 8) != 0 )
      {
        v10 = *(LARGE_INTEGER **)(v9 + 720);
        v10[5] = a2;
        v10[6] = KeQueryPerformanceCounter(0LL);
      }
      *(_BYTE *)(v9 + 49) = 0;
    }
    v11 = v4;
    v4 = *(struct DirectComposition::CBatch **)v4;
  }
  while ( v4 );
  v12 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  *a3 = v12;
  result = 1;
  *a4 = v11;
  return result;
}
