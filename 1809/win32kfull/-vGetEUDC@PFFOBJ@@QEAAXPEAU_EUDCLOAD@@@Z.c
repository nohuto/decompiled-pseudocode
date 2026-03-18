/*
 * XREFs of ?vGetEUDC@PFFOBJ@@QEAAXPEAU_EUDCLOAD@@@Z @ 0x1C00CB794
 * Callers:
 *     ?chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z @ 0x1C00CB2F0 (-chpfeIncrPFF@PFTOBJ@@QEAAKPEAVPFF@@PEAHKPEAU_EUDCLOAD@@@Z.c)
 * Callees:
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C00CB8CC (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 */

void __fastcall PFFOBJ::vGetEUDC(PFFOBJ *this, const wchar_t **a2)
{
  __int64 i; // rdx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int16 *v9; // r8
  __int16 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // [rsp+58h] [rbp+10h] BYREF

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
        v8 = 0LL;
        v15 = v7;
        v9 = (__int16 *)(*(_QWORD *)(v7 + 32) + *(int *)(*(_QWORD *)(v7 + 32) + 16LL));
        v10 = *v9;
        if ( *v9 == 64 )
          v8 = 1LL;
        if ( !_wcsicmp(a2[1], (const wchar_t *)&v9[v8]) )
        {
          v11 = 0LL;
          if ( v10 == 64 )
            v11 = 4LL;
          *(_QWORD *)&(*a2)[v11] = v7;
        }
        v12 = 0LL;
        if ( v10 == 64 )
          v12 = 4LL;
        if ( !*(_QWORD *)&(*a2)[v12] && PFEOBJ::bCheckFamilyName((PFEOBJ *)&v15, a2[1], v10 == 64, 0LL) )
          *(_QWORD *)&(*a2)[v12] = v7;
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
    v13 = *(_QWORD *)this;
    if ( *(_DWORD *)(*(_QWORD *)this + 208LL) == 2 )
      v14 = *(_QWORD *)(v13 + 232);
    else
      v14 = *(_QWORD *)(v13 + 224);
    *((_QWORD *)*a2 + 1) = v14;
  }
}
