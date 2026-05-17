/*
 * XREFs of RtlMakeSelfRelativeSD @ 0x180068080
 * Callers:
 *     RtlAbsoluteToSelfRelativeSD @ 0x180068060 (RtlAbsoluteToSelfRelativeSD.c)
 *     sub_180086A04 @ 0x180086A04 (sub_180086A04.c)
 * Callees:
 *     sub_1800681D0 @ 0x1800681D0 (sub_1800681D0.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall RtlMakeSelfRelativeSD(int *a1, char *a2, unsigned int *a3)
{
  size_t v6; // r12
  size_t v7; // r15
  size_t v8; // r14
  size_t v9; // r13
  unsigned int v10; // ecx
  int v11; // eax
  char *v12; // rdi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  void *v17; // [rsp+50h] [rbp-28h] BYREF
  void *Src; // [rsp+58h] [rbp-20h] BYREF
  void *v19; // [rsp+60h] [rbp-18h] BYREF
  void *v20; // [rsp+68h] [rbp-10h] BYREF
  size_t v21; // [rsp+C0h] [rbp+48h] BYREF
  size_t v22; // [rsp+C8h] [rbp+50h] BYREF
  size_t Size; // [rsp+D0h] [rbp+58h] BYREF
  size_t v24; // [rsp+D8h] [rbp+60h] BYREF

  sub_1800681D0(
    (_DWORD)a1,
    (unsigned int)&v19,
    (unsigned int)&v21,
    (unsigned int)&v20,
    (__int64)&v22,
    (__int64)&Src,
    (__int64)&Size,
    (__int64)&v17,
    (__int64)&v24);
  v6 = (unsigned int)v21;
  v7 = (unsigned int)v22;
  v8 = (unsigned int)v24;
  v9 = (unsigned int)Size;
  v10 = Size + v21 + v22 + v24 + 20;
  if ( v10 > *a3 )
  {
    *a3 = v10;
    return 3221225507LL;
  }
  else if ( a2 )
  {
    memset(a2, 0, v10);
    v11 = *a1;
    v12 = a2 + 20;
    *(_DWORD *)a2 = v11;
    if ( (_DWORD)v8 )
    {
      memmove(a2 + 20, v17, v8);
      v12 += v8;
      v13 = 20;
    }
    else
    {
      v13 = 0;
    }
    *((_DWORD *)a2 + 3) = v13;
    if ( (_DWORD)v9 )
    {
      memmove(v12, Src, v9);
      v14 = (int)v12;
      v12 += v9;
      v15 = v14 - (_DWORD)a2;
    }
    else
    {
      v15 = 0;
    }
    *((_DWORD *)a2 + 4) = v15;
    if ( (_DWORD)v6 )
    {
      memmove(v12, v19, v6);
      *((_DWORD *)a2 + 1) = (_DWORD)v12 - (_DWORD)a2;
      v12 += v6;
    }
    if ( (_DWORD)v7 )
    {
      memmove(v12, v20, v7);
      *((_DWORD *)a2 + 2) = (_DWORD)v12 - (_DWORD)a2;
    }
    *((_WORD *)a2 + 1) |= 0x8000u;
    return 0LL;
  }
  else
  {
    return 3221225485LL;
  }
}
