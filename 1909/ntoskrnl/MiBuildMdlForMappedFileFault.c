/*
 * XREFs of MiBuildMdlForMappedFileFault @ 0x14002E2E0
 * Callers:
 *     MiResolveMappedFileFault @ 0x1400931C0 (MiResolveMappedFileFault.c)
 * Callees:
 *     RtlSetBits @ 0x1400076F0 (RtlSetBits.c)
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     MiInitializeHardFaultPfn @ 0x14002E940 (MiInitializeHardFaultPfn.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiProtectionToCacheAttribute @ 0x14009739C (MiProtectionToCacheAttribute.c)
 *     MiSetPfnBlink @ 0x1400BB420 (MiSetPfnBlink.c)
 *     MiGetHardFaultPages @ 0x1400BD844 (MiGetHardFaultPages.c)
 *     RtlSetAllBits @ 0x1400D7250 (RtlSetAllBits.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     MiAdvanceFaultList @ 0x140124668 (MiAdvanceFaultList.c)
 *     MiReduceMappedFileReadAhead @ 0x140129808 (MiReduceMappedFileReadAhead.c)
 *     MiReduceMappedFileReadBehind @ 0x140132E50 (MiReduceMappedFileReadBehind.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

__int64 __fastcall MiBuildMdlForMappedFileFault(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10)
{
  __int64 v10; // rdi
  unsigned int v14; // esi
  unsigned __int64 i; // r9
  __int64 v16; // rdx
  unsigned __int64 v17; // r9
  __int64 v18; // r14
  unsigned __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rbx
  unsigned int v22; // r13d
  int v23; // eax
  unsigned int SizeOfBitMap; // r9d
  _QWORD *v25; // rbx
  unsigned int v26; // r11d
  unsigned __int64 v27; // rdx
  unsigned int v28; // r14d
  unsigned int *v29; // r8
  unsigned int *v30; // rax
  ULONG v31; // esi
  int v32; // r9d
  unsigned int *v33; // rax
  unsigned int v34; // ecx
  unsigned __int64 v35; // r15
  int v36; // r14d
  __int16 v37; // r12
  int v38; // r12d
  __int64 v39; // r13
  __int64 v40; // r11
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // r8
  __int64 v44; // r11
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 result; // rax
  __int64 v52; // rcx
  __int64 v53; // r14
  ULONG v54; // ebx
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v56; // rax
  __int64 v57; // r8
  unsigned __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  int v61; // [rsp+40h] [rbp-C0h]
  unsigned int v62; // [rsp+44h] [rbp-BCh]
  __int64 v63; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+50h] [rbp-B0h]
  _QWORD *v65; // [rsp+58h] [rbp-A8h]
  BOOL v66; // [rsp+60h] [rbp-A0h]
  __int64 v67; // [rsp+68h] [rbp-98h]
  unsigned __int64 v68; // [rsp+70h] [rbp-90h]
  int v69; // [rsp+78h] [rbp-88h]
  __int64 v70; // [rsp+80h] [rbp-80h]
  __int64 v71; // [rsp+88h] [rbp-78h]
  __int64 v72; // [rsp+90h] [rbp-70h]
  __int64 v73; // [rsp+98h] [rbp-68h]
  __int64 v74; // [rsp+A0h] [rbp-60h]
  _RTL_BITMAP BitMapHeader; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v76[4]; // [rsp+C0h] [rbp-40h] BYREF

  v10 = *(_QWORD *)(a1 + 168);
  v71 = a8;
  v70 = a9;
  v14 = 0;
  v65 = a10;
  v63 = 0LL;
  v64 = 0LL;
  v73 = *(_QWORD *)(a1 + 232);
  v67 = a1;
  BitMapHeader.Buffer = (unsigned int *)v76;
  v68 = a2;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 512LL;
  memset(v76, 0, sizeof(v76));
  v74 = v10;
  RtlSetAllBits(&BitMapHeader);
  v72 = 0LL;
  for ( i = a2; i <= a3; i = v17 + 8 )
  {
    if ( MiPteInShadowRange(i)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v16 & 1) != 0
      && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v56 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v17 >> 3) & 0x1FF));
        v57 = v16 | 0x20;
        if ( (v56 & 0x20) == 0 )
          v57 = v16;
        v16 = v57;
        if ( (v56 & 0x42) != 0 )
          v16 = v57 | 0x42;
      }
    }
    if ( v16 == v10 )
    {
      _bittestandreset((signed __int32 *)BitMapHeader.Buffer, ((unsigned int)v17 >> 3) & 0x1FF);
      ++v14;
    }
  }
  v18 = v14;
  if ( v14 > (unsigned __int64)a5 )
    v18 = a5;
  if ( a6 == -1 )
  {
    v64 = 0LL;
  }
  else
  {
    MiSetPfnBlink(48 * a6 - 0x58000000000LL, 0xFFFFFFFFFLL, 0LL, i);
    v63 = 48 * a6 - 0x58000000000LL;
    v64 = 1LL;
  }
  if ( v64 == v18 )
  {
    v20 = v67;
    v21 = v71;
  }
  else
  {
    v19 = v10;
    if ( (v10 & 0x400) == 0 )
    {
      if ( qword_140465800 && (v10 & 0x10) == 0 )
        v19 = v10 & ~qword_140465800;
      v72 = 48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v19 = *(_QWORD *)(v72 + 16);
    }
    v20 = v67;
    v21 = v71;
    MiGetHardFaultPages((unsigned int)&v63, v18, a4, v71, v70, v67, v19, (__int64)v65);
  }
  if ( v64 != v14 )
  {
    if ( v21 )
      *(_BYTE *)(v21 + 1) = 2;
    if ( !v64 )
      return 0LL;
    v53 = v64;
    v54 = ((unsigned int)v73 >> 3) & 0x1FF;
    if ( v53 != v14 - (unsigned int)MiReduceMappedFileReadBehind(&BitMapHeader, v54) )
      MiReduceMappedFileReadAhead(&BitMapHeader, v54);
  }
  v22 = v64;
  LODWORD(v70) = v64;
  v23 = MiProtectionToCacheAttribute(a7);
  SizeOfBitMap = BitMapHeader.SizeOfBitMap;
  v25 = (_QWORD *)(v20 + 320);
  v26 = 0;
  v69 = v23;
  v65 = (_QWORD *)(v20 + 320);
  if ( !BitMapHeader.SizeOfBitMap )
    goto LABEL_57;
  v27 = v68 & 0xFFFFFFFFFFFFF000uLL;
  v68 &= 0xFFFFFFFFFFFFF000uLL;
  do
  {
    v62 = v26;
    v28 = v26;
    if ( SizeOfBitMap > v26 )
    {
      v29 = &BitMapHeader.Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
      v30 = &BitMapHeader.Buffer[(unsigned __int64)v26 >> 5];
      if ( v30 != v29 && (*v30 | dword_14037C900[v26 & 0x1F]) == 0xFFFFFFFF )
      {
        ++v30;
        v28 = v26 - (v26 & 0x1F) + 32;
        v62 = v28;
        if ( v30 < v29 )
        {
          do
          {
            if ( *v30 != -1 )
              break;
            ++v30;
            v28 += 32;
          }
          while ( v30 < v29 );
          v62 = v28;
        }
      }
      if ( v28 < SizeOfBitMap )
      {
        do
        {
          SizeOfBitMap = BitMapHeader.SizeOfBitMap;
          if ( !_bittest((const signed __int32 *)BitMapHeader.Buffer, v28) )
            break;
          v62 = ++v28;
        }
        while ( v28 < BitMapHeader.SizeOfBitMap );
      }
      v31 = 0;
      v61 = 0;
      if ( v30 != v29 )
      {
        v32 = v28 & 0x1F;
        if ( (*v30 & ~dword_14037C900[v28 & 0x1F]) == 0 )
        {
          v31 = 32 - v32;
          v61 = 32 - v32;
          if ( v32 == 33 )
          {
LABEL_39:
            v27 = v68;
            goto LABEL_40;
          }
          v33 = v30 + 1;
          while ( v33 < v29 )
          {
            if ( *v33 )
              break;
            v31 += 32;
            ++v33;
            v61 = v31;
            if ( v31 == -1 )
              goto LABEL_39;
          }
        }
        SizeOfBitMap = BitMapHeader.SizeOfBitMap;
      }
      v34 = v31 + v28;
      if ( v31 + v28 < SizeOfBitMap )
      {
        do
        {
          if ( _bittest((const signed __int32 *)BitMapHeader.Buffer, v34) )
            break;
          if ( v31 == -1 )
            break;
          ++v34;
          ++v31;
        }
        while ( v34 < BitMapHeader.SizeOfBitMap );
        v61 = v31;
      }
      goto LABEL_39;
    }
    v31 = 0;
    v61 = 0;
LABEL_40:
    if ( v26 )
    {
      if ( v28 != v26 )
      {
        v52 = v28 - v26;
        do
        {
          *v25++ = qword_140466558;
          --v52;
        }
        while ( v52 );
        v65 = v25;
      }
      *(_DWORD *)(v20 + 192) |= 0x20000u;
    }
    v35 = v27 + 8LL * v28;
    RtlSetBits(&BitMapHeader, v28, v31);
    if ( v31 )
    {
      v36 = v67;
      v37 = v10;
      v10 = (__int64)v65;
      v38 = v37 & 0x400;
      v39 = v31;
      while ( 1 )
      {
        v40 = v63;
        v41 = *(_QWORD *)(v63 + 24) & 0xFFFFFFFFFLL;
        if ( v41 == 0xFFFFFFFFFLL )
          v63 = 0LL;
        else
          v63 = 48 * v41 - 0x58000000000LL;
        --v64;
        v42 = (v40 + 0x58000000000LL) / 48;
        *(_QWORD *)v10 = v42;
        v10 += 8LL;
        v66 = MiPteInShadowRange(v35);
        if ( v66
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v43 & 1) != 0
          && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
        {
          v58 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( v58 )
          {
            v59 = *(_QWORD *)(v58 + 8 * ((v35 >> 3) & 0x1FF));
            v60 = v43 | 0x20;
            if ( (v59 & 0x20) == 0 )
              v60 = v43;
            v43 = v60;
            if ( (v59 & 0x42) != 0 )
              v43 = v60 | 0x42;
          }
        }
        if ( !v38 )
          v43 = *(_QWORD *)(v72 + 16);
        v45 = v71;
        *(_QWORD *)(v44 + 16) = v43;
        if ( v45 )
          MiAdvanceFaultList(v45);
        MiInitializeHardFaultPfn(v44, v36, v35, v35 == v73, v69);
        if ( !v38 )
          goto LABEL_53;
        v49 = MiSwizzleInvalidPte(32 * (a7 & 0x1F | ((v42 & 0xFFFFFFFFFLL) << 7) | 0x40), v46, v47, v48);
        if ( v66 )
        {
          if ( (unsigned int)MiPteHasShadow(v50) )
          {
            if ( !HIBYTE(word_1404658EC) && (v49 & 1) != 0 )
              v49 |= 0x8000000000000000uLL;
            *(_QWORD *)v35 = v49;
            MiWritePteShadow(v35, v49);
            goto LABEL_53;
          }
          if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0
            && (v49 & 1) != 0 )
          {
            v49 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v35 = v49;
LABEL_53:
        v35 += 8LL;
        if ( !--v39 )
        {
          v31 = v61;
          v28 = v62;
          v20 = v67;
          v65 = (_QWORD *)v10;
          v25 = (_QWORD *)v10;
          LOWORD(v10) = v74;
          break;
        }
      }
    }
    if ( !v64 )
      break;
    SizeOfBitMap = BitMapHeader.SizeOfBitMap;
    v26 = v31 + v28;
    v27 = v68;
  }
  while ( v31 + v28 != BitMapHeader.SizeOfBitMap );
  v22 = v70;
LABEL_57:
  result = v22;
  *(_DWORD *)(v20 + 184) = (unsigned int)(((__int64)v25 - v20 - 320) >> 3) << 12;
  return result;
}
