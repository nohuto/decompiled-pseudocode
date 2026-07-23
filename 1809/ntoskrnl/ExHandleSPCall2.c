/*
 * XREFs of ExHandleSPCall2 @ 0x1406ABF8C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     sub_1406AC1C4 @ 0x1406AC1C4 (sub_1406AC1C4.c)
 */

__int64 __fastcall ExHandleSPCall2(__int64 a1, __m128i *a2)
{
  int v3; // edi
  void *v4; // rsi
  unsigned int v5; // r12d
  __int32 v6; // ebx
  unsigned int v7; // ecx
  unsigned __int64 v8; // r8
  unsigned int v9; // r15d
  PVOID PoolWithTag; // rax
  volatile void *v11; // r15
  unsigned __int32 v12; // r12d
  __m128i Src[2]; // [rsp+48h] [rbp-50h] BYREF
  SIZE_T Length; // [rsp+A0h] [rbp+8h] BYREF
  __m128i *v16; // [rsp+A8h] [rbp+10h]
  PVOID P; // [rsp+B0h] [rbp+18h] BYREF

  v16 = a2;
  v3 = 0;
  memset(Src, 0, sizeof(Src));
  v4 = 0LL;
  v5 = 0;
  P = 0LL;
  LODWORD(Length) = 0;
  v6 = 0;
  if ( !a2 )
  {
    v3 = -1073741789;
    goto LABEL_24;
  }
  if ( (unsigned __int64)&a2[2] > 0x7FFFFFFF0000LL || &a2[2] < a2 )
    MEMORY[0x7FFFFFFF0000] = 0;
  Src[0] = *a2;
  Src[1] = a2[1];
  v7 = _mm_cvtsi128_si32(Src[1]);
  if ( v7 )
  {
    v8 = Src[0].m128i_i64[0] + v7;
    if ( v8 > 0x7FFFFFFF0000LL || v8 < Src[0].m128i_i64[0] )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( Src[0].m128i_i64[0] && v7 )
  {
    v5 = v7;
    v9 = v7;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x20534C53u);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, (const void *)Src[0].m128i_i64[0], v9);
      v11 = (volatile void *)Src[0].m128i_i64[1];
      if ( Src[0].m128i_i64[1] )
        v6 = Src[1].m128i_i32[1];
      goto LABEL_17;
    }
    v3 = -1073741801;
  }
  else
  {
    v3 = -1073741789;
  }
  v11 = (volatile void *)Src[0].m128i_i64[1];
LABEL_17:
  if ( v3 >= 0 )
  {
    v3 = sub_1406AC1C4((_DWORD)v4, v5, v6, (unsigned int)&P, (__int64)&Length);
    if ( v3 >= 0 )
    {
      if ( v11 )
      {
        v12 = Length;
        if ( Src[1].m128i_i32[1] < (unsigned int)Length )
        {
          v3 = -1073741789;
        }
        else
        {
          ProbeForWrite(v11, (unsigned int)Length, 1u);
          memmove((void *)v11, P, v12);
          a2[1].m128i_i32[1] = v12;
        }
      }
      else
      {
        a2[1].m128i_i32[1] = Length;
      }
    }
  }
LABEL_24:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( P )
    ExFreePoolWithTag(P, 0x20534C53u);
  return (unsigned int)v3;
}
