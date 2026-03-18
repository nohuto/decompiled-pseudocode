/*
 * XREFs of ?OnPTPMarshalNotification@CHidInput@@EEAAJXZ @ 0x1C014CC40
 * Callers:
 *     <none>
 * Callees:
 *     SynthesizeMouseInput @ 0x1C0081E60 (SynthesizeMouseInput.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C00EC7E8 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C014C900 (-IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 */

__int64 __fastcall CHidInput::OnPTPMarshalNotification(CHidInput *this)
{
  int v2; // esi
  __int64 v3; // rbx
  CHidInput *v4; // rcx
  struct DEVICEINFO *i; // rdx
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  v7[0] = 0LL;
  v7[1] = 0LL;
  v8 = 0LL;
  v2 = *((_DWORD *)this + 292) != 0 ? 17256 : 872;
  InputTraceLogging::Mouse::InjectInput();
  HIDWORD(v8) = *((_DWORD *)this + 290);
  if ( (*((_WORD *)this + 574) & 0x1800) == 0x800 )
    WORD2(v7[0]) = 1024;
  else
    WORD2(v7[0]) = 2048;
  v3 = 0LL;
  HIWORD(v7[0]) = *((_WORD *)this + 572);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
  {
    if ( *((_BYTE *)i + 48) == 2 && CHidInput::IsTouchpadDevice(v4, i) )
    {
      v3 = *(_QWORD *)i;
      break;
    }
  }
  ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
  KeLeaveCriticalRegion();
  SynthesizeMouseInput(v3, (__int64)v7, *((_QWORD *)this + 148), *((_QWORD *)this + 147), v2);
  return 0LL;
}
