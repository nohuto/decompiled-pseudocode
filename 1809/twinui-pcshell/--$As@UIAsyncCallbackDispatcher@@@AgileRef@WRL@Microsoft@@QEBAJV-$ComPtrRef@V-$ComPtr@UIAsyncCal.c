/*
 * XREFs of ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x18017BC3C
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_210ce7fccd7f8ade7715f981383c208f___ @ 0x18017C3B0 (CreationThreadDispatcher--RunSync__lambda_210ce7fccd7f8ade7715f981383c208f___.c)
 *     CreationThreadDispatcher::RunSync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___ @ 0x180190270 (CreationThreadDispatcher--RunSync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27___.c)
 *     CreationThreadDispatcher::RunSync__lambda_5671f6d4fec33abe381e1d9c920ba336___ @ 0x1801B02E4 (CreationThreadDispatcher--RunSync__lambda_5671f6d4fec33abe381e1d9c920ba336___.c)
 *     CreationThreadDispatcher::RunSync__lambda_37719fec74321e5ebed3721a062c5e83__&___ptr64_ @ 0x180203B44 (CreationThreadDispatcher--RunSync__lambda_37719fec74321e5ebed3721a062c5e83__-___ptr64_.c)
 *     CreationThreadDispatcher::RunSync__lambda_8c612fe075c3787ec3c70b8a7efe579c__&___ptr64_ @ 0x180203C34 (CreationThreadDispatcher--RunSync__lambda_8c612fe075c3787ec3c70b8a7efe579c__-___ptr64_.c)
 *     CreationThreadDispatcher::RunSync__lambda_c34c7e240f50506a2b76cf0f339b670d__&___ptr64_ @ 0x180203D24 (CreationThreadDispatcher--RunSync__lambda_c34c7e240f50506a2b76cf0f339b670d__-___ptr64_.c)
 *     CreationThreadDispatcher::RunSync__lambda_22e0521af8107b5e6397e610f3471390___ @ 0x1802859B0 (CreationThreadDispatcher--RunSync__lambda_22e0521af8107b5e6397e610f3471390___.c)
 *     CreationThreadDispatcher::RunSync__lambda_69db3e9761c77a5f5df8b9f478688ffa___ @ 0x180285ABC (CreationThreadDispatcher--RunSync__lambda_69db3e9761c77a5f5df8b9f478688ffa___.c)
 *     CreationThreadDispatcher::RunSync__lambda_a024861b188cf4ada81763f84c86531a___ @ 0x180285BE0 (CreationThreadDispatcher--RunSync__lambda_a024861b188cf4ada81763f84c86531a___.c)
 *     CreationThreadDispatcher::RunSync__lambda_b62b7423e3f7d115cab3cf876a54b413___ @ 0x180285CEC (CreationThreadDispatcher--RunSync__lambda_b62b7423e3f7d115cab3cf876a54b413___.c)
 *     CreationThreadDispatcher::RunSync__lambda_b6c581e8b051b8d7b55a0d96c6d35adf___ @ 0x180285DF8 (CreationThreadDispatcher--RunSync__lambda_b6c581e8b051b8d7b55a0d96c6d35adf___.c)
 *     CreationThreadDispatcher::RunSync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf___ @ 0x180285F0C (CreationThreadDispatcher--RunSync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf___.c)
 *     CreationThreadDispatcher::RunSync__lambda_2e36a2b14ac9c065e7d81a4387bad0af___ @ 0x18028D8B4 (CreationThreadDispatcher--RunSync__lambda_2e36a2b14ac9c065e7d81a4387bad0af___.c)
 *     CreationThreadDispatcher::RunSync__lambda_f100e3a3eb499b75a430141e91e776cf___ @ 0x180290D2C (CreationThreadDispatcher--RunSync__lambda_f100e3a3eb499b75a430141e91e776cf___.c)
 *     CreationThreadDispatcher::RunSync__lambda_95ea086e3b8fa056e55a3a293b600f83___ @ 0x1802921D8 (CreationThreadDispatcher--RunSync__lambda_95ea086e3b8fa056e55a3a293b600f83___.c)
 *     CreationThreadDispatcher::RunSync__lambda_b572b7b401bca0583e7d35bf745a8e03___ @ 0x1802922FC (CreationThreadDispatcher--RunSync__lambda_b572b7b401bca0583e7d35bf745a8e03___.c)
 *     CreationThreadDispatcher::RunSync__lambda_0f869028d2211307d6500fcb06deb8db___ @ 0x1802D0C10 (CreationThreadDispatcher--RunSync__lambda_0f869028d2211307d6500fcb06deb8db___.c)
 *     CreationThreadDispatcher::RunSync__lambda_3811e63994a6acdbea5f41d0f15c3e3d___ @ 0x1802D0D00 (CreationThreadDispatcher--RunSync__lambda_3811e63994a6acdbea5f41d0f15c3e3d___.c)
 *     CreationThreadDispatcher::RunSync__lambda_49edb9179b1ba6407f235e88a6b30a0e___ @ 0x1802D0DF0 (CreationThreadDispatcher--RunSync__lambda_49edb9179b1ba6407f235e88a6b30a0e___.c)
 *     CreationThreadDispatcher::RunSync__lambda_5e7b84d80f3018ca142c76d505d1d45c___ @ 0x1802D0EE8 (CreationThreadDispatcher--RunSync__lambda_5e7b84d80f3018ca142c76d505d1d45c___.c)
 *     CreationThreadDispatcher::RunSync__lambda_dc5eb0db6b15ac5b17502a4ce4d18856___ @ 0x1802EB1BC (CreationThreadDispatcher--RunSync__lambda_dc5eb0db6b15ac5b17502a4ce4d18856___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>(
        Microsoft::WRL::WeakRef *this,
        struct IInspectable **a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a2);
  return Microsoft::WRL::WeakRef::InternalResolve(this, &GUID_7702e77c_66f6_479b_af2b_e316cff5f814, a2);
}
