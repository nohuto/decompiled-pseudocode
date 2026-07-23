/*
 * XREFs of MxGetNextPage @ 0x1409BCB2C
 * Callers:
 *     MxMapVa @ 0x1409BC8F8 (MxMapVa.c)
 * Callees:
 *     MxBootDescriptorDepleted @ 0x1409BCDCC (MxBootDescriptorDepleted.c)
 *     MxSwitchDescriptors @ 0x1409F8CFC (MxSwitchDescriptors.c)
 */

__int64 __fastcall MxGetNextPage(unsigned int a1, int a2)
{
  unsigned int v2; // r9d
  __int64 v4; // rbx
  unsigned int v5; // edx
  __int64 *v6; // r8
  __int64 v8; // r9
  __int64 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx

  v2 = 0;
  v4 = -1LL;
  v5 = a1;
  do
  {
    v6 = (__int64 *)MxFreeDescriptor[v5];
    if ( v6 && v6[1] && !(a2 == 1 ? v6[3] == -1 : v6[2] == -1) )
      break;
    v11 = v5 + 1;
    v5 = 0;
    ++v2;
    if ( v11 != (unsigned __int16)KeNumberNodes )
      v5 = v11;
  }
  while ( v2 < (unsigned __int16)KeNumberNodes );
  if ( v2 != (unsigned __int16)KeNumberNodes )
  {
LABEL_8:
    if ( a2 == 1 )
    {
      v8 = v6[3];
      if ( (unsigned __int64)(v8 - *v6) >= 0x200 )
      {
        v6[3] = v8 - 512;
        return v8;
      }
    }
    else
    {
      v10 = v6[2];
      if ( v10 != (v10 & 0xFFFFFFFFFFFFFE00uLL) && v10 != *v6 )
      {
        v6[2] = v10 - 1;
LABEL_16:
        MxBootDescriptorDepleted(v6);
        return v8;
      }
      v12 = v6[3];
      v13 = *v6;
      if ( v12 == -1 )
      {
        if ( v10 != v13 && v13 != (v13 & 0xFFFFFFFFFFFFFE00uLL) )
          v4 = v13 | 0x1FF;
        v6[2] = v4;
        goto LABEL_16;
      }
      v6[2] = v12 + 511;
      if ( (unsigned __int64)(v12 - v13) >= 0x200 )
      {
        v6[3] = v12 - 512;
        goto LABEL_16;
      }
    }
    v6[3] = -1LL;
    goto LABEL_16;
  }
  if ( a2 != 1 )
  {
    v6 = (__int64 *)MxSwitchDescriptors(a1);
    if ( v6 )
      goto LABEL_8;
    byte_14043B959 = 16;
  }
  return -1LL;
}
