/*
 * XREFs of MiFindEmptyAddressRange @ 0x1405F3500
 * Callers:
 *     MiSelectUserAddress @ 0x1405F3360 (MiSelectUserAddress.c)
 * Callees:
 *     RtlFindClearBits @ 0x140077EC0 (RtlFindClearBits.c)
 *     MiExpandVadBitMap @ 0x14067AE8C (MiExpandVadBitMap.c)
 *     MiFindEmptyAddressRangeInTree @ 0x14069C53C (MiFindEmptyAddressRangeInTree.c)
 *     MiFindClearVadBitsAligned @ 0x1406A587C (MiFindClearVadBitsAligned.c)
 */

__int64 __fastcall MiFindEmptyAddressRange(
        PRTL_BITMAP BitMapHeader,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        _QWORD *a8,
        _DWORD *a9)
{
  unsigned __int64 v9; // r13
  int v10; // esi
  __int64 v12; // r10
  int v15; // edi
  _DWORD *v16; // rcx
  _KPROCESS *Process; // rdx
  unsigned int SizeOfBitMap; // r11d
  __int64 v19; // r8
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rsi
  __int64 Buffer_low; // r9
  int v24; // r14d
  ULONG ClearBits; // eax
  __int64 result; // rax
  unsigned __int64 v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  unsigned int *Buffer; // rcx
  unsigned __int64 v31; // rbx
  bool v32; // cf
  int v33; // r14d
  __int64 v34; // rax
  _KPROCESS *v35; // [rsp+88h] [rbp+10h]
  int v37; // [rsp+98h] [rbp+20h]
  unsigned int v38; // [rsp+A0h] [rbp+28h]
  unsigned int v39; // [rsp+A8h] [rbp+30h]

  v37 = a4;
  v9 = a6;
  v10 = a4;
  v12 = a3;
  if ( a6 - a5 + 1 < a2 )
    return 3221225495LL;
  v15 = 1;
  v16 = a9;
  Process = KeGetCurrentThread()->ApcState.Process;
  v35 = Process;
  *a9 = 1;
  if ( (a7 & 2) != 0 )
  {
    v27 = Process[1].ActiveProcessors.Bitmap[18];
    SizeOfBitMap = (unsigned __int8)BitMapHeader[3].SizeOfBitMap;
    v19 = *(_QWORD *)&BitMapHeader[2].SizeOfBitMap >> 16;
    v38 = v19;
    v39 = SizeOfBitMap;
    if ( v27 > 0x100000000LL )
    {
      LODWORD(v19) = (v27 >> 16) - (unsigned __int8)v19 - 1;
      v38 = v19;
    }
    Process = v35;
    if ( !(unsigned __int8)BitMapHeader[3].SizeOfBitMap )
    {
      SizeOfBitMap = 1;
      v39 = 1;
    }
  }
  else
  {
    SizeOfBitMap = 0;
    v15 = 0;
    LODWORD(v19) = 0;
    v39 = 0;
    v38 = 0;
  }
  v20 = 0x10000LL;
  if ( !a4 )
  {
    if ( v12 == 0x10000 )
    {
      v21 = a2 + 0xFFFF;
    }
    else
    {
      if ( (unsigned __int64)(v12 - 0x200000) > 0x7FE00000 || ((v12 - 1) & a2) != 0 )
        goto LABEL_35;
      v21 = a2;
    }
    v22 = v21 >> 16;
    if ( !a5 && v9 >= ((unsigned __int64)HIDWORD(BitMapHeader[1].Buffer) << 16) + 0xFFFF )
    {
      while ( 1 )
      {
        Buffer_low = BitMapHeader[1].SizeOfBitMap;
        if ( (_DWORD)v22 != 1 && (unsigned int)v22 >= *(&BitMapHeader[1].SizeOfBitMap + 1) )
          Buffer_low = LODWORD(BitMapHeader[1].Buffer);
        v24 = LODWORD(BitMapHeader->Buffer) - qword_14043B5E8;
        if ( v15 == 1 )
        {
          v28 = Buffer_low + 8 * v24;
          if ( v28 < SizeOfBitMap || v28 >= (unsigned int)v19 )
          {
            Buffer_low = SizeOfBitMap;
            *v16 = 0;
          }
        }
        if ( v12 == 0x10000 )
          ClearBits = RtlFindClearBits(BitMapHeader, v22, Buffer_low);
        else
          ClearBits = MiFindClearVadBitsAligned(BitMapHeader, v12, (unsigned int)v22, Buffer_low);
        if ( ClearBits != -1 )
        {
          if ( v15 != 1 || (v29 = ClearBits + 8 * v24, v29 >= v39) && v29 < v38 )
          {
            *a8 = (ClearBits + 8 * ((__int64)BitMapHeader->Buffer - qword_14043B5E8)) << 16;
            return 0LL;
          }
        }
        if ( (unsigned int)MiExpandVadBitMap(BitMapHeader, (unsigned int)v22) != 1 )
          break;
        v12 = a3;
        v16 = a9;
        LODWORD(v19) = v38;
        SizeOfBitMap = v39;
      }
      if ( v15 == 1 )
        return 3221225495LL;
      LODWORD(v12) = a3;
      v16 = a9;
      LODWORD(v19) = v38;
      SizeOfBitMap = v39;
      Process = v35;
    }
    v10 = v37;
  }
LABEL_35:
  *v16 = 0;
  if ( v15 == 1 && v9 > (unsigned __int64)(unsigned int)v19 << 16 )
    v9 = (unsigned __int64)(unsigned int)v19 << 16;
  Buffer = BitMapHeader[2].Buffer;
  v31 = a5;
  if ( (unsigned __int64)Buffer > a5 )
    v31 = (unsigned __int64)Buffer;
  v32 = v31 < v9;
  if ( v31 > v9 )
  {
    if ( (Process[2].UserTime & 0x20) == 0 || (v34 = 0x3FFFFFFFLL, v9 <= 0x3FFFFFFF) )
      v34 = 0xFFFFFFLL;
    v31 &= v34;
    if ( !v31 || v31 > v9 )
      v31 = 0x10000LL;
    if ( v15 == 1 && v31 < (unsigned __int64)Buffer )
      v31 = (unsigned __int64)SizeOfBitMap << 16;
    if ( v31 < a5 )
      v31 = a5;
    v32 = v31 < v9;
  }
  if ( !v32 || v9 - v31 + 1 < a2 )
    return 3221225495LL;
  v33 = (_DWORD)Process + 1576;
  result = MiFindEmptyAddressRangeInTree((int)Process + 1576, a2, v12, v10, v31, v9, (__int64)a8);
  if ( (int)result < 0 )
  {
    if ( v15 == 1 )
      v20 = (unsigned __int64)v39 << 16;
    if ( v20 < a5 )
      v20 = a5;
    if ( v20 < v31 )
      return MiFindEmptyAddressRangeInTree(v33, a2, a3, v10, v20, v9, (__int64)a8);
  }
  return result;
}
