/*
 * XREFs of MiUpdateCfgSystemWideBitmap @ 0x140650904
 * Callers:
 *     MiRelocateImageAgain @ 0x140650760 (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x140651084 (MiRelocateImage.c)
 * Callees:
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1405F4130 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiSelectBitMapForImage @ 0x140650C58 (MiSelectBitMapForImage.c)
 */

__int64 __fastcall MiUpdateCfgSystemWideBitmap(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  int v7; // ebx
  __int64 v8; // r10
  __int64 result; // rax

  v4 = *a1;
  if ( *((_DWORD *)a1 + 22) == -1 || (a1[7] & 0x10000000) != 0 )
    return 0LL;
  v5 = 2 * (a2 >> 4);
  v6 = 2 * ((unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 24), -1LL, -1LL) >> 4);
  v7 = 0;
  do
  {
    v8 = qword_140439EC8;
    if ( !v7 && !(unsigned int)MiSelectBitMapForImage(v4) )
      v8 = qword_140439EB8;
    result = MiUpdateCfgSystemWideBitmapWorker(v8, a3, v5, v6);
    if ( (int)result < 0 )
      break;
    ++v7;
    if ( !a3 )
      break;
  }
  while ( v7 < 1 );
  return result;
}
