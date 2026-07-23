/*
 * XREFs of RtlSwitchedVVI @ 0x180072EE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpVerCompare @ 0x180073220 (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x18007330C (RtlpVerGetConditionMask.c)
 *     SwitchedRtlGetVersion @ 0x18007332C (SwitchedRtlGetVersion.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

DWORD __cdecl RtlSwitchedVVI(PRTL_OSVERSIONINFOEXW VersionInfo, DWORD TypeMask, ULONGLONG ConditionMask)
{
  char v4; // si
  char v6; // di
  DWORD result; // eax
  char v8; // al
  int v9; // edi
  int v10; // eax
  bool v11; // zf
  int v12; // eax
  WORD wSuiteMask; // ax
  unsigned int v14; // r10d
  int v15; // r11d
  int v16; // r9d
  int v17; // eax
  int v18; // eax
  int v19; // eax
  _BYTE v20[16]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v21[72]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = TypeMask;
  v6 = 0;
  if ( !TypeMask )
    return -1073741811;
  memset(&v21[1], 0, 0x118uLL);
  v21[0] = 284;
  result = SwitchedRtlGetVersion(v21);
  if ( !result )
  {
    if ( (v4 & 0x40) != 0 )
    {
      wSuiteMask = VersionInfo->wSuiteMask;
      if ( wSuiteMask )
      {
        v14 = 0;
        v15 = wSuiteMask;
        do
        {
          v16 = 1 << v14;
          if ( (v15 & (1 << v14)) != 0 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
              v17 = 0;
            else
              v17 = RtlpVerGetConditionMask(ConditionMask, 64LL);
            v18 = v17 - 6;
            if ( v18 )
            {
              if ( v18 != 1 )
                return -1073741811;
              if ( (v21[70] & (unsigned __int16)v16) != 0 )
                v6 = 1;
            }
            else if ( (v21[70] & (unsigned __int16)v16) == 0 )
            {
              return -1073741735;
            }
          }
          ++v14;
        }
        while ( v14 < 0x10 );
        if ( (unsigned int)RtlpVerGetConditionMask(ConditionMask, 64LL) == 7 && !v6 )
          return -1073741735;
      }
    }
    v8 = 1;
    v20[0] = 1;
    v9 = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
        v9 = (unsigned __int8)(ConditionMask >> 4);
      else
        v9 = RtlpVerGetConditionMask(ConditionMask, 2LL);
      v11 = (unsigned __int8)RtlpVerCompare(v9, VersionInfo->dwMajorVersion, v21[1], (unsigned int)v20, 0) == 0;
      v8 = v20[0];
      if ( v11 )
      {
        if ( !v20[0] )
          return -1073741735;
      }
      else if ( !v20[0] )
      {
        goto LABEL_10;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_6;
    if ( v9 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
        v9 = (unsigned __int8)(ConditionMask >> 2);
      else
        v9 = RtlpVerGetConditionMask(ConditionMask, 1LL);
    }
    v11 = (unsigned __int8)RtlpVerCompare(v9, VersionInfo->dwMinorVersion, v21[2], (unsigned int)v20, 1) == 0;
    v8 = v20[0];
    if ( v11 )
    {
      if ( !v20[0] )
        return -1073741735;
    }
    else
    {
LABEL_6:
      if ( !v8 )
        goto LABEL_10;
    }
    if ( (v4 & 0x20) == 0 )
      goto LABEL_8;
    if ( v9 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
        v9 = RtlpVerGetConditionMask(ConditionMask, 32LL);
      else
        v9 = 0;
    }
    if ( (unsigned __int8)RtlpVerCompare(v9, VersionInfo->wServicePackMajor, LOWORD(v21[69]), (unsigned int)v20, 0) )
    {
      v8 = v20[0];
LABEL_8:
      if ( v8 )
      {
LABEL_9:
        if ( (v4 & 0x10) != 0 )
        {
          if ( v9 == 1 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
              v9 = RtlpVerGetConditionMask(ConditionMask, 16LL);
            else
              v9 = 0;
          }
          if ( !(unsigned __int8)RtlpVerCompare(
                                   v9,
                                   VersionInfo->wServicePackMinor,
                                   HIWORD(v21[69]),
                                   (unsigned int)v20,
                                   1) )
            return -1073741735;
        }
      }
LABEL_10:
      if ( (v4 & 4) != 0 )
      {
        v19 = (ConditionMask & 0x8000000000000000uLL) == 0LL
            ? BYTE2(ConditionMask)
            : RtlpVerGetConditionMask(ConditionMask, 4LL);
        if ( !(unsigned __int8)RtlpVerCompare(v19, VersionInfo->dwBuildNumber, v21[3], (unsigned int)v20, 0) )
          return -1073741735;
      }
      if ( (v4 & 8) != 0 )
      {
        v12 = (ConditionMask & 0x8000000000000000uLL) == 0LL ? 0 : RtlpVerGetConditionMask(ConditionMask, 8LL);
        if ( !(unsigned __int8)RtlpVerCompare(v12, VersionInfo->dwPlatformId, v21[4], (unsigned int)v20, 0) )
          return -1073741735;
      }
      if ( v4 < 0 )
      {
        v10 = (ConditionMask & 0x8000000000000000uLL) == 0LL ? 0 : RtlpVerGetConditionMask(ConditionMask, 128LL);
        if ( !(unsigned __int8)RtlpVerCompare(v10, VersionInfo->wProductType, BYTE2(v21[70]), (unsigned int)v20, 0) )
          return -1073741735;
      }
      return 0;
    }
    if ( v20[0] )
      goto LABEL_9;
    return -1073741735;
  }
  return result;
}
