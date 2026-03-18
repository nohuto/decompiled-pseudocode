/*
 * XREFs of ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C005C0CC
 * Callers:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0036778 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C005B320 (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 *     ?Initialize@DelayZoneTelemetry@@QEAAXKK@Z @ 0x1C005C1A4 (-Initialize@DelayZoneTelemetry@@QEAAXKK@Z.c)
 *     ?ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ @ 0x1C005C3EC (-ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

void __fastcall DelayZonePalmRejection::Initialize(DelayZonePalmRejection *this)
{
  DelayZonePalmRejection *v1; // rbx
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  DelayZoneTelemetry *v5; // rcx
  DelayZoneTelemetry *v6; // rax
  int v7; // edx
  DelayZoneTelemetry *v8; // rdi
  _OWORD v9[5]; // [rsp+30h] [rbp-58h] BYREF

  v1 = DelayZonePalmRejection::s_instance;
  DelayZonePalmRejection::ReadSettingsFromRegKey(DelayZonePalmRejection::s_instance);
  memset(v9, 0, 0x48uLL);
  v2 = v9[1];
  *(_OWORD *)v1 = v9[0];
  v3 = v9[2];
  *((_OWORD *)v1 + 1) = v2;
  v4 = v9[3];
  *((_OWORD *)v1 + 2) = v3;
  *(_QWORD *)&v3 = *(_QWORD *)&v9[4];
  *((_OWORD *)v1 + 3) = v4;
  *((_QWORD *)v1 + 8) = v3;
  *((_QWORD *)v1 + 3) = 0LL;
  CInpLockGuard::Initialize((DelayZonePalmRejection *)((char *)v1 + 112));
  *((_QWORD *)v1 + 10) = (char *)v1 + 72;
  *((_QWORD *)v1 + 9) = (char *)v1 + 72;
  *((_DWORD *)v1 + 23) = 0;
  v5 = (DelayZoneTelemetry *)*((_QWORD *)v1 + 20);
  *((_DWORD *)v1 + 22) = 1;
  if ( v5 )
  {
    DelayZoneTelemetry::Initialize(v5, *((_DWORD *)v1 + 26), *((_DWORD *)v1 + 25));
  }
  else
  {
    v6 = (DelayZoneTelemetry *)Win32AllocPoolZInit(0x3010uLL, 2053403477LL);
    v8 = v6;
    if ( v6 )
    {
      DelayZoneTelemetry::Initialize(v6, *((_DWORD *)v1 + 26), *((_DWORD *)v1 + 25));
      *((_QWORD *)v1 + 20) = v8;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_((_DWORD)gBaseLog, v7, 8, 23, (__int64)&WPP_5b698ae13cb138d9dcf3d84f80d2dc37_Traceguids);
    }
  }
}
