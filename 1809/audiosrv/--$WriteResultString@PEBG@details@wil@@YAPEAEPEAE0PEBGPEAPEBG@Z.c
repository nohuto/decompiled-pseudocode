/*
 * XREFs of ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x1800ACEF4
 * Callers:
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x1800ADDE8 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x1800ADF28 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     ?ResultStringSize@details@wil@@YA_KPEBG@Z @ 0x1800ADD00 (-ResultStringSize@details@wil@@YA_KPEBG@Z.c)
 *     memcpy_s_1 @ 0x1800AE678 (memcpy_s_1.c)
 */

char *__fastcall wil::details::WriteResultString<unsigned short const *>(
        char *Destination,
        const unsigned __int16 *a2,
        wil::details *a3,
        _QWORD *a4)
{
  wil::details *v5; // rcx
  unsigned __int64 v7; // rax
  const void *v8; // rcx
  __int64 v9; // r10
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  char *v14; // rax
  __int16 v16; // [rsp+40h] [rbp+8h] BYREF

  v5 = (wil::details *)&v16;
  v16 = 0;
  if ( a3 )
    v5 = a3;
  v7 = wil::details::ResultStringSize(v5, a2);
  v10 = (unsigned __int64)(v9 - (_QWORD)Destination) >> 1;
  v11 = v7 >> 1;
  v12 = v7 >> 1;
  if ( v7 >> 1 >= v10 )
    v12 = v10;
  v13 = 2 * v12;
  memcpy_s_1(Destination, 2 * v10, v8, 2 * v12);
  if ( a4 )
  {
    v14 = Destination;
    if ( v12 <= 1 )
      v14 = 0LL;
    *a4 = v14;
  }
  if ( v12 < v11 && v12 )
    *(_WORD *)&Destination[v13 - 2] = 0;
  return &Destination[v13];
}
