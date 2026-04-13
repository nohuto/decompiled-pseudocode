/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180052B70
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VWnfNameResolver@WnfHelper@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180052CF0 (-CreateInstance@-$SimpleClassFactory@VWnfNameResolver@WnfHelper@@$0A@@WRL@Microsoft@@UEAAJPEAUIU.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWnfNameResolver>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || *a2 == -313888171
    && a2[1] == *(_DWORD *)&GUID_ed4a7255_d499_4ac5_94e1_ea0bc24403ba.Data2
    && a2[2] == *(_DWORD *)GUID_ed4a7255_d499_4ac5_94e1_ea0bc24403ba.Data4
    && a2[3] == *(_DWORD *)&GUID_ed4a7255_d499_4ac5_94e1_ea0bc24403ba.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v3;
}
