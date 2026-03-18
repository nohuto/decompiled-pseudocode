/*
 * XREFs of xxxDesktopRecalc @ 0x1C0010B68
 * Callers:
 *     xxxDesktopsRecalc @ 0x1C0010AEC (xxxDesktopsRecalc.c)
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C0010D54 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     DesktopWindowFromDesktop @ 0x1C0010E5C (DesktopWindowFromDesktop.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0023EEC (IsShellWndManagementBehaviorEnabled.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall xxxDesktopRecalc(__int64 a1, struct tagMONITORRECTS *a2, __int64 a3, __int64 a4)
{
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // r8
  struct tagWND *v9; // r9
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  _QWORD *v13; // rdi
  int v14; // esi
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  _QWORD *v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rdx
  struct tagWINDOWANDRECT *v20; // rbp
  __int64 v21; // rsi
  int v22; // r13d
  struct tagTHREADINFO *v23; // rax
  __int64 v24; // rdx
  struct tagWINDOWANDRECT *v25; // r12
  __int64 v26; // r15
  _QWORD *v27; // r14
  struct tagTHREADINFO *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // [rsp+30h] [rbp-48h]
  __int64 v31; // [rsp+38h] [rbp-40h]
  unsigned int v33; // [rsp+90h] [rbp+18h]
  struct tagTHREADINFO *v34; // [rsp+98h] [rbp+20h]

  v6 = 20;
  if ( PsGetCurrentProcess(a1, a2, a3, a4) == gpepCSRSS )
    v6 = 16404;
  v33 = v6;
  v7 = DesktopWindowFromDesktop(a1);
  IsShellWndManagementBehaviorEnabled(a1, 32LL, v8, *(_QWORD *)(v7 + 112));
  result = BuildHwndList(v9);
  v31 = result;
  v12 = result;
  if ( result )
  {
    v13 = (_QWORD *)(result + 32);
    v14 = 0;
    v15 = *(_QWORD *)(result + 32);
    v16 = (_QWORD *)(result + 32);
    if ( v15 != 1 )
    {
      v17 = (_QWORD *)(result + 32);
      do
      {
        LOBYTE(v11) = 1;
        if ( HMValidateHandleNoSecure(v15, v11) )
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
          v30 = v14;
          v20 = (struct tagWINDOWANDRECT *)Win32AllocPool(24LL * v14, 2004054869LL);
          if ( v20 )
          {
            if ( v14 > 0 )
            {
              v21 = 0LL;
              do
              {
                if ( *v13 )
                {
                  LOBYTE(v19) = 1;
                  v22 = 0;
                  v23 = *(struct tagTHREADINFO **)(HMValidateHandleNoSecure(*v13, v19) + 16);
                  v34 = v23;
                  if ( v21 < v18 )
                  {
                    v25 = v20;
                    v26 = v18 - v21;
                    v27 = v13;
                    v28 = v23;
                    do
                    {
                      if ( *v27 )
                      {
                        LOBYTE(v24) = 1;
                        v29 = HMValidateHandleNoSecure(*v27, v24);
                        if ( *(struct tagTHREADINFO **)(v29 + 16) == v28 )
                        {
                          ++v22;
                          *(_QWORD *)v25 = *v27;
                          *(_OWORD *)((char *)v25 + 8) = *(_OWORD *)(*(_QWORD *)(v29 + 40) + 88LL);
                          *v27 = 0LL;
                          v25 = (struct tagWINDOWANDRECT *)((char *)v25 + 24);
                        }
                      }
                      ++v27;
                      --v26;
                    }
                    while ( v26 );
                    v18 = v30;
                    v23 = v34;
                  }
                  PostThreadRecalc(v23, a2, v20, v22, v33);
                }
                ++v21;
                ++v13;
              }
              while ( v21 < v18 );
              v12 = v31;
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
