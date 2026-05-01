/*
 * XREFs of ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x180050088
 * Callers:
 *     ?HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PEAUIImmersiveMonitor@@@Z @ 0x18004F0E0 (-HandleCreation@CClassicWindowManager@@UEAA_NPEAUHWND__@@W4ZBID@@W4ClassicWindowCreationType@@PE.c)
 *     ?AttachApplicationId@CClassicWindowManager@@UEAAXPEAUHWND__@@PEAG@Z @ 0x18004F4E0 (-AttachApplicationId@CClassicWindowManager@@UEAAXPEAUHWND__@@PEAG@Z.c)
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x18004F720 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 *     ?UpdateLastActivatedTime@CClassicWindowManager@@UEAAJPEAUHWND__@@@Z @ 0x18004F880 (-UpdateLastActivatedTime@CClassicWindowManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x18004FA64 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ??$As@UIClassicWindow@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@Details@12@@Z @ 0x180050188 (--$As@UIClassicWindow@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIClassi.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned int v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rbx
  int v10; // ebp
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+80h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h]

  v13 = a3;
  v7 = 0;
  v14 = 0LL;
  *a4 = 0LL;
  v8 = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v8);
      v12 = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v13 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IClassicWindow>(&v12, &v13) >= 0
        && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 192LL))(v13, *a2) )
      {
        v10 = 0;
      }
      else
      {
        v10 = -1;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      if ( !v10 )
        break;
      if ( (unsigned __int64)++v8 >= *(_QWORD *)(a1 + 16) )
        return (unsigned int)-2147319765;
    }
    *a4 = v8;
  }
  else
  {
    return (unsigned int)-2147319765;
  }
  return v7;
}
