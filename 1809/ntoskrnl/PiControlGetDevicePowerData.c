/*
 * XREFs of PiControlGetDevicePowerData @ 0x14083C8C8
 * Callers:
 *     PiControlGetPropertyData @ 0x1405884A0 (PiControlGetPropertyData.c)
 * Callees:
 *     PipIsDevNodeDNStarted @ 0x140007294 (PipIsDevNodeDNStarted.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     PopLockGetDoDevicePowerState @ 0x1402DC3A4 (PopLockGetDoDevicePowerState.c)
 *     PpIrpQueryCapabilities @ 0x1406EC944 (PpIrpQueryCapabilities.c)
 */

__int64 __fastcall PiControlGetDevicePowerData(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4, _DWORD *a5)
{
  unsigned int v5; // ebx
  size_t v6; // r15
  int DoDevicePowerState; // eax
  int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // r10
  int v14; // edx
  int i; // r8d
  int v16; // edx
  int v17; // edx
  int v18; // edx
  __int64 v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 Src; // [rsp+20h] [rbp-71h] BYREF
  __m256i v23; // [rsp+30h] [rbp-61h]
  __int64 v24; // [rsp+50h] [rbp-41h]
  int v25; // [rsp+60h] [rbp-31h] BYREF
  int v26; // [rsp+64h] [rbp-2Dh]
  __int128 v27; // [rsp+70h] [rbp-21h]
  __int64 v28; // [rsp+80h] [rbp-11h]
  int v29; // [rsp+88h] [rbp-9h]
  int v30; // [rsp+8Ch] [rbp-5h]
  int v31; // [rsp+90h] [rbp-1h]
  int v32; // [rsp+94h] [rbp+3h]
  __int64 v33; // [rsp+98h] [rbp+7h]

  v5 = 0;
  v6 = a3;
  LODWORD(Src) = 56;
  *a5 = 0;
  if ( a3 < 4 )
  {
    *a5 = 56;
    return 2147483653LL;
  }
  if ( (int)PpIrpQueryCapabilities(*(struct _DEVICE_OBJECT **)(a1 + 32), &v25) < 0 )
    return 3221225486LL;
  if ( PipIsDevNodeDNStarted(a1) )
  {
    DoDevicePowerState = PopLockGetDoDevicePowerState(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 312LL));
    if ( !DoDevicePowerState )
      DoDevicePowerState = 1;
    DWORD1(Src) = DoDevicePowerState;
  }
  else
  {
    DWORD1(Src) = 4;
  }
  v11 = 9;
  if ( (v26 & 1) != 0 )
    v11 = 11;
  v12 = 2LL;
  DWORD2(Src) = v11;
  if ( (v26 & 2) != 0 )
  {
    v11 |= 4u;
    DWORD2(Src) = v11;
  }
  if ( (v26 & 0x400) != 0 )
  {
    v11 |= 0x10u;
    DWORD2(Src) = v11;
  }
  if ( (v26 & 0x800) != 0 )
  {
    v11 |= 0x20u;
    DWORD2(Src) = v11;
  }
  if ( (v26 & 0x1000) != 0 )
  {
    v11 |= 0x40u;
    DWORD2(Src) = v11;
  }
  if ( (v26 & 0x2000) != 0 )
  {
    v11 |= 0x80u;
    DWORD2(Src) = v11;
  }
  if ( (v26 & 0x10000) != 0 )
  {
    v11 |= 0x100u;
    DWORD2(Src) = v11;
  }
  v13 = 2LL;
  v14 = v31;
  i = v30;
  LODWORD(v24) = v29;
  HIDWORD(Src) = v32;
  v23.m256i_i64[0] = v33;
  *(_OWORD *)&v23.m256i_u64[1] = v27;
  v23.m256i_i64[3] = v28;
  do
  {
    v16 = v14 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 != 1 )
            goto LABEL_34;
          v11 |= 0x80u;
        }
        else
        {
          v11 |= 0x44u;
        }
      }
      else
      {
        v11 |= 0x22u;
      }
    }
    else
    {
      v11 |= 0x10u;
    }
    DWORD2(Src) = v11;
LABEL_34:
    if ( v30 )
      v14 = *((_DWORD *)&v27 + v30);
    else
      v14 = 0;
    --v13;
  }
  while ( v13 );
  if ( (v11 & 0x80) != 0 )
  {
    v19 = 4LL;
    goto LABEL_42;
  }
  if ( (v11 & 0x40) != 0 )
  {
    v19 = 3LL;
LABEL_42:
    v12 = v19;
  }
  else if ( (v11 & 0x20) != 0 )
  {
    LODWORD(v19) = 2;
  }
  else if ( (v11 & 0x10) != 0 )
  {
    LODWORD(v19) = 1;
    v12 = 1LL;
  }
  else
  {
    LODWORD(v19) = 0;
    v12 = 0LL;
  }
  if ( !v30 && (_DWORD)v19 )
  {
    for ( i = 4; i >= 1; --i )
    {
      if ( DWORD2(v27) && SDWORD2(v27) <= v12 )
        break;
    }
  }
  HIDWORD(v24) = i;
  if ( (unsigned int)v6 >= 0x38 )
  {
    if ( a4 )
    {
      v20 = *(_OWORD *)v23.m256i_i8;
      *a4 = Src;
      v21 = *(_OWORD *)&v23.m256i_u64[2];
      a4[1] = v20;
      *(_QWORD *)&v20 = v24;
      a4[2] = v21;
      *((_QWORD *)a4 + 6) = v20;
    }
  }
  else
  {
    if ( a4 )
      memmove(a4, &Src, v6);
    v5 = -2147483643;
  }
  *a5 = 56;
  return v5;
}
