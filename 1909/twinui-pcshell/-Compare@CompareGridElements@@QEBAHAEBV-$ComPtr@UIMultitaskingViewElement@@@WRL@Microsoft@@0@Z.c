/*
 * XREFs of ?Compare@CompareGridElements@@QEBAHAEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@0@Z @ 0x1803881C0
 * Callers:
 *     ??$BinarySearchEx@VCompareGridElements@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVCompareGridElements@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K@Z @ 0x1803877EC (--$BinarySearchEx@VCompareGridElements@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewElemen.c)
 * Callees:
 *     ?s_GetActivationTime@CompareGridElements@@CA_KPEAUIMultitaskingViewElement@@@Z @ 0x180389C78 (-s_GetActivationTime@CompareGridElements@@CA_KPEAUIMultitaskingViewElement@@@Z.c)
 */

__int64 __fastcall CompareGridElements::Compare(
        __int64 a1,
        struct IMultitaskingViewElement **a2,
        struct IMultitaskingViewElement **a3)
{
  unsigned __int64 ActivationTime; // rdi
  unsigned __int64 v5; // rax

  ActivationTime = CompareGridElements::s_GetActivationTime(*a2);
  v5 = CompareGridElements::s_GetActivationTime(*a3);
  if ( ActivationTime <= v5 )
    return ActivationTime < v5;
  else
    return 0xFFFFFFFFLL;
}
