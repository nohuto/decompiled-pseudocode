/*
 * XREFs of ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QAEJPAU_ResourceSetInfo@ExecutionModel@@PAUIResourceSetCallback@3@PAXPBG2KK_KKPA_NPAUIResourceSet@3@PAPAU53@@Z @ 0x10013E52
 * Callers:
 *     ?AcquireResourceSet@ResourceManagerClientProxy@@UAGJPAU_ResourceSetInfo@ExecutionModel@@PAUIResourceSetCallback@3@PAXPBG2KK_KPA_NPAUIResourceSet@3@PAPAU53@@Z @ 0x10013C80 (-AcquireResourceSet@ResourceManagerClientProxy@@UAGJPAU_ResourceSetInfo@ExecutionModel@@PAUIReso.c)
 *     ?AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UAGJPAU_ResourceSetInfo@ExecutionModel@@PAUIResourceSetCallback@3@PAXPBG2KK_KKPA_NPAUIResourceSet@3@PAPAU53@@Z @ 0x10013D70 (-AcquireResourceSetFromSponsorProcess@ResourceManagerClientProxy@@UAGJPAU_ResourceSetInfo@Execut.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     ??2@YAPAXI@Z @ 0x1000CFE2 (--2@YAPAXI@Z.c)
 *     __SEH_prolog4_GS @ 0x1000D088 (__SEH_prolog4_GS.c)
 *     ??0ResourceSetClientProxy@@QAE@PAXPAVResourceManagerClientProxy@@@Z @ 0x10013A1B (--0ResourceSetClientProxy@@QAE@PAXPAVResourceManagerClientProxy@@@Z.c)
 *     ?AddProxyResourceSet@ResourceManagerClientProxy@@QAEJ_KPAVResourceSetClientProxy@@@Z @ 0x10014140 (-AddProxyResourceSet@ResourceManagerClientProxy@@QAEJ_KPAVResourceSetClientProxy@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YGPAUIUnknown@@PAPAU2@PAU2@@Z @ 0x10014382 (-AtlComPtrAssign@ATL@@YGPAUIUnknown@@PAPAU2@PAU2@@Z.c)
 *     ?GetResourceSetMapIterator@ResourceManagerClientProxy@@IAEJPBUIResourceSet@ExecutionModel@@AAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPAVResourceSetClientProxy@@@2@@utl@@@Z @ 0x100146DA (-GetResourceSetMapIterator@ResourceManagerClientProxy@@IAEJPBUIResourceSet@ExecutionModel@@AAV-$.c)
 *     ?CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YGXPBU_ResourceSetInfo@1@PAURmResourceSetInfo@@@Z @ 0x10015225 (-CopyResourceSetInfoToRmResourceSetInfo@ExecutionModel@@YGXPBU_ResourceSetInfo@1@PAURmResourceSe.c)
 */

CLIENT_CALL_RETURN __thiscall ResourceManagerClientProxy::AcquireResourceSetImpl(
        ResourceManagerClientProxy *this,
        struct ExecutionModel::_ResourceSetInfo *a2,
        struct ExecutionModel::IResourceSetCallback *a3,
        void *a4,
        const unsigned __int16 *a5,
        PSID Sid,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned int a10,
        bool *a11,
        struct ExecutionModel::IResourceSet *a12,
        struct ExecutionModel::IResourceSet **a13)
{
  ResourceManagerClientProxy *v13; // esi
  PSID v14; // edi
  ResourceSetClientProxy *v15; // ebx
  CLIENT_CALL_RETURN v16; // edi
  ResourceSetClientProxy *v17; // eax
  int v18; // eax
  ExecutionModel *v20; // [esp+0h] [ebp-658h]
  struct IUnknown **v21; // [esp+0h] [ebp-658h]
  const struct ExecutionModel::_ResourceSetInfo *v22; // [esp+4h] [ebp-654h]
  struct IUnknown *v23; // [esp+4h] [ebp-654h]
  struct RmResourceSetInfo *v24; // [esp+8h] [ebp-650h]
  int v25; // [esp+38h] [ebp-620h] BYREF
  ResourceManagerClientProxy *v26; // [esp+3Ch] [ebp-61Ch]
  const void *v27; // [esp+40h] [ebp-618h]
  ResourceSetClientProxy *v28; // [esp+44h] [ebp-614h]
  ULONG v29; // [esp+48h] [ebp-610h]
  int v30; // [esp+4Ch] [ebp-60Ch]
  int v31; // [esp+50h] [ebp-608h]
  int v32; // [esp+54h] [ebp-604h] BYREF
  unsigned __int64 v33; // [esp+58h] [ebp-600h] BYREF
  char v34; // [esp+63h] [ebp-5F5h]
  _BYTE v35[1500]; // [esp+64h] [ebp-5F4h] BYREF
  CPPEH_RECORD ms_exc; // [esp+640h] [ebp-18h]

  v13 = this;
  v26 = this;
  v27 = a2;
  v14 = Sid;
  v15 = 0;
  v25 = 0;
  v32 = 0;
  v34 = 0;
  v30 = -1;
  v31 = -1;
  v33 = -1LL;
  if ( Sid )
  {
    if ( !RtlValidSid(Sid) )
    {
      v16.Simple = -2147024809;
      goto LABEL_21;
    }
    v29 = RtlLengthSid(Sid);
  }
  else
  {
    v29 = 0;
  }
  *a13 = 0;
  v34 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)v13 + 23);
  v17 = (ResourceSetClientProxy *)operator new(0x1C8u);
  if ( v17 )
  {
    v15 = ResourceSetClientProxy::ResourceSetClientProxy(v17, *((void **)v13 + 2), v13);
    v28 = v15;
  }
  else
  {
    v15 = 0;
    v28 = 0;
  }
  if ( !v15 )
  {
    v16.Simple = -2147024882;
    goto LABEL_21;
  }
  if ( a12 )
  {
    v16.Simple = ResourceManagerClientProxy::GetResourceSetMapIterator(a12, &v32);
    if ( v16.Simple < 0 )
      goto LABEL_21;
    v18 = *(_DWORD *)(v32 + 24);
    v30 = *(_DWORD *)(v18 + 16);
    v31 = *(_DWORD *)(v18 + 20);
    v14 = Sid;
  }
  ExecutionModel::CopyResourceSetInfoToRmResourceSetInfo(v20, v22, v24);
  ms_exc.registration.TryLevel = 0;
  v16.Pointer = _NdrClientCall4(
                  &stru_100016E8,
                  &byte_10003742,
                  *((_DWORD *)v13 + 3),
                  v35,
                  1,
                  a5,
                  v14,
                  v29,
                  a7,
                  a8,
                  a9,
                  a10,
                  a11 != 0 ? &v25 : 0,
                  v30,
                  v31,
                  &v33).Pointer;
  ms_exc.registration.TryLevel = -2;
  if ( v16.Simple >= 0 )
  {
    *((_QWORD *)v15 + 2) = v33;
    *((_DWORD *)v15 + 6) = a4;
    qmemcpy((char *)v15 + 32, v27, 0x178u);
    if ( *((struct ExecutionModel::IResourceSetCallback **)v15 + 104) != a3 )
      ATL::AtlComPtrAssign(v21, v23);
    v13 = v26;
    v16.Simple = ResourceManagerClientProxy::AddProxyResourceSet(v26, v33, v15);
    if ( v16.Simple >= 0 )
    {
      if ( a11 )
        *a11 = v25 != 0;
      *a13 = v15;
    }
  }
LABEL_21:
  if ( v34 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v13 + 23);
  if ( v16.Simple < 0 && v15 )
    (*(void (__thiscall **)(_DWORD, ResourceSetClientProxy *))(*(_DWORD *)v15 + 8))(
      *(_DWORD *)(*(_DWORD *)v15 + 8),
      v15);
  return v16;
}
