/*
 * XREFs of ?IsMakeSureEnableInAppAnimation@TouchKeyboardExperienceManager@@AEBA_NXZ @ 0x180093A14
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802B8EB0 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall TouchKeyboardExperienceManager::IsMakeSureEnableInAppAnimation(TouchKeyboardExperienceManager *this)
{
  char v1; // bl
  int v3; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+54h] [rbp+Ch]
  DWORD v5; // [rsp+58h] [rbp+10h] BYREF

  v4 = HIDWORD(this);
  v1 = 0;
  v5 = 4;
  v3 = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Input",
          L"MakeSureEnableInAppAnimation",
          0x18u,
          0LL,
          &v3,
          &v5) )
    return v3 != 0;
  return v1;
}
