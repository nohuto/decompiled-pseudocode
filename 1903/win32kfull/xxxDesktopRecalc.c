/*
 * XREFs of xxxDesktopRecalc @ 0x1C0115E7C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     xxxDesktopsRecalc @ 0x1C0115E00 (xxxDesktopsRecalc.c)
 * Callees:
 *     IsShellWndManagementBehaviorEnabled @ 0x1C002E7CC (IsShellWndManagementBehaviorEnabled.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C0116068 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     DesktopWindowFromDesktop @ 0x1C0116170 (DesktopWindowFromDesktop.c)
 */

__int64 __fastcall xxxDesktopRecalc(__int64 a1, struct tagMONITORRECTS *a2, __int64 a3, __int64 a4)
{
  int v6; // edi
  struct tagWND *v7; // r9
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagBWL *v12; // r15
  unsigned __int64 *v13; // rdi
  int v14; // esi
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rbx
  _QWORD *v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rdx
  struct tagWINDOWANDRECT *v20; // rbp
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rsi
  int v24; // r13d
  struct tagTHREADINFO *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct tagWINDOWANDRECT *v29; // r12
  __int64 v30; // r15
  unsigned __int64 *v31; // r14
  struct tagTHREADINFO *v32; // rbx
  __int64 v33; // rax
  __int64 v34; // [rsp+30h] [rbp-48h]
  struct tagBWL *v35; // [rsp+38h] [rbp-40h]
  unsigned int v37; // [rsp+90h] [rbp+18h]
  struct tagTHREADINFO *v38; // [rsp+98h] [rbp+20h]

  v6 = 20;
  if ( PsGetCurrentProcess(a1, a2, a3, a4) == gpepCSRSS )
    v6 = 16404;
  v37 = v6;
  DesktopWindowFromDesktop(a1);
  IsShellWndManagementBehaviorEnabled(a1, 32);
  result = BuildHwndList(v7);
  v35 = (struct tagBWL *)result;
  v12 = (struct tagBWL *)result;
  if ( result )
  {
    v13 = (unsigned __int64 *)(result + 32);
    v14 = 0;
    v15 = *(_QWORD *)(result + 32);
    v16 = (_QWORD *)(result + 32);
    if ( v15 != 1 )
    {
      v17 = (_QWORD *)(result + 32);
      do
      {
        LOBYTE(v9) = 1;
        if ( HMValidateHandleNoSecure(v15, v9, v10, v11) )
        {
          ++v14;
          *v17++ = *v16;
        }
        v15 = *++v16;
      }
      while ( *v16 != 1LL );
      if ( v14 )
      {
        if ( *(_DWORD *)a2 )
        {
          v18 = v14;
          v34 = v14;
          v20 = (struct tagWINDOWANDRECT *)Win32AllocPool(24LL * v14, 2004054869LL);
          if ( v20 )
          {
            if ( v14 > 0 )
            {
              v23 = 0LL;
              do
              {
                if ( *v13 )
                {
                  LOBYTE(v19) = 1;
                  v24 = 0;
                  v25 = *(struct tagTHREADINFO **)(HMValidateHandleNoSecure(*v13, v19, v21, v22) + 16);
                  v38 = v25;
                  if ( v23 < v18 )
                  {
                    v29 = v20;
                    v30 = v18 - v23;
                    v31 = v13;
                    v32 = v25;
                    do
                    {
                      if ( *v31 )
                      {
                        LOBYTE(v26) = 1;
                        v33 = HMValidateHandleNoSecure(*v31, v26, v27, v28);
                        if ( *(struct tagTHREADINFO **)(v33 + 16) == v32 )
                        {
                          ++v24;
                          *(_QWORD *)v29 = *v31;
                          *(_OWORD *)((char *)v29 + 8) = *(_OWORD *)(*(_QWORD *)(v33 + 40) + 88LL);
                          *v31 = 0LL;
                          v29 = (struct tagWINDOWANDRECT *)((char *)v29 + 24);
                        }
                      }
                      ++v31;
                      --v30;
                    }
                    while ( v30 );
                    v18 = v34;
                    v25 = v38;
                  }
                  PostThreadRecalc(v25, a2, v20, v24, v37);
                }
                ++v23;
                ++v13;
              }
              while ( v23 < v18 );
              v12 = v35;
            }
            Win32FreePool(v20);
          }
        }
      }
    }
    return FreeHwndList(v12);
  }
  return result;
}
