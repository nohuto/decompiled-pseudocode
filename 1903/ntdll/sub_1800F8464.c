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

char __fastcall sub_1800F8464(size_t Size, __int64 a2, __int64 a3, __int64 a4, void *Src, size_t Sizea)
{
  unsigned int v6; // ebx
  size_t v8; // rsi
  int v9; // r14d
  unsigned __int16 v10; // r15
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  char result; // al
  __int64 v14; // [rsp+20h] [rbp-238h] BYREF
  __int64 v15; // [rsp+28h] [rbp-230h]
  __int64 v16; // [rsp+30h] [rbp-228h]
  _DWORD v17[130]; // [rsp+38h] [rbp-220h] BYREF

  v6 = dword_1801627EC;
  v8 = (unsigned int)Size;
  v9 = a3;
  v10 = a2;
  v11 = (unsigned int)(dword_1801627EC + Size);
  if ( (unsigned int)v11 < dword_1801627EC )
    return 0;
  v12 = qword_180166A10;
  if ( !qword_180166A10 )
    return 0;
  if ( v11 > *(_QWORD *)qword_180166A10 )
  {
    if ( (unsigned __int8)sub_1800F8558(Size, a2, a3, a4, v14, v15, v16, v17[0]) )
    {
      v6 = 88;
      *(_DWORD *)(qword_180166A10 + 60) = 0;
      v12 = qword_180166A10;
      goto LABEL_6;
    }
    return 0;
  }
LABEL_6:
  LODWORD(v14) = v8;
  HIDWORD(v14) = v10;
  LODWORD(v15) = v9;
  v16 = a4;
  if ( Sizea <= 0x200 )
    memmove(v17, Src, Sizea);
  memmove((void *)(v12 + v6), &v14, v8);
  dword_1801627EC = v8 + v6;
  result = 1;
  ++*(_DWORD *)(qword_180166A10 + 60);
  return result;
}
