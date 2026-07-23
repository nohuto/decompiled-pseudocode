/*
 * XREFs of RtlSwitchedVVI @ 0x180062720
 * Callers:
 *     <none>
 * Callees:
 *     RtlpVerCompare @ 0x180062A68 (RtlpVerCompare.c)
 *     SwitchedRtlGetVersion @ 0x180062B5C (SwitchedRtlGetVersion.c)
 *     RtlpVerGetConditionMask @ 0x180062DC4 (RtlpVerGetConditionMask.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

DWORD __cdecl RtlSwitchedVVI(PRTL_OSVERSIONINFOEXW VersionInfo, DWORD TypeMask, ULONGLONG ConditionMask)
{
  char v4; // si
  char v6; // di
  DWORD result; // eax
  unsigned int v8; // ecx
  char v9; // al
  ULONGLONG v10; // rdi
  char v11; // al
  bool v12; // zf
  int v13; // eax
  int v14; // eax
  WORD wSuiteMask; // ax
  unsigned int v16; // r10d
  int v17; // r11d
  int v18; // r9d
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  _BYTE v25[16]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v26[72]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = TypeMask;
  v6 = 0;
  if ( !TypeMask )
    return -1073741811;
  memset(v26, 0, 0x11CuLL);
  v26[0] = 284;
  result = SwitchedRtlGetVersion(v26);
  if ( !result )
  {
    if ( (v4 & 0x40) != 0 )
    {
      wSuiteMask = VersionInfo->wSuiteMask;
      if ( wSuiteMask )
      {
        v16 = 0;
        v17 = wSuiteMask;
        do
        {
          v18 = 1 << v16;
          if ( (v17 & (1 << v16)) != 0 )
          {
            if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
              v19 = 0;
            else
              v19 = RtlpVerGetConditionMask(ConditionMask, 64LL);
            v20 = v19 - 6;
            if ( v20 )
            {
              if ( v20 != 1 )
                return -1073741811;
              if ( (v26[70] & (unsigned __int16)v18) != 0 )
                v6 = 1;
            }
            else if ( (v26[70] & (unsigned __int16)v18) == 0 )
            {
              return -1073741735;
            }
          }
          ++v16;
        }
        while ( v16 < 0x10 );
        if ( (unsigned int)RtlpVerGetConditionMask(ConditionMask, 64LL) == 7 && !v6 )
          return -1073741735;
      }
    }
    v8 = 2;
    v9 = 1;
    v25[0] = 1;
    LODWORD(v10) = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
      {
        LODWORD(v10) = (unsigned __int8)(ConditionMask >> 4);
      }
      else
      {
        v11 = 0;
        do
        {
          ++v11;
          v8 >>= 1;
        }
        while ( v8 );
        v10 = (ConditionMask >> (3 * (v11 - 1))) & 7;
      }
      v12 = (unsigned __int8)RtlpVerCompare(v10, VersionInfo->dwMajorVersion, v26[1], (unsigned int)v25, 0) == 0;
      v9 = v25[0];
      if ( v12 )
      {
        if ( !v25[0] )
          return -1073741735;
      }
      else if ( !v25[0] )
      {
LABEL_11:
        if ( (v4 & 4) != 0 )
        {
          v21 = (ConditionMask & 0x8000000000000000uLL) == 0LL
              ? BYTE2(ConditionMask)
              : RtlpVerGetConditionMask(ConditionMask, 4LL);
          if ( !(unsigned __int8)RtlpVerCompare(v21, VersionInfo->dwBuildNumber, v26[3], (unsigned int)v25, 0) )
            return -1073741735;
        }
        if ( (v4 & 8) != 0 )
        {
          v14 = (ConditionMask & 0x8000000000000000uLL) == 0LL ? 0 : RtlpVerGetConditionMask(ConditionMask, 8LL);
          if ( !(unsigned __int8)RtlpVerCompare(v14, VersionInfo->dwPlatformId, v26[4], (unsigned int)v25, 0) )
            return -1073741735;
        }
        if ( v4 < 0 )
        {
          v13 = (ConditionMask & 0x8000000000000000uLL) == 0LL ? 0 : RtlpVerGetConditionMask(ConditionMask, 128LL);
          if ( !(unsigned __int8)RtlpVerCompare(v13, VersionInfo->wProductType, BYTE2(v26[70]), (unsigned int)v25, 0) )
            return -1073741735;
        }
        return 0;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_17;
    if ( (_DWORD)v10 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) == 0LL )
        v22 = (unsigned __int8)(ConditionMask >> 2);
      else
        v22 = RtlpVerGetConditionMask(ConditionMask, 1LL);
      LODWORD(v10) = v22;
    }
    v12 = (unsigned __int8)RtlpVerCompare(v10, VersionInfo->dwMinorVersion, v26[2], (unsigned int)v25, 1) == 0;
    v9 = v25[0];
    if ( v12 )
    {
      if ( !v25[0] )
        return -1073741735;
    }
    else
    {
LABEL_17:
      if ( !v9 )
        goto LABEL_11;
    }
    if ( (v4 & 0x20) == 0 )
      goto LABEL_19;
    if ( (_DWORD)v10 == 1 )
    {
      if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
        v23 = RtlpVerGetConditionMask(ConditionMask, 32LL);
      else
        v23 = 0;
      LODWORD(v10) = v23;
    }
    if ( (unsigned __int8)RtlpVerCompare(v10, VersionInfo->wServicePackMajor, LOWORD(v26[69]), (unsigned int)v25, 0) )
    {
      v9 = v25[0];
LABEL_19:
      if ( !v9 )
        goto LABEL_11;
LABEL_20:
      if ( (v4 & 0x10) != 0 )
      {
        if ( (_DWORD)v10 == 1 )
        {
          if ( (ConditionMask & 0x8000000000000000uLL) != 0LL )
            v24 = RtlpVerGetConditionMask(ConditionMask, 16LL);
          else
            v24 = 0;
          LODWORD(v10) = v24;
        }
        if ( !(unsigned __int8)RtlpVerCompare(
                                 v10,
                                 VersionInfo->wServicePackMinor,
                                 HIWORD(v26[69]),
                                 (unsigned int)v25,
                                 1) )
          return -1073741735;
      }
      goto LABEL_11;
    }
    if ( v25[0] )
      goto LABEL_20;
    return -1073741735;
  }
  return result;
}
