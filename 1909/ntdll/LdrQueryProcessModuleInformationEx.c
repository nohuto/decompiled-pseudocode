/*
 * XREFs of LdrQueryProcessModuleInformationEx @ 0x1800758A4
 * Callers:
 *     LdrQueryProcessModuleInformation @ 0x1800026E0 (LdrQueryProcessModuleInformation.c)
 *     RtlQueryProcessModuleInformation @ 0x1800757BC (RtlQueryProcessModuleInformation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformationEx(
        __int64 a1,
        char a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned int v6; // esi
  unsigned int v7; // ebx
  unsigned __int64 i; // rdi
  int v9; // r12d
  __int64 v10; // r14
  int v11; // eax
  unsigned int v12; // eax
  _DWORD *v14; // [rsp+38h] [rbp-A0h]
  __int64 v15; // [rsp+48h] [rbp-90h]
  __int64 v16; // [rsp+50h] [rbp-88h]
  __int64 v17; // [rsp+70h] [rbp-68h]
  char v18; // [rsp+E8h] [rbp+10h]

  v18 = a2;
  v6 = 8;
  if ( a4 < 8 )
  {
    v7 = -1073741820;
    v14 = 0LL;
  }
  else
  {
    *a3 = 0;
    v14 = a3 + 2;
    v7 = 0;
  }
  for ( i = 0LL; i < (unsigned __int64)(a2 & 1) + 1; ++i )
  {
    v9 = 10240;
    LODWORD(v10) = 1;
    if ( a5 )
      *a5 = v6;
    v17 = a2 & 2;
    if ( (a2 & 2) != 0 )
      _guard_dispatch_icall_fptr();
    v11 = _guard_dispatch_icall_fptr();
    if ( v11 < 0 )
      goto LABEL_23;
    if ( !v16 )
      goto LABEL_25;
    v11 = _guard_dispatch_icall_fptr();
    if ( v11 < 0 )
    {
LABEL_23:
      v7 = v11;
    }
    else
    {
      while ( v15 != v16 )
      {
        if ( !v9 )
        {
          v7 = -1073741271;
          break;
        }
        --v9;
        v6 += 296 * v10;
        LODWORD(v10) = 1;
        v12 = a4;
        if ( a4 < v6 )
        {
          v7 = -1073741820;
        }
        else
        {
          v11 = _guard_dispatch_icall_fptr();
          if ( v11 < 0 )
            goto LABEL_23;
          v10 = *((_QWORD *)v14 + 2) != 0LL;
          v14 += 74 * v10;
          v12 = a4;
        }
        if ( a3 && v12 >= 0x130 )
          *a3 += v10;
        v11 = _guard_dispatch_icall_fptr();
        if ( v11 < 0 )
          goto LABEL_23;
      }
    }
LABEL_25:
    if ( v17 )
      _guard_dispatch_icall_fptr();
    if ( a5 )
      *a5 = v6;
    a2 = v18;
  }
  return v7;
}
