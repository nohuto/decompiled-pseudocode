/*
 * XREFs of CIAMGlobals::QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac___ @ 0x18010BFA4
 * Callers:
 *     _lambda_bb299bb733d931796faa9380238be063_::operator() @ 0x18010EE98 (_lambda_bb299bb733d931796faa9380238be063_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d4ad7b1cd28a5da3164b15e881c20e9b___ @ 0x18010BDC0 (Windows--Internal--ComTaskPool--QueueTask__lambda_d4ad7b1cd28a5da3164b15e881c20e9b___.c)
 */

__int64 __fastcall CIAMGlobals::QueueViewManagementTask__lambda_db2c8f4e35f08913841ac1af46aea9ac___(
        __int64 a1,
        __int64 *a2)
{
  PSRWLOCK v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  PVOID Ptr; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9[2]; // [rsp+28h] [rbp-10h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( !CApplicationManagerUtility::g_pIAMGlobals[14].Ptr )
    return 2147943568LL;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&Ptr);
  v9[0] = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v9);
  v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_d4ad7b1cd28a5da3164b15e881c20e9b___(
         v6,
         v5,
         (unsigned int)v2[15].Ptr,
         &Ptr);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Ptr);
  return v7;
}
