/*
 * XREFs of ?StringCbCatExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x18002CC70
 * Callers:
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x18002CE24 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     StringLengthWorkerW @ 0x18002CD60 (StringLengthWorkerW.c)
 */

__int64 __fastcall StringCbCatExW(
        unsigned __int16 *a1,
        size_t a2,
        const unsigned __int16 *a3,
        unsigned __int16 **a4,
        unsigned __int64 *a5)
{
  HRESULT v6; // r8d
  __int64 v7; // r11
  size_t v8; // rdx
  unsigned __int16 *v9; // r9
  size_t v10; // r8
  _WORD *v11; // rcx
  __int64 v12; // r10
  __int16 v13; // ax
  _WORD *v14; // rax
  __int64 v15; // rcx
  size_t v17; // [rsp+40h] [rbp+18h] BYREF

  v17 = (size_t)a3;
  v6 = StringLengthWorkerW(a1, a2, &v17);
  if ( v6 >= 0 )
  {
    v8 = 260 - v17;
    v9 = (unsigned __int16 *)(v7 + 2 * v17);
    if ( v17 == 260 || v17 == 259 )
    {
      if ( !v7 )
        return (unsigned int)-2147024809;
      v6 = -2147024774;
    }
    else
    {
      v10 = 260 - v17;
      v11 = (_WORD *)(v7 + 2 * v17);
      v12 = 0LL;
      if ( v8 )
      {
        do
        {
          if ( !(2147483646 - v8 + v10) )
            break;
          v13 = *(_WORD *)((char *)v11 + (char *)L"\\AUDIODG.EXE" - (char *)v9);
          if ( !v13 )
            break;
          *v11 = v13;
          ++v12;
          ++v11;
          --v10;
        }
        while ( v10 );
      }
      v14 = v11 - 1;
      if ( v10 )
        v14 = v11;
      v15 = v12 - 1;
      if ( v10 )
        v15 = v12;
      *v14 = 0;
      v9 += v15;
      v6 = v10 != 0 ? 0 : 0x8007007A;
      v8 -= v15;
    }
    if ( a4 )
      *a4 = v9;
    if ( a5 )
      *a5 = 2 * v8;
  }
  return (unsigned int)v6;
}
