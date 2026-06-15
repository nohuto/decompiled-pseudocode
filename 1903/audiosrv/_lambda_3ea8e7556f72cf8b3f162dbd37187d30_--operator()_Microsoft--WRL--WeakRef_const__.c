/*
 * XREFs of _lambda_3ea8e7556f72cf8b3f162dbd37187d30_::operator()_Microsoft::WRL::WeakRef_const__ @ 0x1800EC9E0
 * Callers:
 *     ?EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800EEFE0 (-EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV-$vector@V-$ComPtr@UIProcessSubmixProx.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D53DC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$As@UIProcessSubmixProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800ECAD0 (--$As@UIProcessSubmixProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800ECE40 (--$_Emplace_reallocate@AEBV-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_3ea8e7556f72cf8b3f162dbd37187d30_::operator()_Microsoft::WRL::WeakRef_const__(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // [rsp+50h] [rbp+20h] BYREF
  __int64 v9; // [rsp+58h] [rbp+28h] BYREF

  v9 = 0LL;
  result = Microsoft::WRL::WeakRef::As<IInspectable>(a2, &v9);
  if ( (int)result >= 0 && v9 )
  {
    v8 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IProcessSubmixProxy>(&v9, &v8) >= 0
      && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 208LL))(v8) )
    {
      v4 = *a1;
      v5 = *(_QWORD **)(v4 + 8);
      if ( *(_QWORD **)(v4 + 16) == v5 )
      {
        std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IProcessSubmixProxy> const &>(
          v4,
          v5,
          &v8);
      }
      else
      {
        v6 = v8;
        *v5 = v8;
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
        *(_QWORD *)(v4 + 8) += 8LL;
      }
    }
    result = Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v8);
  }
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return result;
}
