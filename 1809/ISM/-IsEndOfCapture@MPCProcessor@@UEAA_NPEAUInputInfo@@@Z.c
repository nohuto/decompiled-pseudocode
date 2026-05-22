/*
 * XREFs of ?IsEndOfCapture@MPCProcessor@@UEAA_NPEAUInputInfo@@@Z @ 0x1800F6D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall MPCProcessor::IsEndOfCapture(MPCProcessor *this, struct InputInfo *a2)
{
  _QWORD *v2; // rcx
  char v3; // r9
  _QWORD *j; // rax
  __int64 **v5; // rdx
  __int64 *v6; // r8
  __int64 i; // rdx

  v2 = (_QWORD *)*((_QWORD *)this + 467);
  v3 = 1;
  j = (_QWORD *)*v2;
  if ( (_QWORD *)*v2 != v2 )
  {
    while ( !*((_BYTE *)j + 1640) )
    {
      if ( !*((_BYTE *)j + 25) )
      {
        v5 = (__int64 **)j[2];
        if ( *((_BYTE *)v5 + 25) )
        {
          for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
            j = (_QWORD *)i;
          j = (_QWORD *)i;
        }
        else
        {
          v6 = *v5;
          for ( j = (_QWORD *)j[2]; !*((_BYTE *)v6 + 25); v6 = (__int64 *)*v6 )
            j = v6;
        }
      }
      if ( j == v2 )
        return v3;
    }
    return 0;
  }
  return v3;
}
