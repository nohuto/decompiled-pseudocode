/*
 * XREFs of ?CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2KKP6AX2PEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z2PEAPEAV1@@Z @ 0x1800D51D0
 * Callers:
 *     ?AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z0PEAPEAU2@@Z @ 0x1800D4A80 (-AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z0.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800D3F90 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ??0SipcEndpoint@@AEAA@W4SipcEndpointKind@@PEAVSipcEndpointOwner@@KKP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@ZP6AX23W4SIPC_BUFFER_STATUS@@_K22@Z2@Z @ 0x1800D40A4 (--0SipcEndpoint@@AEAA@W4SipcEndpointKind@@PEAVSipcEndpointOwner@@KKP6AXPEAXPEAUISIPCEndpoint@@W4.c)
 *     ?AddPrivateReference@SharedObjectBase@@IEAAIXZ @ 0x1800D4C48 (-AddPrivateReference@SharedObjectBase@@IEAAIXZ.c)
 */

__int64 __fastcall SipcEndpoint::CreateServerEndpoint(
        struct SipcServer *this,
        struct SipcPort *a2,
        void *a3,
        void *a4,
        unsigned int a5,
        unsigned int a6,
        void (__high *a7)(void *, struct ISIPCEndpoint *, enum SIPC_ENDPOINT_STATUS),
        void *a8,
        struct SipcEndpoint **a9)
{
  void *v13; // rax
  _QWORD *v14; // rdx
  __int64 result; // rax
  struct SipcEndpoint *v16; // rdx

  *a9 = 0LL;
  v13 = operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v13 )
    v14 = (_QWORD *)SipcEndpoint::SipcEndpoint(
                      (__int64)v13,
                      2,
                      ((unsigned __int64)this + 96) & -(__int64)(this != 0LL),
                      a5,
                      a6,
                      (__int64)a7,
                      0LL,
                      (__int64)a8);
  else
    v14 = 0LL;
  if ( v14 )
  {
    v14[12] = a2;
    v14[15] = a4;
    v14[16] = a3;
    SharedObjectBase::AddPrivateReference(this);
    result = 0LL;
    *a9 = v16;
  }
  else
  {
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL);
    return 2147942414LL;
  }
  return result;
}
