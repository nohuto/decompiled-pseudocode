/*
 * XREFs of RegisterKernelCStates @ 0x1C0027C04
 * Callers:
 *     RegisterKernelIdleStates @ 0x1C0007F30 (RegisterKernelIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 *     DecodeAcpi2CState @ 0x1C002E804 (DecodeAcpi2CState.c)
 */

__int64 __fastcall RegisterKernelCStates(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v4; // ebx
  __int64 v7; // r13
  unsigned __int8 v8; // r12
  unsigned int v9; // edx
  unsigned int i; // esi
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // ecx
  char v18; // al
  unsigned int v19; // ecx
  _QWORD *v21; // [rsp+20h] [rbp-50h]
  unsigned __int8 v22; // [rsp+30h] [rbp-40h] BYREF
  __int64 v23; // [rsp+38h] [rbp-38h]
  __int64 v24; // [rsp+40h] [rbp-30h]
  __int64 v25; // [rsp+48h] [rbp-28h]
  __int64 v26; // [rsp+50h] [rbp-20h] BYREF
  __int64 v27; // [rsp+58h] [rbp-18h]
  int v28; // [rsp+60h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 512);
  v4 = 0;
  v23 = a1;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0;
  v7 = a1;
  if ( v3 && *(_DWORD *)v3 )
  {
    *(_BYTE *)(a2 + 19) = 0;
    *(_QWORD *)(a2 + 24) = AcpiCStateIdlePrepare;
    v8 = 1;
    *(_QWORD *)(a2 + 112) = 0LL;
    *(_QWORD *)(a2 + 80) = AcpiCStateIdleExecute;
    *(_QWORD *)(a2 + 88) = AcpiCStateIdleCancel;
    *(_QWORD *)(a2 + 32) = AcpiCStateIdleCancel;
    *(_QWORD *)(a2 + 96) = AcpiCStateIsHalted;
    *(_QWORD *)(a2 + 104) = AcpiCStateIsHalted;
    *(_BYTE *)(a2 + 16) = 0;
    *(_DWORD *)(a3 + 56) = 0;
    v22 = 0;
    if ( *(_BYTE *)(v3 + 16) != 1 )
    {
      LOBYTE(v26) = 127;
      BYTE4(v27) = 1;
      HIWORD(v27) = 0;
      v28 = 0;
      DecodeAcpi2CState(a1, (unsigned int)&v26, 0, (unsigned int)&v22, a3 + 64);
      v8 = 2;
      *(_DWORD *)(a2 + 120) = *(_DWORD *)(a2 + 120) & 0x7FFFFF80 | (v22 << 31) | 0xF;
      *(_DWORD *)(a2 + 116) = 1;
      *(_DWORD *)(a3 + 56) = 1;
    }
    v9 = *(_DWORD *)v3;
    for ( i = 0; i < *(_DWORD *)v3; ++v8 )
    {
      if ( v8 > 3u )
        break;
      v11 = *(unsigned __int8 *)(v3 + 20LL * i + 16);
      if ( v11 > 3 )
        v11 = 3;
      if ( v11 == v8 )
      {
        v12 = i + 1;
        if ( (unsigned int)v12 < v9 )
        {
          do
          {
            v13 = *(unsigned __int8 *)(v3 + 20 * v12 + 16);
            if ( v13 > 3 )
              v13 = 3;
            if ( v13 != v8 )
              break;
            if ( *(_DWORD *)(v3 + 20 * v12 + 20) >= *(_DWORD *)(v3 + 20 * (i + 1LL)) )
              break;
            ++i;
            v12 = (unsigned int)(v12 + 1);
          }
          while ( (unsigned int)v12 < v9 );
          v7 = v23;
        }
        v14 = 88LL * *(unsigned int *)(a2 + 116);
        v24 = 32LL * *(unsigned int *)(a2 + 116);
        v21 = (_QWORD *)(v14 + a3 + 64);
        *v21 = v3 + 4 * (i + 4LL * i + 1);
        v25 = v3 + 4 * (i + 4LL * i + 1);
        if ( (int)DecodeAcpi2CState(v7, (unsigned int)v3 + 4 * (i + 4 * i + 1), 0, (unsigned int)&v22, (__int64)v21) < 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v7 + 1096), 8u);
        }
        else
        {
          v15 = v24;
          v16 = v25;
          v17 = *(_DWORD *)(v24 + a2 + 120) ^ (*(_DWORD *)(v24 + a2 + 120) ^ (8 * v8)) & 0x78 | 7;
          *(_DWORD *)(v24 + a2 + 120) = v17;
          *(_DWORD *)(v15 + a2 + 120) = v17 & 0x7FFFFFFF | (v22 << 31);
          *(_DWORD *)(v15 + a2 + 124) = 10 * *(unsigned __int16 *)(v16 + 14);
          *(_DWORD *)(v15 + a2 + 132) = *(_DWORD *)(v16 + 16);
          ++*(_DWORD *)(a2 + 116);
          ++*(_DWORD *)(a3 + 56);
        }
      }
      else
      {
        --i;
      }
      v9 = *(_DWORD *)v3;
      ++i;
    }
    v18 = *(_BYTE *)(a3 + 56);
    v19 = 0;
    *(_BYTE *)(a3 + 20) = v18;
    if ( v18 )
    {
      do
      {
        *(_BYTE *)(v19 + a3 + 21) = v19;
        ++v19;
      }
      while ( v19 < *(unsigned __int8 *)(a3 + 20) );
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
