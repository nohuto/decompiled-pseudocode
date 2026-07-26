/*
 * XREFs of ndisMiniportQueryInterfaceProperty @ 0x1C0116734
 * Callers:
 *     ndisCreateAdapterInstanceName @ 0x1C0106AA4 (ndisCreateAdapterInstanceName.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C01017B8 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x1C0106C5C (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C010B380 (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisMiniportQueryInterfaceProperty(__int64 a1, void *a2, _QWORD *a3)
{
  char v4; // di
  int v5; // edx
  unsigned int v6; // ebx
  int v7; // edx
  int v8; // edx
  PVOID v9; // rcx
  HANDLE Handle; // [rsp+60h] [rbp+20h] BYREF
  PVOID P; // [rsp+68h] [rbp+28h] BYREF
  void **p_Handle; // [rsp+78h] [rbp+38h] BYREF

  P = a2;
  Handle = 0LL;
  v4 = a1;
  v6 = ndisIfOpenInterfaceRegistryKey((unsigned int *)(a1 + 4008), (KRegKey *)&Handle, 1u, 1);
  if ( v6 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        13,
        27,
        &WPP_a3868331fe073391203672ef2b551460_Traceguids,
        v4,
        v6);
    }
  }
  else
  {
    P = 0LL;
    p_Handle = &Handle;
    v6 = NetSetupPropertyBag::ReadString(&p_Handle, (const struct _NETSETUPPROPKEY *)&unk_1C00D37D8, &P);
    if ( v6 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v7,
          13,
          28,
          &WPP_a3868331fe073391203672ef2b551460_Traceguids,
          v4,
          v6);
      }
    }
    else
    {
      Rtl::DuplicateUnicodeString(&p_Handle, (const void **)P);
      if ( p_Handle )
      {
        *a3 = p_Handle;
        v6 = 0;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v8,
            13,
            29,
            &WPP_a3868331fe073391203672ef2b551460_Traceguids,
            v4);
        }
        v6 = -1073741670;
      }
    }
    v9 = P;
    P = 0LL;
    if ( v9 )
      ExFreePoolWithTag(v9, 0x7274534Bu);
  }
  if ( Handle )
    ZwClose(Handle);
  return v6;
}
