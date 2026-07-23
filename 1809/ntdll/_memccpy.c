/*
 * XREFs of _memccpy @ 0x180090CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__cdecl memccpy(void *Dst, const void *Src, int Val, size_t MaxCount)
{
  char *v4; // rdx
  char v5; // al

  if ( MaxCount )
  {
    v4 = (char *)Src - 1;
    do
    {
      ++v4;
      Dst = (char *)Dst + 1;
      v5 = *v4;
      *((char *)Dst - 1) = *v4;
      if ( v5 == (_BYTE)Val )
        break;
      --MaxCount;
    }
    while ( MaxCount );
  }
  return (void *)((unsigned __int64)Dst & -(__int64)(MaxCount != 0));
}
