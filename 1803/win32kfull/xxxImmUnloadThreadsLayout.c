/*
 * XREFs of xxxImmUnloadThreadsLayout @ 0x1C0108E1C
 * Callers:
 *     EditionFreeIMEKeyboardLayouts @ 0x1C0108DD0 (EditionFreeIMEKeyboardLayouts.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C0108E1C (xxxImmUnloadThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C005D428 (LockW32Thread.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C0108E1C (xxxImmUnloadThreadsLayout.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     xxxImmUnloadLayout @ 0x1C01AD5E0 (xxxImmUnloadLayout.c)
 */

__int64 __fastcall xxxImmUnloadThreadsLayout(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebp
  int v6; // edi
  int v7; // esi
  int v8; // ebx
  __int64 *v9; // rbp
  __int64 v10; // r8
  int v11; // eax
  unsigned int v12; // esi
  __int64 result; // rax
  int v14; // ecx
  __int64 *v15; // rdi
  int v16; // ebx
  __int64 v17; // rdx
  __int64 *v18; // rdx
  __int64 v19; // rbp
  bool v20; // [rsp+20h] [rbp-2E8h]
  int v22; // [rsp+24h] [rbp-2E4h]
  __int64 *v23; // [rsp+28h] [rbp-2E0h]
  __int64 *v24; // [rsp+28h] [rbp-2E0h]
  __int64 *v26; // [rsp+30h] [rbp-2D8h]
  __int64 v27; // [rsp+38h] [rbp-2D0h]
  __int64 v28; // [rsp+40h] [rbp-2C8h] BYREF
  _BYTE v29[648]; // [rsp+48h] [rbp-2C0h] BYREF

  v4 = a4;
  v6 = a2;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v28 = a3;
  v7 = 0;
  v8 = 0;
  if ( v6 > 0 )
  {
    v9 = a1;
    v23 = (__int64 *)v29;
    do
    {
      if ( v8 >= 16 )
        break;
      v10 = *v9;
      if ( (*(_DWORD *)(*v9 + 480) & 1) == 0 )
      {
        if ( *(_QWORD *)(v10 + 768) )
        {
          v17 = *(_QWORD *)(v10 + 432);
          if ( v17 )
          {
            if ( a4 != 1 || (*gpsi & 4) != 0 || (*(_WORD *)(v17 + 42) & 0xF000) == 0xE000 )
            {
              LockW32Thread(*v9, (__int64)&v29[40 * v8++ + 8]);
              *v23 = *v9;
              v23 += 5;
            }
          }
        }
      }
      ++v7;
      ++v9;
    }
    while ( v7 < v6 );
    v4 = a4;
  }
  v11 = v7 + 1;
  if ( v8 != 16 )
    v11 = v7;
  if ( v11 < v6 )
    return xxxImmUnloadThreadsLayout(&a1[v11], (unsigned int)(v6 - v11), &v28, v4);
  v12 = 1;
  if ( v4 != 2 )
    v12 = v4;
  v20 = v4 != 2;
  result = v8 - 1LL;
  v14 = v8 - 1;
  v27 = result;
  v22 = v8 - 1;
  while ( 1 )
  {
    v15 = &v28;
    v16 = v14;
    v26 = &v28;
    do
    {
      if ( v16 >= 0 )
      {
        v18 = &v15[5 * result + 1];
        v24 = v18;
        v19 = (__int64)&v15[4 * v16 + 2 + v16];
        do
        {
          if ( (*(_DWORD *)(*v18 + 480) & 1) == 0 )
          {
            xxxImmUnloadLayout(*v18, v12);
            v18 = v24;
          }
          if ( v20 )
          {
            PopAndFreeW32ThreadLock(v19, (__int64)v18);
            v18 = v24;
          }
          v18 -= 5;
          v19 -= 40LL;
          --v16;
          v24 = v18;
        }
        while ( v16 >= 0 );
        v15 = v26;
      }
      v15 = (__int64 *)*v15;
      v16 = 15;
      v26 = v15;
      result = 15LL;
    }
    while ( v15 );
    if ( v20 )
      break;
    v14 = v22;
    v12 = 2;
    result = v27;
    v20 = 1;
  }
  return result;
}
