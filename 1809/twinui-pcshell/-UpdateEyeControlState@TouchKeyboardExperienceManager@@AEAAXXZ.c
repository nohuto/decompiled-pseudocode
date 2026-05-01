/*
 * XREFs of ?UpdateEyeControlState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802BD6D0
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1802B8EB0 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::UpdateEyeControlState(TouchKeyboardExperienceManager *this)
{
  bool v2; // bl
  LSTATUS ValueW; // eax
  signed int v4; // ecx
  bool v5; // zf
  bool v6; // al
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF
  DWORD v8; // [rsp+58h] [rbp+10h] BYREF
  DWORD v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = 4;
  v2 = 0;
  v8 = 0;
  ValueW = RegGetValueW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Input\\EC", L"Enabled", 0x10000012u, &v8, &v7, &v9);
  LOWORD(v4) = 13;
  if ( !ValueW )
  {
    if ( v8 == 4 )
    {
      v5 = v7 == 1;
      if ( v7 <= 1 )
      {
LABEL_4:
        v4 = 0;
        v6 = v5;
        goto LABEL_12;
      }
    }
    else if ( v9 == 4 && (unsigned __int16)(v7 - 48) <= 1u )
    {
      v5 = (_WORD)v7 == 49;
      goto LABEL_4;
    }
    goto LABEL_11;
  }
  if ( ValueW == 234 )
    ValueW = 13;
  v4 = ValueW;
  v6 = 0;
  if ( v4 > 0 )
  {
LABEL_11:
    v6 = 0;
    v4 = (unsigned __int16)v4 | 0x80070000;
  }
LABEL_12:
  if ( !v4 )
    v2 = v6;
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 87) + 96LL) + 502LL) = v2;
}
