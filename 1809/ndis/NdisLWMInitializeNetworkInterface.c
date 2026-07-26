/*
 * XREFs of NdisLWMInitializeNetworkInterface @ 0x1C00F16A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     WPP_SF_qq_guid_ @ 0x1C0065450 (WPP_SF_qq_guid_.c)
 *     WPP_SF_qq_guid_qd @ 0x1C00654B0 (WPP_SF_qq_guid_qd.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisLWMCreateMiniport @ 0x1C00F2A18 (ndisLWMCreateMiniport.c)
 */

__int64 __fastcall NdisLWMInitializeNetworkInterface(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq_guid_(BugCheckParameter3, a2, BugCheckParameter3, a2, a3);
  *a4 = 0LL;
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( *(char *)(BugCheckParameter3 + 26) >= 0 )
    ndisBugCheckEx(0x29uLL, 2uLL, BugCheckParameter3, 0LL);
  v8 = ndisLWMCreateMiniport(BugCheckParameter3, a3, &v13);
  if ( v8 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_(0x8Eu, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids);
  }
  else
  {
    v9 = v13;
    *(_QWORD *)(v13 + 24) = a2;
    *a4 = v9;
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq_guid_qd(v11, v10, BugCheckParameter3, a2, a3, *a4, v8);
  return v8;
}
