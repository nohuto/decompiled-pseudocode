/*
 * XREFs of AcpiCStateIdlePrepare @ 0x1C0001010
 * Callers:
 *     PepIdlePrepare @ 0x1C000DF00 (PepIdlePrepare.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiCStateIdlePrepare(__int64 *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ecx
  char v4; // dl
  unsigned __int64 v5; // r8
  __int64 v6; // rbp
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // r8
  __int64 result; // rax
  unsigned int v10; // esi
  __int64 v11; // rcx
  unsigned __int64 v12; // r10
  __int64 i; // rdx
  bool v14; // zf

  v1 = *a1;
  v3 = *((_DWORD *)a1 + 10);
  v4 = 0;
  if ( v3 == -1 )
  {
    if ( *((_BYTE *)a1 + 50) )
    {
      v4 = 1;
      LODWORD(v6) = *(unsigned __int8 *)(v1 + 20) - 1;
      v7 = *(_BYTE *)((unsigned int)v6 + v1 + 21);
    }
    else
    {
      v5 = a1[1] - *(_QWORD *)(v1 + 32);
      LODWORD(v6) = *(_DWORD *)(v1 + 16);
      if ( v5 >= *((unsigned int *)a1 + 11) )
      {
        v12 = a1[2] - *(_QWORD *)(v1 + 24);
        if ( v12 < (unsigned int)(v5 * *((unsigned __int8 *)a1 + 49) / 0x64) && (_DWORD)v6 )
        {
          LODWORD(v6) = v6 - 1;
          v4 = 1;
        }
        else
        {
          if ( v12 >= (unsigned int)(v5 * *((unsigned __int8 *)a1 + 48) / 0x64)
            && (int)v6 + 1 < (unsigned int)*(unsigned __int8 *)(v1 + 20) )
          {
            LODWORD(v6) = v6 + 1;
          }
          v4 = 1;
        }
      }
      v7 = *(_BYTE *)((unsigned int)v6 + v1 + 21);
    }
    v8 = *((_BYTE *)a1 + 54);
    result = v7;
    v10 = v7;
    if ( v8 && (_DWORD)v6 )
    {
      do
      {
        result = v10;
        if ( *(_BYTE *)(88LL * v10 + v1 + 146) <= v8 )
          break;
        v14 = (_DWORD)v6 == 1;
        v6 = (unsigned int)(v6 - 1);
        v10 = *(unsigned __int8 *)(v6 + v1 + 21);
      }
      while ( !v14 );
    }
  }
  else
  {
    result = *(unsigned int *)(v1 + 56);
    v10 = result - 1;
    if ( v3 < (unsigned int)result )
      v10 = v3;
    LODWORD(v6) = 0;
    for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(v1 + 20); i = (unsigned int)(i + 1) )
    {
      if ( (_DWORD)i && *(unsigned __int8 *)(i + v1 + 21) <= v10 )
        LODWORD(v6) = i;
    }
    v4 = 1;
  }
  *(_DWORD *)(v1 + 12) = v10;
  *(_DWORD *)(v1 + 16) = v6;
  if ( v4 )
  {
    *(_QWORD *)(v1 + 32) = a1[1];
    result = a1[2];
    *(_QWORD *)(v1 + 24) = result;
  }
  if ( v10 )
  {
    do
    {
      v11 = 88LL * v10;
      result = *(_QWORD *)(v11 + v1 + 80);
      if ( !result )
        break;
      result = ((__int64 (__fastcall *)(__int64))result)(v1 + v11 + 96);
      if ( (int)result >= 0 )
        break;
      v6 = (unsigned int)(v6 - 1);
      result = (unsigned int)(1 << v10);
      *((_DWORD *)a1 + 20) |= result;
      v10 = *(unsigned __int8 *)(v6 + v1 + 21);
    }
    while ( *(_BYTE *)(v6 + v1 + 21) );
  }
  *(_DWORD *)(v1 + 8) = v10;
  *((_DWORD *)a1 + 19) = v10;
  *((_DWORD *)a1 + 15) = 0;
  *((_DWORD *)a1 + 18) = -1;
  return result;
}
