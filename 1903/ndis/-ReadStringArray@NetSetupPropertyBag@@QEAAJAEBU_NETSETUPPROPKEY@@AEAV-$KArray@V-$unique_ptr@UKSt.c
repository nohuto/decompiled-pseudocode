/*
 * XREFs of ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x1C0124710
 * Callers:
 *     ndisBlowStringListIntoAtoms @ 0x1C0125D24 (ndisBlowStringListIntoAtoms.c)
 * Callees:
 *     netsetupIsImpliedProperty @ 0x1C0100F0C (netsetupIsImpliedProperty.c)
 *     ?OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z @ 0x1C0100F54 (-OpenPropertyKey@NetSetupPropertyBag@@AEAAJAEBU_NETSETUPPROPKEY@@AEAVKRegKey@@@Z.c)
 *     KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___ @ 0x1C01244D0 (KRegKey--QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d.c)
 *     ?resize@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C01248A4 (-resize@-$KArray@V-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00.c)
 */

__int64 __fastcall NetSetupPropertyBag::ReadStringArray(void ***a1, const struct _NETSETUPPROPKEY *a2, __int64 a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  _UNICODE_STRING v8; // [rsp+30h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  Handle = 0LL;
  v5 = NetSetupPropertyBag::OpenPropertyKey(a1, a2, (struct KRegKey *)&Handle);
  v6 = v5;
  if ( v5 == -1073741772 )
  {
    if ( netsetupIsImpliedProperty((__int64)a2) )
    {
      Rtl::KArray<wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,1>::resize(a3, 0LL);
      v6 = 0;
    }
  }
  else if ( !v5 )
  {
    *(_QWORD *)&v8.Length = 0LL;
    v8.Buffer = 0LL;
    v6 = KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___(
           &Handle,
           &v8,
           a3,
           a3);
  }
  if ( Handle )
    ZwClose(Handle);
  return v6;
}
