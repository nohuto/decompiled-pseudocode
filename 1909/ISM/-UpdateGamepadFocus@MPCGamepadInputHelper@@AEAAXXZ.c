/*
 * XREFs of ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x180087720
 * Callers:
 *     ?UpdateGazeDrivenProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x180083C48 (-UpdateGazeDrivenProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?OnTargetWithFocus3dChanged@MPCGamepadInputHelper@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x1800875C0 (-OnTargetWithFocus3dChanged@MPCGamepadInputHelper@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180021360 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z @ 0x180026CDC (-SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z.c)
 *     ??$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@@SAXAEA_NAEAK$$QEA_N2020000@Z @ 0x180087270 (--$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@.c)
 */

void __fastcall MPCGamepadInputHelper::UpdateGamepadFocus(MPCGamepadInputHelper *this)
{
  int v2; // eax
  int *v3; // rsi
  WGIRawInputProvider *v4; // rdi
  bool v5; // cl
  bool v6; // bp
  bool v7; // [rsp+50h] [rbp-28h] BYREF
  bool v8; // [rsp+88h] [rbp+10h] BYREF
  int v9; // [rsp+90h] [rbp+18h] BYREF
  bool v10; // [rsp+98h] [rbp+20h] BYREF

  if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 656) != 1
    || (*((_BYTE *)MPCHolographicInputManager::GetInstance() + 2640) & 2) != 0
    || *((_BYTE *)this + 1)
    || *((_BYTE *)this + 40)
    || *((_BYTE *)this + 38) )
  {
    v2 = 0;
  }
  else if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 2365)
         || !*((_BYTE *)this + 39) && (!*(_BYTE *)this || *((_BYTE *)this + 41)) )
  {
    v2 = *((_DWORD *)this + 7);
  }
  else
  {
    v2 = *((_DWORD *)this + 6);
  }
  v3 = (int *)((char *)this + 32);
  if ( v2 != *((_DWORD *)this + 8) )
  {
    v4 = WGIRawInputProvider::s_pInstance;
    *v3 = v2;
    v5 = v2 != 0;
    v8 = v2 != 0;
    if ( v4 )
    {
      v6 = v2 == 0;
      if ( *((_BYTE *)v4 + 400) != (v2 == 0) )
      {
        if ( !v2 )
        {
          WGIRawInputProvider::SetInputFocusProcess(v4, *((_DWORD *)v4 + 101), *((_DWORD *)v4 + 102));
          v5 = v8;
        }
        *((_BYTE *)v4 + 400) = v6;
      }
    }
    if ( v5 )
    {
      v9 = *v3;
      RtlPublishWnfStateData(WNF_SHEL_FOCUS_CHANGE, 0LL, &v9, 4LL, 0LL);
    }
    LOBYTE(v9) = *((_BYTE *)MPCHolographicInputManager::GetInstance() + 2365);
    v10 = (*((_DWORD *)MPCHolographicInputManager::GetInstance() + 660) & 2) != 0;
    v7 = *((_DWORD *)MPCHolographicInputManager::GetInstance() + 656) == 1;
    ISMTracing::MPCGamepadInputHelper_UpdateGamepadFocus<bool &,unsigned long &,bool,bool,bool &,bool,bool &,bool &,bool &,bool &>(
      &v8,
      (unsigned int *)this + 8,
      &v7,
      &v10,
      (bool *)this + 1,
      (bool *)&v9,
      (bool *)this + 39,
      (bool *)this,
      (bool *)this + 41,
      (bool *)this + 40);
  }
}
