/*
 * XREFs of ??0ResourceSetClientProxy@@QAE@PAXPAVResourceManagerClientProxy@@@Z @ 0x10013A1B
 * Callers:
 *     ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QAEJPAU_ResourceSetInfo@ExecutionModel@@PAUIResourceSetCallback@3@PAXPBG2KK_KKPA_NPAUIResourceSet@3@PAPAU53@@Z @ 0x10013E52 (-AcquireResourceSetImpl@ResourceManagerClientProxy@@QAEJPAU_ResourceSetInfo@ExecutionModel@@PAUI.c)
 *     ?CreateTerminalResourceSet@ResourceSetClientProxy@@UBGJPAPAUIResourceSet@ExecutionModel@@@Z @ 0x10014480 (-CreateTerminalResourceSet@ResourceSetClientProxy@@UBGJPAPAUIResourceSet@ExecutionModel@@@Z.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QAE@XZ @ 0x10013A84 (--0_ResourceSetInfo@ExecutionModel@@QAE@XZ.c)
 */

ResourceSetClientProxy *__thiscall ResourceSetClientProxy::ResourceSetClientProxy(
        ResourceSetClientProxy *this,
        void *a2,
        struct ResourceManagerClientProxy *a3)
{
  *((_DWORD *)this + 4) = -1;
  *((_DWORD *)this + 5) = -1;
  *(_DWORD *)this = &ResourceSetClientProxy::`vftable';
  *((_BYTE *)this + 4) = 0;
  *((_DWORD *)this + 2) = a2;
  *((_DWORD *)this + 6) = 0;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ResourceSetClientProxy *)((char *)this + 32));
  *((_DWORD *)this + 102) = 0;
  *((_DWORD *)this + 103) = 1;
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 105) = a3;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 424), 0, 0);
  *((_DWORD *)this + 112) = 0;
  return this;
}
