/*
 * XREFs of ?InternalRelease@?$ComPtr@VPrivilegedWindowGroupingOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1801EB2A8
 * Callers:
 *     ??$MakeAndInitialize@VPrivilegedWindowGroupingOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedWindowGroupingOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1801E9558 (--$MakeAndInitialize@VPrivilegedWindowGroupingOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Micr.c)
 *     ??1PrivilegedOperationsService@@UEAA@XZ @ 0x1801E9F1C (--1PrivilegedOperationsService@@UEAA@XZ.c)
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x1801EADE0 (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowGroupingOpera.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedWindowGroupingOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801EBF80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedWindo.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<PrivilegedWindowGroupingOperations>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedWindowGroupingOperations,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
