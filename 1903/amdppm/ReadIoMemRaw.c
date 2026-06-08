/*
 * XREFs of ReadIoMemRaw @ 0x1C0001F88
 * Callers:
 *     ReadGenAddr @ 0x1C00021B8 (ReadGenAddr.c)
 *     WriteGenAddr @ 0x1C0002208 (WriteGenAddr.c)
 *     PerfControlCpcSingleRegister @ 0x1C0009A90 (PerfControlCpcSingleRegister.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadIoMemRaw(__int64 a1)
{
  unsigned __int8 *v2; // rcx
  char v3; // dl
  unsigned __int64 result; // rax
  unsigned int v5; // r11d
  int v6; // edx
  __int64 v7; // r10

  v2 = *(unsigned __int8 **)(a1 + 4);
  v3 = *(_BYTE *)(a1 + 3);
  if ( *(_BYTE *)a1 )
  {
    if ( *(_BYTE *)a1 == 1 )
    {
      switch ( v3 )
      {
        case 8:
          LOBYTE(result) = __inbyte((unsigned __int16)v2);
          return (unsigned __int8)result;
        case 16:
          LOWORD(result) = __inword((unsigned __int16)v2);
          return (unsigned __int16)result;
        case 32:
          LODWORD(result) = __indword((unsigned __int16)v2);
          return (unsigned int)result;
      }
      return 0LL;
    }
    if ( *(_BYTE *)a1 != 10 )
    {
      if ( *(_BYTE *)a1 == 127 && v3 == 64 )
        return __readmsr((unsigned int)v2);
      return 0LL;
    }
    v5 = *(unsigned __int8 *)(a1 + 1) + *(unsigned __int8 *)(a1 + 2);
    if ( v5 > 8 )
    {
      if ( v5 > 0x10 )
      {
        v6 = 64;
        if ( v5 <= 0x20 )
          v6 = 32;
      }
      else
      {
        v6 = 16;
      }
    }
    else
    {
      v6 = 8;
    }
    v7 = *(_QWORD *)(qword_1C0013940 + 72);
    switch ( v6 )
    {
      case 8:
        return v2[v7];
      case 16:
        return *(unsigned __int16 *)&v2[v7];
      case 32:
        return *(unsigned int *)&v2[v7];
    }
    return *(_QWORD *)&v2[v7];
  }
  else
  {
    switch ( v3 )
    {
      case 8:
        return *v2;
      case 16:
        return *(unsigned __int16 *)v2;
      case 32:
        return *(unsigned int *)v2;
      default:
        return 0LL;
    }
  }
}
