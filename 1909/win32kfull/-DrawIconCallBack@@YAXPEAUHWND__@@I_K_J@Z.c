/*
 * XREFs of ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01F3740
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00559FC (HMValidateHandleNoRip.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F3BBC (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01F43BC (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

void __fastcall DrawIconCallBack(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r8
  struct tagWND *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r14
  struct tagSwitchWndInfo *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  struct tagSwitchWndInfo *v14; // rsi
  int v15; // ebp
  unsigned __int64 *v16; // rbx
  __int64 i; // rax
  struct tagCURSOR *v18; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // [rsp+20h] [rbp-68h]
  __int64 v24; // [rsp+50h] [rbp-38h] BYREF
  struct tagWND *v25; // [rsp+58h] [rbp-30h]
  __int64 v26; // [rsp+60h] [rbp-28h]

  LOBYTE(a2) = 1;
  v6 = HMValidateHandleNoSecure(a3, a2, a3);
  v8 = (struct tagWND *)v6;
  if ( v6 )
  {
    v9 = *(_QWORD *)(v6 + 40);
    if ( (*(_BYTE *)(v9 + 31) & 0x10) != 0 )
    {
      LOBYTE(v9) = 1;
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      v10 = HMValidateHandleNoSecure(a1, v9, v7);
      if ( v10 )
      {
        v11 = Getpswi(v8);
        v14 = v11;
        if ( v11 )
        {
          v15 = 0;
          v16 = (unsigned __int64 *)(*((_QWORD *)v11 + 2) + 32LL);
LABEL_11:
          if ( *v16 != 1 )
          {
            LOBYTE(v12) = 1;
            for ( i = HMValidateHandleNoSecure(*v16, v12, v13); ; i = *(_QWORD *)(i + 120) )
            {
              if ( !i )
              {
                ++v16;
                ++v15;
                goto LABEL_11;
              }
              if ( v10 == i )
                break;
            }
            if ( !a4 || (v18 = (struct tagCURSOR *)HMValidateHandleNoRip(a4, 3)) == 0LL )
              v18 = (struct tagCURSOR *)qword_1C0320F90;
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13);
            v24 = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = &v24;
            v25 = v8;
            HMLockObject(v8);
            xxxPaintIconsInSwitchWindow(v8, v14, 0LL, v15, v23, 1, 0, 0, v18);
            ThreadUnlock1(v21, v20, v22);
          }
        }
      }
    }
  }
}
