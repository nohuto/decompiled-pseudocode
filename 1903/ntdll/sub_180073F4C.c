/*
 * XREFs of sub_180073F4C @ 0x180073F4C
 * Callers:
 *     RtlLookupFunctionEntry @ 0x18001E290 (RtlLookupFunctionEntry.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180073F4C(unsigned __int64 a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  _QWORD *v6; // rax
  int v7; // ebx
  __int64 result; // rax
  unsigned int *v9; // r14
  __int64 v10; // rbp
  int v11; // edx
  unsigned __int64 v12; // rsi
  unsigned int *v13; // rdi
  unsigned __int64 v14; // rcx
  __int64 (__fastcall *v15)(unsigned __int64, __int64); // rdi
  __int64 v16; // rbx
  unsigned int v17; // ecx
  unsigned __int64 v18; // rsi
  int v19; // r8d
  int i; // r9d
  int v21; // edx

  RtlAcquireSRWLockShared(&qword_180164350, (unsigned __int64)a2, a3, a4);
  v6 = (_QWORD *)qword_18017A2A8;
  v7 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v6 )
        goto LABEL_7;
      if ( a1 >= *(v6 - 7) )
        break;
      v6 = (_QWORD *)*v6;
    }
    if ( a1 < *(v6 - 6) )
      break;
    v6 = (_QWORD *)v6[1];
  }
  v9 = (unsigned int *)*(v6 - 9);
  v10 = *(v6 - 5);
  if ( *((_DWORD *)v6 - 2) == 3 || !*((_DWORD *)v6 - 2) )
  {
    v11 = *((_DWORD *)v6 - 1);
    if ( !v11 )
      goto LABEL_19;
    v12 = a1 - v10;
    v13 = &v9[3 * (v11 - 1)];
    v14 = *v13;
    if ( v12 < v14 )
    {
      v19 = v11 - 2;
      for ( i = 0; v19 >= i; LODWORD(v14) = *v13 )
      {
        v21 = (v19 + i) >> 1;
        v13 = &v9[3 * v21];
        if ( v12 >= *v13 )
        {
          LODWORD(v14) = *v13;
          if ( v12 < v13[3] )
            break;
          i = v21 + 1;
        }
        else
        {
          v19 = v21 - 1;
        }
      }
    }
    if ( v12 < (unsigned int)v14 || v12 >= v13[1] )
LABEL_19:
      v13 = 0LL;
    RtlReleaseSRWLockShared(&qword_180164350);
    if ( v13 )
      *a2 = v10;
    return (__int64)v13;
  }
  else if ( *((_DWORD *)v6 - 2) == 1 )
  {
    v17 = *((_DWORD *)v6 - 1);
    v18 = a1 - v10;
    if ( !v17 )
    {
LABEL_7:
      RtlReleaseSRWLockShared(&qword_180164350);
      return 0LL;
    }
    while ( v18 < *v9 || v18 >= v9[1] )
    {
      v9 += 3;
      if ( ++v7 >= v17 )
        goto LABEL_7;
    }
    RtlReleaseSRWLockShared(&qword_180164350);
    result = (__int64)v9;
    *a2 = v10;
  }
  else
  {
    v15 = (__int64 (__fastcall *)(unsigned __int64, __int64))*(v6 - 4);
    v16 = *(v6 - 3);
    RtlReleaseSRWLockShared(&qword_180164350);
    *a2 = v10;
    return v15(a1, v16);
  }
  return result;
}
