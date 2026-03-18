/*
 * XREFs of BgpFwLibraryEnable @ 0x140178FE0
 * Callers:
 *     BgLibraryEnable @ 0x140169F88 (BgLibraryEnable.c)
 *     BgpFwLibraryInitialize @ 0x14098F9A8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x140117010 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x140118AB0 (MmMapIoSpaceEx.c)
 *     MmGetPhysicalAddress @ 0x140123FF0 (MmGetPhysicalAddress.c)
 *     ResFwBackgroundTransition @ 0x1409903B0 (ResFwBackgroundTransition.c)
 */

__int64 __fastcall BgpFwLibraryEnable(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rsi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax

  v2 = dword_14042C030 & 0xC00;
  if ( (dword_14042C030 & 2) != 0 && v2 != 3072 )
    return 0LL;
  v3 = 0LL;
  if ( !*(_BYTE *)a1 || *(_BYTE *)(a1 + 1) )
  {
LABEL_7:
    if ( v2 == 3072 )
    {
LABEL_9:
      BgInternal = *(_OWORD *)a1;
      v5 = _mm_cvtsi128_si32(*(__m128i *)(a1 + 16));
      xmmword_14042BFD0 = *(_OWORD *)(a1 + 16);
      qword_14042BFE0 = *(PVOID *)(a1 + 32);
      if ( v5 == 1 )
      {
        dword_14042C030 |= 8u;
        LODWORD(xmmword_14042BFD0) = 5;
      }
      dword_14042C030 |= 2u;
      return 0LL;
    }
LABEL_8:
    ResFwBackgroundTransition(0LL);
    goto LABEL_9;
  }
  if ( v2 == 3072 )
  {
    if ( !(_BYTE)xmmword_14042BFE8
      || !BYTE1(xmmword_14042BFE8)
      || *(_DWORD *)(a1 + 16) != (_DWORD)xmmword_14042BFF8
      || *(_QWORD *)(a1 + 4) != *(_QWORD *)((char *)&xmmword_14042BFE8 + 4)
      || *(_DWORD *)(a1 + 12) != HIDWORD(xmmword_14042BFE8)
      || *(_QWORD *)(a1 + 32) != MmGetPhysicalAddress(BaseAddress) )
    {
      return 3221225659LL;
    }
    *(_BYTE *)(a1 + 1) = 1;
    *(_QWORD *)(a1 + 32) = BaseAddress;
    goto LABEL_7;
  }
  v6 = *(_DWORD *)(a1 + 16);
  v7 = *(_DWORD *)(a1 + 12);
  if ( ((*(_BYTE *)(a1 + 2) - 1) & 0xFD) != 0 )
    v8 = (unsigned int)(*(_DWORD *)(a1 + 4) * v7);
  else
    v8 = (unsigned int)(*(_DWORD *)(a1 + 8) * v7);
  v9 = *(_QWORD *)(a1 + 32);
  v10 = v8 * ((v6 != 4) + 3LL);
  v11 = MmMapIoSpaceEx(v9, v10, 0x404u);
  *(_QWORD *)(a1 + 32) = v11;
  if ( v11 || (v12 = MmMapIoSpaceEx(v9, v10, 0x204u), (*(_QWORD *)(a1 + 32) = v12) != 0LL) )
  {
    *(_BYTE *)(a1 + 1) = 1;
    if ( (_BYTE)xmmword_14042BFE8 && BYTE1(xmmword_14042BFE8) )
    {
      v13 = DWORD1(xmmword_14042BFE8);
      if ( ((BYTE2(xmmword_14042BFE8) - 1) & 0xFD) == 0 )
        v13 = DWORD2(xmmword_14042BFE8);
      LOBYTE(v3) = (_DWORD)xmmword_14042BFF8 != 4;
      MmUnmapIoSpace(BaseAddress, (unsigned int)(HIDWORD(xmmword_14042BFE8) * v13) * (v3 + 3));
    }
    xmmword_14042BFE8 = *(_OWORD *)a1;
    xmmword_14042BFF8 = *(_OWORD *)(a1 + 16);
    BaseAddress = *(PVOID *)(a1 + 32);
    goto LABEL_8;
  }
  return 3221225626LL;
}
