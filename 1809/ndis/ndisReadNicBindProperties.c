/*
 * XREFs of ndisReadNicBindProperties @ 0x1C0106590
 * Callers:
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C0105B18 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C00C74C4 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C00C7AA0 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ndisBlowStringListIntoAtoms @ 0x1C0105A20 (ndisBlowStringListIntoAtoms.c)
 *     ndisReplaceBindTokens @ 0x1C0106888 (ndisReplaceBindTokens.c)
 */

__int64 __fastcall ndisReadNicBindProperties(unsigned int *a1, __int64 a2)
{
  __int128 v2; // xmm0
  unsigned int v5; // ebx
  void **p_Handle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t v9[256]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = *(_OWORD *)a1;
  Handle = 0LL;
  *(_OWORD *)a2 = v2;
  netsetupBuildObjectPath(2, a1, 0, 1, v9);
  v5 = KRegKey::Open((KRegKey *)&Handle, 1u, v9, 0LL);
  if ( v5 == -1073741772 )
  {
    *(_DWORD *)(a2 + 64) = 1;
    netsetupBuildObjectPath(2, a1, 1, 1, v9);
    v5 = KRegKey::Open((KRegKey *)&Handle, 1u, v9, 0LL);
  }
  if ( !v5 )
  {
    p_Handle = &Handle;
    v5 = ndisBlowStringListIntoAtoms(&p_Handle, (const struct _NETSETUPPROPKEY *)&unk_1C00915F8, a2 + 16);
    if ( !v5 )
    {
      v5 = ndisBlowStringListIntoAtoms(&p_Handle, (const struct _NETSETUPPROPKEY *)&unk_1C00915E0, a2 + 32);
      if ( !v5 )
      {
        v5 = ndisBlowStringListIntoAtoms(&p_Handle, (const struct _NETSETUPPROPKEY *)&unk_1C00915B0, a2 + 48);
        if ( !v5 )
          v5 = ndisReplaceBindTokens(a2, &p_Handle);
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return v5;
}
