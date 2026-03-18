/*
 * XREFs of ?TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z @ 0x1C023E180
 * Callers:
 *     ?_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z @ 0x1C023E480 (-_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z.c)
 * Callees:
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0086880 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z @ 0x1C01D31F4 (-CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z.c)
 */

char __fastcall CWindow::TemplateWindow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  char v5; // di
  char v6; // bl
  __int64 v7; // rax
  __int64 v8; // r11
  __int64 *v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rdx
  char v12; // si
  int v13; // r14d
  struct tagWND *i; // r9
  struct tagWND *RootOwner; // rax
  __int64 v16; // r9
  __int64 *v17; // r10
  __int64 *v18; // rax
  __int64 v19; // rcx

  v4 = a2;
  LOBYTE(a2) = 1;
  v5 = a3;
  v6 = 0;
  v7 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 16), a2, a3, a4);
  v8 = v7;
  if ( v7 )
  {
    if ( v7 == v4 )
    {
      return 1;
    }
    else
    {
      v9 = 0LL;
      if ( (v5 & 1) != 0 )
      {
        v10 = *(_QWORD *)(v7 + 40);
        v11 = *(_QWORD *)(v4 + 40);
        v12 = *(_BYTE *)(v10 + 24) & 8;
        if ( v12 == (*(_BYTE *)(v11 + 24) & 8) )
        {
          v13 = *(_DWORD *)(v10 + 236);
          if ( v13 == *(_DWORD *)(v11 + 236) )
          {
            if ( *(char *)(v10 + 20) >= 0 )
            {
              v9 = (__int64 *)v7;
            }
            else
            {
              for ( i = *(struct tagWND **)(v7 + 96); i; i = *(struct tagWND **)(v16 + 96) )
              {
                RootOwner = GetRootOwner(i);
                if ( RootOwner == (struct tagWND *)v8 )
                {
                  v9 = 0LL;
                }
                else
                {
                  v18 = (__int64 *)v16;
                  if ( v17 )
                    v18 = v17;
                  v9 = v18;
                }
                v19 = *(_QWORD *)(v16 + 40);
                if ( v12 != (*(_BYTE *)(v19 + 24) & 8) || v13 != *(_DWORD *)(v19 + 236) )
                {
                  if ( !v9 )
                    v9 = (__int64 *)v16;
                  return CloneWindowPosAndArrangementAsync(v4, v8, v9, (v5 & 2) != 0);
                }
              }
            }
          }
        }
      }
      return CloneWindowPosAndArrangementAsync(v4, v8, v9, (v5 & 2) != 0);
    }
  }
  return v6;
}
