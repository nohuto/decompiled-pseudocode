/*
 * XREFs of PpmParkComputeUnparkMask @ 0x1401BECE4
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x14011F5C0 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x140301178 (PpmHeteroRestrictToFavoredClass.c)
 *     PpmEventParkNodePreference @ 0x1403028A0 (PpmEventParkNodePreference.c)
 */

__int64 __fastcall PpmParkComputeUnparkMask(
        unsigned __int16 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10,
        _DWORD *a11)
{
  __int64 result; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 (__fastcall *v17)(_QWORD, __int64, _QWORD, _QWORD *, _DWORD *, _QWORD *, _QWORD *, _QWORD *); // r15
  __int64 v18; // rdx
  __int16 v19; // ax
  unsigned __int16 v20; // ax
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // r8d
  __int64 v24; // r12
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // rbx
  __int64 v29; // r14
  __int64 v30; // rbx
  __int64 v31; // rcx
  unsigned __int64 v32; // r12
  __int64 v33; // rax
  unsigned __int64 v34; // rcx
  __int64 Prcb; // rax
  __int64 v36; // r8
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  unsigned int v39; // r9d
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rcx
  unsigned int v44; // [rsp+58h] [rbp-A8h]
  void (__fastcall *v45)(_QWORD, __int64, _QWORD, _QWORD *, _DWORD *, _QWORD *, _QWORD *, _QWORD *); // [rsp+60h] [rbp-A0h]
  __int64 v46; // [rsp+60h] [rbp-A0h]
  __int64 v47; // [rsp+68h] [rbp-98h]
  __int64 v49; // [rsp+78h] [rbp-88h]
  __int64 v50; // [rsp+80h] [rbp-80h]
  _QWORD v51[22]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v52[22]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v53[22]; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v54[22]; // [rsp+2A0h] [rbp+1A0h] BYREF
  _DWORD v55[44]; // [rsp+350h] [rbp+250h] BYREF

  memset(v55, 0, 0xA8uLL);
  memset(v51, 0, 0xA8uLL);
  memset(v53, 0, 0xA8uLL);
  memset(v52, 0, 0xA8uLL);
  result = (__int64)memset(v54, 0, 0xA8uLL);
  *a9 = 0LL;
  *a10 = 0LL;
  if ( !a6 )
  {
    *a9 = a2;
    return result;
  }
  v15 = a2 - ((a2 >> 1) & 0x5555555555555555LL);
  result = (0x101010101010101LL
          * (((v15 & 0x3333333333333333LL)
            + ((v15 >> 2) & 0x3333333333333333LL)
            + (((v15 & 0x3333333333333333LL) + ((v15 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( a6 == (_DWORD)result && !a5 )
  {
    *a10 = a2;
    return result;
  }
  v16 = (v15 & 0x3333333333333333LL) + (((a2 - ((a2 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
  result = (0x101010101010101LL * ((v16 + (v16 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( a5 != (_DWORD)result )
  {
    if ( a5
      && (v45 = (void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD *, _DWORD *, _QWORD *, _QWORD *, _QWORD *))PpmParkPreferenceHandler) != 0LL )
    {
      LODWORD(v52[0]) = 1310721;
      memset((char *)v52 + 4, 0, 0xA4uLL);
      v55[0] = 1310721;
      memset(&v55[1], 0, 0xA4uLL);
      LODWORD(v51[0]) = 1310721;
      memset((char *)v51 + 4, 0, 0xA4uLL);
      LODWORD(v53[0]) = 1310721;
      memset((char *)v53 + 4, 0, 0xA4uLL);
      LODWORD(v54[0]) = 1310721;
      memset((char *)v54 + 4, 0, 0xA4uLL);
      v19 = 1;
      if ( a1 )
        v19 = a1 + 1;
      LOWORD(v52[0]) = v19;
      v20 = v51[0];
      v52[a1 + 1] |= a2;
      if ( v20 <= a1 )
        v20 = a1 + 1;
      LOWORD(v51[0]) = v20;
      v51[a1 + 1] |= a7;
      v21 = v51[a1 + 1];
      if ( LOWORD(v51[0]) <= a1 )
      {
        LOWORD(v51[0]) = a1 + 1;
        v21 = v51[a1 + 1];
      }
      v22 = PpmCheckTime;
      v51[a1 + 1] = a8 | v21;
      v45(0LL, v22, a5, v52, v55, v51, v53, v54);
      if ( a1 >= LOWORD(v53[0]) )
        v24 = 0LL;
      else
        v24 = v53[a1 + 1];
      if ( a1 >= LOWORD(v54[0]) )
        v25 = 0LL;
      else
        v25 = v54[a1 + 1];
      LOBYTE(v23) = a5;
      PpmEventParkNodePreference(a1, a2, v23, a7, a8, v24, v25);
      v26 = ~(a8 | a7);
      v27 = v26 & v24;
      v28 = v26 & v25;
    }
    else
    {
      v27 = 0LL;
      v28 = 0LL;
    }
    v46 = v28;
    v49 = v27;
    *a9 = a2;
    v29 = a2 & ~(a8 | a7 | v27 | v28);
    if ( (a2 & a8) != 0 )
    {
      *a11 |= 0x200u;
    }
    else
    {
      if ( (a2 & v28) == 0 )
      {
        if ( (a2 & ~(a8 | a7 | v27 | v28)) != 0 )
        {
          *a11 |= 0x800u;
          v30 = v29 & *a9;
        }
        else
        {
          v30 = v27 & a2;
          if ( (v27 & a2) != 0 )
            *a11 |= 0x80000u;
          else
            v30 = 0LL;
        }
        goto LABEL_38;
      }
      *a11 |= 0x400u;
    }
    v30 = a8 & *a9;
LABEL_38:
    v31 = a3;
    v32 = v30;
    v47 = v30;
    result = a4 & (a2 ^ a3);
    v44 = 0;
    v50 = result;
    while ( 1 )
    {
      if ( !v32 )
        return result;
      if ( ((PopHeteroSystem - 3) & 0xFFFFFFFD) == 0 )
      {
        *a11 |= 0x8000u;
        v33 = PpmHeteroRestrictToFavoredClass(v32, a1);
        v31 = a3;
        v32 = v33;
      }
      if ( (v32 & v50) != 0 )
      {
        *a11 |= 0x1000u;
        v32 &= v50;
      }
      if ( (v32 & ~v31) != 0 )
      {
        *a11 |= 0x2000u;
        v32 &= ~v31;
      }
      _BitScanForward64(&v34, v32);
      Prcb = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * a1 + (v34 & 0x3F)]);
      v36 = Prcb;
      if ( PpmParkCoreMask )
        v37 = *(_QWORD *)(Prcb + 24920);
      else
        v37 = *(_QWORD *)(Prcb + 200);
      *a9 &= ~v37;
      if ( v44 >= a5 )
        *a10 |= v37;
      v38 = ((v37 - ((v37 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
          + (((v37 - ((v37 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
      v39 = ((unsigned int)((0x101010101010101LL * ((v38 + (v38 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24) + v44;
      v44 = v39;
      v32 &= ~*(_QWORD *)(*(_QWORD *)(Prcb + 192) + 136LL);
      v40 = ~*(_QWORD *)(Prcb + 8LL * *(unsigned __int8 *)(Prcb + 208) + 24728) & v47;
      result = ~*(_QWORD *)(Prcb + 24920);
      v30 &= result;
      v47 &= ~*(_QWORD *)(v36 + 8LL * *(unsigned __int8 *)(v36 + 208) + 24728);
      if ( !v32 )
        break;
LABEL_66:
      v31 = a3;
      if ( v39 >= a6 )
        return result;
    }
    if ( v40 )
    {
LABEL_65:
      v32 = v40;
      goto LABEL_66;
    }
    if ( !v30 )
    {
      v41 = *a9;
      if ( (*a9 & a8) != 0 )
      {
        *a11 |= 0x200u;
      }
      else
      {
        if ( (v41 & v46) == 0 )
        {
          if ( (v41 & v29) != 0 )
          {
            *a11 |= 0x800u;
            v30 = v29 & *a9;
          }
          else if ( (v41 & v49) != 0 )
          {
            *a11 |= 0x80000u;
            v30 = v49 & *a9;
          }
          else
          {
            v30 = 0LL;
          }
          goto LABEL_64;
        }
        *a11 |= 0x400u;
      }
      v30 = a8 & *a9;
    }
LABEL_64:
    v40 = v30;
    v47 = v30;
    goto LABEL_65;
  }
  v17 = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD *, _DWORD *, _QWORD *, _QWORD *, _QWORD *))PpmParkPreferenceHandler;
  if ( PpmParkPreferenceHandler && a3 )
  {
    LODWORD(v52[0]) = 1310721;
    memset((char *)v52 + 4, 0, 0xA4uLL);
    v55[0] = 1310721;
    memset(&v55[1], 0, 0xA4uLL);
    LODWORD(v51[0]) = 1310721;
    memset((char *)v51 + 4, 0, 0xA4uLL);
    LODWORD(v53[0]) = 1310721;
    memset((char *)v53 + 4, 0, 0xA4uLL);
    LODWORD(v54[0]) = 1310721;
    memset((char *)v54 + 4, 0, 0xA4uLL);
    if ( a1 )
      LOWORD(v52[0]) = a1 + 1;
    v18 = PpmCheckTime;
    v52[a1 + 1] |= a2;
    return v17(0LL, v18, a5, v52, v55, v51, v53, v54);
  }
  return result;
}
