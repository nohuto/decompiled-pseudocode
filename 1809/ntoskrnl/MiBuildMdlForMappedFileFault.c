/*
 * XREFs of MiBuildMdlForMappedFileFault @ 0x14002ADD0
 * Callers:
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiGetHardFaultPages @ 0x140029BE0 (MiGetHardFaultPages.c)
 *     MiAdvanceFaultList @ 0x14002B6E0 (MiAdvanceFaultList.c)
 *     RtlFindNextForwardRunClearCapped @ 0x14002B750 (RtlFindNextForwardRunClearCapped.c)
 *     MiProtectionToCacheAttribute @ 0x14002BD80 (MiProtectionToCacheAttribute.c)
 *     RtlSetAllBits @ 0x14002BDF0 (RtlSetAllBits.c)
 *     MiSetPfnBlink @ 0x140065CA0 (MiSetPfnBlink.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 *     MiChangePageAttribute @ 0x1400EF9A0 (MiChangePageAttribute.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     MiReduceMappedFileReadAhead @ 0x140127608 (MiReduceMappedFileReadAhead.c)
 *     MiReduceMappedFileReadBehind @ 0x140132688 (MiReduceMappedFileReadBehind.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MiBuildMdlForMappedFileFault(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        _QWORD *a9,
        __int64 a10)
{
  unsigned __int64 v10; // rdi
  __int64 v11; // r13
  unsigned int v14; // r14d
  unsigned __int64 v15; // r9
  __int64 v16; // rcx
  unsigned __int64 v17; // r15
  __int64 v18; // rbx
  __int64 v19; // rsi
  unsigned __int64 v20; // rax
  __int64 v21; // r12
  unsigned int v22; // r14d
  unsigned __int64 v23; // rax
  __int64 *v24; // r13
  ULONG NextForwardRunClearCapped; // eax
  __int64 v26; // r15
  ULONG v27; // edx
  unsigned __int64 v28; // r14
  ULONG v29; // ecx
  unsigned __int64 v30; // r10
  unsigned __int64 v31; // r8
  __int64 v32; // r11
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // r9
  BOOL v37; // r12d
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // r15
  char v41; // al
  char v42; // cl
  int v43; // eax
  int v44; // edx
  unsigned __int64 v45; // rax
  char v46; // dl
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v50; // rdx
  ULONG v51; // r15d
  unsigned __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // r8
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  unsigned __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  ULONG v65; // [rsp+40h] [rbp-C0h]
  __int64 v67; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v68; // [rsp+60h] [rbp-A0h]
  ULONG StartingIndex; // [rsp+68h] [rbp-98h] BYREF
  __int64 v70; // [rsp+70h] [rbp-90h]
  __int64 v71; // [rsp+78h] [rbp-88h]
  int v72; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v73; // [rsp+84h] [rbp-7Ch]
  _QWORD *v74; // [rsp+88h] [rbp-78h]
  unsigned __int64 v75; // [rsp+90h] [rbp-70h]
  unsigned __int64 v76; // [rsp+98h] [rbp-68h] BYREF
  __int64 v77; // [rsp+A0h] [rbp-60h]
  __int64 v78; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v79; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v80; // [rsp+B8h] [rbp-48h]
  _RTL_BITMAP BitMapHeader; // [rsp+C0h] [rbp-40h] BYREF
  char v82; // [rsp+D0h] [rbp-30h] BYREF

  v10 = *(_QWORD *)(a1 + 168);
  v11 = a4;
  v70 = a8;
  v74 = a9;
  v78 = *(_QWORD *)(a1 + 232);
  BitMapHeader.Buffer = (unsigned int *)&v82;
  v71 = a4;
  v75 = a2;
  v80 = v10;
  BitMapHeader.SizeOfBitMap = 512;
  RtlSetAllBits(&BitMapHeader);
  v14 = 0;
  v77 = 0LL;
  v15 = a2;
  if ( a2 <= a3 )
  {
    do
    {
      v16 = *(_QWORD *)v15;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL
        && v15 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v16 & 1) != 0
        && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
      {
        v52 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v52 )
        {
          v53 = *(_QWORD *)(v52 + 8 * ((v15 >> 3) & 0x1FF));
          v54 = v16 | 0x20;
          if ( (v53 & 0x20) == 0 )
            v54 = *(_QWORD *)v15;
          v16 = v54;
          if ( (v53 & 0x42) != 0 )
            v16 = v54 | 0x42;
        }
      }
      if ( v16 == v10 )
      {
        _bittestandreset((signed __int32 *)BitMapHeader.Buffer, ((unsigned int)v15 >> 3) & 0x1FF);
        ++v14;
      }
      v15 += 8LL;
    }
    while ( v15 <= a3 );
    v11 = v71;
  }
  v17 = v14;
  if ( v14 > (unsigned __int64)a5 )
    v17 = a5;
  v18 = 1LL;
  if ( a6 == -1 )
  {
    v19 = 0LL;
    v18 = 0LL;
  }
  else
  {
    v19 = 48 * a6 - 0x58000000000LL;
    MiSetPfnBlink(v19, 0xFFFFFFFFFLL, 0LL);
  }
  v68 = v18;
  v67 = v19;
  if ( v18 != v17 )
  {
    v20 = v10;
    if ( (v10 & 0x400) == 0 )
    {
      if ( qword_14043B180 && (v10 & 0x10) == 0 )
        v20 = v10 & ~qword_14043B180;
      v77 = 48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v20 = *(_QWORD *)(v77 + 16);
    }
    MiGetHardFaultPages((unsigned __int64 *)&v67, v17, v11, v70, v74, a1, v20, a10);
    v18 = v68;
    v19 = v67;
  }
  v21 = v70;
  if ( v18 != v14 )
  {
    if ( v70 )
      *(_BYTE *)(v70 + 1) = 2;
    if ( !v18 )
      return 0LL;
    v51 = ((unsigned int)v78 >> 3) & 0x1FF;
    if ( v18 != v14 - (unsigned int)MiReduceMappedFileReadBehind(&BitMapHeader, v51) )
      MiReduceMappedFileReadAhead(&BitMapHeader, v51);
  }
  LODWORD(v74) = v18;
  v73 = MiProtectionToCacheAttribute(a7);
  v22 = 0;
  v23 = a1;
  v24 = (__int64 *)(a1 + 320);
  if ( !BitMapHeader.SizeOfBitMap )
    goto LABEL_55;
  v75 &= 0xFFFFFFFFFFFFF000uLL;
  do
  {
    NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(&BitMapHeader, v22, 0xFFFFFFFFLL, &StartingIndex);
    v26 = StartingIndex;
    v27 = NextForwardRunClearCapped;
    v65 = NextForwardRunClearCapped;
    if ( v22 )
    {
      if ( StartingIndex != v22 )
      {
        v50 = StartingIndex - v22;
        do
        {
          *v24++ = qword_14043BE98;
          --v50;
        }
        while ( v50 );
        v27 = NextForwardRunClearCapped;
      }
      *(_DWORD *)(a1 + 192) |= 0x20000u;
    }
    v28 = v75 + 8 * v26;
    RtlSetBits(&BitMapHeader, v26, v27);
    v29 = v65;
    if ( v65 )
    {
      v30 = v10 & 0x400;
      v79 = a1 + 32;
      v31 = v28;
      v32 = v65;
      v71 = v65;
      v33 = 0xFFFFFFFFFLL;
      while ( 1 )
      {
        v34 = v33 & *(_QWORD *)(v19 + 24);
        if ( v34 == v33 )
          v67 = 0LL;
        else
          v67 = 48 * v34 - 0x58000000000LL;
        v68 = v18 - 1;
        v35 = (v19 + 0x58000000000LL) / 48;
        *v24++ = v35;
        v36 = *(_QWORD *)v28;
        if ( v31 >= 0xFFFFF6FB7DBED000uLL
          && v31 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v36 & 1) != 0
          && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
        {
          v55 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v55 )
          {
            v56 = *(_QWORD *)(v55 + 8 * ((v28 >> 3) & 0x1FF));
            v57 = v36 | 0x20;
            if ( (v56 & 0x20) == 0 )
              v57 = *(_QWORD *)v28;
            v36 = v57;
            if ( (v56 & 0x42) != 0 )
              v36 = v57 | 0x42;
          }
        }
        if ( !v30 )
          v36 = *(_QWORD *)(v77 + 16);
        *(_QWORD *)(v19 + 16) = v36;
        if ( v21 )
        {
          MiAdvanceFaultList(v21);
          v30 = v10 & 0x400;
        }
        v37 = v28 == v78;
        v38 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v39 = *(_QWORD *)v38;
        if ( v38 >= 0xFFFFF6FB7DBED000uLL
          && v38 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v39 & 1) != 0
          && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
        {
          v58 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v58 )
          {
            v59 = *(_QWORD *)(v58 + 8 * ((v38 >> 3) & 0x1FF));
            v60 = v39 | 0x20;
            if ( (v59 & 0x20) == 0 )
              v60 = v39;
            v39 = v60;
            if ( (v59 & 0x42) != 0 )
              v39 = v60 | 0x42;
          }
        }
        v76 = v39;
        if ( (unsigned __int64)&v76 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v76 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v39 & 1) != 0
          && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
        {
          v61 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v61 )
          {
            v62 = *(_QWORD *)(v61 + 8 * (((unsigned __int64)&v76 >> 3) & 0x1FF));
            v63 = v39 | 0x20;
            if ( (v62 & 0x20) == 0 )
              v63 = v39;
            v39 = v63;
            if ( (v62 & 0x42) != 0 )
              v39 = v63 | 0x42;
          }
        }
        v40 = v39 >> 12;
        v72 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v72);
            while ( *(__int64 *)(v19 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) );
          v30 = v10 & 0x400;
          v32 = v71;
        }
        *(_QWORD *)(v19 + 24) &= 0xFFFFFFF000000000uLL;
        *(_QWORD *)(v19 + 40) |= 0x200000000000000uLL;
        v41 = *(_BYTE *)(v19 + 34) | 0x20;
        *(_WORD *)(v19 + 32) = 1;
        *(_BYTE *)(v19 + 34) = v41;
        *(_QWORD *)v19 = v79;
        v42 = *(_BYTE *)(v19 + 35) & 0xF8;
        v43 = *(_DWORD *)(a1 + 192) >> 9;
        v44 = *(_DWORD *)(a1 + 192) >> 12;
        *(_QWORD *)(v19 + 8) = v28;
        if ( v37 )
          LOBYTE(v44) = v43;
        v45 = v40 ^ *(_QWORD *)(v19 + 40);
        v46 = v42 | v44 & 7;
        v47 = v73;
        *(_BYTE *)(v19 + 35) = v46;
        v33 = 0xFFFFFFFFFLL;
        *(_QWORD *)(v19 + 40) ^= v45 & 0xFFFFFFFFFLL;
        *(_BYTE *)(v19 + 34) = *(_BYTE *)(v19 + 34) & 0xF8 | 2;
        if ( *(unsigned __int8 *)(v19 + 34) >> 6 != (_DWORD)v47 )
        {
          MiChangePageAttribute(v19, (unsigned int)v47, 1LL);
          v30 = v10 & 0x400;
          v33 = 0xFFFFFFFFFLL;
          v32 = v71;
        }
        *(_QWORD *)(v19 + 24) &= 0xC000000000000000uLL;
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v30 )
        {
          v48 = 32 * (a7 & 0x1F | ((v35 & 0xFFFFFFFFFLL) << 7) | 0x40);
          if ( qword_14043B180 )
          {
            if ( (qword_14043B180 & v48) != 0 )
              v48 |= 0x10uLL;
            else
              v48 |= qword_14043B180;
          }
          if ( v28 < 0xFFFFF6FB7DBED000uLL || v28 > 0xFFFFF6FB7DBED7F8uLL )
            goto LABEL_39;
          if ( !(unsigned int)MiPteHasShadow(v47, 0xFFFFFFFFFLL) )
          {
            if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0
              && (v48 & 1) != 0 )
            {
              v48 |= 0x8000000000000000uLL;
            }
LABEL_39:
            *(_QWORD *)v28 = v48;
            goto LABEL_40;
          }
          if ( !HIBYTE(word_14043B26C) && (v48 & 1) != 0 )
            v48 |= 0x8000000000000000uLL;
          *(_QWORD *)v28 = v48;
          MiWritePteShadow(v28);
          v30 = v10 & 0x400;
          v33 = 0xFFFFFFFFFLL;
        }
LABEL_40:
        v18 = v68;
        v28 += 8LL;
        v19 = v67;
        v71 = --v32;
        v31 = v28;
        if ( !v32 )
        {
          LODWORD(v26) = StartingIndex;
          LOWORD(v10) = v80;
          v29 = v65;
          break;
        }
        v21 = v70;
      }
    }
    if ( !v18 )
      break;
    v21 = v70;
    v22 = v29 + v26;
  }
  while ( v29 + (_DWORD)v26 != BitMapHeader.SizeOfBitMap );
  v23 = a1;
LABEL_55:
  *(_DWORD *)(v23 + 184) = (unsigned int)((__int64)((__int64)v24 - v23 - 320) >> 3) << 12;
  return (unsigned int)v74;
}
