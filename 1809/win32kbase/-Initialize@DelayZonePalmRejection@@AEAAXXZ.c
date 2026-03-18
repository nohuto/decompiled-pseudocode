/*
 * XREFs of ?Initialize@DelayZonePalmRejection@@AEAAXXZ @ 0x1C0006758
 * Callers:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0006714 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 * Callees:
 *     ?Initialize@DelayZoneTelemetry@@QEAAXKK@Z @ 0x1C0006838 (-Initialize@DelayZoneTelemetry@@QEAAXKK@Z.c)
 *     ?InitRecorderLog@DelayZonePalmRejection@@AEAAXPEAG@Z @ 0x1C00069A0 (-InitRecorderLog@DelayZonePalmRejection@@AEAAXPEAG@Z.c)
 *     ?Initialize@CInpLockGuard@@QEAAHXZ @ 0x1C0006B5C (-Initialize@CInpLockGuard@@QEAAHXZ.c)
 *     ?ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ @ 0x1C0006DB0 (-ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

void __fastcall DelayZonePalmRejection::Initialize(DelayZonePalmRejection *this)
{
  DelayZonePalmRejection *v1; // rbx
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  unsigned __int16 *v5; // rdx
  DelayZoneTelemetry *v6; // rcx
  DelayZoneTelemetry *v7; // rax
  int v8; // edx
  DelayZoneTelemetry *v9; // rdi
  _OWORD v10[5]; // [rsp+30h] [rbp-58h] BYREF

  v1 = DelayZonePalmRejection::s_instance;
  DelayZonePalmRejection::ReadSettingsFromRegKey(DelayZonePalmRejection::s_instance);
  memset(v10, 0, 0x48uLL);
  v2 = v10[1];
  *(_OWORD *)v1 = v10[0];
  v3 = v10[2];
  *((_OWORD *)v1 + 1) = v2;
  v4 = v10[3];
  *((_OWORD *)v1 + 2) = v3;
  *(_QWORD *)&v3 = *(_QWORD *)&v10[4];
  *((_OWORD *)v1 + 3) = v4;
  *((_QWORD *)v1 + 8) = v3;
  *((_QWORD *)v1 + 3) = 0LL;
  CInpLockGuard::Initialize((DelayZonePalmRejection *)((char *)v1 + 120));
  *((_QWORD *)v1 + 10) = (char *)v1 + 72;
  *((_QWORD *)v1 + 9) = (char *)v1 + 72;
  *((_DWORD *)v1 + 23) = 0;
  *((_DWORD *)v1 + 22) = 1;
  DelayZonePalmRejection::InitRecorderLog(v1, v5);
  v6 = (DelayZoneTelemetry *)*((_QWORD *)v1 + 17);
  if ( v6 )
  {
    DelayZoneTelemetry::Initialize(v6, *((_DWORD *)v1 + 26), *((_DWORD *)v1 + 25));
  }
  else
  {
    v7 = (DelayZoneTelemetry *)Win32AllocPoolZInit(0x3010uLL);
    v9 = v7;
    if ( v7 )
    {
      DelayZoneTelemetry::Initialize(v7, *((_DWORD *)v1 + 26), *((_DWORD *)v1 + 25));
      *((_QWORD *)v1 + 17) = v9;
    }
    else
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_(*((_QWORD *)v1 + 14), v8, 13, 24, (__int64)&WPP_d258f4abf76b3963f2092d6ddd0e7137_Traceguids);
    }
  }
}
