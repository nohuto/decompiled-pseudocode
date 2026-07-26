/*
 * XREFs of ndisIfRemoveIfBlockMiniportAssociation @ 0x1C00E346C
 * Callers:
 *     ndisPnPCompleteRemoveDevice @ 0x1C00F2FE0 (ndisPnPCompleteRemoveDevice.c)
 *     ndisAddDevice @ 0x1C010DDE4 (ndisAddDevice.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisIfDetachMiniportBlock @ 0x1C0042740 (ndisIfDetachMiniportBlock.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00C4184 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisIfRemoveIfBlockMiniportAssociation(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h]
  __int64 v11; // [rsp+30h] [rbp-10h]

  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qq(0xC9u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1, a2);
  *(_DWORD *)(*(_QWORD *)(a2 + 4072) + 1116LL) = 0;
  *(_DWORD *)(*(_QWORD *)(a2 + 4072) + 1192LL) = a3;
  v6 = *(_QWORD *)(a2 + 4072);
  if ( *(_DWORD *)(v6 + 1112) != 2 )
  {
    *(_DWORD *)(v6 + 1112) = 2;
    v7 = *(_QWORD *)(a2 + 4072);
    v9 = 1LL;
    v11 = 0x21800000008LL;
    v10 = v7 + 1112;
    ndisNsiNotifyClientInterfaceChange(v7, 0, (__int64)&v9, 1);
    v6 = *(_QWORD *)(a2 + 4072);
  }
  if ( *(_DWORD *)(v6 + 1220) )
  {
    *(_DWORD *)(v6 + 1220) = 0;
    v8 = *(_QWORD *)(a2 + 4072);
    v9 = 1LL;
    v11 = 0x28400000004LL;
    v10 = v8 + 1220;
    ndisNsiNotifyClientInterfaceChange(v8, 0, (__int64)&v9, 1);
  }
  ndisIfDetachMiniportBlock(a2);
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qq(0xCAu, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, a1, a2);
}
