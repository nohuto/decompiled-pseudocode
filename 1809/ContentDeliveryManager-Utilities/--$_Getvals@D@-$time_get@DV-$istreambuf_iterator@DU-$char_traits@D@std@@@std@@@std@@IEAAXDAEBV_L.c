/*
 * XREFs of ??$_Getvals@D@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEAAXDAEBV_Locinfo@1@@Z @ 0x1800C0388
 * Callers:
 *     ?_Init@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x1800C2DC8 (-_Init@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@IEAAXAEBV_Locinfo@2.c)
 * Callees:
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x180048F34 (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 *     _Getcvt @ 0x1800AB6B0 (_Getcvt.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800ABA2C (--_U@YAPEAX_K@Z.c)
 */

_BYTE *__fastcall std::time_get<char,std::istreambuf_iterator<char>>::_Getvals<char>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _Cvtvec *v5; // rax
  char *v6; // rax
  char *v7; // rbx
  const char *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdi
  size_t v11; // rdi
  _BYTE *v12; // rax
  signed __int64 v13; // rdx
  char *v14; // rax
  char *v15; // rdi
  const char *v16; // rdi
  size_t v17; // rbx
  _BYTE *v18; // rax
  signed __int64 v19; // rdx
  __int64 v20; // rdi
  const char *v21; // rbx
  _BYTE *result; // rax
  _Cvtvec v23; // [rsp+20h] [rbp-38h] BYREF

  v5 = Getcvt(&v23);
  *(_OWORD *)(a1 + 44) = *(_OWORD *)&v5->_Page;
  *(_OWORD *)(a1 + 60) = *(_OWORD *)&v5->_Isleadbyte[4];
  *(_OWORD *)(a1 + 76) = *(_OWORD *)&v5->_Isleadbyte[20];
  v6 = _Getdays();
  v7 = v6;
  if ( v6 )
  {
    std::_Yarn<char>::operator=((void **)(a3 + 8), v6);
    free(v7);
  }
  v8 = ":Sun:Sunday:Mon:Monday:Tue:Tuesday:Wed:Wednesday:Thu:Thursday:Fri:Friday:Sat:Saturday";
  if ( *(_QWORD *)(a3 + 8) )
    v8 = *(const char **)(a3 + 8);
  v9 = -1LL;
  v10 = -1LL;
  do
    ++v10;
  while ( v8[v10] );
  v11 = v10 + 1;
  v12 = operator new[](v11);
  if ( v11 )
  {
    v13 = v12 - v8;
    do
    {
      v8[v13] = *v8;
      ++v8;
      --v11;
    }
    while ( v11 );
  }
  *(_QWORD *)(a1 + 16) = v12;
  v14 = _Getmonths();
  v15 = v14;
  if ( v14 )
  {
    std::_Yarn<char>::operator=((void **)(a3 + 24), v14);
    free(v15);
  }
  v16 = ":Jan:January:Feb:February:Mar:March:Apr:April:May:May:Jun:June:Jul:July:Aug:August:Sep:September:Oct:October:Nov"
        ":November:Dec:December";
  if ( *(_QWORD *)(a3 + 24) )
    v16 = *(const char **)(a3 + 24);
  do
    ++v9;
  while ( v16[v9] );
  v17 = v9 + 1;
  v18 = operator new[](v17);
  if ( v17 )
  {
    v19 = v18 - v16;
    do
    {
      v16[v19] = *v16;
      ++v16;
      --v17;
    }
    while ( v17 );
  }
  v20 = 13LL;
  *(_QWORD *)(a1 + 24) = v18;
  v21 = ":AM:am:PM:pm";
  result = operator new[](0xDuLL);
  do
  {
    v21[result - ":AM:am:PM:pm"] = *v21;
    ++v21;
    --v20;
  }
  while ( v20 );
  *(_QWORD *)(a1 + 32) = result;
  return result;
}
