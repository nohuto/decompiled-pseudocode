/*
 * XREFs of ??0ResourceManagerClientProxy@@IEAA@XZ @ 0x180008B90
 * Callers:
 *     ?CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x180008880 (-CreateResourceManagerClientProxy@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z.c)
 * Callees:
 *     <none>
 */

ResourceManagerClientProxy *__fastcall ResourceManagerClientProxy::ResourceManagerClientProxy(
        ResourceManagerClientProxy *this)
{
  ResourceManagerClientProxy *result; // rax

  *(_QWORD *)this = &ResourceManagerClientProxy::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_BYTE *)this + 568) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 576), 0, 0);
  *((_QWORD *)this + 77) = (char *)this + 616;
  *((_QWORD *)this + 78) = (char *)this + 616;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_WORD *)this + 324) = 2048;
  result = this;
  *((_WORD *)this + 24) = 0;
  return result;
}
