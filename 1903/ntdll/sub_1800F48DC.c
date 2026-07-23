/*
 * XREFs of sub_1800F48DC @ 0x1800F48DC
 * Callers:
 *     sub_1800F4B1C @ 0x1800F4B1C (sub_1800F4B1C.c)
 * Callees:
 *     RtlSizeHeap @ 0x1800400A0 (RtlSizeHeap.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800F4348 @ 0x1800F4348 (sub_1800F4348.c)
 *     sub_1800F4394 @ 0x1800F4394 (sub_1800F4394.c)
 */

char sub_1800F48DC()
{
  __int64 *v0; // rbx
  _QWORD *v1; // r14
  unsigned __int64 *v2; // rcx
  __int64 *v3; // rsi
  __int64 v4; // rdx
  unsigned __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 *v11; // rax
  bool v12; // zf
  __int64 i; // rdi
  __int64 v14; // rax
  int v15; // r9d
  char *v16; // r10
  __int64 v17; // rbx
  SIZE_T v18; // rax
  _DWORD *v19; // rsi
  unsigned __int8 *v20; // rbx
  int v21; // eax

  v0 = (__int64 *)qword_180163BB0;
  while ( v0 != &qword_180163BB0 )
  {
    v1 = v0 + 2;
    v2 = (unsigned __int64 *)v0[2];
    v3 = v0;
    v4 = v0[3];
    v0 = (__int64 *)*v0;
    v5 = v2 + 1;
    if ( v2 + 1 <= (unsigned __int64 *)((char *)v2 + v4) )
    {
      do
      {
        v6 = sub_1800F4394(*v2);
        v7 = v6;
        if ( v6 )
        {
          v8 = *(_DWORD *)(v6 + 32);
          if ( !v8 )
          {
            v9 = *(_QWORD *)v7;
            if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7
              || (v10 = *(_QWORD **)(v7 + 8), *v10 != v7)
              || (*v10 = v9,
                  *(_QWORD *)(v9 + 8) = v10,
                  v11 = (__int64 *)qword_180163BB8,
                  *(__int64 **)qword_180163BB8 != &qword_180163BB0) )
            {
              __fastfail(3u);
            }
            *(_QWORD *)v7 = &qword_180163BB0;
            *(_QWORD *)(v7 + 8) = v11;
            *v11 = v7;
            qword_180163BB8 = v7;
            v8 = *(_DWORD *)(v7 + 32);
          }
          v12 = *(_QWORD *)(v7 + 16) == 0LL;
          *(_DWORD *)(v7 + 32) = v8 + 1;
          if ( v12 )
            __debugbreak();
        }
        v2 = v5++;
      }
      while ( (unsigned __int64)v5 <= *v1 + v3[3] );
    }
  }
  for ( i = qword_180163BC0; (__int64 *)i != &qword_180163BC0; i = *(_QWORD *)i )
  {
    v14 = sub_1800F4348((_QWORD *)qword_180163BA0, *(_QWORD *)(i + 16));
    v17 = v14;
    if ( v14 )
    {
      if ( qword_180163CE8 )
      {
        v18 = RtlSizeHeap(*(PVOID *)(v14 + 8), 0, v16);
        qword_180163CE8(0LL, *(_QWORD *)(v17 + 8), *(_QWORD *)(i + 16), v18, 0, 0LL);
      }
      else
      {
        if ( !v15 )
        {
          DbgPrint("Below is a list of potentially leaked heap entries \nuse !heap -i Entry -h Heap for more information\n\n");
          DbgPrint("Entry     Heap              Size       \n");
          DbgPrint("---------------------------------------\n");
          v16 = *(char **)(i + 16);
        }
        v19 = *(_DWORD **)(v17 + 8);
        if ( v19[4] == -571548178 )
        {
          v20 = (unsigned __int8 *)v16;
        }
        else
        {
          v20 = (unsigned __int8 *)(v16 - 16);
          _m_prefetchw(v16 - 16);
          if ( *(v16 - 1) == 5 )
            v20 -= 16 * v20[14];
        }
        v21 = RtlSizeHeap(v19, 0, v16);
        DbgPrint("%p  %-16Ix  %Id", v20, (_DWORD)v19, v21);
        DbgPrint("\n");
      }
      ++dword_180166998;
    }
  }
  if ( qword_180163CE8 )
    qword_180163CE8(0LL, 0LL, 0LL, 0LL, 0, 0LL);
  return 1;
}
