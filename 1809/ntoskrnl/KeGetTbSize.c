/*
 * XREFs of KeGetTbSize @ 0x1409BAEEC
 * Callers:
 *     MiInitializeTbFlushing @ 0x1409BABB8 (MiInitializeTbFlushing.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiGetTbLeafInfo @ 0x1409F7CE0 (KiGetTbLeafInfo.c)
 */

__int64 KeGetTbSize()
{
  unsigned __int8 CpuVendor; // cl
  unsigned int v6; // r8d
  unsigned int v12; // ebx
  __int64 *v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // r9d
  int *v16; // r8
  unsigned int i; // ecx
  unsigned int v24; // ebx
  int *v25; // rdx
  __int128 v26; // [rsp+20h] [rbp-29h]
  __int128 v27; // [rsp+30h] [rbp-19h] BYREF
  char v28; // [rsp+40h] [rbp-9h]
  __int64 v29; // [rsp+48h] [rbp-1h] BYREF
  char v30; // [rsp+50h] [rbp+7h]
  __int64 v31; // [rsp+58h] [rbp+Fh]
  char v32; // [rsp+60h] [rbp+17h]
  __int64 v33; // [rsp+68h] [rbp+1Fh]
  char v34; // [rsp+70h] [rbp+27h]
  __int64 v35; // [rsp+78h] [rbp+2Fh]
  char v36; // [rsp+80h] [rbp+37h]
  __int64 v37; // [rsp+88h] [rbp+3Fh]

  v28 = -76;
  v31 = 512LL;
  v37 = 512LL;
  v29 = 256LL;
  v30 = 100;
  v32 = -63;
  CpuVendor = KeGetCurrentPrcb()->CpuVendor;
  v33 = 1024LL;
  v34 = -61;
  v35 = 1536LL;
  v36 = -54;
  if ( CpuVendor == 1 )
  {
    _RAX = 2147483654LL;
    __asm { cpuid }
    return WORD1(_RBX) & 0xFFF;
  }
  else
  {
    if ( CpuVendor == 2 )
    {
      _RAX = 0LL;
      __asm { cpuid }
      v6 = _RAX;
      _RAX = 2LL;
      __asm { cpuid }
      *(_QWORD *)&v26 = __PAIR64__(_RBX, _RAX);
      *((_QWORD *)&v26 + 1) = __PAIR64__(_RDX, _RCX);
      v27 = v26;
      if ( v6 >= 0x18 )
      {
        for ( i = 0; i < 0x20; i += 8 )
        {
          v24 = 0;
          v25 = (int *)&v27;
          do
          {
            if ( *v25 >= 0 && (unsigned __int8)((unsigned int)*v25 >> i) == 0xFE )
              return KiGetTbLeafInfo();
            ++v24;
            ++v25;
          }
          while ( v24 < 4 );
        }
      }
      v12 = 0;
      v13 = &v29;
      do
      {
        v14 = 0;
        while ( 2 )
        {
          v15 = 0;
          v16 = (int *)&v27;
          do
          {
            if ( *v16 >= 0 && (unsigned __int8)((unsigned int)*v16 >> v14) == *((unsigned __int8 *)v13 - 8) )
              return *v13;
            ++v15;
            ++v16;
          }
          while ( v15 < 4 );
          v14 += 8;
          if ( v14 < 0x20 )
            continue;
          break;
        }
        ++v12;
        v13 += 2;
      }
      while ( v12 < 5 );
    }
    return 0LL;
  }
}
