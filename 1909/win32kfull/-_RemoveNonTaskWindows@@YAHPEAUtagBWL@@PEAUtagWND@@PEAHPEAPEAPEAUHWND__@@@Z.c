/*
 * XREFs of ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C01F40A8
 * Callers:
 *     ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F3C0C (-InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01F4028 (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall _RemoveNonTaskWindows(struct tagBWL *a1, struct tagWND *a2, unsigned int *a3, HWND **a4)
{
  unsigned int v4; // ebp
  unsigned __int64 *v5; // r14
  HWND *v6; // rdi
  struct tagWND *v9; // r15
  struct tagWND *v10; // rax
  struct tagWND *v11; // rsi
  struct tagWND *v12; // rbx
  __int64 v13; // rax
  struct tagWND *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 result; // rax

  v4 = 0;
  v5 = (unsigned __int64 *)((char *)a1 + 32);
  *a3 = -1;
  v6 = (HWND *)((char *)a1 + 32);
  v9 = a2;
  while ( *v5 != 1 )
  {
    LOBYTE(a2) = 1;
    v10 = (struct tagWND *)HMValidateHandleNoSecure(*v5, (__int64)a2, (__int64)a3);
    v11 = v10;
    if ( v10 && (unsigned int)_IsTaskWindow(v10, v9) )
    {
      v12 = v11;
      if ( (*(_BYTE *)(*((_QWORD *)v11 + 5) + 26LL) & 4) == 0 )
      {
        do
        {
          v13 = *((_QWORD *)v12 + 15);
          if ( !v13 )
            break;
          v14 = v12;
          v12 = (struct tagWND *)*((_QWORD *)v12 + 15);
          v15 = *(_QWORD *)(v13 + 40);
          if ( *(char *)(v15 + 24) < 0 )
          {
            if ( (*(_BYTE *)(*((_QWORD *)v14 + 5) + 26LL) & 1) == 0 || *((_QWORD *)v12 + 15) )
              v12 = 0LL;
            else
              v12 = v11;
            break;
          }
        }
        while ( (*(_BYTE *)(v15 + 26) & 4) == 0 );
      }
      if ( v12 )
      {
        v16 = *((_QWORD *)v12 + 25);
        if ( v16 )
        {
          do
          {
            if ( (unsigned int)_IsTaskWindow((struct tagWND *)v16, v9) )
              break;
            v16 = *(_QWORD *)(v16 + 120);
          }
          while ( v16 );
          if ( !v16 || (struct tagWND *)v16 == v11 )
          {
            if ( v6 < (HWND *)v5 )
              *v6 = (HWND)*v5;
            if ( v9 == v11 )
              *a3 = v4;
            ++v4;
            ++v6;
          }
        }
      }
    }
    ++v5;
  }
  *v6 = (HWND)1;
  result = v4;
  *a4 = v6;
  return result;
}
