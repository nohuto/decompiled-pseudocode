/*
 * XREFs of ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x18004A718
 * Callers:
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x18004A300 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18004A40C (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     memcpy_s @ 0x18004A7CC (memcpy_s.c)
 */

char *__fastcall wil::details::WriteResultString<unsigned short const *>(
        char *Destination,
        __int64 a2,
        __int16 *a3,
        _QWORD *a4)
{
  __int16 *v5; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  __int64 v12; // r14
  char *v13; // rax
  __int16 v15; // [rsp+40h] [rbp+8h] BYREF

  v15 = 0;
  v5 = &v15;
  if ( a3 )
    v5 = a3;
  if ( v5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v5[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 2LL;
  }
  v9 = v8 >> 1;
  v10 = (unsigned __int64)(a2 - (_QWORD)Destination) >> 1;
  v11 = v9;
  if ( v9 >= v10 )
    v11 = v10;
  v12 = 2 * v11;
  memcpy_s(Destination, 2 * v10, v5, 2 * v11);
  if ( a4 )
  {
    v13 = Destination;
    if ( v11 <= 1 )
      v13 = 0LL;
    *a4 = v13;
  }
  if ( v11 < v9 && v11 )
    *(_WORD *)&Destination[v12 - 2] = 0;
  return &Destination[v12];
}
