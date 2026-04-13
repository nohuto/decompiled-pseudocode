/*
 * XREFs of _Stoullx @ 0x1800AAFD0
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAPEAX@Z @ 0x1800304F0 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istreambuf.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_K@Z @ 0x180030900 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_180030900.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEAPEAX@Z @ 0x18008F670 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$istream.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEA_K@Z @ 0x18008FA80 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_18008FA80.c)
 *     _Stollx @ 0x1800AA100 (_Stollx.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAPEAX@Z @ 0x1800B01C0 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B01C0.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEA_K@Z @ 0x1800B0420 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B0420.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall Stoullx(char *a1, char **a2, int a3, _DWORD *a4)
{
  char *v7; // r14
  int v8; // ecx
  char *v9; // rbx
  char v10; // r12
  char v11; // cl
  unsigned __int64 v12; // rbp
  char v13; // r13
  int v14; // eax
  void *v15; // rax
  int v16; // eax
  unsigned __int64 result; // rax
  __int64 v18; // rcx
  char *v19; // [rsp+20h] [rbp-48h]
  char *v20; // [rsp+28h] [rbp-40h]
  unsigned __int64 v22; // [rsp+88h] [rbp+20h]

  v7 = a1;
  if ( a4 )
    *a4 = 0;
  v8 = (unsigned __int8)*a1;
  v9 = v7;
  while ( isspace(v8) )
    v8 = (unsigned __int8)*++v9;
  v10 = *v9;
  if ( ((*v9 - 43) & 0xFD) != 0 )
    v10 = 43;
  else
    ++v9;
  if ( !a3 )
    goto LABEL_16;
  if ( (unsigned int)(a3 - 2) > 0x22 )
  {
LABEL_29:
    if ( a2 )
      *a2 = v7;
    return 0LL;
  }
  if ( a3 > 0 )
  {
    if ( a3 == 16 && *v9 == 48 && ((v9[1] - 88) & 0xDF) == 0 )
      goto LABEL_21;
  }
  else
  {
LABEL_16:
    if ( *v9 == 48 )
    {
      if ( ((v9[1] - 88) & 0xDF) == 0 )
      {
        a3 = 16;
LABEL_21:
        v9 += 2;
        goto LABEL_22;
      }
      a3 = 8;
    }
    else
    {
      a3 = 10;
    }
  }
LABEL_22:
  v11 = *v9;
  v19 = v9;
  while ( v11 == 48 )
    v11 = *++v9;
  v12 = 0LL;
  v22 = 0LL;
  v13 = 0;
  v20 = v9;
  v14 = tolower(v11);
  v15 = memchr("0123456789abcdefghijklmnopqrstuvwxyz", v14, a3);
  if ( v15 )
  {
    do
    {
      v22 = v12;
      v13 = (_BYTE)v15 - (unsigned __int8)"0123456789abcdefghijklmnopqrstuvwxyz";
      ++v9;
      v12 = v12 * a3 + v13;
      v16 = tolower(*v9);
      v15 = memchr("0123456789abcdefghijklmnopqrstuvwxyz", v16, a3);
    }
    while ( v15 );
    v7 = a1;
  }
  if ( v19 == v9 )
    goto LABEL_29;
  v18 = &v9[-byte_1800F6930[a3]] - v20;
  if ( v18 >= 0 && (v18 > 0 || v12 < v13 || (v12 - v13) / a3 != v22) )
  {
    *_errno() = 34;
    if ( a4 )
      *a4 = 1;
    v12 = -1LL;
    v10 = 43;
  }
  result = -(__int64)v12;
  if ( v10 != 45 )
    result = v12;
  if ( a2 )
    *a2 = v9;
  return result;
}
