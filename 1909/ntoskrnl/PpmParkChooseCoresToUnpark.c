/*
 * XREFs of PpmParkChooseCoresToUnpark @ 0x1402F7D28
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x140120310 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PpmHeteroRestrictToFavoredClass @ 0x140300C28 (PpmHeteroRestrictToFavoredClass.c)
 *     PpmEventParkNodePreference @ 0x140302350 (PpmEventParkNodePreference.c)
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
  __int64 v14; // rsi
  char result; // al
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  __int64 Prcb; // rax
  __int16 v20; // ax
  __int64 v21; // rdx
  unsigned __int16 v22; // ax
  int v23; // r8d
  void (__fastcall *v24)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rsi
  unsigned int v31; // r8d
  unsigned __int64 v32; // r15
  bool i; // zf
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // r10
  __int64 v40; // r11
  ULONG v41; // r8d
  unsigned int v42; // ecx
  unsigned __int64 v43; // r9
  ULONG v44; // eax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  int v47; // eax
  unsigned __int64 v48; // rdx
  void (__fastcall *v49)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // r11
  unsigned __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // r8
  unsigned __int64 v54; // rcx
  __int64 v55; // r8
  ULONG v56; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v57; // [rsp+58h] [rbp-A8h]
  ULONG v58; // [rsp+60h] [rbp-A0h]
  __int64 v59; // [rsp+68h] [rbp-98h]
  int v60; // [rsp+70h] [rbp-90h]
  unsigned __int16 *v61; // [rsp+78h] [rbp-88h] BYREF
  __int64 v62; // [rsp+80h] [rbp-80h]
  __int64 v63; // [rsp+88h] [rbp-78h]
  unsigned __int64 *v64; // [rsp+90h] [rbp-70h]
  __int64 v65; // [rsp+98h] [rbp-68h]
  __int64 v66; // [rsp+A0h] [rbp-60h]
  _QWORD v67[22]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v68[22]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v69[22]; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v70[22]; // [rsp+2C0h] [rbp+1C0h] BYREF
  _DWORD v71[44]; // [rsp+370h] [rbp+270h] BYREF

  v58 = a1;
  v64 = a8;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  memset(v71, 0, 0xA8uLL);
  memset(v67, 0, 0xA8uLL);
  memset(v69, 0, 0xA8uLL);
  memset(v68, 0, 0xA8uLL);
  memset(v70, 0, 0xA8uLL);
  v14 = 0LL;
  if ( a1 )
  {
    v16 = a3 & a4;
    v66 = v16;
    if ( (unsigned int)((0x101010101010101LL
                       * ((((a3 - ((a3 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                         + (((a3 - ((a3 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                         + ((((a3 - ((a3 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                           + (((a3 - ((a3 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 != a1
      || v16 )
    {
      v65 = a5 & (a3 ^ v16);
      v17 = a6 | a5 & v16;
      if ( (unsigned __int8)PpmParkGranularity <= 1u )
      {
        v18 = a6 | a5 & v16;
      }
      else
      {
        v18 = 0LL;
        LOWORD(v63) = a2;
        v62 = v17;
        v61 = 0LL;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v56, &v61) )
          v18 |= *(_QWORD *)(KeGetPrcb(v56) + 24920);
        v62 = a7;
        LOWORD(v63) = a2;
        v61 = 0LL;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v56, &v61) )
          KeGetPrcb(v56);
      }
      if ( !KiClockTimerPerCpu )
      {
        Prcb = KeGetPrcb(KiClockTimerOwner);
        if ( *(unsigned __int8 *)(Prcb + 208) == a2 && (a3 & *(_QWORD *)(Prcb + 200)) != 0 )
        {
          *a10 |= 0x100u;
          if ( (unsigned __int8)PpmParkGranularity <= 1u )
            v18 |= *(_QWORD *)(Prcb + 200);
          else
            v18 |= *(_QWORD *)(Prcb + 24920);
        }
      }
      v57 = (unsigned __int64)PpmParkPreferenceHandler;
      if ( PpmParkPreferenceHandler )
      {
        LODWORD(v68[0]) = 1310721;
        memset((char *)v68 + 4, 0, 0xA4uLL);
        v71[0] = 1310721;
        memset(&v71[1], 0, 0xA4uLL);
        LODWORD(v67[0]) = 1310721;
        memset((char *)v67 + 4, 0, 0xA4uLL);
        LODWORD(v69[0]) = 1310721;
        memset((char *)v69 + 4, 0, 0xA4uLL);
        LODWORD(v70[0]) = 1310721;
        memset((char *)v70 + 4, 0, 0xA4uLL);
        v20 = 1;
        v21 = PpmCheckTime;
        if ( a2 )
          v20 = a2 + 1;
        LOWORD(v68[0]) = v20;
        v22 = v67[0];
        v68[a2 + 1] |= a3;
        if ( v22 <= a2 )
          v22 = a2 + 1;
        if ( v22 <= a2 )
          v22 = a2 + 1;
        LOWORD(v67[0]) = v22;
        v67[a2 + 1] |= v18;
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD *, _DWORD *, _QWORD *, _QWORD *, _QWORD *))v57)(
          0LL,
          v21,
          a1,
          v68,
          v71,
          v67,
          v69,
          v70);
        if ( a2 >= LOWORD(v69[0]) )
          v24 = 0LL;
        else
          v24 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v69[a2 + 1];
        v57 = (unsigned __int64)v24;
        if ( a2 >= LOWORD(v70[0]) )
          v14 = 0LL;
        else
          v14 = v70[a2 + 1];
        LOBYTE(v23) = a1;
        v59 = v14;
        PpmEventParkNodePreference(a2, a3, v23, 0, v18, (char)v24, v14);
        v25 = v57;
      }
      else
      {
        v25 = 0LL;
        v59 = 0LL;
      }
      v26 = v25 | v14;
      v27 = a3 | *a8;
      v28 = a3 & ~v26;
      *a8 = v27;
      v29 = v27 & (v18 | v14);
      if ( !v29 )
      {
        v29 = v28 & v27;
        if ( (v28 & v27) == 0 )
          v29 = v27;
      }
      v57 = v29;
      v56 = v58;
      v30 = v29;
      v31 = v58;
      v32 = (0x101010101010101LL
           * ((((v18 - ((v18 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
             + (((v18 - ((v18 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
             + ((((v18 - ((v18 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
               + (((v18 - ((v18 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
      for ( i = v58 == 0; !i && v31 > (unsigned int)v32; i = v31 == 0 )
      {
        if ( (v18 & v30) != 0 )
        {
          *a10 |= 0x200u;
          v30 &= v18;
        }
        v34 = v59 & v30;
        if ( (v59 & v30) != 0 )
        {
          *a10 |= 0x400u;
          v30 = v34;
        }
        if ( (v28 & v30) != 0 )
        {
          *a10 |= 0x800u;
          v30 &= v28;
        }
        if ( ((PopHeteroSystem - 3) & 0xFFFFFFFD) == 0 )
        {
          *a10 |= 0x8000u;
          v30 = PpmHeteroRestrictToFavoredClass(v30, a2);
        }
        v35 = v65 & v30;
        if ( (v65 & v30) != 0 )
        {
          *a10 |= 0x1000u;
          v30 = v35;
        }
        v36 = v30 & ~v66;
        if ( v36 )
        {
          *a10 |= 0x2000u;
          v30 = v36;
        }
        _BitScanForward64(&v37, v30);
        v38 = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * a2 + (v37 & 0x3F)]);
        v39 = v38;
        if ( PpmParkCoreMask )
          v40 = *(_QWORD *)(v38 + 24920);
        else
          v40 = *(_QWORD *)(v38 + 200);
        v41 = v56;
        v42 = (unsigned __int8)PpmParkGranularity;
        v43 = *v64 & ~v40;
        *v64 = v43;
        v44 = v41 - v42;
        if ( v41 < v42 )
          v44 = v41;
        v31 = v44;
        v56 = v44;
        v45 = (((v18 & v40) - (((v18 & v40) >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
            + ((((v18 & v40) - (((v18 & v40) >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
        v46 = (0x101010101010101LL * ((v45 + (v45 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        v47 = v32 - v46;
        if ( !(_DWORD)v46 )
          v47 = v32;
        v48 = v18 & ~v40;
        v60 = v47;
        if ( !(_DWORD)v46 )
          v48 = v18;
        v18 = v48;
        v30 &= ~*(_QWORD *)(*(_QWORD *)(v39 + 192) + 136LL);
        v49 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(~*(_QWORD *)(v39 + 8LL * *(unsigned __int8 *)(v39 + 208) + 24728) & v57);
        v29 &= ~*(_QWORD *)(v39 + 24920);
        v57 = (unsigned __int64)v49;
        if ( !v30 )
        {
          if ( !v49 )
          {
            if ( !v29 )
            {
              v29 = v43 & (v59 | v48);
              if ( !v29 )
              {
                v29 = v28 & v43;
                if ( (v28 & v43) == 0 )
                  v29 = v43;
              }
            }
            v49 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v29;
            v57 = v29;
          }
          v30 = (unsigned __int64)v49;
        }
        LODWORD(v32) = v60;
      }
      while ( !(a9 ? v31 == 0 : (_DWORD)v32 == 0) )
      {
        *a10 |= 0x4000u;
        _BitScanForward64(&v51, v18);
        v52 = KeGetPrcb(KiProcessorNumberToIndexMappingTable[64 * a2 + (v51 & 0x3F)]);
        if ( PpmParkCoreMask )
          v53 = *(_QWORD *)(v52 + 24920);
        else
          v53 = *(_QWORD *)(v52 + 200);
        v54 = v18 & v53;
        v55 = ~v53;
        v18 &= v55;
        *v64 &= v55;
        v31 = v56 - (unsigned __int8)PpmParkGranularity;
        v56 = v31;
        LODWORD(v32) = v32
                     - ((unsigned int)((0x101010101010101LL
                                      * ((((v54 - ((v54 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                        + (((v54 - ((v54 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                        + ((((v54 - ((v54 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                          + (((v54 - ((v54 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24);
      }
      return v58;
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
