/*
 * XREFs of _lambda_be69e1ba3195fa9d17e767510f2d9f3f_::operator() @ 0x1800E7408
 * Callers:
 *     ?GetStreamGroupsConnectedToSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAUISaDeviceProxy@@PEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E82C0 (-GetStreamGroupsConnectedToSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAUISaDeviceProxy@@PEAV-$vec.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180014D44 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180016220 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C6B8C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800C6BF8 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800C6C4C (--$_Emplace_reallocate@AEBV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISt.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_be69e1ba3195fa9d17e767510f2d9f3f_::operator()(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  char ***v5; // rax
  char **v6; // rbx
  char *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+20h] BYREF
  __int64 v12; // [rsp+58h] [rbp+28h] BYREF

  v10[1] = -2LL;
  v12 = 0LL;
  result = Microsoft::WRL::WeakRef::As<IInspectable>(a2, &v12);
  if ( (int)result >= 0 && v12 )
  {
    v11 = 0LL;
    v10[0] = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v12, &v11) >= 0 )
    {
      v4 = v11;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v10);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 200LL))(v4, v10) >= 0
        && v10[0] == **(_QWORD **)a1 )
      {
        v5 = *(char ****)(a1 + 8);
        v6 = *v5;
        v7 = (*v5)[1];
        if ( (*v5)[2] == v7 )
        {
          std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
            *v5,
            v7,
            &v11);
        }
        else
        {
          *(_QWORD *)v7 = v11;
          Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)v7);
          v6[1] += 8;
        }
      }
    }
    result = Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v10);
    v8 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  v9 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return result;
}
