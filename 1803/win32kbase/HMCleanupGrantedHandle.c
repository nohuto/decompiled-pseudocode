/*
 * XREFs of HMCleanupGrantedHandle @ 0x1C00B0F78
 * Callers:
 *     HMFreeObject @ 0x1C005F1D0 (HMFreeObject.c)
 *     HMRemoveHandleForObjectWorker @ 0x1C00B1224 (HMRemoveHandleForObjectWorker.c)
 * Callees:
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

void *__fastcall HMCleanupGrantedHandle(__int64 a1)
{
  __int64 i; // rbx
  unsigned int v3; // r8d
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  void *result; // rax

  for ( i = gpJobsList; i; i = *(_QWORD *)i )
  {
    v3 = *(_DWORD *)(i + 48);
    v4 = 0LL;
    if ( v3 )
    {
      while ( 1 )
      {
        v5 = (_QWORD *)(*(_QWORD *)(i + 56) + 8 * v4);
        if ( *v5 == a1 )
          break;
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= v3 )
          goto LABEL_7;
      }
      result = memmove(v5, v5 + 1, 8LL * (v3 - (unsigned int)v4 - 1));
      --*(_DWORD *)(i + 48);
    }
LABEL_7:
    ;
  }
  return result;
}
