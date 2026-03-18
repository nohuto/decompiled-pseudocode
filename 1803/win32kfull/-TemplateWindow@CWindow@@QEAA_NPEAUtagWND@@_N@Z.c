/*
 * XREFs of ?TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@_N@Z @ 0x1C01FD274
 * Callers:
 *     ?_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0_N@Z @ 0x1C01FD52C (-_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0_N@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C006C050 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     CloneWindowPosAndArrangementAsync @ 0x1C019EAFC (CloneWindowPosAndArrangementAsync.c)
 */

char __fastcall CWindow::TemplateWindow(CWindow *this, struct tagWND *a2, char a3)
{
  struct tagWND *v3; // rsi
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // r11
  __int64 *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rdx
  char v11; // di
  int v12; // ebp
  struct tagWND *i; // r10
  struct tagWND *RootOwner; // rax
  __int64 *v15; // r9
  __int64 v16; // r10
  __int64 *v17; // rax
  __int64 v18; // rcx

  v3 = a2;
  LOBYTE(a2) = 1;
  v5 = 0;
  v6 = HMValidateHandleNoSecure(*((_QWORD *)this + 2), (__int64)a2);
  v7 = v6;
  if ( v6 )
  {
    if ( (struct tagWND *)v6 == v3 )
    {
      return 1;
    }
    else
    {
      v8 = 0LL;
      if ( a3 )
      {
        v9 = *(_QWORD *)(v6 + 40);
        v10 = *((_QWORD *)v3 + 5);
        v11 = *(_BYTE *)(v9 + 24) & 8;
        if ( v11 == (*(_BYTE *)(v10 + 24) & 8) )
        {
          v12 = *(_DWORD *)(v9 + 236);
          if ( v12 == *(_DWORD *)(v10 + 236) )
          {
            if ( *(char *)(v9 + 20) >= 0 )
            {
              v8 = (__int64 *)v6;
            }
            else
            {
              for ( i = *(struct tagWND **)(v6 + 72); i; i = *(struct tagWND **)(v16 + 72) )
              {
                RootOwner = GetRootOwner(i);
                if ( RootOwner == (struct tagWND *)v7 )
                {
                  v8 = 0LL;
                }
                else
                {
                  v17 = (__int64 *)v16;
                  if ( v15 )
                    v17 = v15;
                  v8 = v17;
                }
                v18 = *(_QWORD *)(v16 + 40);
                if ( v11 != (*(_BYTE *)(v18 + 24) & 8) || v12 != *(_DWORD *)(v18 + 236) )
                {
                  if ( !v8 )
                    v8 = (__int64 *)v16;
                  return (unsigned int)CloneWindowPosAndArrangementAsync((__int64)v3, v7, v8) != 0;
                }
              }
            }
          }
        }
      }
      return (unsigned int)CloneWindowPosAndArrangementAsync((__int64)v3, v7, v8) != 0;
    }
  }
  return v5;
}
