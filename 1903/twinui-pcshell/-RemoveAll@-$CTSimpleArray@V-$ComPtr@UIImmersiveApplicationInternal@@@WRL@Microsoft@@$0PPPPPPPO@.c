/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18007D988
 * Callers:
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800169B8 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 *     ??$_Add@$$QEAVCGlomCollection@CActivationBasedAppAndGlomCollection@@@?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAAJ$$QEAVCGlomCollection@CActivationBasedAppAndGlomCollection@@PEA_K@Z @ 0x1800755C8 (--$_Add@$$QEAVCGlomCollection@CActivationBasedAppAndGlomCollection@@@-$CTSimpleArray@VCGlomColle.c)
 *     ??1CActivationBasedAppAndGlomCollection@@UEAA@XZ @ 0x18010E250 (--1CActivationBasedAppAndGlomCollection@@UEAA@XZ.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x18010E2D8 (--1CApplicationManager@@MEAA@XZ.c)
 *     ??1CGlomCollection@CActivationBasedAppAndGlomCollection@@QEAA@XZ @ 0x18010E788 (--1CGlomCollection@CActivationBasedAppAndGlomCollection@@QEAA@XZ.c)
 *     ??_E?$CActivationBasedCollection@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@UEAAPEAXI@Z @ 0x18010F170 (--_E-$CActivationBasedCollection@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@UEA.c)
 *     ?RemoveAt@?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAAJ_K@Z @ 0x1801164CC (-RemoveAt@-$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V-$C.c)
 *     ??1CImmersiveWindowManager@@MEAA@XZ @ 0x180124D64 (--1CImmersiveWindowManager@@MEAA@XZ.c)
 * Callees:
 *     ??_G?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x180042910 (--_G-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

void __fastcall CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAll(
        __int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = 0LL;
    if ( *(_QWORD *)(a1 + 8) )
    {
      do
        Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::`scalar deleting destructor'(*(_QWORD *)a1 + 8 * v3++);
      while ( v3 < *(_QWORD *)(a1 + 8) );
      v2 = *(void **)a1;
    }
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
