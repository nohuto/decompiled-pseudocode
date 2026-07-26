/*
 * XREFs of ?ndisReadLwfById@@YAJAEBU_GUID@@@Z @ 0x1C0126700
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0100980 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x1C0100B80 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C0101BE4 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 *     ?insertSorted@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N$$QEAULwfBindProperties@@P6A_NAEBU3@1@Z@Z @ 0x1C01258E8 (-insertSorted@-$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N$$QEAULwfBindProperties@@P6A_NAEBU3@1@.c)
 *     ndisBlowStringListIntoAtoms @ 0x1C0125D24 (ndisBlowStringListIntoAtoms.c)
 *     ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x1C0126134 (-ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z.c)
 */

__int64 __fastcall ndisReadLwfById(const struct _GUID *a1)
{
  __int128 v1; // xmm0
  unsigned int FilterAltitude; // ebx
  char *v3; // rcx
  bool v5; // [rsp+30h] [rbp-D0h] BYREF
  void **v6; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v8; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v9; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v10; // [rsp+68h] [rbp-98h]
  __int64 v11; // [rsp+70h] [rbp-90h] BYREF
  PVOID P; // [rsp+78h] [rbp-88h]
  unsigned int v13; // [rsp+80h] [rbp-80h] BYREF
  bool v14; // [rsp+84h] [rbp-7Ch] BYREF
  int v15; // [rsp+88h] [rbp-78h]
  wchar_t v16[128]; // [rsp+90h] [rbp-70h] BYREF

  v1 = (__int128)*a1;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  P = 0LL;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v8 = v1;
  Handle[0] = 0LL;
  netsetupBuildObjectPath(3LL, &a1->Data1, 0, 1, v16);
  FilterAltitude = KRegKey::Open((KRegKey *)Handle, 1u, v16, 0LL);
  if ( !FilterAltitude )
  {
    v6 = Handle;
    FilterAltitude = ndisBlowStringListIntoAtoms(&v6, (const struct _NETSETUPPROPKEY *)&unk_1C00D64D0, (__int64)&v9);
    if ( !FilterAltitude )
    {
      FilterAltitude = ndisBlowStringListIntoAtoms(&v6, (const struct _NETSETUPPROPKEY *)&unk_1C00D64E8, (__int64)&v11);
      if ( !FilterAltitude )
      {
        FilterAltitude = ndisGetFilterAltitude(&v6, &v13);
        if ( !FilterAltitude )
        {
          FilterAltitude = NetSetupPropertyBag::ReadBoolean(&v6, (const struct _NETSETUPPROPKEY *)&unk_1C00D6518, &v14);
          if ( !FilterAltitude )
          {
            NetSetupPropertyBag::ReadBoolean(&v6, (const struct _NETSETUPPROPKEY *)&unk_1C00D6500, &v5);
            v3 = v5 ? (char *)::P + 56 : (char *)::P + 40;
            FilterAltitude = -1073741670;
            if ( Rtl::KArray<LwfBindProperties,1>::insertSorted((__int64)v3, (__int64)&v8) )
              FilterAltitude = 0;
          }
        }
      }
    }
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  if ( P )
  {
    ExFreePoolWithTag(P, 0x7272414Bu);
    P = 0LL;
    v11 = 0LL;
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0x7272414Bu);
  return FilterAltitude;
}
