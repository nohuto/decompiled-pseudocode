/*
 * XREFs of ?InsertWithHash@CPointerHashTable@NSInstrumentation@@AEAAX_KPEBX1@Z @ 0x1C007DFF4
 * Callers:
 *     ?InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA?AW4EInsertResult@12@PEBX0@Z @ 0x1C007DE88 (-InsertInternal@CPointerHashTable@NSInstrumentation@@AEAA-AW4EInsertResult@12@PEBX0@Z.c)
 *     ?Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ @ 0x1C007DEF8 (-Resize@CPointerHashTable@NSInstrumentation@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CPointerHashTable::InsertWithHash(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        const void *a4)
{
  unsigned __int64 v4; // r10
  bool v5; // zf
  unsigned int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // [rsp+8h] [rbp+8h] BYREF

  v4 = a2 >> (64 - *((_BYTE *)this + 44));
  v5 = (*((_BYTE *)this + 52) & 1) == 0;
  v8 = v4;
  if ( !v5 )
    *a3 = a2;
  while ( 1 )
  {
    v6 = v4;
    while ( (unsigned int)v4 >= *((_DWORD *)this + 10) )
    {
      LODWORD(v4) = 0;
      v8 = 0;
      v6 = 0;
    }
    v7 = *((_QWORD *)this + 4);
    if ( !*(_QWORD *)(v7 + 16LL * v6) )
      break;
LABEL_8:
    LODWORD(v4) = v4 + 1;
    v8 = v4;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 16LL * v6), (signed __int64)&v8, 0LL) )
  {
    LODWORD(v4) = v8;
    goto LABEL_8;
  }
  *(_QWORD *)(*((_QWORD *)this + 4) + 16LL * v8 + 8) = a4;
  *(_QWORD *)(*((_QWORD *)this + 4) + 16LL * v8) = a3;
}
