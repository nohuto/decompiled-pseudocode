/*
 * XREFs of ?CreateTerminalResourceSet@ResourceSetClientProxy@@UBGJPAPAUIResourceSet@ExecutionModel@@@Z @ 0x10014480
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 *     ??2@YAPAXI@Z @ 0x1000CFE2 (--2@YAPAXI@Z.c)
 *     ??0ResourceSetClientProxy@@QAE@PAXPAVResourceManagerClientProxy@@@Z @ 0x10013A1B (--0ResourceSetClientProxy@@QAE@PAXPAVResourceManagerClientProxy@@@Z.c)
 *     ?AddProxyResourceSet@ResourceManagerClientProxy@@QAEJ_KPAVResourceSetClientProxy@@@Z @ 0x10014140 (-AddProxyResourceSet@ResourceManagerClientProxy@@QAEJ_KPAVResourceSetClientProxy@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YGPAUIUnknown@@PAPAU2@PAU2@@Z @ 0x10014382 (-AtlComPtrAssign@ATL@@YGPAUIUnknown@@PAPAU2@PAU2@@Z.c)
 */

CLIENT_CALL_RETURN __stdcall ResourceSetClientProxy::CreateTerminalResourceSet(
        ResourceSetClientProxy *this,
        struct ExecutionModel::IResourceSet **a2)
{
  ResourceSetClientProxy *v2; // esi
  ResourceSetClientProxy *v3; // eax
  ResourceSetClientProxy *v4; // ebx
  CLIENT_CALL_RETURN v5; // edi
  unsigned __int64 v7; // [esp+10h] [ebp-2Ch] BYREF
  CLIENT_CALL_RETURN v8; // [esp+18h] [ebp-24h]
  ResourceSetClientProxy *v9; // [esp+20h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  *a2 = 0;
  v2 = this;
  EnterCriticalSection((LPCRITICAL_SECTION)(*((_DWORD *)this + 105) + 552));
  v3 = (ResourceSetClientProxy *)operator new(0x1C8u);
  if ( v3 )
    v4 = ResourceSetClientProxy::ResourceSetClientProxy(
           v3,
           *((void **)this + 2),
           *((struct ResourceManagerClientProxy **)this + 105));
  else
    v4 = 0;
  v9 = v4;
  if ( v4 )
  {
    v7 = -1LL;
    ms_exc.registration.TryLevel = 0;
    v5.Pointer = _NdrClientCall4(
                   &stru_100016E8,
                   &byte_1000380A,
                   *((_DWORD *)this + 2),
                   *((_DWORD *)this + 4),
                   *((_DWORD *)this + 5),
                   &v7).Pointer;
    v8.Pointer = v5.Pointer;
    ms_exc.registration.TryLevel = -2;
    if ( v5.Simple >= 0 )
    {
      *((_QWORD *)v4 + 2) = v7;
      *((_DWORD *)v4 + 6) = 0;
      qmemcpy((char *)v4 + 32, (char *)this + 32, 0x178u);
      if ( *((_DWORD *)v4 + 104) )
        ATL::AtlComPtrAssign((_DWORD *)v4 + 104, 0);
      v2 = this;
      v5.Simple = ResourceManagerClientProxy::AddProxyResourceSet(*((ResourceManagerClientProxy **)this + 105), v7, v4);
      if ( v5.Simple >= 0 )
        *a2 = v4;
    }
  }
  else
  {
    v5.Simple = -2147024882;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*((_DWORD *)v2 + 105) + 552));
  if ( v5.Simple < 0 && v4 )
    (*(void (__thiscall **)(_DWORD, ResourceSetClientProxy *))(*(_DWORD *)v4 + 8))(*(_DWORD *)(*(_DWORD *)v4 + 8), v4);
  return v5;
}
