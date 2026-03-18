/*
 * XREFs of ?AsyncWindowPos@@YAXPEAUtagSMWP@@@Z @ 0x1C00F4738
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0026608 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 */

void __fastcall AsyncWindowPos(struct tagSMWP *a1)
{
  _QWORD *v1; // rdi
  int v2; // r14d
  __int64 v3; // rbp
  __int64 v4; // r8
  int v5; // ebx
  int v6; // edx
  _QWORD *i; // rcx
  __int64 v8; // rax
  __int64 v9; // rsi
  _QWORD *v10; // rdx
  _OWORD *v11; // r8
  _OWORD *v12; // rcx

  v1 = (_QWORD *)*((_QWORD *)a1 + 5);
  v2 = *((_DWORD *)a1 + 7);
  while ( v2 )
  {
    while ( 1 )
    {
      if ( *v1 )
      {
        v3 = v1[13];
        v4 = *(_QWORD *)(v3 + 424);
        if ( v4 != *(_QWORD *)(gptiCurrent + 424LL) )
          break;
      }
      v1 += 21;
      if ( !--v2 )
        return;
    }
    v5 = 0;
    v6 = v2 - 1;
    for ( i = v1; v6 >= 0; --v6 )
    {
      if ( *i && *(_QWORD *)(i[13] + 424LL) == v4 )
        ++v5;
      i += 21;
    }
    v8 = Win32AllocPool(168LL * v5 + 48, 2004054869LL);
    v9 = v8;
    v10 = v1;
    if ( v8 )
    {
      v11 = (_OWORD *)(v8 + 48);
      *(_DWORD *)(v8 + 28) = v5;
      *(_QWORD *)(v8 + 40) = v8 + 48;
      while ( v5 )
      {
        if ( *v10 )
        {
          if ( *(_QWORD *)(v10[13] + 424LL) == *(_QWORD *)(v3 + 424) )
          {
            --v5;
            *v11 = *(_OWORD *)v10;
            v12 = v11 + 8;
            v11[1] = *((_OWORD *)v10 + 1);
            v11[2] = *((_OWORD *)v10 + 2);
            v11[3] = *((_OWORD *)v10 + 3);
            v11[4] = *((_OWORD *)v10 + 4);
            v11[5] = *((_OWORD *)v10 + 5);
            v11[6] = *((_OWORD *)v10 + 6);
            v11 = (_OWORD *)((char *)v11 + 168);
            *(v12 - 1) = *((_OWORD *)v10 + 7);
            *v12 = *((_OWORD *)v10 + 8);
            v12[1] = *((_OWORD *)v10 + 9);
            *((_QWORD *)v12 + 4) = v10[20];
            *v10 = 0LL;
          }
        }
        v10 += 21;
      }
      if ( !(unsigned int)PostEventMessageEx((struct tagTHREADINFO *)v3, *(_QWORD *)(v3 + 424), 3u, 0LL, 0, v8, v3, 0LL) )
        Win32FreePool(v9);
    }
    else
    {
      while ( v5 )
      {
        if ( *(_QWORD *)(v10[13] + 424LL) == *(_QWORD *)(v3 + 424) )
        {
          *v10 = 0LL;
          --v5;
        }
        v10 += 21;
      }
    }
  }
}
