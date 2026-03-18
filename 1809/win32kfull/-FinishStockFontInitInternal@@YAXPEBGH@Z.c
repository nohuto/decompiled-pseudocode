/*
 * XREFs of ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C00C19E0
 * Callers:
 *     FinishStockFontInit @ 0x1C00C1820 (FinishStockFontInit.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C007DA74 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?bGetRegString@@YA_NPEAXPEBGPEAGK@Z @ 0x1C00C1C44 (-bGetRegString@@YA_NPEAXPEBGPEAGK@Z.c)
 *     ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x1C00C1E08 (-bOpenKey@@YAHPEBGPEAPEAX@Z.c)
 *     bDeleteFont @ 0x1C00C1EF0 (bDeleteFont.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     bInitOneStockFontInternal @ 0x1C036D5FC (bInitOneStockFontInternal.c)
 */

void __fastcall FinishStockFontInitInternal(const unsigned __int16 *a1, int a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebx
  __int64 v5; // rdi
  unsigned __int16 *v6; // r12
  __int64 v7; // rax
  signed int v8; // r9d
  void **v9; // rdx
  int *v10; // r15
  unsigned __int16 *v11; // rdi
  unsigned int v12; // r13d
  _QWORD *v13; // rbx
  unsigned int v14; // ebp
  HANDLE *v15; // r14
  __int64 v16; // rdx
  unsigned __int16 *v17; // rax
  unsigned __int16 v18; // cx
  __int64 v19; // rdx
  __int64 v20; // rbx
  HANDLE *v21; // rbx
  _QWORD *v22; // [rsp+28h] [rbp-70h]
  PCWSTR SourceString[3]; // [rsp+30h] [rbp-68h]
  _QWORD v24[3]; // [rsp+48h] [rbp-50h] BYREF

  v2 = 0;
  SourceString[0] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts";
  SourceString[1] = a1;
  SourceString[2] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize";
  v4 = 0;
  v5 = 0LL;
  do
  {
    if ( !(unsigned int)bOpenKey(SourceString[v5], (PHANDLE)&v24[v4]) )
      v24[v5] = 0LL;
    ++v4;
    ++v5;
  }
  while ( v4 < 3 );
  v6 = (unsigned __int16 *)AllocFreeTmpBuffer(260LL);
  v7 = AllocFreeTmpBuffer(260LL);
  v9 = gahStockObjects96;
  v10 = (int *)&unk_1C02C3C14;
  v11 = (unsigned __int16 *)v7;
  v12 = 0;
  if ( !a2 )
    v9 = gahStockObjects;
  v13 = *v9;
  v22 = *v9;
  do
  {
    v14 = 0;
    v15 = (HANDLE *)v24;
    while ( 1 )
    {
      if ( !*v15 || !v6 || !v11 || !bGetRegString(*v15, *(const unsigned __int16 **)(v10 - 3), v6, v8) )
        goto LABEL_35;
      v16 = 260LL;
      v17 = v11;
      v8 = 0;
      while ( v16 != -2147483386 )
      {
        v18 = *(unsigned __int16 *)((char *)v17 + (char *)L"\\SystemRoot\\Fonts\\" - (char *)v11);
        if ( !v18 )
          break;
        *v17++ = v18;
        if ( !--v16 )
        {
          --v17;
          v8 = -2147024774;
          break;
        }
      }
      *v17 = 0;
      if ( v8 < 0 || (int)StringCchCatW(v11, v16, (char *)v6) < 0 )
        goto LABEL_35;
      LOBYTE(v19) = 10;
      v20 = v13[*v10];
      if ( !(unsigned int)HmgValidHandle(v20, v19) )
        v20 = 0LL;
      if ( (unsigned int)bInitOneStockFontInternal(v11) )
        break;
      v13 = v22;
LABEL_35:
      ++v14;
      ++v15;
      if ( v14 >= 3 )
        goto LABEL_25;
    }
    if ( v20 )
      bDeleteFont(v20, 1LL);
LABEL_25:
    v13 = v22;
    ++v12;
    v10 += 4;
  }
  while ( v12 < 3 );
  if ( v6 )
    FreeTmpBuffer(v6);
  if ( v11 )
    FreeTmpBuffer(v11);
  v21 = (HANDLE *)v24;
  do
  {
    if ( *v21 )
      ZwClose(*v21);
    ++v2;
    ++v21;
  }
  while ( v2 < 3 );
}
