/*
 * XREFs of KeCompactServiceTable @ 0x14017396C
 * Callers:
 *     KiInitializeKernel @ 0x140572310 (KiInitializeKernel.c)
 *     MiCompactServiceTable @ 0x1407195C8 (MiCompactServiceTable.c)
 * Callees:
 *     KiLockServiceTable @ 0x1401739E4 (KiLockServiceTable.c)
 */

__int64 __fastcall KeCompactServiceTable(
        int *BugCheckParameter1,
        unsigned __int8 *a2,
        unsigned int a3,
        __int64 a4,
        int a5)
{
  int *v6; // rbx
  __int64 v7; // rbp
  unsigned int v8; // edx

  v6 = BugCheckParameter1;
  if ( a3 )
  {
    v7 = a3;
    do
    {
      v8 = *a2++;
      *v6 = (16 * (a5 - (_DWORD)BugCheckParameter1 + *v6)) | (v8 >> 2);
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  return KiLockServiceTable((ULONG_PTR)BugCheckParameter1);
}
