/*
 * XREFs of EditionLLMouseButtonHook @ 0x1C00D73E0
 * Callers:
 *     <none>
 * Callees:
 *     PhkFirstValid @ 0x1C00D7E40 (PhkFirstValid.c)
 *     MSGLUA_GPQFOREGROUND @ 0x1C0135EDC (MSGLUA_GPQFOREGROUND.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C013A3EC (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1C01A5FC0 (-IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z.c)
 */

__int64 __fastcall EditionLLMouseButtonHook(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  BOOL v9; // esi
  struct tagHOOK *Valid; // r10
  __int64 v11; // r15
  bool v12; // dl
  __int64 v13; // r12
  __int64 v14; // r13
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v18; // rcx
  int v19; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+80h] [rbp+18h]

  LODWORD(v20) = a3;
  if ( *(_DWORD *)(a1 + 84) == 2 )
    v7 = *(_QWORD *)(a1 + 72);
  else
    v7 = 0LL;
  if ( (unsigned __int8)IsInputThread() )
    v8 = gptiRit;
  else
    v8 = gptiCurrent;
  v9 = *(_DWORD *)(a2 + 12) & 1;
  Valid = (struct tagHOOK *)PhkFirstValid(v8, 14LL);
  if ( Valid )
  {
    v11 = *(_QWORD *)(gptiCurrent + 1360LL);
    v12 = 0;
    v13 = *(_QWORD *)(gptiCurrent + 1344LL);
    v14 = *(_QWORD *)(gptiCurrent + 1352LL);
    *(_QWORD *)(gptiCurrent + 1360LL) = a2;
    if ( v7 )
    {
      v15 = *(_QWORD **)(*(_QWORD *)(v7 + 16) + 416LL);
      if ( *v15 == gpepCSRSS )
      {
        *(_DWORD *)(gptiCurrent + 1356LL) = 0;
        *(_DWORD *)(gptiCurrent + 1352LL) = 0x2000;
      }
      else
      {
        *(_QWORD *)(gptiCurrent + 1352LL) = v15[109];
      }
      v12 = 1;
    }
    else
    {
      *(_DWORD *)(gptiCurrent + 1352LL) = -1;
      *(_DWORD *)(gptiCurrent + 1356LL) = -1;
    }
    if ( !v9 || *(_DWORD *)(a4 + 8) )
    {
      *(_DWORD *)(gptiCurrent + 1344LL) = -1;
      *(_DWORD *)(gptiCurrent + 1348LL) = -1;
    }
    else
    {
      *(_QWORD *)(gptiCurrent + 1344LL) = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 872LL);
    }
    v16 = xxxCallHook2(Valid, 0, (unsigned int)v20, a2, &v19, v12);
    *(_QWORD *)(gptiCurrent + 1344LL) = v13;
    *(_QWORD *)(gptiCurrent + 1352LL) = v14;
    *(_QWORD *)(gptiCurrent + 1360LL) = v11;
    if ( v16 )
      return 1LL;
    if ( a5 && !IsGpqForegroundAccessibleOnInputThread(v9, (const struct tagUIPI_INFO_INT *)a4) )
    {
      MSGLUA_GPQFOREGROUND(v18);
      return 1LL;
    }
  }
  return 0LL;
}
