/*
 * XREFs of RtlpValidateRange @ 0x1800D8358
 * Callers:
 *     RtlpValidateRemoteDebugInformation @ 0x1800D8464 (RtlpValidateRemoteDebugInformation.c)
 * Callees:
 *     RtlSetBits @ 0x180056660 (RtlSetBits.c)
 */

char __fastcall RtlpValidateRange(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        PRTL_BITMAP BitMapHeader)
{
  unsigned __int64 v5; // rdx
  unsigned int v6; // r10d
  unsigned int v7; // r11d
  bool v8; // al
  unsigned int *Buffer; // rcx
  unsigned int *v10; // rdx
  unsigned int v11; // esi
  unsigned int *v12; // rdi
  bool v13; // zf
  bool i; // zf

  if ( !a4 )
    return 0;
  if ( a1 > a3 )
    return 0;
  if ( a3 + a4 < a3 )
    return 0;
  v5 = a1 + a2;
  if ( v5 < a1 )
    return 0;
  if ( a3 + a4 > v5 )
    return 0;
  v6 = a3 - a1;
  v7 = a3 - a1 + a4 - 1;
  if ( v7 >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( (unsigned int)a4 > 1 )
  {
    Buffer = BitMapHeader->Buffer;
    v10 = &Buffer[(unsigned __int64)v6 >> 5];
    v11 = *v10;
    v12 = &Buffer[(unsigned __int64)v7 >> 5];
    if ( v10 != v12 )
    {
      for ( i = (v11 & (-1 << v6)) == 0; i; i = *v10 == 0 )
      {
        if ( ++v10 == v12 )
        {
          v13 = ((0xFFFFFFFF >> ~(_BYTE)v7) & *v10) == 0;
          goto LABEL_17;
        }
      }
      return 0;
    }
    v13 = (v11 & (0xFFFFFFFF >> (32 - a4) << v6)) == 0;
LABEL_17:
    v8 = v13;
  }
  else
  {
    if ( (_DWORD)a4 != 1 )
      return 0;
    v8 = !_bittest((const signed __int32 *)BitMapHeader->Buffer, v6);
  }
  if ( v8 )
  {
    RtlSetBits(BitMapHeader, v6, a4);
    return 1;
  }
  return 0;
}
