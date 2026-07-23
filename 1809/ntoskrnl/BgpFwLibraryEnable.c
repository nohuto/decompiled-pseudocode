/*
 * XREFs of BgpFwLibraryEnable @ 0x14016F8E0
 * Callers:
 *     BgLibraryEnable @ 0x140159928 (BgLibraryEnable.c)
 *     BgpFwLibraryInitialize @ 0x14095095C (BgpFwLibraryInitialize.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x1400E5DE0 (MmMapIoSpaceEx.c)
 *     MmGetPhysicalAddress @ 0x1401211A0 (MmGetPhysicalAddress.c)
 *     MmUnmapIoSpace @ 0x1401232F0 (MmUnmapIoSpace.c)
 *     ResFwBackgroundTransition @ 0x140951360 (ResFwBackgroundTransition.c)
 */

__int64 __fastcall BgpFwLibraryEnable(__int64 a1)
{
  int v2; // ebp
  __int64 v3; // rsi
  int v4; // ecx
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rax
  int v10; // eax
  __int64 v12; // rax
  int v13; // eax

  v2 = dword_140406AD0 & 0xC00;
  if ( (dword_140406AD0 & 2) != 0 && v2 != 3072 )
    return 0LL;
  v3 = 0LL;
  if ( !*(_BYTE *)a1 || *(_BYTE *)(a1 + 1) )
  {
LABEL_10:
    if ( v2 != 3072 )
      ResFwBackgroundTransition(0LL);
    BgInternal = *(_OWORD *)a1;
    v10 = _mm_cvtsi128_si32(*(__m128i *)(a1 + 16));
    xmmword_140406A70 = *(_OWORD *)(a1 + 16);
    qword_140406A80 = *(PVOID *)(a1 + 32);
    if ( v10 == 1 )
    {
      dword_140406AD0 |= 8u;
      LODWORD(xmmword_140406A70) = 5;
    }
    dword_140406AD0 |= 2u;
    return 0LL;
  }
  if ( v2 == 3072 )
  {
    if ( !(_BYTE)xmmword_140406A88
      || !BYTE1(xmmword_140406A88)
      || *(_DWORD *)(a1 + 16) != (_DWORD)xmmword_140406A98
      || *(_QWORD *)(a1 + 4) != *(_QWORD *)((char *)&xmmword_140406A88 + 4)
      || *(_DWORD *)(a1 + 12) != HIDWORD(xmmword_140406A88)
      || *(_QWORD *)(a1 + 32) != MmGetPhysicalAddress(BaseAddress) )
    {
      return 3221225659LL;
    }
    *(_BYTE *)(a1 + 1) = 1;
    *(_QWORD *)(a1 + 32) = BaseAddress;
    goto LABEL_10;
  }
  v4 = *(_DWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 12);
  if ( ((*(_BYTE *)(a1 + 2) - 1) & 0xFD) != 0 )
    v6 = (unsigned int)(*(_DWORD *)(a1 + 4) * v5);
  else
    v6 = (unsigned int)(*(_DWORD *)(a1 + 8) * v5);
  v7 = *(_QWORD *)(a1 + 32);
  v8 = v6 * ((v4 != 4) + 3LL);
  v9 = MmMapIoSpaceEx(v7, v8, 0x404u);
  *(_QWORD *)(a1 + 32) = v9;
  if ( v9 || (v12 = MmMapIoSpaceEx(v7, v8, 0x204u), (*(_QWORD *)(a1 + 32) = v12) != 0LL) )
  {
    *(_BYTE *)(a1 + 1) = 1;
    if ( (_BYTE)xmmword_140406A88 && BYTE1(xmmword_140406A88) )
    {
      v13 = DWORD1(xmmword_140406A88);
      if ( ((BYTE2(xmmword_140406A88) - 1) & 0xFD) == 0 )
        v13 = DWORD2(xmmword_140406A88);
      LOBYTE(v3) = (_DWORD)xmmword_140406A98 != 4;
      MmUnmapIoSpace(BaseAddress, (unsigned int)(HIDWORD(xmmword_140406A88) * v13) * (v3 + 3));
    }
    xmmword_140406A88 = *(_OWORD *)a1;
    xmmword_140406A98 = *(_OWORD *)(a1 + 16);
    BaseAddress = *(PVOID *)(a1 + 32);
    goto LABEL_10;
  }
  return 3221225626LL;
}
