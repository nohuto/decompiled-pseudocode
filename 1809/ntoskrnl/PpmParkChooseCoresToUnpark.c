/*
 * XREFs of PpmParkChooseCoresToUnpark @ 0x1402E7980
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x140122380 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x1402E453C (PpmHeteroRestrictToFavoredClass.c)
 *     PpmEventParkNodePreference @ 0x1402E5E04 (PpmEventParkNodePreference.c)
 */

char __fastcall PpmParkChooseCoresToUnpark(
        ULONG a1,
        unsigned __int16 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int64 *a8,
        int a9,
        _DWORD *a10)
{
  __int64 v10; // r15
  char result; // al
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rdi
  __int64 Prcb; // rax
  __int16 v18; // ax
  __int64 v19; // rdx
  unsigned __int16 v20; // ax
  __int64 v21; // r9
  void (__fastcall *v22)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rsi
  unsigned int v29; // r8d
  unsigned __int64 v30; // r15
  bool i; // zf
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // r10
  __int64 v38; // r11
  ULONG v39; // r8d
  unsigned int v40; // ecx
  unsigned __int64 v41; // r9
  ULONG v42; // eax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  int v45; // eax
  unsigned __int64 v46; // rdx
  void (__fastcall *v47)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r11
  unsigned __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // r8
  unsigned __int64 v52; // rcx
  __int64 v53; // r8
  ULONG v54; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v55; // [rsp+58h] [rbp-A8h]
  ULONG v56; // [rsp+60h] [rbp-A0h]
  __int64 v57; // [rsp+68h] [rbp-98h]
  int v58; // [rsp+70h] [rbp-90h]
  unsigned __int64 *v59; // [rsp+78h] [rbp-88h]
  unsigned __int16 *v60; // [rsp+80h] [rbp-80h] BYREF
  __int64 v61; // [rsp+88h] [rbp-78h]
  unsigned __int16 v62; // [rsp+90h] [rbp-70h]
  __int64 v63; // [rsp+98h] [rbp-68h]
  unsigned __int64 v64; // [rsp+A0h] [rbp-60h]
  _DWORD v65[44]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v66[44]; // [rsp+160h] [rbp+60h] BYREF
  _DWORD v67[44]; // [rsp+210h] [rbp+110h] BYREF
  _DWORD v68[44]; // [rsp+2C0h] [rbp+1C0h] BYREF
  _DWORD v69[44]; // [rsp+370h] [rbp+270h] BYREF

  v10 = 0LL;
  v56 = a1;
  v59 = a8;
  if ( a1 )
  {
    v15 = a3 & a4;
    v64 = v15;
    if ( (unsigned int)((0x101010101010101LL
                       * ((((a3 - ((a3 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((a3 - ((a3 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((a3 - ((a3 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((a3 - ((a3 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 != a1
      || v15 )
    {
      v63 = a5 & (a3 ^ v15);
      if ( (unsigned __int8)PpmParkGranularity <= 1u )
      {
        v16 = a6 | a5 & v15;
      }
      else
      {
        v16 = 0LL;
        v62 = a2;
        v61 = a6 | a5 & v15;
        v60 = 0LL;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v54, &v60) )
          v16 |= *(_QWORD *)(KeGetPrcb(v54) + 24920);
        v61 = a7;
        v62 = a2;
        v60 = 0LL;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v54, &v60) )
          KeGetPrcb(v54);
      }
      if ( !KiClockTimerPerCpu )
      {
        Prcb = KeGetPrcb(KiClockTimerOwner);
        if ( *(unsigned __int8 *)(Prcb + 208) == a2 && (a3 & *(_QWORD *)(Prcb + 200)) != 0 )
        {
          *a10 |= 0x100u;
          if ( (unsigned __int8)PpmParkGranularity <= 1u )
            v16 |= *(_QWORD *)(Prcb + 200);
          else
            v16 |= *(_QWORD *)(Prcb + 24920);
        }
      }
      v55 = (unsigned __int64)PpmParkPreferenceHandler;
      if ( PpmParkPreferenceHandler )
      {
        v66[0] = 1310721;
        memset(&v66[1], 0, 0xA4uLL);
        v69[0] = 1310721;
        memset(&v69[1], 0, 0xA4uLL);
        v65[0] = 1310721;
        memset(&v65[1], 0, 0xA4uLL);
        v67[0] = 1310721;
        memset(&v67[1], 0, 0xA4uLL);
        v68[0] = 1310721;
        memset(&v68[1], 0, 0xA4uLL);
        v18 = 1;
        v19 = PpmCheckTime;
        if ( a2 )
          v18 = a2 + 1;
        LOWORD(v66[0]) = v18;
        v20 = v65[0];
        *(_QWORD *)&v66[2 * a2 + 2] |= a3;
        if ( v20 <= a2 )
          v20 = a2 + 1;
        if ( v20 <= a2 )
          v20 = a2 + 1;
        LOWORD(v65[0]) = v20;
        *(_QWORD *)&v65[2 * a2 + 2] |= v16;
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, _DWORD *, _DWORD *, _DWORD *, _DWORD *, _DWORD *))v55)(
          0LL,
          v19,
          a1,
          v66,
          v69,
          v65,
          v67,
          v68);
        if ( a2 >= LOWORD(v67[0]) )
          v22 = 0LL;
        else
          v22 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))&v67[2 * a2 + 2];
        v55 = (unsigned __int64)v22;
        if ( a2 >= LOWORD(v68[0]) )
          v10 = 0LL;
        else
          v10 = *(_QWORD *)&v68[2 * a2 + 2];
        v57 = v10;
        PpmEventParkNodePreference(a2, a3, a1, v21, v16, (char)v22, v10);
        v23 = v55;
      }
      else
      {
        v23 = 0LL;
        v57 = 0LL;
      }
      v24 = v23 | v10;
      v25 = a3 | *a8;
      v26 = a3 & ~v24;
      *a8 = v25;
      v27 = v25 & (v16 | v10);
      if ( !v27 )
      {
        v27 = v26 & v25;
        if ( (v26 & v25) == 0 )
          v27 = v25;
      }
      v55 = v27;
      v54 = v56;
      v28 = v27;
      v29 = v56;
      v30 = (0x101010101010101LL
           * ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v16 - ((v16 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v16 - ((v16 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      for ( i = v56 == 0; !i && v29 > (unsigned int)v30; i = v29 == 0 )
      {
        if ( (v16 & v28) != 0 )
        {
          *a10 |= 0x200u;
          v28 &= v16;
        }
        v32 = v57 & v28;
        if ( (v57 & v28) != 0 )
        {
          *a10 |= 0x400u;
          v28 = v32;
        }
        if ( (v26 & v28) != 0 )
        {
          *a10 |= 0x800u;
          v28 &= v26;
        }
        if ( ((PopHeteroSystem - 3) & 0xFFFFFFFD) == 0 )
        {
          *a10 |= 0x8000u;
          v28 = PpmHeteroRestrictToFavoredClass(v28, a2);
        }
        v33 = v63 & v28;
        if ( (v63 & v28) != 0 )
        {
          *a10 |= 0x1000u;
          v28 = v33;
        }
        v34 = v28 & ~v64;
        if ( v34 )
        {
          *a10 |= 0x2000u;
          v28 = v34;
        }
        _BitScanForward64(&v35, v28);
        v36 = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * a2 + (v35 & 0x3F)]);
        v37 = v36;
        if ( PpmParkCoreMask )
          v38 = *(_QWORD *)(v36 + 24920);
        else
          v38 = *(_QWORD *)(v36 + 200);
        v39 = v54;
        v40 = (unsigned __int8)PpmParkGranularity;
        v41 = *v59 & ~v38;
        *v59 = v41;
        v42 = v39 - v40;
        if ( v39 < v40 )
          v42 = v39;
        v29 = v42;
        v54 = v42;
        v43 = (((v16 & v38) - (((v16 & v38) >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
            + ((((v16 & v38) - (((v16 & v38) >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
        v44 = (0x101010101010101LL * ((v43 + (v43 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        v45 = v30 - v44;
        if ( !(_DWORD)v44 )
          v45 = v30;
        v46 = v16 & ~v38;
        v58 = v45;
        if ( !(_DWORD)v44 )
          v46 = v16;
        v16 = v46;
        v28 &= ~*(_QWORD *)(*(_QWORD *)(v37 + 192) + 136LL);
        v47 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(~*(_QWORD *)(v37 + 8LL * *(unsigned __int8 *)(v37 + 208) + 24728) & v55);
        v27 &= ~*(_QWORD *)(v37 + 24920);
        v55 = (unsigned __int64)v47;
        if ( !v28 )
        {
          if ( !v47 )
          {
            if ( !v27 )
            {
              v27 = v41 & (v57 | v46);
              if ( !v27 )
              {
                v27 = v26 & v41;
                if ( (v26 & v41) == 0 )
                  v27 = v41;
              }
            }
            v47 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v27;
            v55 = v27;
          }
          v28 = (unsigned __int64)v47;
        }
        LODWORD(v30) = v58;
      }
      while ( !(a9 ? v29 == 0 : (_DWORD)v30 == 0) )
      {
        *a10 |= 0x4000u;
        _BitScanForward64(&v49, v16);
        v50 = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * a2 + (v49 & 0x3F)]);
        if ( PpmParkCoreMask )
          v51 = *(_QWORD *)(v50 + 24920);
        else
          v51 = *(_QWORD *)(v50 + 200);
        v52 = v16 & v51;
        v53 = ~v51;
        v16 &= v53;
        *v59 &= v53;
        v29 = v54 - (unsigned __int8)PpmParkGranularity;
        v54 = v29;
        LODWORD(v30) = v30
                     - ((unsigned int)((0x101010101010101LL
                                      * ((((v52 - ((v52 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                        + (((v52 - ((v52 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                        + ((((v52 - ((v52 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                          + (((v52 - ((v52 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24);
      }
      return v56;
    }
    else
    {
      result = a1;
      *a8 &= ~a3;
    }
  }
  else
  {
    *a8 |= a3;
    return 0;
  }
  return result;
}
