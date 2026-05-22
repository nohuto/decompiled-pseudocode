/*
 * XREFs of ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x180047BA4
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x180040680 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 *     ?OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x180043194 (-OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FCE0 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?MPCGamepadInputHelper_UpdateGamepadFocus_@ISMTracing@@QEAAXAEB_NAEBK00000000@Z @ 0x180047DC0 (-MPCGamepadInputHelper_UpdateGamepadFocus_@ISMTracing@@QEAAXAEB_NAEBK00000000@Z.c)
 *     ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z @ 0x18006B700 (-SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z.c)
 */

void __fastcall MPCGamepadInputHelper::UpdateGamepadFocus(MPCGamepadInputHelper *this)
{
  int v2; // eax
  int *v3; // rsi
  WGIRawInputProvider *v4; // rdi
  bool v5; // cl
  bool v6; // bp
  _DWORD *v7; // rcx
  bool v8; // [rsp+60h] [rbp-28h] BYREF
  bool v9; // [rsp+98h] [rbp+10h] BYREF
  int v10; // [rsp+A0h] [rbp+18h] BYREF
  bool v11; // [rsp+A8h] [rbp+20h] BYREF

  if ( *((_DWORD *)MPCHolographicInputManager::GetInstance() + 534) != 1
    || (*((_DWORD *)MPCHolographicInputManager::GetInstance() + 538) & 2) != 0
    || *((_BYTE *)this + 1)
    || *((_BYTE *)this + 40)
    || *((_BYTE *)this + 38) )
  {
    v2 = 0;
  }
  else if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 1873)
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
    v9 = v2 != 0;
    v6 = v2 == 0;
    if ( *((_BYTE *)v4 + 392) != (v2 == 0) )
    {
      if ( !v2 )
      {
        WGIRawInputProvider::SetInputFocusProcess(v4, *((_DWORD *)v4 + 99), *((_DWORD *)v4 + 100));
        v5 = v9;
      }
      *((_BYTE *)v4 + 392) = v6;
    }
    if ( v5 )
    {
      v10 = *v3;
      RtlPublishWnfStateData(WNF_SHEL_FOCUS_CHANGE, 0LL, &v10, 4LL, 0LL);
    }
    LOBYTE(v10) = *((_BYTE *)MPCHolographicInputManager::GetInstance() + 1873);
    v11 = (*((_DWORD *)MPCHolographicInputManager::GetInstance() + 538) & 2) != 0;
    v8 = *((_DWORD *)MPCHolographicInputManager::GetInstance() + 534) == 1;
    v7 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v7 )
    {
      if ( *v7 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCGamepadInputHelper_UpdateGamepadFocus_(
          (MPCGamepadInputHelper *)((char *)this + 41),
          &v9,
          (const unsigned int *)this + 8,
          &v8,
          &v11,
          (const bool *)this + 1,
          (const bool *)&v10,
          (const bool *)this + 39,
          (const bool *)this,
          (const bool *)this + 41,
          (const bool *)this + 40);
      }
    }
  }
}
