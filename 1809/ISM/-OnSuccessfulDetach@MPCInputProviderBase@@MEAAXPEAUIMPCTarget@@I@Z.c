/*
 * XREFs of ?OnSuccessfulDetach@MPCInputProviderBase@@MEAAXPEAUIMPCTarget@@I@Z @ 0x180100CA0
 * Callers:
 *     ?OnSuccessfulDetach@MPCSixDofProcessor@@EEAAXPEAUIMPCTarget@@I@Z @ 0x1800F1130 (-OnSuccessfulDetach@MPCSixDofProcessor@@EEAAXPEAUIMPCTarget@@I@Z.c)
 *     ?Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800F5FD0 (-Process3DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAUInputInfo@@_NI@Z @ 0x180101090 (-MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAUInputInfo@@_NI@Z.c)
 */

void __fastcall MPCInputProviderBase::OnSuccessfulDetach(MPCInputProviderBase *this, struct IMPCTarget *a2, char a3)
{
  _DWORD *v6; // rcx
  ISMTracing *v7; // rcx

  v6 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v6 && *v6 )
  {
    ISMTracing::Instance();
    ISMTracing::MPCInputProviderSourceDetectedLost_(v7, a2, (MPCInputProviderBase *)((char *)this + 464), 0, a3);
  }
  *((_BYTE *)this + 3665) = 1;
}
