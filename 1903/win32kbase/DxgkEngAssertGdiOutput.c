/*
 * XREFs of DxgkEngAssertGdiOutput @ 0x1C0044640
 * Callers:
 *     <none>
 * Callees:
 *     hdevEnumerate @ 0x1C0041E00 (hdevEnumerate.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall DxgkEngAssertGdiOutput(__int64 a1, __int64 a2, __int64 a3, bool *a4)
{
  unsigned int v5; // r14d
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v8; // rcx
  BOOL v9; // edi
  struct PDEV *v10; // rax
  struct PDEV *v11; // rbx
  int v12; // esi
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *i; // rcx
  struct PDEV *v14; // rax
  struct PDEV *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 (__fastcall *v20)(_QWORD, _QWORD); // rax
  _BOOL8 result; // rax
  __int64 v22; // rax
  __int64 (__fastcall *v23)(_QWORD, __int64); // rax

  v5 = a3;
  if ( gOldModeChange )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    WdLogEvent5_WdAssertion(v22);
  }
  v8 = 0LL;
  v9 = 1;
  while ( 1 )
  {
    v10 = hdevEnumerate(v8, a2, a3);
    v11 = v10;
    if ( !v10 )
      break;
    if ( (*((_DWORD *)v10 + 10) & 0x20400) == 0 )
    {
      v18 = *((_QWORD *)v10 + 322);
      if ( *(_QWORD *)(v18 + 240) == a1 )
      {
        v19 = *(unsigned int *)(v18 + 256);
        if ( (unsigned int)v19 < v5 )
        {
          *((_DWORD *)v11 + 654) = -(*(_BYTE *)(v19 + a2) != 0) - 2147483645;
          v20 = (__int64 (__fastcall *)(_QWORD, _QWORD))*((_QWORD *)v11 + 341);
          if ( v20 )
            LODWORD(v20) = v20(*((_QWORD *)v11 + 225), 0LL);
          *((_DWORD *)v11 + 654) = 0;
          v9 = v9 && (_DWORD)v20;
        }
      }
    }
    v8 = v11;
  }
  v12 = 0;
  for ( i = 0LL; ; i = v15 )
  {
    v14 = hdevEnumerate(i, a2, a3);
    v15 = v14;
    if ( !v14 )
      break;
    if ( (*((_DWORD *)v14 + 10) & 0x20400) == 0 )
    {
      v16 = *((_QWORD *)v14 + 322);
      if ( *(_QWORD *)(v16 + 240) == a1 )
      {
        v17 = *(unsigned int *)(v16 + 256);
        if ( (unsigned int)v17 < v5 )
        {
          if ( *(_BYTE *)(v17 + a2) )
          {
            *((_DWORD *)v15 + 654) = 0x80000000;
            v23 = (__int64 (__fastcall *)(_QWORD, __int64))*((_QWORD *)v15 + 341);
            if ( v23 )
              LODWORD(v23) = v23(*((_QWORD *)v15 + 225), 1LL);
            *((_DWORD *)v15 + 654) = 0;
            v9 = v9 && (_DWORD)v23;
            v12 = 1;
          }
        }
      }
    }
  }
  result = v9;
  *a4 = v12 != 0;
  return result;
}
