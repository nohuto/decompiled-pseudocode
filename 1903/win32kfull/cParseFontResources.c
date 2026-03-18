/*
 * XREFs of cParseFontResources @ 0x1C013B930
 * Callers:
 *     ?UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C013B874 (-UmfdEscParseFontResources@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     pvFindResource @ 0x1C0109604 (pvFindResource.c)
 */

__int64 __fastcall cParseFontResources(__int64 a1, _QWORD *a2, _QWORD *a3, PVOID *a4)
{
  _QWORD *v6; // r15
  __int64 v8; // rcx
  int v10; // edi
  __int64 *v11; // rax
  unsigned __int16 *v12; // r12
  int i; // r15d
  __int64 Resource; // rax
  __int64 *v15; // rcx
  int v16; // [rsp+48h] [rbp-60h] BYREF
  __int64 v17; // [rsp+50h] [rbp-58h] BYREF
  __int64 *v18; // [rsp+58h] [rbp-50h]
  unsigned __int16 *v19; // [rsp+60h] [rbp-48h]
  __int64 *v20; // [rsp+68h] [rbp-40h]

  v6 = a2;
  *a2 = 0LL;
  *a3 = 0LL;
  v8 = *(_QWORD *)(a1 + 16);
  if ( *(_WORD *)v8 == 23117 && *(_DWORD *)(v8 + 60) > *(_DWORD *)(a1 + 24) )
    return 0LL;
  if ( (int)LdrResFindResourceDirectory(v8 | 1, 8LL, 0LL, &v17, 0LL, 0LL, 0) < 0 )
    return 0LL;
  v10 = *(unsigned __int16 *)(v17 + 14);
  if ( !*(_WORD *)(v17 + 14) )
    return 0LL;
  if ( a4 )
  {
    v11 = (__int64 *)EngAllocMem(1u, 8 * v10, 0x64666D42u);
    v18 = v11;
    *a4 = v11;
    if ( v11 )
    {
      v12 = (unsigned __int16 *)(v17 + 16);
      for ( i = 0; ; ++i )
      {
        v19 = v12;
        if ( i >= v10 )
          break;
        Resource = pvFindResource(
                     *(_QWORD *)(a1 + 16) + 1LL,
                     *(_QWORD *)(a1 + 16) + *(unsigned int *)(a1 + 24),
                     *v12,
                     8,
                     &v16);
        v15 = v18;
        *v18 = Resource;
        v18 = v15 + 1;
        v20 = v15 + 1;
        if ( !Resource )
        {
          v10 = 0;
          break;
        }
        v12 += 4;
      }
      v6 = a2;
      goto LABEL_14;
    }
    return 0LL;
  }
LABEL_14:
  if ( v10 <= 0 )
  {
    if ( a4 )
    {
      EngFreeMem(*a4);
      *a4 = 0LL;
    }
  }
  else
  {
    *v6 = *(_QWORD *)(a1 + 16);
    *a3 = *(unsigned int *)(a1 + 24);
  }
  return (unsigned int)v10;
}
