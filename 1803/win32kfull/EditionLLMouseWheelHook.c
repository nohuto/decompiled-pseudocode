/*
 * XREFs of EditionLLMouseWheelHook @ 0x1C01A6E90
 * Callers:
 *     <none>
 * Callees:
 *     PhkFirstValid @ 0x1C00D7E40 (PhkFirstValid.c)
 *     MSGLUA_GPQFOREGROUND @ 0x1C0135EDC (MSGLUA_GPQFOREGROUND.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C013A3EC (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1C01A5FC0 (-IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z.c)
 */

__int64 __fastcall EditionLLMouseWheelHook(__int64 a1, __int64 a2, struct tagUIPI_INFO_INT *a3, __int64 a4)
{
  int v4; // ebp
  __int64 v6; // r12
  char v8; // si
  __int64 v9; // rcx
  struct tagHOOK *Valid; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // [rsp+60h] [rbp+8h] BYREF

  v4 = a4;
  v6 = (unsigned int)a2;
  v8 = *(_BYTE *)(a1 + 12) & 1;
  if ( (unsigned __int8)IsInputThread(a1, a2, a3, a4) )
    v9 = gptiRit;
  else
    v9 = gptiCurrent;
  Valid = (struct tagHOOK *)PhkFirstValid(v9, 14);
  if ( Valid )
  {
    v11 = *(_QWORD *)(gptiCurrent + 1360LL);
    *(_QWORD *)(gptiCurrent + 1360LL) = a1;
    v12 = xxxCallHook2(Valid, 0, v6, (unsigned int *)a1, &v16, 0);
    *(_QWORD *)(gptiCurrent + 1360LL) = v11;
    if ( v12 )
      return 1LL;
    if ( v4 && !IsGpqForegroundAccessibleOnInputThread(v8, a3) )
    {
      MSGLUA_GPQFOREGROUND(v15, v14);
      return 1LL;
    }
  }
  return 0LL;
}
