/*
 * XREFs of netsetupIsImpliedProperty @ 0x1C0100F0C
 * Callers:
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0100980 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C0100DC0 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C01017B8 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z @ 0x1C0101A70 (-ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z.c)
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1C0107EE8 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 *     ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x1C0124710 (-ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$KArray@V-$unique_ptr@UKSt.c)
 * Callees:
 *     <none>
 */

char __fastcall netsetupIsImpliedProperty(__int64 a1)
{
  const wchar_t *v1; // rdx
  __int64 v3; // r8

  v1 = (const wchar_t *)&unk_1C00CC940;
  while ( 1 )
  {
    if ( *((_DWORD *)v1 + 4) == *(_DWORD *)(a1 + 16) )
    {
      v3 = *(_QWORD *)v1 - *(_QWORD *)a1;
      if ( *(_QWORD *)v1 == *(_QWORD *)a1 )
        v3 = *((_QWORD *)v1 + 1) - *(_QWORD *)(a1 + 8);
      if ( !v3 )
        break;
    }
    v1 += 10;
    if ( v1 == L"\\Registry\\Machine\\System\\CurrentControlSet\\Services" )
      return 0;
  }
  return 1;
}
