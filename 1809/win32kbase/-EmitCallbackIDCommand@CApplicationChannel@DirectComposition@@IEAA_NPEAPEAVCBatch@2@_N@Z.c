/*
 * XREFs of ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@_N@Z @ 0x1C0082768
 * Callers:
 *     ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000FE88 (-EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CApplicationChannel::EmitCallbackIDCommand(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2,
        unsigned __int8 a3)
{
  char *v5; // rdx
  __int64 v6; // rax
  void *v8; // [rsp+48h] [rbp+20h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v8) )
    return 0;
  v5 = (char *)v8;
  *(_DWORD *)v8 = 24;
  *(_QWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(v5 + 12) = 0LL;
  *((_DWORD *)v5 + 5) = 0;
  *((_DWORD *)v5 + 1) = 55;
  if ( a3 )
    v6 = *((_QWORD *)this + 84);
  else
    v6 = *((_QWORD *)this + 83);
  *((_QWORD *)v5 + 1) = v6;
  *((_DWORD *)v5 + 4) = a3;
  *((_DWORD *)v5 + 5) = *((_DWORD *)this + 174);
  return 1;
}
