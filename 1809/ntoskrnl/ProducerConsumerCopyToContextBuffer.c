/*
 * XREFs of ProducerConsumerCopyToContextBuffer @ 0x14056BE40
 * Callers:
 *     PopCountDataAsProduced @ 0x14056BD44 (PopCountDataAsProduced.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 */

void *__fastcall ProducerConsumerCopyToContextBuffer(char *Src, size_t Size, __int64 a3, char *a4)
{
  __int64 v4; // r11
  void *v6; // r10
  char *v8; // rcx
  unsigned int v9; // ebx
  int v10; // r8d
  __int64 v11; // rdi
  void *result; // rax

  v4 = *(unsigned int *)(a3 + 8);
  v6 = *(void **)a3;
  v8 = &a4[-v4];
  if ( (unsigned __int64)a4 < v4 + *(_QWORD *)a3 )
    v8 = a4;
  v9 = 0;
  v10 = (_DWORD)v8 - (_DWORD)v6;
  if ( (int)v8 - (int)v6 + (int)Size > (unsigned int)v4 )
  {
    v9 = Size + v10 - v4;
    LODWORD(Size) = v4 - v10;
  }
  v11 = (unsigned int)Size;
  result = memmove(v8, Src, (unsigned int)Size);
  if ( v9 )
    return memmove(*(void **)a3, &Src[v11], v9);
  return result;
}
