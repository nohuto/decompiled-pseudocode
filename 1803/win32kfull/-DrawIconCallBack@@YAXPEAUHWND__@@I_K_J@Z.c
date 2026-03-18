/*
 * XREFs of ?DrawIconCallBack@@YAXPEAUHWND__@@I_K_J@Z @ 0x1C01BAF00
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     HMValidateHandleNoRip @ 0x1C006CF60 (HMValidateHandleNoRip.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01BB320 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     ?xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR@@@Z @ 0x1C01BBAF4 (-xxxPaintIconsInSwitchWindow@@YAXPEAUtagWND@@PEAUtagSwitchWndInfo@@PEAUHDC__@@HHHHHPEAUtagCURSOR.c)
 */

void __fastcall DrawIconCallBack(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r14
  struct tagSwitchWndInfo *v10; // rax
  __int64 v11; // rdx
  struct tagSwitchWndInfo *v12; // rsi
  int v13; // ebp
  unsigned __int64 *v14; // rbx
  __int64 i; // rax
  struct tagCURSOR *v16; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // [rsp+20h] [rbp-68h]
  _QWORD v22[4]; // [rsp+50h] [rbp-38h] BYREF

  LOBYTE(a2) = 1;
  v6 = HMValidateHandleNoSecure(a3, a2);
  v7 = v6;
  if ( v6 )
  {
    v8 = *(_QWORD *)(v6 + 40);
    if ( (*(_BYTE *)(v8 + 31) & 0x10) != 0 )
    {
      LOBYTE(v8) = 1;
      v9 = HMValidateHandleNoSecure(a1, v8);
      if ( v9 )
      {
        v10 = Getpswi((struct tagWND *)v7);
        v12 = v10;
        if ( v10 )
        {
          v13 = 0;
          v14 = (unsigned __int64 *)(*((_QWORD *)v10 + 2) + 32LL);
LABEL_11:
          if ( *v14 != 1 )
          {
            LOBYTE(v11) = 1;
            for ( i = HMValidateHandleNoSecure(*v14, v11); ; i = *(_QWORD *)(i + 96) )
            {
              if ( !i )
              {
                ++v14;
                ++v13;
                goto LABEL_11;
              }
              if ( v9 == i )
                break;
            }
            if ( !a4 || (LOBYTE(v11) = 3, (v16 = (struct tagCURSOR *)HMValidateHandleNoRip(a4, v11)) == 0LL) )
              v16 = (struct tagCURSOR *)qword_1C031D8E8;
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11);
            v22[0] = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = v22;
            v22[1] = v7;
            _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
            xxxPaintIconsInSwitchWindow((struct tagWND *)v7, v12, 0LL, v13, v21, 1, 0, 0, v16);
            ThreadUnlock1(v19, v18, v20);
          }
        }
      }
    }
  }
}
