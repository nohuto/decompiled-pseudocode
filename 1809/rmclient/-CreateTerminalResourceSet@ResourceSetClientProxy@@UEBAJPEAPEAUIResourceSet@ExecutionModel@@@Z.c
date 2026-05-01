/*
 * XREFs of ?CreateTerminalResourceSet@ResourceSetClientProxy@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z @ 0x180011100
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180009984 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180009BE0 (_guard_dispatch_icall_nop.c)
 *     ??0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z @ 0x180010640 (--0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z.c)
 *     ?AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_KPEAVResourceSetClientProxy@@@Z @ 0x180010EE4 (-AddProxyResourceSet@ResourceManagerClientProxy@@QEAAJ_KPEAVResourceSetClientProxy@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180011098 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

__int64 __fastcall ResourceSetClientProxy::CreateTerminalResourceSet(
        ResourceSetClientProxy *this,
        struct ExecutionModel::IResourceSet **a2)
{
  ResourceSetClientProxy *v4; // rax
  ResourceSetClientProxy *v5; // rdi
  int Pointer; // ebx
  char *v7; // rcx
  _OWORD *v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v11; // [rsp+80h] [rbp+18h] BYREF
  ResourceSetClientProxy *v12; // [rsp+88h] [rbp+20h]

  *a2 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 54) + 576LL));
  v4 = (ResourceSetClientProxy *)operator new(0x1E8uLL);
  if ( v4 )
  {
    v5 = ResourceSetClientProxy::ResourceSetClientProxy(
           v4,
           *((void **)this + 2),
           *((struct ResourceManagerClientProxy **)this + 54));
    v12 = v5;
  }
  else
  {
    v5 = 0LL;
    v12 = 0LL;
  }
  if ( v5 )
  {
    v11 = -1LL;
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&stru_180013CC0,
                              5u,
                              0LL,
                              *((_QWORD *)this + 2),
                              *((_QWORD *)this + 3),
                              &v11).Pointer;
    if ( Pointer >= 0 )
    {
      *((_QWORD *)v5 + 3) = v11;
      *((_QWORD *)v5 + 4) = 0LL;
      v7 = (char *)v5 + 40;
      v8 = (_OWORD *)((char *)this + 40);
      v9 = 2LL;
      do
      {
        *(_OWORD *)v7 = *v8;
        *((_OWORD *)v7 + 1) = v8[1];
        *((_OWORD *)v7 + 2) = v8[2];
        *((_OWORD *)v7 + 3) = v8[3];
        *((_OWORD *)v7 + 4) = v8[4];
        *((_OWORD *)v7 + 5) = v8[5];
        *((_OWORD *)v7 + 6) = v8[6];
        v7 += 128;
        *((_OWORD *)v7 - 1) = v8[7];
        v8 += 8;
        --v9;
      }
      while ( v9 );
      *(_OWORD *)v7 = *v8;
      *((_OWORD *)v7 + 1) = v8[1];
      *((_OWORD *)v7 + 2) = v8[2];
      *((_OWORD *)v7 + 3) = v8[3];
      *((_OWORD *)v7 + 4) = v8[4];
      *((_OWORD *)v7 + 5) = v8[5];
      *((_OWORD *)v7 + 6) = v8[6];
      *((_QWORD *)v7 + 14) = *((_QWORD *)v8 + 14);
      if ( *((_QWORD *)v5 + 53) )
        ATL::AtlComPtrAssign((struct IUnknown **)v5 + 53, 0LL);
      Pointer = ResourceManagerClientProxy::AddProxyResourceSet(*((ResourceManagerClientProxy **)this + 54), v11, v5);
      if ( Pointer >= 0 )
        *a2 = v5;
    }
  }
  else
  {
    Pointer = -2147024882;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(*((_QWORD *)this + 54) + 576LL));
  if ( Pointer < 0 && v5 )
    (*(void (__fastcall **)(ResourceSetClientProxy *))(*(_QWORD *)v5 + 16LL))(v5);
  return (unsigned int)Pointer;
}
