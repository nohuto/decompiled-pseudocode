/*
 * XREFs of ?FindEntryByTime@@YAPEAUtagINPUTTRANSFORMENTRY@@PEAUtagINPUTTRANSFORMLIST@@PEAU1@_K@Z @ 0x1C01E0414
 * Callers:
 *     ?GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z @ 0x1C01E04A4 (-GetTransformList@InputTransform@@YAHPEAUtagWND@@IPEA_KPEAUtagINPUT_TRANSFORM@@D@Z.c)
 * Callees:
 *     <none>
 */

struct tagINPUTTRANSFORMLIST **__fastcall FindEntryByTime(
        struct tagINPUTTRANSFORMLIST *a1,
        struct tagINPUTTRANSFORMLIST **a2,
        __int64 a3)
{
  struct tagINPUTTRANSFORMLIST **v3; // r9
  struct tagINPUTTRANSFORMLIST *v4; // r10
  struct tagINPUTTRANSFORMLIST *v5; // rdx
  struct tagINPUTTRANSFORMLIST *v7; // rcx
  __int64 v8; // rdi
  struct tagINPUTTRANSFORMLIST **v10; // r8

  v3 = a2;
  v4 = (struct tagINPUTTRANSFORMLIST *)((char *)a1 + 8);
  v5 = *a2;
  if ( v5 == (struct tagINPUTTRANSFORMLIST *)((char *)a1 + 8) )
    return v3;
  if ( v3[1] != v4 )
  {
LABEL_7:
    v10 = (struct tagINPUTTRANSFORMLIST **)v3[1];
    if ( v5 != v4 )
    {
      do
      {
        if ( a3 - (__int64)v3[2] < (unsigned __int64)(v10[2] - v3[2]) )
          break;
        v10 = v3;
        v3 = (struct tagINPUTTRANSFORMLIST **)*v3;
      }
      while ( *v3 != v4 );
    }
    return v3;
  }
  v7 = v3[2];
  v8 = *((_QWORD *)v4 + 1);
  if ( (unsigned __int64)(a3 - (_QWORD)v7) >= *(_QWORD *)(v8 + 16) - (_QWORD)v7 )
  {
    v3 = (struct tagINPUTTRANSFORMLIST **)v5;
    v5 = *(struct tagINPUTTRANSFORMLIST **)v5;
    goto LABEL_7;
  }
  if ( a3 - (__int64)v7 > (unsigned __int64)(*(_QWORD *)(v8 + 16) - a3) )
    return (struct tagINPUTTRANSFORMLIST **)*((_QWORD *)v4 + 1);
  return v3;
}
