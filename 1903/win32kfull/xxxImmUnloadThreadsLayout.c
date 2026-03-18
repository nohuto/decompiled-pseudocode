/*
 * XREFs of xxxImmUnloadThreadsLayout @ 0x1C01350B4
 * Callers:
 *     EditionFreeIMEKeyboardLayouts @ 0x1C0135050 (EditionFreeIMEKeyboardLayouts.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C01350B4 (xxxImmUnloadThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C00D0E60 (LockW32Thread.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C01350B4 (xxxImmUnloadThreadsLayout.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     xxxImmUnloadLayout @ 0x1C01E54B4 (xxxImmUnloadLayout.c)
 */

__int64 __fastcall xxxImmUnloadThreadsLayout(__int64 *a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // esi
  int v15; // ebx
  __int64 *v16; // r15
  __int64 *v17; // r14
  int v18; // eax
  __int64 v19; // r13
  unsigned int v20; // esi
  int v21; // r12d
  bool v22; // r14
  int v23; // ebx
  __int64 result; // rax
  __int64 *v25; // rdi
  __int64 *v26; // r15
  __int64 v27; // rbp
  __int64 v28; // [rsp+20h] [rbp-2E8h] BYREF
  _QWORD v29[81]; // [rsp+28h] [rbp-2E0h] BYREF

  memset(v29, 0, 0x280uLL);
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10);
  v28 = a3;
  v14 = 0;
  v15 = 0;
  if ( a2 > 0 )
  {
    v16 = v29;
    v17 = a1;
    do
    {
      if ( v15 >= 16 )
        break;
      v12 = *v17;
      if ( (*(_DWORD *)(*v17 + 480) & 1) == 0 )
      {
        if ( *(_QWORD *)(v12 + 776) )
        {
          v11 = *(_QWORD *)(v12 + 432);
          if ( v11 )
          {
            if ( a4 != 1 || (*gpsi & 4) != 0 || (*(_WORD *)(v11 + 42) & 0xF000) == 0xE000 )
            {
              LockW32Thread(*v17, &v29[5 * v15++ + 1], v12, v13);
              *v16 = *v17;
              v16 += 5;
            }
          }
        }
      }
      ++v14;
      ++v17;
    }
    while ( v14 < a2 );
  }
  v18 = v14 + 1;
  if ( v15 != 16 )
    v18 = v14;
  if ( v18 < a2 )
    return ((__int64 (__fastcall *)(__int64 *, _QWORD, __int64 *, _QWORD))xxxImmUnloadThreadsLayout)(
             &a1[v18],
             (unsigned int)(a2 - v18),
             &v28,
             a4);
  v19 = v15;
  v20 = 1;
  v21 = v15 - 1;
  v22 = a4 != 2;
  if ( a4 != 2 )
    v20 = a4;
  while ( 1 )
  {
    v23 = v21;
    result = v19 - 1;
    v25 = &v28;
    do
    {
      if ( v23 >= 0 )
      {
        v26 = &v25[5 * result + 1];
        v27 = (__int64)&v25[4 * v23 + 2 + v23];
        do
        {
          if ( (*(_DWORD *)(*v26 + 480) & 1) == 0 )
            xxxImmUnloadLayout(*v26, v20);
          if ( v22 )
            PopAndFreeW32ThreadLock(v27, v11, v12, v13);
          v27 -= 40LL;
          v26 -= 5;
          --v23;
        }
        while ( v23 >= 0 );
      }
      v25 = (__int64 *)*v25;
      v23 = 15;
      result = 15LL;
    }
    while ( v25 );
    if ( v22 )
      break;
    v22 = 1;
    v20 = 2;
  }
  return result;
}
