/*
 * XREFs of ?OnSuccessfulAttach@MPCInputProviderBase@@MEAAXPEAUIMPCTarget@@I@Z @ 0x180100D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAUInputInfo@@_NI@Z @ 0x180101090 (-MPCInputProviderSourceDetectedLost_@ISMTracing@@QEAAXPEAUIMPCTarget@@PEAUInputInfo@@_NI@Z.c)
 */

void __fastcall MPCInputProviderBase::OnSuccessfulAttach(MPCInputProviderBase *this, struct IMPCTarget *a2, char a3)
{
  _DWORD *v6; // rcx
  ISMTracing *v7; // rcx

  v6 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v6 && *v6 )
  {
    ISMTracing::Instance();
    ISMTracing::MPCInputProviderSourceDetectedLost_(v7, a2, (MPCInputProviderBase *)((char *)this + 464), 1, a3);
  }
  *((_WORD *)this + 1832) = 257;
}
