/*
 * XREFs of MagControl @ 0x1C01CFE8C
 * Callers:
 *     MagSlicerControl @ 0x1C01D1490 (MagSlicerControl.c)
 *     NtUserMagControl @ 0x1C0230F40 (NtUserMagControl.c)
 * Callees:
 *     MagpFindThreadContext @ 0x1C003807C (MagpFindThreadContext.c)
 *     MagContextThreadCallout @ 0x1C01CFC40 (MagContextThreadCallout.c)
 */

__int64 __fastcall MagControl(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  _QWORD *ThreadContext; // rax
  _QWORD *v9; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 *v15; // rax

  v4 = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      ThreadContext = MagpFindThreadContext(a1, a2);
      if ( ThreadContext )
      {
        if ( (*((_DWORD *)ThreadContext + 8))-- == 1 )
          MagContextThreadCallout(v9, ThreadContext[2], ThreadContext, 1);
      }
      else
      {
        return (unsigned int)-1073741772;
      }
    }
    else if ( a3 <= 1 || a3 > 3 )
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    v11 = MagpFindThreadContext(a1, a2);
    if ( v11 )
    {
      ++*((_DWORD *)v11 + 8);
    }
    else
    {
      v12 = Win32AllocPool(56LL, 1735226197LL);
      v13 = v12;
      if ( v12 )
      {
        v14 = (_QWORD *)(v12 + 40);
        v14[1] = v14;
        *v14 = v14;
        *(_QWORD *)(v13 + 16) = a2;
        *(_DWORD *)(a2 + 1224) |= 8u;
        *(_DWORD *)(v13 + 32) = 1;
        *(_QWORD *)(v13 + 24) = a4;
        v15 = (__int64 *)a1[1];
        if ( (_QWORD *)*v15 != a1 )
          __fastfail(3u);
        *(_QWORD *)v13 = a1;
        *(_QWORD *)(v13 + 8) = v15;
        *v15 = v13;
        a1[1] = v13;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return v4;
}
