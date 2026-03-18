/*
 * XREFs of ?STROBJ_bGetAdvanceWidthsLinked@@YAHPEAVESTROBJ@@KKPEAU_POINTQF@@@Z @ 0x1C02B60E4
 * Callers:
 *     STROBJ_bGetAdvanceWidths @ 0x1C02B7930 (STROBJ_bGetAdvanceWidths.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall STROBJ_bGetAdvanceWidthsLinked(struct ESTROBJ *a1, unsigned int a2, int a3, struct _POINTQF *a4)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  _DWORD *v6; // r10
  __int64 v7; // r8
  struct _POINTQF *v8; // rax

  v4 = a2 + a3;
  v5 = 0;
  v6 = (_DWORD *)*((_QWORD *)a1 + 26);
  *((_QWORD *)a1 + 27) = v6;
  v7 = *((_QWORD *)a1 + 8);
  *((_QWORD *)a1 + 28) = v7;
  while ( v5 < v4 )
  {
    if ( *v6 == *((_DWORD *)a1 + 59) )
    {
      if ( v5 >= a2 )
      {
        v8 = *(struct _POINTQF **)(v7 + 8);
        if ( *(_DWORD *)(**((_QWORD **)a1 + 7) + 640LL) )
        {
          a4->x.HighPart = v8->y.HighPart;
          a4->x.LowPart = 0;
          a4->y.QuadPart = 0LL;
        }
        else
        {
          *a4 = v8[3];
        }
        ++a4;
        v7 = *((_QWORD *)a1 + 28);
        v6 = (_DWORD *)*((_QWORD *)a1 + 27);
      }
      ++v5;
    }
    v7 += 24LL;
    *((_QWORD *)a1 + 28) = v7;
    *((_QWORD *)a1 + 27) = ++v6;
  }
  return 1LL;
}
