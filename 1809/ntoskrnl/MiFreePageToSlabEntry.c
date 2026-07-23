/*
 * XREFs of MiFreePageToSlabEntry @ 0x1402C22DC
 * Callers:
 *     MiFreePageToSlabAllocator @ 0x1402C2170 (MiFreePageToSlabAllocator.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiFreePageToSlabEntry(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r9d
  __int64 v5; // r11
  volatile signed __int32 *v6; // r8
  unsigned __int64 result; // rax
  int v8; // r9d

  v4 = (int)a1 / 48 - *(_DWORD *)(a2 + 24);
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 120));
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 32));
  LOBYTE(a1) = 1;
  v5 = v4 & 0x1F;
  v6 = (volatile signed __int32 *)(*(_QWORD *)(a2 + 48) + 4 * ((unsigned __int64)v4 >> 5));
  if ( (unsigned __int64)(v5 + 1) <= 0x20 )
  {
    result = (unsigned int)~(1 << v5);
LABEL_9:
    _InterlockedAnd(v6, result);
    goto LABEL_10;
  }
  v8 = v4 & 0x1F;
  if ( !v8 )
    goto LABEL_8;
  result = (unsigned int)~(((1 << (32 - v8)) - 1) << v5);
  _InterlockedAnd(v6++, result);
  a1 = 1 - (32 - v8);
  if ( a1 >= 0x20 )
  {
    result = (unsigned __int64)a1 >> 5;
    do
    {
      *v6 = 0;
      a1 -= 32;
      ++v6;
      --result;
    }
    while ( result );
  }
  if ( a1 )
  {
LABEL_8:
    result = (unsigned int)(-1 << a1);
    goto LABEL_9;
  }
LABEL_10:
  if ( *(_DWORD *)(a2 + 120) == 512 )
    _InterlockedOr((volatile signed __int32 *)(a3 + 52), 1u);
  return result;
}
