/*
 * XREFs of NtGdiMakeFontDir @ 0x1C0292D50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C015AFA0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     GreMakeFontDir @ 0x1C029CE1C (GreMakeFontDir.c)
 */

__int64 __fastcall NtGdiMakeFontDir(unsigned int a1, _OWORD *a2, unsigned int a3, char *a4, unsigned int Size)
{
  unsigned int FontDir; // edi
  unsigned int v9; // eax
  unsigned __int64 v10; // rax
  _OWORD *v11; // rbx
  _OWORD v14[16]; // [rsp+30h] [rbp-358h] BYREF
  _WORD v15[264]; // [rsp+130h] [rbp-258h] BYREF

  memset(v14, 0, 0xFBuLL);
  FontDir = 0;
  if ( Size <= 0x20A && a3 >= 0xFB )
  {
    if ( &a4[Size] < a4 || (unsigned __int64)&a4[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v15, a4, Size);
    v9 = 2;
    if ( Size >= 2 )
      v9 = Size;
    v10 = (v9 >> 1) - 1;
    if ( v10 >= 261 )
      _report_rangecheckfailure();
    v15[v10] = 0;
    FontDir = GreMakeFontDir(a1, v14, v15);
    if ( FontDir )
    {
      if ( (unsigned __int64)a2 + 251 > MmUserProbeAddress || (_OWORD *)((char *)a2 + 251) <= a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a2 = v14[0];
      a2[1] = v14[1];
      a2[2] = v14[2];
      a2[3] = v14[3];
      a2[4] = v14[4];
      a2[5] = v14[5];
      a2[6] = v14[6];
      v11 = a2 + 8;
      *(v11 - 1) = v14[7];
      *v11 = v14[8];
      v11[1] = v14[9];
      v11[2] = v14[10];
      v11[3] = v14[11];
      v11[4] = v14[12];
      v11[5] = v14[13];
      v11[6] = v14[14];
      *((_QWORD *)v11 + 14) = *(_QWORD *)&v14[15];
      *((_WORD *)v11 + 60) = WORD4(v14[15]);
      *((_BYTE *)v11 + 122) = BYTE10(v14[15]);
    }
  }
  return FontDir;
}
