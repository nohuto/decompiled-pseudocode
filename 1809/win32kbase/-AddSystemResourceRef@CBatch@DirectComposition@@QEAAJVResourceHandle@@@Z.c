/*
 * XREFs of ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z @ 0x1C000CD1C
 * Callers:
 *     ?EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle@@@Z @ 0x1C000C53C (-EmitDuplicateHelper@CResourceMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@VResourceHandle.c)
 *     NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C00345C0 (NtDCompositionReferenceSharedResourceOnDwmChannel.c)
 * Callees:
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C000CE2C (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019A40 (Win32AllocPoolWithQuotaZInit.c)
 */

__int64 __fastcall DirectComposition::CBatch::AddSystemResourceRef(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  unsigned int v5; // edi
  __int64 v6; // rsi

  v2 = *(_QWORD *)(a1 + 8);
  v5 = 0;
  v6 = Win32AllocPoolWithQuotaZInit(0x10uLL);
  if ( v6 )
  {
    DirectComposition::CConnection::ReferenceSystemResource(*(_QWORD *)(v2 + 40), a2);
    *(_DWORD *)(v6 + 8) = a2;
    *(_QWORD *)v6 = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(a1 + 88) = v6;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
