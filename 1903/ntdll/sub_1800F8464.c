/*
 * XREFs of sub_1800F8464 @ 0x1800F8464
 * Callers:
 *     sub_1800F7C30 @ 0x1800F7C30 (sub_1800F7C30.c)
 *     sub_1800F7DA0 @ 0x1800F7DA0 (sub_1800F7DA0.c)
 *     sub_1800F8260 @ 0x1800F8260 (sub_1800F8260.c)
 * Callees:
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800F8558 @ 0x1800F8558 (sub_1800F8558.c)
 */

char __fastcall sub_1800F8464(size_t Size, unsigned __int16 a2, int a3, __int64 a4, void *Src, size_t Sizea)
{
  unsigned int v6; // ebx
  size_t v8; // rsi
  unsigned __int64 v11; // rax
  char *v12; // rdi
  char result; // al
  _DWORD v14[4]; // [rsp+20h] [rbp-238h] BYREF
  __int64 v15; // [rsp+30h] [rbp-228h]
  _BYTE v16[520]; // [rsp+38h] [rbp-220h] BYREF

  v6 = dword_1801627EC;
  v8 = (unsigned int)Size;
  v11 = (unsigned int)(dword_1801627EC + Size);
  if ( (unsigned int)v11 < dword_1801627EC )
    return 0;
  v12 = (char *)qword_180166A10;
  if ( !qword_180166A10 )
    return 0;
  if ( v11 > *(_QWORD *)qword_180166A10 )
  {
    if ( (unsigned __int8)sub_1800F8558() )
    {
      v6 = 88;
      *((_DWORD *)qword_180166A10 + 15) = 0;
      v12 = (char *)qword_180166A10;
      goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  v14[0] = v8;
  v14[1] = a2;
  v14[2] = a3;
  v15 = a4;
  if ( Sizea <= 0x200 )
    memmove(v16, Src, Sizea);
  memmove(&v12[v6], v14, v8);
  dword_1801627EC = v8 + v6;
  result = 1;
  ++*((_DWORD *)qword_180166A10 + 15);
  return result;
}
