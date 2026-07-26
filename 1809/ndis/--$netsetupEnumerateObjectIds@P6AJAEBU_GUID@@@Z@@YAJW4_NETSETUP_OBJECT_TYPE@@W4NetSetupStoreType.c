/*
 * XREFs of ??$netsetupEnumerateObjectIds@P6AJAEBU_GUID@@@Z@@YAJW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@P6AJAEBU_GUID@@@Z@Z @ 0x1C0104988
 * Callers:
 *     ndisEnsureBindingInfoLoaded @ 0x1C0105DEC (ndisEnsureBindingInfoLoaded.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B4068 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 *     ?netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z @ 0x1C00B4324 (-netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C00C74C4 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 */

__int64 __fastcall netsetupEnumerateObjectIds<long (*)(_GUID const &)>(
        int a1,
        __int64 a2,
        __int64 (__fastcall *a3)(GUID *))
{
  unsigned int v4; // eax
  unsigned int v5; // edi
  ULONG i; // esi
  NTSTATUS SubkeyName; // eax
  UNICODE_STRING *v8; // rbx
  HANDLE Handle; // [rsp+20h] [rbp-248h] BYREF
  PCUNICODE_STRING GuidString; // [rsp+28h] [rbp-240h] BYREF
  GUID Guid; // [rsp+30h] [rbp-238h] BYREF
  wchar_t v13[256]; // [rsp+40h] [rbp-228h] BYREF

  Handle = 0LL;
  netsetupBuildStorePath(a1, 0, v13);
  v4 = KRegKey::Open((KRegKey *)&Handle, 8u, v13, 0LL);
  v5 = v4;
  if ( v4 == -1073741772 )
  {
    v5 = 0;
  }
  else if ( !v4 )
  {
    for ( i = 0; ; ++i )
    {
      GuidString = 0LL;
      SubkeyName = KRegKey::GetSubkeyName(&Handle, i, (void **)&GuidString);
      v8 = (UNICODE_STRING *)GuidString;
      v5 = SubkeyName;
      if ( SubkeyName == -2147483622 )
        break;
      if ( SubkeyName )
        goto LABEL_13;
      if ( !RtlGUIDFromString(GuidString, &Guid) )
      {
        v5 = a3(&Guid);
        if ( v5 )
          goto LABEL_13;
      }
      if ( v8 )
        ExFreePoolWithTag(v8, 0x7274534Bu);
    }
    v5 = 0;
LABEL_13:
    if ( v8 )
      ExFreePoolWithTag(v8, 0x7274534Bu);
  }
  if ( Handle )
    ZwClose(Handle);
  return v5;
}
