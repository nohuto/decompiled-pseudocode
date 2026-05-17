/*
 * XREFs of RtlInsertElementGenericTableFullAvl @ 0x180063FD0
 * Callers:
 *     RtlInsertElementGenericTableAvl @ 0x180063F60 (RtlInsertElementGenericTableAvl.c)
 * Callees:
 *     sub_1800643E4 @ 0x1800643E4 (sub_1800643E4.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

_QWORD *__fastcall RtlInsertElementGenericTableFullAvl(
        __int64 a1,
        const void *a2,
        unsigned int a3,
        bool *a4,
        _QWORD *a5,
        int a6)
{
  size_t v6; // r14
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // r8
  _QWORD *v13; // rcx
  __int64 i; // rdx
  char v15; // al
  _QWORD *result; // rax

  v6 = a3;
  if ( a6 == 1 )
  {
    v11 = a5;
LABEL_17:
    if ( a4 )
      *a4 = a6 != 1;
    *(_DWORD *)(a1 + 40) = 0;
    result = v11 + 4;
    *(_QWORD *)(a1 + 32) = 0LL;
    return result;
  }
  if ( a3 + 32 >= a3 )
  {
    v10 = (_QWORD *)(*(__int64 (**)(void))(a1 + 80))();
    v11 = v10;
    if ( v10 )
    {
      memset(v10, 0, 0x20uLL);
      ++*(_DWORD *)(a1 + 44);
      if ( a6 )
      {
        v12 = v11;
        v13 = a5;
        if ( a6 == 2 )
          a5[1] = v11;
        else
          a5[2] = v11;
        *v11 = a5;
        *(_BYTE *)(a1 + 24) = -1;
        for ( i = *v11; ; v13 = (_QWORD *)i )
        {
          v15 = -1;
          if ( *(_QWORD **)(i + 8) != v12 )
            v15 = 1;
          if ( *((_BYTE *)v13 + 24) )
            break;
          i = *v13;
          v12 = v13;
          *((_BYTE *)v13 + 24) = v15;
        }
        if ( *((_BYTE *)v13 + 24) == v15 )
        {
          sub_1800643E4();
        }
        else
        {
          *((_BYTE *)v13 + 24) = 0;
          if ( !*(_BYTE *)(a1 + 24) )
            ++*(_DWORD *)(a1 + 48);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 16) = v11;
        *v11 = a1;
        *(_DWORD *)(a1 + 48) = 1;
      }
      memmove(v11 + 4, a2, v6);
      goto LABEL_17;
    }
  }
  if ( a4 )
    *a4 = 0;
  return 0LL;
}
