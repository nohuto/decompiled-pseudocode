/*
 * XREFs of ?vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z @ 0x1C008D0F0
 * Callers:
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1C008E7EC (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C008D1F4 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 */

void __fastcall PFFOBJ::vGetEUDC(PFFOBJ *this, const wchar_t **a2)
{
  __int64 i; // rdx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int16 *v8; // rdx
  __int16 v9; // r15
  _BOOL8 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

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
        v7 = *(_QWORD *)(v5 + 8 * v6 + 216);
        v13 = v7;
        v8 = (__int16 *)(*(_QWORD *)(v7 + 32) + *(int *)(*(_QWORD *)(v7 + 32) + 16LL));
        v9 = *v8;
        v10 = *v8 == 64;
        if ( !_wcsicmp(a2[1], (const wchar_t *)&v8[v10]) )
          *(_QWORD *)&(*a2)[4 * v10] = v7;
        if ( !*(_QWORD *)&(*a2)[4 * v10] && PFEOBJ::bCheckFamilyName((PFEOBJ *)&v13, a2[1], v9 == 64, 0LL) )
          *(_QWORD *)&(*a2)[4 * v10] = v7;
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
    *(_QWORD *)*a2 = *(_QWORD *)(v5 + 216);
    v11 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 208LL) == 2 )
      v12 = *(_QWORD *)(v11 + 224);
    else
      v12 = *(_QWORD *)(v11 + 216);
    *((_QWORD *)*a2 + 1) = v12;
  }
}
