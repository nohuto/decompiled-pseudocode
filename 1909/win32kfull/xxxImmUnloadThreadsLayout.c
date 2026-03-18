/*
 * XREFs of xxxImmUnloadThreadsLayout @ 0x1C010FD44
 * Callers:
 *     EditionFreeIMEKeyboardLayouts @ 0x1C010FCE0 (EditionFreeIMEKeyboardLayouts.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C010FD44 (xxxImmUnloadThreadsLayout.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C0072530 (LockW32Thread.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C010FD44 (xxxImmUnloadThreadsLayout.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     xxxImmUnloadLayout @ 0x1C01E5334 (xxxImmUnloadLayout.c)
 */

__int64 __fastcall xxxImmUnloadThreadsLayout(__int64 *a1, int a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // esi
  int v13; // ebx
  __int64 *v14; // r15
  __int64 *v15; // r14
  int v16; // eax
  __int64 v17; // r13
  unsigned int v18; // esi
  int v19; // r12d
  bool v20; // r14
  int v21; // ebx
  __int64 result; // rax
  __int64 *v23; // rdi
  __int64 *v24; // r15
  __int64 v25; // rbp
  __int64 v26; // [rsp+20h] [rbp-2E8h] BYREF
  _QWORD v27[81]; // [rsp+28h] [rbp-2E0h] BYREF

  memset(v27, 0, 0x280uLL);
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9);
  v26 = a3;
  v12 = 0;
  v13 = 0;
  if ( a2 > 0 )
  {
    v14 = v27;
    v15 = a1;
    do
    {
      if ( v13 >= 16 )
        break;
      v11 = *v15;
      if ( (*(_DWORD *)(*v15 + 480) & 1) == 0 )
      {
        if ( *(_QWORD *)(v11 + 776) )
        {
          v10 = *(_QWORD *)(v11 + 432);
          if ( v10 )
          {
            if ( a4 != 1 || (*gpsi & 4) != 0 || (*(_WORD *)(v10 + 42) & 0xF000) == 0xE000 )
            {
              LockW32Thread(*v15, &v27[5 * v13++ + 1], v11);
              *v14 = *v15;
              v14 += 5;
            }
          }
        }
      }
      ++v12;
      ++v15;
    }
    while ( v12 < a2 );
  }
  v16 = v12 + 1;
  if ( v13 != 16 )
    v16 = v12;
  if ( v16 < a2 )
    return ((__int64 (__fastcall *)(__int64 *, _QWORD, __int64 *, _QWORD))xxxImmUnloadThreadsLayout)(
             &a1[v16],
             (unsigned int)(a2 - v16),
             &v26,
             a4);
  v17 = v13;
  v18 = 1;
  v19 = v13 - 1;
  v20 = a4 != 2;
  if ( a4 != 2 )
    v18 = a4;
  while ( 1 )
  {
    v21 = v19;
    result = v17 - 1;
    v23 = &v26;
    do
    {
      if ( v21 >= 0 )
      {
        v24 = &v23[5 * result + 1];
        v25 = (__int64)&v23[4 * v21 + 2 + v21];
        do
        {
          if ( (*(_DWORD *)(*v24 + 480) & 1) == 0 )
            xxxImmUnloadLayout(*v24, v18);
          if ( v20 )
            PopAndFreeW32ThreadLock(v25, v10, v11);
          v25 -= 40LL;
          v24 -= 5;
          --v21;
        }
        while ( v21 >= 0 );
      }
      v23 = (__int64 *)*v23;
      v21 = 15;
      result = 15LL;
    }
    while ( v23 );
    if ( v20 )
      break;
    v20 = 1;
    v18 = 2;
  }
  return result;
}
