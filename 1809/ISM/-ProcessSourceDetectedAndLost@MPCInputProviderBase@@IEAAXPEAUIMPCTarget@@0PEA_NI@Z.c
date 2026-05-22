/*
 * XREFs of ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x180100D80
 * Callers:
 *     ?OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800EF2D0 (-OnDeviceRemoval@MPCSixDofProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z @ 0x1800F0874 (-DeliverInputToTarget@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@1@Z.c)
 *     ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F5FD0 (-Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ProcessSourceDetectedAndLostForAllHands@MPCProcessor@@AEAAXPEAUIMPCTarget@@0@Z @ 0x1800F7204 (-ProcessSourceDetectedAndLostForAllHands@MPCProcessor@@AEAAXPEAUIMPCTarget@@0@Z.c)
 *     ?OnDeviceRemoval@MPCClickerProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800FF240 (-OnDeviceRemoval@MPCClickerProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800FF370 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCInputProviderBase_SendSourceDetectedFailed_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAUInputInfo@@I@Z @ 0x180100F38 (-MPCInputProviderBase_SendSourceDetectedFailed_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAUInputInfo@@.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCInputProviderBase::ProcessSourceDetectedAndLost(
        MPCInputProviderBase *this,
        struct IMPCTarget *a2,
        struct IMPCTarget *a3,
        bool *a4,
        unsigned int a5)
{
  struct IMPCTarget *v7; // r14
  bool v9; // r12
  char v10; // r13
  _DWORD *v11; // rcx
  ISMTracing *v12; // rcx

  v7 = a2;
  if ( a4 )
    *a4 = 0;
  if ( a2 != a3 || !*((_BYTE *)this + 3664) )
  {
    v9 = a2
      && a3
      && !(*(unsigned __int8 (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)a2 + 32LL))(a2)
      && !(*(unsigned __int8 (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)a3 + 32LL))(a3);
    v10 = *((_BYTE *)this + 3664);
    *((_BYTE *)this + 3664) = 0;
    if ( v7 && v7 != a3 )
    {
      LOBYTE(a2) = 1;
      (*(void (__fastcall **)(MPCInputProviderBase *, struct IMPCTarget *, _QWORD, char *))(*(_QWORD *)this + 80LL))(
        this,
        a2,
        a5,
        (char *)this + 464);
      *((_BYTE *)this + 2050) = v9;
      (*(void (__fastcall **)(struct IMPCTarget *, char *))(*(_QWORD *)v7 + 24LL))(v7, (char *)this + 464);
      (*(void (__fastcall **)(MPCInputProviderBase *, struct IMPCTarget *, _QWORD))(*(_QWORD *)this + 88LL))(
        this,
        v7,
        a5);
    }
    if ( a3 )
    {
      (*(void (__fastcall **)(MPCInputProviderBase *, _QWORD, _QWORD, char *))(*(_QWORD *)this + 80LL))(
        this,
        0LL,
        a5,
        (char *)this + 464);
      *((_BYTE *)this + 2050) = v9;
      if ( (*(int (__fastcall **)(struct IMPCTarget *, char *))(*(_QWORD *)a3 + 24LL))(a3, (char *)this + 464) >= 0 )
      {
        (*(void (__fastcall **)(MPCInputProviderBase *, struct IMPCTarget *, _QWORD))(*(_QWORD *)this + 96LL))(
          this,
          a3,
          a5);
      }
      else
      {
        if ( a4 )
          *a4 = (*(__int64 (__fastcall **)(struct IMPCTarget *))(*(_QWORD *)a3 + 32LL))(a3);
        if ( v10 )
        {
          v11 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
          if ( v11 )
          {
            if ( *v11 )
            {
              ISMTracing::Instance();
              ISMTracing::MPCInputProviderBase_SendSourceDetectedFailed_(
                v12,
                a3,
                (MPCInputProviderBase *)((char *)this + 464),
                a5);
            }
          }
        }
      }
    }
  }
}
