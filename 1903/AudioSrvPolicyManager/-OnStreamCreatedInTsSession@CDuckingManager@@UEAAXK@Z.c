/*
 * XREFs of ?OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z @ 0x180009080
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x1800241D0 (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800250C8 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

void __fastcall CDuckingManager::OnStreamCreatedInTsSession(CDuckingManager *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v5; // ebx
  struct TSSession *v6; // rsi
  int v7; // ebx
  float v8; // xmm3_4
  struct TSSession *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v5 = 1;
  if ( !(unsigned int)TsSessionFromSessionId(a2, 1, 0LL, &v9) )
  {
    v6 = v9;
    if ( (int)RpcTryInitializeUserSettings(v9) >= 0 )
      v5 = *((_DWORD *)v6 + 80);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  *((_DWORD *)this + 71) = v5;
  if ( v5 )
  {
    v7 = v5 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        v8 = FLOAT_N6_0;
      else
        v8 = 0.0;
    }
    else
    {
      v8 = FLOAT_N18_0;
    }
  }
  else
  {
    v8 = FLOAT_N96_0;
  }
  CWindowsPolicyManager::SetDuckingGainForId(g_PolicyManager, a2, L"Comm", v8);
}
