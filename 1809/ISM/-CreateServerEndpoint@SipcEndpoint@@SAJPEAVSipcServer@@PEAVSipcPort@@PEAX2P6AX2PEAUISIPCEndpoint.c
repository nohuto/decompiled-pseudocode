/*
 * XREFs of ?CreateServerEndpoint@SipcEndpoint@@SAJPEAVSipcServer@@PEAVSipcPort@@PEAX2P6AX2PEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@ZP6AX232_K@Z2PEAPEAV1@@Z @ 0x1800A1514
 * Callers:
 *     ?AcceptClientConnection@SipcServer@@UEAAJP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@ZP6AX010_K@Z0PEAPEAU2@@Z @ 0x1800A1D70 (-AcceptClientConnection@SipcServer@@UEAAJP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@ZP6.c)
 * Callees:
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x18009FD04 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall SipcEndpoint::CreateServerEndpoint(
        struct SipcServer *a1,
        struct SipcPort *a2,
        void *a3,
        void *a4,
        void (__high *a5)(void *, struct ISIPCEndpoint *, enum SIPC_ENDPOINT_STATUS),
        void (*a6)(void *, struct ISIPCEndpoint *, void *, unsigned __int64),
        void *a7,
        struct SipcEndpoint **a8)
{
  struct SipcEndpoint *v12; // rax
  struct SipcEndpoint *v13; // r10

  *a8 = 0LL;
  v12 = (struct SipcEndpoint *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  if ( v12 )
  {
    *((_QWORD *)v12 + 1) = 0x200000002LL;
    *((_QWORD *)v12 + 12) = 0LL;
    *((_QWORD *)v12 + 13) = 0LL;
    *((_QWORD *)v12 + 14) = 0LL;
    *((_QWORD *)v12 + 15) = 0LL;
    *((_QWORD *)v12 + 16) = 0LL;
    *(_QWORD *)v12 = &SipcEndpoint::`vftable'{for `SharedObjectBase'};
    *((_QWORD *)v12 + 2) = &SipcEndpoint::`vftable'{for `ISIPCEndpoint'};
    *((_QWORD *)v12 + 3) = &SipcEndpoint::`vftable'{for `IUnknown's `SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>'};
    *((_QWORD *)v12 + 4) = &SipcEndpoint::`vftable'{for `IUnknown's `SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>'};
    *((_QWORD *)v12 + 5) = &SipcEndpoint::`vftable'{for `IUnknown's `SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>'};
    *((_QWORD *)v12 + 6) = &SipcEndpoint::`vftable'{for `IUnknown's `SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>'};
    *((_QWORD *)v12 + 7) = &SipcEndpoint::`vftable'{for `IUnknown's `SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>'};
    *((_QWORD *)v12 + 8) = &SipcEndpoint::`vftable'{for `IUnknown's `SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>'};
    *((_QWORD *)v12 + 9) = &SipcEndpoint::`vftable'{for `IUnknown's `SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>'};
    *((_QWORD *)v12 + 10) = &SipcEndpoint::`vftable'{for `IUnknown's `SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>'};
    *((_QWORD *)v12 + 11) = &SipcEndpoint::`vftable'{for `IUnknown's `SharedUnknownBase<ISIPCEndpoint,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown,IUnknown>'};
    *((_QWORD *)v12 + 17) = a5;
    *((_QWORD *)v12 + 18) = a6;
    *((_QWORD *)v12 + 19) = a7;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    *((_QWORD *)v13 + 12) = a2;
    *((_QWORD *)v13 + 14) = a1;
    *((_QWORD *)v13 + 15) = a4;
    *((_QWORD *)v13 + 16) = a3;
    if ( (unsigned int)(((unsigned __int64)_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 1, 0x100000000uLL) >> 32)
                      + 1) <= 2 )
      __fastfail(0xEu);
    *a8 = v13;
    return 0LL;
  }
  else
  {
    wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x8007000ELL);
    return 2147942414LL;
  }
}
