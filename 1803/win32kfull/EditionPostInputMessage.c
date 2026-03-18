/*
 * XREFs of EditionPostInputMessage @ 0x1C00F7B00
 * Callers:
 *     <none>
 * Callees:
 *     PostInputMessage @ 0x1C0019B84 (PostInputMessage.c)
 */

struct tagQMSG *__fastcall EditionPostInputMessage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        _DWORD *a11,
        __int64 a12)
{
  __int64 v12; // rcx
  __int64 v13; // r10
  _DWORD *v14; // rax

  v12 = *(_QWORD *)(a1 + 72);
  v13 = 0LL;
  if ( *(char *)(*(_QWORD *)(v12 + 40) + 19LL) >= 0 )
  {
    if ( a3 - 512 > 0xE )
    {
      if ( a3 - 581 > 0x12 )
        return PostInputMessage(
                 *(_QWORD *)(*(_QWORD *)(v12 + 16) + 424LL),
                 a2,
                 a3,
                 a4,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 v13,
                 a12);
      v14 = a11;
      a2 = v12;
      if ( !a11 )
        return PostInputMessage(
                 *(_QWORD *)(*(_QWORD *)(v12 + 16) + 424LL),
                 a2,
                 a3,
                 a4,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 v13,
                 a12);
    }
    else
    {
      a4 = (unsigned int)a4 & 0xFFFF0000;
      v14 = a11;
      if ( !a11 || *a11 != 2 )
        return PostInputMessage(
                 *(_QWORD *)(*(_QWORD *)(v12 + 16) + 424LL),
                 a2,
                 a3,
                 a4,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 v13,
                 a12);
    }
    v13 = *((_QWORD *)v14 + 1);
    return PostInputMessage(*(_QWORD *)(*(_QWORD *)(v12 + 16) + 424LL), a2, a3, a4, a5, a6, a7, a8, a9, a10, v13, a12);
  }
  return 0LL;
}
