/*
 * XREFs of sub_180073F4C @ 0x180073F4C
 * Callers:
 *     RtlLookupFunctionEntry @ 0x18001E290 (RtlLookupFunctionEntry.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180073F4C(unsigned __int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  int v5; // ebx
  __int64 result; // rax
  unsigned int *v7; // r14
  __int64 v8; // rbp
  int v9; // edx
  unsigned __int64 v10; // rsi
  unsigned int *v11; // rdi
  unsigned __int64 v12; // rcx
  __int64 (__fastcall *v13)(unsigned __int64, __int64); // rdi
  __int64 v14; // rbx
  unsigned int v15; // ecx
  unsigned __int64 v16; // rsi
  int v17; // r8d
  int i; // r9d
  int v19; // edx

  RtlAcquireSRWLockShared(&stru_180164350);
  v4 = (_QWORD *)qword_18017A2A8;
  v5 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v4 )
        goto LABEL_7;
      if ( a1 >= *(v4 - 7) )
        break;
      v4 = (_QWORD *)*v4;
    }
    if ( a1 < *(v4 - 6) )
      break;
    v4 = (_QWORD *)v4[1];
  }
  v7 = (unsigned int *)*(v4 - 9);
  v8 = *(v4 - 5);
  if ( *((_DWORD *)v4 - 2) == 3 || !*((_DWORD *)v4 - 2) )
  {
    v9 = *((_DWORD *)v4 - 1);
    if ( !v9 )
      goto LABEL_19;
    v10 = a1 - v8;
    v11 = &v7[3 * (v9 - 1)];
    v12 = *v11;
    if ( v10 < v12 )
    {
      v17 = v9 - 2;
      for ( i = 0; v17 >= i; LODWORD(v12) = *v11 )
      {
        v19 = (v17 + i) >> 1;
        v11 = &v7[3 * v19];
        if ( v10 >= *v11 )
        {
          LODWORD(v12) = *v11;
          if ( v10 < v11[3] )
            break;
          i = v19 + 1;
        }
        else
        {
          v17 = v19 - 1;
        }
      }
    }
    if ( v10 < (unsigned int)v12 || v10 >= v11[1] )
LABEL_19:
      v11 = 0LL;
    RtlReleaseSRWLockShared(&stru_180164350);
    if ( v11 )
      *a2 = v8;
    return (__int64)v11;
  }
  else if ( *((_DWORD *)v4 - 2) == 1 )
  {
    v15 = *((_DWORD *)v4 - 1);
    v16 = a1 - v8;
    if ( !v15 )
    {
LABEL_7:
      RtlReleaseSRWLockShared(&stru_180164350);
      return 0LL;
    }
    while ( v16 < *v7 || v16 >= v7[1] )
    {
      v7 += 3;
      if ( ++v5 >= v15 )
        goto LABEL_7;
    }
    RtlReleaseSRWLockShared(&stru_180164350);
    result = (__int64)v7;
    *a2 = v8;
  }
  else
  {
    v13 = (__int64 (__fastcall *)(unsigned __int64, __int64))*(v4 - 4);
    v14 = *(v4 - 3);
    RtlReleaseSRWLockShared(&stru_180164350);
    *a2 = v8;
    return v13(a1, v14);
  }
  return result;
}
