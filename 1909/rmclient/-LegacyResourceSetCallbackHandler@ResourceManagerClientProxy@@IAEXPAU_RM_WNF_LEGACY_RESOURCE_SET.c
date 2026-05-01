/*
 * XREFs of ?LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IAEXPAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x10014824
 * Callers:
 *     ?LegacyResourceSetCallbackHandlerThunk@ResourceManagerClientProxy@@SGXPAX0K@Z @ 0x100148D0 (-LegacyResourceSetCallbackHandlerThunk@ResourceManagerClientProxy@@SGXPAX0K@Z.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     ??$_EqualRangeImpl@_K@?$_HashTable@_KU?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@ABEXU?$integral_constant@_N$0A@@1@AB_KAAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@1@2AAI@Z @ 0x1001394A (--$_EqualRangeImpl@_K@-$_HashTable@_KU-$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@U-$hash@_K@2.c)
 *     ?AtlComPtrAssign@ATL@@YGPAUIUnknown@@PAPAU2@PAU2@@Z @ 0x10014382 (-AtlComPtrAssign@ATL@@YGPAUIUnknown@@PAPAU2@PAU2@@Z.c)
 *     ?FireCallback@ResourceSetClientProxy@@QAEXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@U_RM_REVOKE_MESSAGE@@@Z @ 0x100145DC (-FireCallback@ResourceSetClientProxy@@QAEXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@U_RM_REVO.c)
 */

void __thiscall ResourceManagerClientProxy::LegacyResourceSetCallbackHandler(
        struct _RTL_CRITICAL_SECTION *this,
        struct _RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // ebx
  _DWORD *v3; // esi
  struct _RTL_CRITICAL_SECTION *v4; // edi
  int v5; // edx
  _DWORD v6[2]; // [esp+Ch] [ebp-18h] BYREF
  int v7; // [esp+14h] [ebp-10h] BYREF
  int v8; // [esp+18h] [ebp-Ch] BYREF
  _DWORD *v9; // [esp+1Ch] [ebp-8h] BYREF
  int v10; // [esp+20h] [ebp-4h] BYREF

  v2 = this;
  v3 = 0;
  v9 = 0;
  v4 = this + 23;
  EnterCriticalSection(this + 23);
  v2 += 24;
  v10 = 0;
  v6[0] = *(_DWORD *)a2;
  v6[1] = *((_DWORD *)a2 + 1);
  utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_EqualRangeImpl<unsigned __int64>(
    v2,
    v7,
    (int)v6,
    &v10,
    &v7,
    &v8);
  if ( (struct _RTL_CRITICAL_SECTION *)v10 == v2 )
  {
    LeaveCriticalSection(v4);
  }
  else
  {
    v5 = *(_DWORD *)(v10 + 24);
    if ( v5 )
    {
      ATL::AtlComPtrAssign(&v9, v5);
      v3 = v9;
    }
    LeaveCriticalSection(v4);
    ResourceSetClientProxy::FireCallback(v3, *((_DWORD *)a2 + 3), *((_DWORD *)a2 + 2));
    if ( v3 )
      (*(void (__thiscall **)(_DWORD, _DWORD *))(*v3 + 8))(*(_DWORD *)(*v3 + 8), v3);
  }
}
