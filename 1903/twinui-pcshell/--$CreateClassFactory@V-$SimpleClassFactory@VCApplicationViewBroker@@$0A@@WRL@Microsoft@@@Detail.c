/*
 * XREFs of ??$CreateClassFactory@V?$SimpleClassFactory@VCApplicationViewBroker@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18038DE90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VCApplicationViewBroker@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VCApplicationViewBroker@@$0A@@12@@Z @ 0x18038DF4C (--$MakeAndInitialize@V-$SimpleClassFactory@VCApplicationViewBroker@@$0A@@WRL@Microsoft@@V123@$$V.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateClassFactory<Microsoft::WRL::SimpleClassFactory<CApplicationViewBroker,0>>(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // eax
  _DWORD *v8; // rbx
  unsigned int v9; // edi
  int v10; // eax
  _DWORD *v12; // [rsp+20h] [rbp-18h] BYREF

  v12 = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::SimpleClassFactory<CApplicationViewBroker,0>,Microsoft::WRL::SimpleClassFactory<CApplicationViewBroker,0>,>(&v12);
  v8 = v12;
  v9 = v7;
  if ( v7 >= 0 )
  {
    v12[5] = *a1;
    v10 = (**(__int64 (__fastcall ***)(_DWORD *, __int64, __int64))v8)(v8, a3, a4);
    v9 = v10;
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      if ( v10 < 0 )
      {
        v8[5] &= 0xFFFFFFFA;
      }
      else if ( (*(_BYTE *)a1 & 4) != 0 )
      {
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      else
      {
        v8 = 0LL;
      }
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
