/*
 * XREFs of ?s_PropEnumCallback@LightweightPropertySet@@CAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x18005DEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x180034A94 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ?s_IsMangledName@LightweightPropertySet@@CA_NPEBG@Z @ 0x18005DF40 (-s_IsMangledName@LightweightPropertySet@@CA_NPEBG@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x180067CA8 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULightweightProperty@Lightweight.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@@WRL@Microsoft@@XZ @ 0x1802923B4 (--$CreateRefCountedObj@ULightweightProperty@LightweightPropertySet@@$$V@@YA-AV-$ComPtr@V-$CRefCo.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall LightweightPropertySet::s_PropEnumCallback(
        HWND a1,
        const unsigned __int16 *a2,
        HANDLE a3,
        _QWORD *a4)
{
  int v5; // ebp
  _DWORD *v8; // rbx
  int v9; // eax
  _DWORD *v10; // rdi
  __int64 v11; // rdx
  _QWORD *v12; // rdx
  _DWORD *v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v5 = (int)a3;
  if ( (unsigned __int64)a2 >= 0xC000 && LightweightPropertySet::s_IsMangledName(a2) )
  {
    CreateRefCountedObj<LightweightPropertySet::LightweightProperty,>(&v14);
    v8 = (_DWORD *)v14;
    if ( v14 )
    {
      v9 = a2 ? Windows::Internal::String::_InitializeHelper((HSTRING *)(v14 + 8), a2) : -2147467261;
      if ( v9 >= 0 )
      {
        v8[4] = v5;
        v10 = v8;
        v13 = v8;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
        v11 = a4[1];
        if ( v11 != a4[3]
          || (int)CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<LightweightPropertySet::LightweightProperty>>>>::_EnsureCapacity(
                    a4,
                    v11 + 1) >= 0 )
        {
          v12 = (_QWORD *)(*a4 + 8 * a4[1]++);
          if ( v12 )
          {
            *v12 = 0LL;
            if ( v12 != &v13 )
            {
              *v12 = v8;
              v10 = 0LL;
            }
          }
        }
        if ( v10 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    if ( v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return 1LL;
}
