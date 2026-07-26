/*
 * XREFs of ?ndisReadProtocolById@@YAJAEBU_GUID@@@Z @ 0x1C0126A40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     ??1ProtocolBindProperties@@QEAA@XZ @ 0x1C00C74D0 (--1ProtocolBindProperties@@QEAA@XZ.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0100980 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0100B80 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C01017B8 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C0101BE4 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ?append@?$KArray@UProtocolBindProperties@@$00@Rtl@@QEAA_N$$QEAUProtocolBindProperties@@@Z @ 0x1C01256AC (-append@-$KArray@UProtocolBindProperties@@$00@Rtl@@QEAA_N$$QEAUProtocolBindProperties@@@Z.c)
 *     ndisBlowStringListIntoAtoms @ 0x1C0125D24 (ndisBlowStringListIntoAtoms.c)
 */

__int64 __fastcall ndisReadProtocolById(const struct _GUID *a1)
{
  __int128 v1; // xmm0
  unsigned int v2; // ebx
  void **p_Handle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v6; // [rsp+40h] [rbp-C0h] BYREF
  void *v7; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v8[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v9; // [rsp+60h] [rbp-A0h]
  _DWORD v10[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v11; // [rsp+70h] [rbp-90h]
  bool v12; // [rsp+78h] [rbp-88h] BYREF
  int v13; // [rsp+7Ch] [rbp-84h]
  wchar_t v14[256]; // [rsp+80h] [rbp-80h] BYREF

  v1 = (__int128)*a1;
  v7 = 0LL;
  v8[0] = 0;
  v8[1] = 0;
  v9 = 0LL;
  v10[0] = 0;
  v10[1] = 0;
  v11 = 0LL;
  v13 = 0;
  Handle = 0LL;
  v12 = 0;
  v6 = v1;
  netsetupBuildObjectPath(4LL, &a1->Data1, 0, 1, v14);
  v2 = KRegKey::Open((KRegKey *)&Handle, 1u, v14, 0LL);
  if ( !v2 )
  {
    p_Handle = &Handle;
    v2 = ndisBlowStringListIntoAtoms(&p_Handle, (const struct _NETSETUPPROPKEY *)&unk_1C00D6530, (__int64)v8);
    if ( !v2 )
    {
      v2 = ndisBlowStringListIntoAtoms(&p_Handle, (const struct _NETSETUPPROPKEY *)&unk_1C00D6448, (__int64)v10);
      if ( !v2 )
      {
        v2 = NetSetupPropertyBag::ReadString(&p_Handle, (const struct _NETSETUPPROPKEY *)&unk_1C00D6590, &v7);
        if ( !v2 )
        {
          v2 = NetSetupPropertyBag::ReadBoolean(&p_Handle, (const struct _NETSETUPPROPKEY *)&unk_1C00D6518, &v12);
          if ( !v2 )
          {
            if ( Rtl::KArray<ProtocolBindProperties,1>::append((__int64)P + 24, (__int64)&v6) )
              v2 = 0;
            else
              v2 = -1073741670;
          }
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  ProtocolBindProperties::~ProtocolBindProperties((ProtocolBindProperties *)&v6);
  return v2;
}
