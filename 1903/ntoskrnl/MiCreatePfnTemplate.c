/*
 * XREFs of MiCreatePfnTemplate @ 0x140188C84
 * Callers:
 *     MiInitializeUnusablePfns @ 0x140188A34 (MiInitializeUnusablePfns.c)
 *     MxCreateFreePfns @ 0x1409F2AC8 (MxCreateFreePfns.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x1400DBC30 (MiUpdatePageFileHighInPte.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiCreatePfnTemplate(unsigned int a1, unsigned int a2, char a3, int a4, __int64 *a5)
{
  __int64 v6; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 result; // rax
  _QWORD v11[6]; // [rsp+20h] [rbp-38h] BYREF

  v6 = a2;
  v8 = a1;
  memset(a5, 0, 0x30uLL);
  if ( (_DWORD)v8 == -1 )
    v9 = 0LL;
  else
    v9 = MiLargePageContainingFrames[v8] & 0xFFFFFFFFFLL;
  a5[5] = v9;
  *((_BYTE *)a5 + 34) ^= (a4 ^ *((_BYTE *)a5 + 34)) & 7;
  *((_BYTE *)a5 + 34) = *((_BYTE *)a5 + 34) & 0x3F | 0x40;
  memset(v11, 0, sizeof(v11));
  v11[5] = a5[5] & 0x3FFFFFFFFFFFFFFLL | (v6 << 58);
  a5[5] = v11[5];
  a5[5] = a5[5] & 0xFFFFFFCFFFFFFFFFuLL | ((unsigned __int64)(a3 & 3) << 36) | 0x20000000000000LL;
  result = MiUpdatePageFileHighInPte(a5[2], -(__int64)(a4 == 0) & 0xFFFFFFFDLL);
  a5[2] = result;
  return result;
}
