/*
 * XREFs of ?bExpand@STACKOBJ@@QEAAHK@Z @ 0x1C0288CD0
 * Callers:
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1C01237E0 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall STACKOBJ::bExpand(STACKOBJ *this, unsigned int a2)
{
  const void *v2; // rsi
  unsigned int v3; // edi
  void *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rax

  v2 = (const void *)*((_QWORD *)this + 4);
  v3 = a2 + 400;
  if ( a2 + 400 < a2 )
    return 0LL;
  v6 = PALLOCMEM2(v3, 1684817479LL, 0);
  *((_QWORD *)this + 4) = v6;
  if ( !v6 )
    return 0LL;
  memmove(v6, v2, *((unsigned int *)this + 1));
  v7 = *((_QWORD *)this + 1);
  v8 = *((_QWORD *)this + 4);
  *(_DWORD *)this = v3;
  v9 = v8 - (_QWORD)v2 + v7;
  v10 = *((_DWORD *)this + 1) == 0;
  *((_QWORD *)this + 1) = v9;
  if ( v10 )
  {
    *(_QWORD *)(v9 + 16) = v9;
  }
  else
  {
    v11 = *(_QWORD *)(v9 + 16);
    if ( v11 != v8 )
    {
      do
      {
        v12 = v8 - (_QWORD)v2 + v11;
        *(_QWORD *)(v9 + 16) = v12;
        v9 = v12;
        v11 = *(_QWORD *)(v12 + 16);
      }
      while ( v11 != *((_QWORD *)this + 4) );
    }
  }
  Win32FreePool(v2);
  return 1LL;
}
