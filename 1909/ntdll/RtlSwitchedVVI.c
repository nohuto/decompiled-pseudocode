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

__int64 __fastcall RtlSwitchedVVI(__int64 a1, int a2, __int64 a3)
{
  char v4; // si
  char v6; // di
  __int64 result; // rax
  char v8; // al
  int v9; // edi
  int v10; // eax
  bool v11; // zf
  int v12; // eax
  unsigned __int16 v13; // ax
  unsigned int v14; // r10d
  int v15; // r11d
  int v16; // r9d
  int ConditionMask; // eax
  int v18; // eax
  int v19; // eax
  _BYTE v20[16]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v21[72]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = a2;
  v6 = 0;
  if ( !a2 )
    return 3221225485LL;
  memset(&v21[1], 0, 0x118uLL);
  v21[0] = 284;
  result = SwitchedRtlGetVersion(v21);
  if ( !(_DWORD)result )
  {
    if ( (v4 & 0x40) != 0 )
    {
      v13 = *(_WORD *)(a1 + 280);
      if ( v13 )
      {
        v14 = 0;
        v15 = v13;
        do
        {
          v16 = 1 << v14;
          if ( (v15 & (1 << v14)) != 0 )
          {
            if ( a3 >= 0 )
              ConditionMask = 0;
            else
              ConditionMask = RtlpVerGetConditionMask(a3, 64LL);
            v18 = ConditionMask - 6;
            if ( v18 )
            {
              if ( v18 != 1 )
                return 3221225485LL;
              if ( (v21[70] & (unsigned __int16)v16) != 0 )
                v6 = 1;
            }
            else if ( (v21[70] & (unsigned __int16)v16) == 0 )
            {
              return 3221225561LL;
            }
          }
          ++v14;
        }
        while ( v14 < 0x10 );
        if ( (unsigned int)RtlpVerGetConditionMask(a3, 64LL) == 7 && !v6 )
          return 3221225561LL;
      }
    }
    v8 = 1;
    v20[0] = 1;
    v9 = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( a3 >= 0 )
        v9 = (unsigned __int8)((unsigned __int64)a3 >> 4);
      else
        v9 = RtlpVerGetConditionMask(a3, 2LL);
      v11 = (unsigned __int8)RtlpVerCompare(v9, *(_DWORD *)(a1 + 4), v21[1], (unsigned int)v20, 0) == 0;
      v8 = v20[0];
      if ( v11 )
      {
        if ( !v20[0] )
          return 3221225561LL;
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
      if ( a3 >= 0 )
        v9 = (unsigned __int8)((unsigned __int64)a3 >> 2);
      else
        v9 = RtlpVerGetConditionMask(a3, 1LL);
    }
    v11 = (unsigned __int8)RtlpVerCompare(v9, *(_DWORD *)(a1 + 8), v21[2], (unsigned int)v20, 1) == 0;
    v8 = v20[0];
    if ( v11 )
    {
      if ( !v20[0] )
        return 3221225561LL;
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
      if ( a3 < 0 )
        v9 = RtlpVerGetConditionMask(a3, 32LL);
      else
        v9 = 0;
    }
    if ( (unsigned __int8)RtlpVerCompare(v9, *(unsigned __int16 *)(a1 + 276), LOWORD(v21[69]), (unsigned int)v20, 0) )
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
            if ( a3 < 0 )
              v9 = RtlpVerGetConditionMask(a3, 16LL);
            else
              v9 = 0;
          }
          if ( !(unsigned __int8)RtlpVerCompare(
                                   v9,
                                   *(unsigned __int16 *)(a1 + 278),
                                   HIWORD(v21[69]),
                                   (unsigned int)v20,
                                   1) )
            return 3221225561LL;
        }
      }
LABEL_10:
      if ( (v4 & 4) != 0 )
      {
        v19 = a3 >= 0 ? BYTE2(a3) : RtlpVerGetConditionMask(a3, 4LL);
        if ( !(unsigned __int8)RtlpVerCompare(v19, *(_DWORD *)(a1 + 12), v21[3], (unsigned int)v20, 0) )
          return 3221225561LL;
      }
      if ( (v4 & 8) != 0 )
      {
        v12 = a3 >= 0 ? 0 : RtlpVerGetConditionMask(a3, 8LL);
        if ( !(unsigned __int8)RtlpVerCompare(v12, *(_DWORD *)(a1 + 16), v21[4], (unsigned int)v20, 0) )
          return 3221225561LL;
      }
      if ( v4 < 0 )
      {
        v10 = a3 >= 0 ? 0 : RtlpVerGetConditionMask(a3, 128LL);
        if ( !(unsigned __int8)RtlpVerCompare(v10, *(unsigned __int8 *)(a1 + 282), BYTE2(v21[70]), (unsigned int)v20, 0) )
          return 3221225561LL;
      }
      return 0LL;
    }
    if ( v20[0] )
      goto LABEL_9;
    return 3221225561LL;
  }
  return result;
}
