/*
 * XREFs of ??0SipcServer@@AEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z2@Z @ 0x180029490
 * Callers:
 *     ?Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEAU4@@Z @ 0x18001642C (-Create@SipcServer@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@P6AXPEAXPEAUISIPCServer@@KK@Z22PEAPEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SipcServer::SipcServer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 8) = 0x200000002LL;
  *(_QWORD *)a1 = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `SharedObjectBase'};
  *(_QWORD *)(a1 + 16) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `ISIPCServer'};
  *(_QWORD *)(a1 + 24) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *(_QWORD *)(a1 + 32) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *(_QWORD *)(a1 + 40) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *(_QWORD *)(a1 + 48) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *(_QWORD *)(a1 + 56) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *(_QWORD *)(a1 + 64) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *(_QWORD *)(a1 + 72) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *(_QWORD *)(a1 + 80) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *(_QWORD *)(a1 + 88) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *(_QWORD *)(a1 + 96) = &SipcEndpointOwner::`vftable';
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) = 1;
  *(_OWORD *)(a1 + 116) = xmmword_180181868;
  *(_QWORD *)a1 = &SipcServer::`vftable'{for `SharedObjectBase'};
  *(_QWORD *)(a1 + 16) = &SipcServer::`vftable'{for `ISIPCServer'};
  *(_QWORD *)(a1 + 24) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *(_QWORD *)(a1 + 32) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *(_QWORD *)(a1 + 40) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *(_QWORD *)(a1 + 48) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *(_QWORD *)(a1 + 56) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *(_QWORD *)(a1 + 64) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *(_QWORD *)(a1 + 72) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *(_QWORD *)(a1 + 80) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *(_QWORD *)(a1 + 88) = &SharedUnknownBase<ISIPCServer,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>::`vftable'{for `IUnknown'};
  *(_QWORD *)(a1 + 96) = &SipcServer::`vftable';
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 200) = a1 + 192;
  *(_QWORD *)(a1 + 192) = a1 + 192;
  *(_QWORD *)(a1 + 224) = LampArrayRawInputProvider::OnSipcClientConnection;
  *(_QWORD *)(a1 + 232) = a5;
  result = a1;
  *(_QWORD *)(a1 + 216) = 0LL;
  return result;
}
