/*
 * XREFs of NdisLWMInitializeNetworkInterface @ 0x1C009D890
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 *     WPP_RECORDER_SF_qq_guid_ @ 0x1C009F5A0 (WPP_RECORDER_SF_qq_guid_.c)
 *     WPP_RECORDER_SF_qq_guid_qd @ 0x1C009F690 (WPP_RECORDER_SF_qq_guid_qd.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0117D04 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall NdisLWMInitializeNetworkInterface(
        ULONG_PTR BugCheckParameter3,
        void *a2,
        const struct _GUID *a3,
        struct _NDIS_MINIPORT_BLOCK **a4)
{
  int v8; // edx
  unsigned int v9; // edi
  struct _NDIS_MINIPORT_BLOCK *v10; // rax
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  int v15; // [rsp+20h] [rbp-48h]
  struct _NDIS_MINIPORT_BLOCK *v16; // [rsp+70h] [rbp+8h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq_guid_(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, (_DWORD)a3, (_DWORD)a4);
  *a4 = 0LL;
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( *(char *)(BugCheckParameter3 + 26) >= 0 )
    ndisBugCheckEx(0x29uLL, 2uLL, BugCheckParameter3, 0LL);
  v9 = ndisLWMCreateMiniport((struct _NDIS_M_DRIVER_BLOCK *)BugCheckParameter3, a3, &v16);
  if ( v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v8,
        1,
        144,
        (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids);
    }
  }
  else
  {
    v10 = v16;
    v16->MiniportAdapterContext = a2;
    *a4 = v10;
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq_guid_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      v12,
      v13,
      v15,
      BugCheckParameter3,
      (char)a2,
      (__int64)a3,
      (char)*a4,
      v9);
  return v9;
}
