/*
 * XREFs of ?SHRegGetBOOL@@YAJPEAUHKEY__@@PEBG1PEAH@Z @ 0x180128270
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180331F00 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SHRegGetBOOL(HKEY a1, const unsigned __int16 *a2, const unsigned __int16 *a3, int *a4)
{
  LSTATUS ValueW; // eax
  unsigned int v6; // ecx
  bool v7; // zf
  unsigned int v9; // [rsp+40h] [rbp-18h] BYREF
  DWORD v10; // [rsp+44h] [rbp-14h] BYREF
  DWORD v11[4]; // [rsp+48h] [rbp-10h] BYREF

  v10 = 0;
  v11[0] = 4;
  ValueW = RegGetValueW(a1, a2, a3, 0x10000012u, &v10, &v9, v11);
  LOWORD(v6) = 13;
  if ( !ValueW )
  {
    if ( v10 == 4 )
    {
      if ( v9 <= 1 )
      {
        v7 = v9 == 1;
LABEL_5:
        LOBYTE(ValueW) = v7;
        v6 = 0;
        *a4 = ValueW;
        return v6;
      }
    }
    else if ( v11[0] == 4 && (unsigned __int16)(v9 - 48) <= 1u )
    {
      ValueW = 0;
      v7 = (_WORD)v9 == 49;
      goto LABEL_5;
    }
    return (unsigned __int16)v6 | 0x80070000;
  }
  if ( ValueW == 234 )
    ValueW = 13;
  v6 = ValueW;
  if ( ValueW > 0 )
    return (unsigned __int16)v6 | 0x80070000;
  return v6;
}
