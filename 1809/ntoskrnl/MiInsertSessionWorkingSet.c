/*
 * XREFs of MiInsertSessionWorkingSet @ 0x1401B5044
 * Callers:
 *     MiAllowWorkingSetExpansion @ 0x1400F3394 (MiAllowWorkingSetExpansion.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 */

char __fastcall MiInsertSessionWorkingSet(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *v2; // rax
  _QWORD *v4; // rdx
  bool v5; // al
  unsigned int v6; // r8d
  _QWORD *v7; // rcx

  v1 = (_QWORD *)qword_14043C008;
  v2 = (_QWORD *)(a1 + 144);
  if ( *(__int64 **)qword_14043C008 != &qword_14043C000 )
    __fastfail(3u);
  *v2 = &qword_14043C000;
  *(_QWORD *)(a1 + 152) = v1;
  *v1 = v2;
  v4 = (_QWORD *)qword_14043B088;
  qword_14043C008 = a1 + 144;
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 8);
  if ( qword_14043B088 )
  {
    while ( 1 )
    {
      if ( v6 >= *((_DWORD *)v4 - 38) )
      {
        v7 = (_QWORD *)v4[1];
        if ( !v7 )
        {
          v5 = 1;
          return RtlAvlInsertNodeEx(
                   (unsigned __int64 *)&qword_14043B088,
                   (unsigned __int64)v4,
                   v5,
                   (_QWORD *)(a1 + 160));
        }
      }
      else
      {
        v7 = (_QWORD *)*v4;
        if ( !*v4 )
          return RtlAvlInsertNodeEx(
                   (unsigned __int64 *)&qword_14043B088,
                   (unsigned __int64)v4,
                   v5,
                   (_QWORD *)(a1 + 160));
      }
      v4 = v7;
    }
  }
  return RtlAvlInsertNodeEx((unsigned __int64 *)&qword_14043B088, (unsigned __int64)v4, v5, (_QWORD *)(a1 + 160));
}
