/*
 * XREFs of RtlCompareMemory @ 0x1800A0E80
 * Callers:
 *     RtlGetAppContainerSidType @ 0x18000C330 (RtlGetAppContainerSidType.c)
 *     RtlIsCapabilitySid @ 0x18000E910 (RtlIsCapabilitySid.c)
 *     sub_180028CE0 @ 0x180028CE0 (sub_180028CE0.c)
 *     RtlInitializeResource @ 0x1800338D0 (RtlInitializeResource.c)
 *     sub_180033A40 @ 0x180033A40 (sub_180033A40.c)
 *     sub_180040320 @ 0x180040320 (sub_180040320.c)
 *     RtlIsPackageSid @ 0x180082780 (RtlIsPackageSid.c)
 *     sub_1800E4494 @ 0x1800E4494 (sub_1800E4494.c)
 *     sub_1800F2ED4 @ 0x1800F2ED4 (sub_1800F2ED4.c)
 *     sub_1800F88D8 @ 0x1800F88D8 (sub_1800F88D8.c)
 *     sub_1800FB3AC @ 0x1800FB3AC (sub_1800FB3AC.c)
 *     sub_180103FDC @ 0x180103FDC (sub_180103FDC.c)
 *     sub_180106798 @ 0x180106798 (sub_180106798.c)
 *     sub_18010E144 @ 0x18010E144 (sub_18010E144.c)
 *     sub_18010E320 @ 0x18010E320 (sub_18010E320.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemory(const void *Source1, const void *Source2, SIZE_T Length)
{
  _BYTE *v3; // rsi
  _BYTE *v4; // rdi
  __int64 v5; // rcx
  bool v6; // zf
  SIZE_T v7; // rcx
  bool v8; // zf
  bool v9; // zf
  SIZE_T v10; // r8
  SIZE_T v11; // rcx
  bool v13; // zf
  SIZE_T v14; // rcx

  v3 = Source1;
  v4 = Source2;
  if ( (((unsigned __int8)Source1 ^ (unsigned __int8)Source2) & 7) != 0 || Length < 8 )
  {
    v13 = Length == 0;
    if ( Length )
    {
      v14 = Length;
      do
      {
        if ( !v14 )
          break;
        v13 = *v3++ == *v4++;
        --v14;
      }
      while ( v13 );
      if ( !v13 )
        Length -= v14 + 1;
    }
    return Length;
  }
  else
  {
    v5 = -(int)Source1 & 7;
    if ( (_DWORD)v5 )
    {
      Length -= (unsigned int)v5;
      v6 = Length == 0;
      do
      {
        if ( !v5 )
          break;
        v6 = *v3++ == *v4++;
        --v5;
      }
      while ( v6 );
      if ( !v6 )
        goto LABEL_19;
    }
    v7 = Length & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (Length & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      Length -= v7;
      v7 >>= 3;
      v8 = v7 == 0;
      do
      {
        if ( !v7 )
          break;
        v8 = *(_QWORD *)v3 == *(_QWORD *)v4;
        v3 += 8;
        v4 += 8;
        --v7;
      }
      while ( v8 );
      if ( !v8 )
      {
        v3 -= 8;
        v4 -= 8;
        v7 = 8 * (v7 + 1);
      }
    }
    v9 = v7 + Length == 0;
    v10 = v7 + Length;
    if ( v10 )
    {
      v11 = v10;
      do
      {
        if ( !v11 )
          break;
        v9 = *v3++ == *v4++;
        --v11;
      }
      while ( v9 );
      if ( !v9 )
LABEL_19:
        --v4;
    }
    return v4 - (_BYTE *)Source2;
  }
}
