/*
 * XREFs of ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01F38C0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F3D3C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F453C (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

void __fastcall DrawIconCallBack(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  struct tagWND *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r14
  struct tagSwitchWndInfo *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  struct tagSwitchWndInfo *v16; // rsi
  int v17; // ebp
  unsigned __int64 *v18; // rbx
  __int64 i; // rax
  struct tagCURSOR *v20; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // [rsp+20h] [rbp-68h]
  __int64 v26; // [rsp+50h] [rbp-38h] BYREF
  struct tagWND *v27; // [rsp+58h] [rbp-30h]
  __int64 v28; // [rsp+60h] [rbp-28h]

  LOBYTE(a2) = 1;
  v6 = HMValidateHandleNoSecure(a3, a2, a3, a4);
  v9 = (struct tagWND *)v6;
  if ( v6 )
  {
    v10 = *(_QWORD *)(v6 + 40);
    if ( (*(_BYTE *)(v10 + 31) & 0x10) != 0 )
    {
      LOBYTE(v10) = 1;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v11 = HMValidateHandleNoSecure(a1, v10, v7, v8);
      if ( v11 )
      {
        v12 = Getpswi(v9);
        v16 = v12;
        if ( v12 )
        {
          v17 = 0;
          v18 = (unsigned __int64 *)(*((_QWORD *)v12 + 2) + 32LL);
LABEL_11:
          if ( *v18 != 1 )
          {
            LOBYTE(v13) = 1;
            for ( i = HMValidateHandleNoSecure(*v18, v13, v14, v15); ; i = *(_QWORD *)(i + 120) )
            {
              if ( !i )
              {
                ++v18;
                ++v17;
                goto LABEL_11;
              }
              if ( v11 == i )
                break;
            }
            if ( !a4 || (LOBYTE(v13) = 3, (v20 = (struct tagCURSOR *)HMValidateHandleNoRip(a4, v13, v14, v15)) == 0LL) )
              v20 = (struct tagCURSOR *)qword_1C0322F90;
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
            v26 = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = &v26;
            v27 = v9;
            HMLockObject(v9);
            xxxPaintIconsInSwitchWindow(v9, v16, 0LL, v17, v25, 1, 0, 0, v20);
            ThreadUnlock1(v23, v22, v24);
          }
        }
      }
    }
  }
}
