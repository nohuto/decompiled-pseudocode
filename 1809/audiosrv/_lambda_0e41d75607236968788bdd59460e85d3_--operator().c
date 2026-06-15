/*
 * XREFs of _lambda_0e41d75607236968788bdd59460e85d3_::operator() @ 0x1800E7084
 * Callers:
 *     ?GetSaDevices@CDeviceGraphObjectsStore@@IEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800E81A4 (-GetSaDevices@CDeviceGraphObjectsStore@@IEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Micros.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180016220 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C6B8C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UISaDeviceProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800E67C0 (--$As@UISaDeviceProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UISa.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800E6A04 (--$_Emplace_reallocate@AEBV-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISaDev.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_0e41d75607236968788bdd59460e85d3_::operator()(char ***a1, _QWORD *a2)
{
  __int64 result; // rax
  char **v4; // rbx
  char *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0LL;
  result = Microsoft::WRL::WeakRef::As<IInspectable>(a2, &v7);
  if ( (int)result >= 0 && v7 )
  {
    v8 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<ISaDeviceProxy>(&v7, &v8) >= 0 )
    {
      v4 = *a1;
      v5 = v4[1];
      if ( v4[2] == v5 )
      {
        std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ISaDeviceProxy> const &>(
          v4,
          v5,
          &v8);
      }
      else
      {
        *(_QWORD *)v5 = v8;
        Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)v5);
        v4[1] += 8;
      }
    }
    result = Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v8);
  }
  v6 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return result;
}
