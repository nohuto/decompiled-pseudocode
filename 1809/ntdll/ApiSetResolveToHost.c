/*
 * XREFs of ApiSetResolveToHost @ 0x180026388
 * Callers:
 *     LdrpSnapKernelBaseExtensions @ 0x180022CBC (LdrpSnapKernelBaseExtensions.c)
 *     LdrpApplyFileNameRedirection @ 0x180026158 (LdrpApplyFileNameRedirection.c)
 *     ApiSetQueryApiSetPresence @ 0x180028AE0 (ApiSetQueryApiSetPresence.c)
 * Callees:
 *     ApiSetpSearchForApiSetHost @ 0x180025EF4 (ApiSetpSearchForApiSetHost.c)
 *     ApiSetpSearchForApiSet @ 0x18002661C (ApiSetpSearchForApiSet.c)
 */

__int64 __fastcall ApiSetResolveToHost(__int64 a1, unsigned __int16 *a2, __int64 a3, char *a4, __int64 a5)
{
  char v6; // bl
  unsigned __int16 v9; // cx
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rax
  __int64 result; // rax
  unsigned int v13; // eax
  _WORD *v14; // rcx
  unsigned __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // rcx

  v6 = 0;
  *(_QWORD *)a5 = 0LL;
  *(_QWORD *)(a5 + 8) = 0LL;
  v9 = *a2;
  if ( *a2 >= 8u )
  {
    v10 = (_QWORD *)*((_QWORD *)a2 + 1);
    v11 = *v10 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v11 == 0x2D004900500041LL || v11 == 0x2D005400580045LL )
    {
      v13 = v9;
      v14 = (_WORD *)((char *)v10 + v9);
      do
      {
        if ( v13 <= 1 )
          break;
        v13 -= 2;
        --v14;
      }
      while ( *v14 != 45 );
      v15 = (unsigned __int16)v13 >> 1;
      if ( v15 )
      {
        v16 = ApiSetpSearchForApiSet(a1, v10, v15);
        if ( v16 )
        {
          if ( a3 && *(_DWORD *)(v16 + 20) > 1u )
          {
            v17 = ApiSetpSearchForApiSetHost(v16, *(const WCHAR **)(a3 + 8), *(_WORD *)a3 >> 1, a1);
            goto LABEL_13;
          }
          if ( *(_DWORD *)(v16 + 20) )
          {
            v17 = a1 + *(unsigned int *)(v16 + 16);
LABEL_13:
            v6 = 1;
            *(_QWORD *)(a5 + 8) = a1 + *(unsigned int *)(v17 + 12);
            *(_WORD *)(a5 + 2) = *(_WORD *)(v17 + 16);
            *(_WORD *)a5 = *(_WORD *)(v17 + 16);
          }
        }
      }
    }
  }
  result = 0LL;
  *a4 = v6;
  return result;
}
