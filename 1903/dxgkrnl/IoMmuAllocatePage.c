/*
 * XREFs of IoMmuAllocatePage @ 0x1C004FD24
 * Callers:
 *     IoMmuUpdatePfn @ 0x1C0050464 (IoMmuUpdatePfn.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     IoMmuCompareIoMmuPagePfn @ 0x1C004FED8 (IoMmuCompareIoMmuPagePfn.c)
 */

_QWORD *__fastcall IoMmuAllocatePage(__int64 a1, __int64 a2)
{
  char v2; // bl
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rsi
  __int64 v11; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // rax
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  v15 = a2;
  v2 = 0;
  v4 = 0LL;
  if ( *(_QWORD *)(a1 + 24) )
  {
    v5 = operator new[](0x50uLL, 0x74727044u, (POOL_TYPE)512);
    v4 = v5;
  }
  else
  {
    v5 = operator new[](0x28uLL, 0x74727044u, (POOL_TYPE)512);
  }
  v10 = v5;
  if ( v5 )
  {
    v5[4] = v15;
    *((_DWORD *)v5 + 6) = 0;
    if ( v4 )
    {
      *((_DWORD *)v4 + 10) = 0;
      v4[6] = -1LL;
      v4[7] = -1LL;
      v4[8] = -1LL;
      v4[9] = -1LL;
    }
    v13 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      while ( 1 )
      {
        if ( (int)IoMmuCompareIoMmuPagePfn(&v15, v13) < 0 )
        {
          v14 = (_QWORD *)*v13;
          if ( !*v13 )
            break;
        }
        else
        {
          v14 = (_QWORD *)v13[1];
          if ( !v14 )
          {
            v2 = 1;
            break;
          }
        }
        v13 = v14;
      }
    }
    LOBYTE(v8) = v2;
    RtlAvlInsertNodeEx(a1, v13, v8, v10);
    return v10;
  }
  else
  {
    v11 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = 366LL;
    WdLogEvent5_WdLowResource(v11);
    return 0LL;
  }
}
