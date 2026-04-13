/*
 * XREFs of ?do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z @ 0x1800C9600
 * Callers:
 *     <none>
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180034550 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??4?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@QEAAAEAV01@D@Z @ 0x1800B0298 (--4-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@QEAAAEAV01@D@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CADA1 (--3@YAXPEAX@Z_0.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::time_put<char,std::ostreambuf_iterator<char>>::do_put(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        __int64 a4,
        int a5,
        struct tm *Timeptr,
        char a7,
        char a8)
{
  size_t i; // rbx
  char *v12; // rcx
  size_t v13; // rdi
  char **v14; // rbx
  char *v15; // rcx
  unsigned __int64 v16; // rax
  size_t v17; // rdi
  char *Buffer[2]; // [rsp+38h] [rbp-38h] BYREF
  size_t Max_size; // [rsp+48h] [rbp-28h]
  unsigned __int64 v21; // [rsp+50h] [rbp-20h]
  char Format[4]; // [rsp+58h] [rbp-18h] BYREF
  char v23; // [rsp+5Ch] [rbp-14h]

  strcpy(Format, "!%x");
  v23 = 0;
  v21 = 15LL;
  Max_size = 0LL;
  LOBYTE(Buffer[0]) = 0;
  if ( a8 )
  {
    Format[2] = a8;
    Format[3] = a7;
  }
  else
  {
    Format[2] = a7;
  }
  for ( i = 16LL; ; i *= 2LL )
  {
    std::string::append((char *)Buffer, i, 0);
    v12 = (char *)Buffer;
    if ( v21 >= 0x10 )
      v12 = Buffer[0];
    v13 = _Strftime(v12, Max_size, Format, Timeptr, *(void **)(a1 + 16));
    if ( v13 )
      break;
  }
  v14 = Buffer;
  v15 = Buffer[0];
  v16 = v21;
  if ( v21 >= 0x10 )
    v14 = (char **)Buffer[0];
  v17 = v13 - 1;
  if ( v17 )
  {
    do
    {
      v14 = (char **)((char *)v14 + 1);
      std::ostreambuf_iterator<char>::operator=((__int64)a3, *(_BYTE *)v14);
      --v17;
    }
    while ( v17 );
    v16 = v21;
    v15 = Buffer[0];
  }
  *a2 = *a3;
  if ( v16 >= 0x10 )
    operator delete(v15);
  return a2;
}
