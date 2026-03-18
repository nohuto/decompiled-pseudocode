/*
 * XREFs of ?vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z @ 0x1C0080BC0
 * Callers:
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1C00C8774 (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C00CCC08 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 */

void __fastcall PFFOBJ::vGetEUDC(PFFOBJ *this, const wchar_t **a2)
{
  __int64 i; // rdx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  _WORD *v8; // rdx
  bool v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  for ( i = 0LL; i < 8; i += 4LL )
    *(_QWORD *)&(*a2)[i] = 0LL;
  v5 = *(_QWORD *)this;
  if ( a2[1] )
  {
    v6 = 0LL;
    if ( *(_DWORD *)(v5 + 208) )
    {
      do
      {
        v7 = *(_QWORD *)(v5 + 8 * v6 + 224);
        v12 = v7;
        v8 = (_WORD *)(*(_QWORD *)(v7 + 32) + *(int *)(*(_QWORD *)(v7 + 32) + 16LL));
        v9 = *v8 == 64;
        if ( !_wcsicmp(a2[1], &v8[v9]) )
          *(_QWORD *)&(*a2)[4 * v9] = v7;
        if ( !*(_QWORD *)&(*a2)[4 * v9] && PFEOBJ::bCheckFamilyName((PFEOBJ *)&v12, a2[1], v9, 0LL) )
          *(_QWORD *)&(*a2)[4 * v9] = v7;
        v5 = *(_QWORD *)this;
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *(_DWORD *)(*(_QWORD *)this + 208LL) );
    }
    if ( !*((_QWORD *)*a2 + 1) )
      *((_QWORD *)*a2 + 1) = *(_QWORD *)*a2;
  }
  else
  {
    *(_QWORD *)*a2 = *(_QWORD *)(v5 + 224);
    v10 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 208LL) == 2 )
      v11 = *(_QWORD *)(v10 + 232);
    else
      v11 = *(_QWORD *)(v10 + 224);
    *((_QWORD *)*a2 + 1) = v11;
  }
}
