/*
 * XREFs of ?FinishStockFontInitInternal@@YAXPEBGH@Z @ 0x1C0140948
 * Callers:
 *     FinishStockFontInit @ 0x1C0140790 (FinishStockFontInit.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C008F250 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?bGetRegString@@YA_NPEAXPEBGPEAGK@Z @ 0x1C0140BA8 (-bGetRegString@@YA_NPEAXPEBGPEAGK@Z.c)
 *     ?bOpenKey@@YAHPEBGPEAPEAX@Z @ 0x1C0140E98 (-bOpenKey@@YAHPEBGPEAPEAX@Z.c)
 *     bDeleteFont @ 0x1C0140F90 (bDeleteFont.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     bInitOneStockFontInternal @ 0x1C03807D8 (bInitOneStockFontInternal.c)
 */

void __fastcall FinishStockFontInitInternal(const unsigned __int16 *a1, int a2)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  unsigned __int16 *v5; // rsi
  __int64 v6; // rax
  unsigned int v7; // r9d
  void **v8; // rdx
  int *v9; // r14
  unsigned __int16 *v10; // rdi
  unsigned int v11; // r13d
  _QWORD *v12; // rbx
  unsigned int v13; // r12d
  HANDLE *v14; // r15
  __int64 v15; // rdx
  unsigned __int16 *v16; // rcx
  unsigned __int16 v17; // ax
  unsigned __int16 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rbp
  unsigned int v22; // edi
  HANDLE *v23; // rbx
  _QWORD *v24; // [rsp+28h] [rbp-70h]
  PCWSTR SourceString[3]; // [rsp+30h] [rbp-68h]
  _QWORD v26[3]; // [rsp+48h] [rbp-50h] BYREF

  SourceString[0] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts";
  SourceString[1] = a1;
  SourceString[2] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize";
  v3 = 0;
  v4 = 0LL;
  do
  {
    if ( !(unsigned int)bOpenKey(SourceString[v4], (PHANDLE)&v26[v3]) )
      v26[v4] = 0LL;
    ++v3;
    ++v4;
  }
  while ( v3 < 3 );
  v5 = (unsigned __int16 *)AllocFreeTmpBuffer(260LL);
  v6 = AllocFreeTmpBuffer(260LL);
  v8 = gahStockObjects96;
  v9 = (int *)&unk_1C02D5F4C;
  v10 = (unsigned __int16 *)v6;
  v11 = 0;
  if ( !a2 )
    v8 = gahStockObjects;
  v12 = *v8;
  v24 = *v8;
  do
  {
    v13 = 0;
    v14 = (HANDLE *)v26;
    while ( 1 )
    {
      if ( !*v14 || !v5 || !v10 || !bGetRegString(*v14, *(const unsigned __int16 **)(v9 - 3), v5, v7) )
        goto LABEL_34;
      v15 = 260LL;
      v16 = v10;
      do
      {
        if ( v15 == -2147483386 )
          break;
        v17 = *(unsigned __int16 *)((char *)v16 + (char *)L"\\SystemRoot\\Fonts\\" - (char *)v10);
        if ( !v17 )
          break;
        *v16++ = v17;
        --v15;
      }
      while ( v15 );
      v18 = v16 - 1;
      if ( v15 )
        v18 = v16;
      *v18 = 0;
      if ( !v15 || (int)StringCchCatW(v10, v15, (char *)v5) < 0 )
        goto LABEL_34;
      LOBYTE(v19) = 10;
      v20 = v12[*v9];
      v21 = v20 & -(__int64)((unsigned int)HmgValidHandle(v20, v19) != 0);
      if ( (unsigned int)bInitOneStockFontInternal(v10) )
        break;
      v12 = v24;
LABEL_34:
      ++v13;
      ++v14;
      if ( v13 >= 3 )
        goto LABEL_24;
    }
    if ( v21 )
      bDeleteFont(v21, 1LL);
LABEL_24:
    v12 = v24;
    ++v11;
    v9 += 4;
  }
  while ( v11 < 3 );
  if ( v5 )
    FreeTmpBuffer(v5);
  if ( v10 )
    FreeTmpBuffer(v10);
  v22 = 0;
  v23 = (HANDLE *)v26;
  do
  {
    if ( *v23 )
      ZwClose(*v23);
    ++v22;
    ++v23;
  }
  while ( v22 < 3 );
}
