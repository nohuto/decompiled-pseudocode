/*
 * XREFs of xxxImmUnloadThreadsLayout @ 0x1C0129A74
 * Callers:
 *     EditionFreeIMEKeyboardLayouts @ 0x1C0129A20 (EditionFreeIMEKeyboardLayouts.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C0129A74 (xxxImmUnloadThreadsLayout.c)
 * Callees:
 *     LockW32Thread @ 0x1C0037060 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C0129A74 (xxxImmUnloadThreadsLayout.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     xxxImmUnloadLayout @ 0x1C01D066C (xxxImmUnloadLayout.c)
 */

__int64 __fastcall xxxImmUnloadThreadsLayout(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v7; // edi
  __int64 v8; // rdx
  int v9; // esi
  int v10; // ebx
  __int64 *v11; // r15
  __int64 *v12; // r14
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // r13
  unsigned int v16; // esi
  int v17; // r12d
  bool v18; // r14
  int v19; // ebx
  __int64 result; // rax
  __int64 *v21; // rdi
  __int64 *v22; // r15
  __int64 v23; // rbp
  __int64 v24; // [rsp+20h] [rbp-2E8h] BYREF
  _BYTE v25[648]; // [rsp+28h] [rbp-2E0h] BYREF

  v7 = a2;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v24 = a3;
  v9 = 0;
  v10 = 0;
  if ( v7 > 0 )
  {
    v11 = (__int64 *)v25;
    v12 = a1;
    do
    {
      if ( v10 >= 16 )
        break;
      v13 = *v12;
      if ( (*(_DWORD *)(*v12 + 488) & 1) == 0 )
      {
        if ( *(_QWORD *)(v13 + 784) )
        {
          v8 = *(_QWORD *)(v13 + 440);
          if ( v8 )
          {
            if ( a4 != 1 || (*gpsi & 4) != 0 || (*(_WORD *)(v8 + 42) & 0xF000) == 0xE000 )
            {
              LockW32Thread(*v12, &v25[40 * v10++ + 8]);
              *v11 = *v12;
              v11 += 5;
            }
          }
        }
      }
      ++v9;
      ++v12;
    }
    while ( v9 < v7 );
  }
  v14 = v9 + 1;
  if ( v10 != 16 )
    v14 = v9;
  if ( v14 < v7 )
    return xxxImmUnloadThreadsLayout(&a1[v14], (unsigned int)(v7 - v14), &v24, a4);
  v15 = v10;
  v16 = 1;
  v17 = v10 - 1;
  v18 = a4 != 2;
  if ( a4 != 2 )
    v16 = a4;
  while ( 1 )
  {
    v19 = v17;
    result = v15 - 1;
    v21 = &v24;
    do
    {
      if ( v19 >= 0 )
      {
        v22 = &v21[5 * result + 1];
        v23 = (__int64)&v21[4 * v19 + 2 + v19];
        do
        {
          if ( (*(_DWORD *)(*v22 + 488) & 1) == 0 )
            xxxImmUnloadLayout(*v22, v16);
          if ( v18 )
            PopAndFreeW32ThreadLock(v23, v8);
          v23 -= 40LL;
          v22 -= 5;
          --v19;
        }
        while ( v19 >= 0 );
      }
      v21 = (__int64 *)*v21;
      v19 = 15;
      result = 15LL;
    }
    while ( v21 );
    if ( v18 )
      break;
    v18 = 1;
    v16 = 2;
  }
  return result;
}
