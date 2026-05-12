/*
 * XREFs of PortPassThroughValidateNormalizedRequest @ 0x1C0076DDC
 * Callers:
 *     PortPassThroughValidate @ 0x1C0076CDC (PortPassThroughValidate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PortPassThroughValidateNormalizedRequest(unsigned __int16 *a1, __int64 a2, char a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r10
  unsigned __int8 v7; // r9
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v11; // rdx
  char v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  char v15; // al

  v4 = *(_QWORD *)(a2 + 184);
  v5 = *(unsigned int *)(v4 + 16);
  v6 = *(unsigned int *)(v4 + 8);
  if ( *((_BYTE *)a1 + 6) > 0x10u )
    return 3221225485LL;
  v7 = *((_BYTE *)a1 + 7);
  if ( v7 )
  {
    v8 = *((unsigned int *)a1 + 8);
    if ( *a1 > (unsigned int)v8 )
      return 3221225485LL;
    if ( !a3 )
    {
      if ( *((_DWORD *)a1 + 3) )
      {
        v9 = *((_QWORD *)a1 + 3);
        if ( v8 >= v9 || (unsigned int)v8 + v7 > v9 )
          return 3221225485LL;
      }
    }
    if ( (unsigned int)v8 > (unsigned int)v6 || (unsigned int)v8 + v7 > (unsigned int)v6 )
      return 3221225485LL;
  }
  if ( a3 )
  {
    if ( !*((_QWORD *)a1 + 3) && *((_DWORD *)a1 + 3) )
      return 3221225485LL;
  }
  else
  {
    v11 = *((_QWORD *)a1 + 3);
    if ( *a1 > v11 && *((_DWORD *)a1 + 3) )
      return 3221225485LL;
    v12 = *((_BYTE *)a1 + 8);
    if ( v12 != 1 )
    {
      v13 = *((unsigned int *)a1 + 3);
      if ( (_DWORD)v13 )
      {
        if ( v11 > v5 || v11 + v13 > v5 )
          return 3221225485LL;
      }
    }
    if ( v12 )
    {
      v14 = *((unsigned int *)a1 + 3);
      if ( (_DWORD)v14 )
      {
        if ( v11 > v6 || v11 + v14 > v6 )
          return 3221225485LL;
      }
    }
  }
  if ( (unsigned int)(*((_DWORD *)a1 + 4) - 1) > 0x1A5DF )
    return 3221225485LL;
  v15 = *((_BYTE *)a1 + 36);
  if ( v15 == 24 || (unsigned __int8)(v15 - 57) <= 1u )
    return 3221225488LL;
  else
    return 0LL;
}
