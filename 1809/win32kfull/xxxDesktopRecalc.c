/*
 * XREFs of xxxDesktopRecalc @ 0x1C00BCB48
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     xxxDesktopsRecalc @ 0x1C00BCADC (xxxDesktopsRecalc.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C006A180 (IsShellWndManagementBehaviorEnabled.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C00BCD34 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     DesktopWindowFromDesktop @ 0x1C00BCE3C (DesktopWindowFromDesktop.c)
 */

struct tagBWL *__fastcall xxxDesktopRecalc(__int64 a1, struct tagMONITORRECTS *a2, __int64 a3, __int64 a4)
{
  int v6; // edi
  int v7; // eax
  struct tagWND *v8; // r9
  struct tagBWL *result; // rax
  __int64 v10; // rdx
  struct tagBWL *v11; // r15
  unsigned __int64 *v12; // rdi
  int v13; // esi
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rbx
  _QWORD *v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rdx
  struct tagWINDOWANDRECT *v19; // rbp
  __int64 v20; // rsi
  int v21; // r13d
  struct tagTHREADINFO *v22; // rax
  __int64 v23; // rdx
  struct tagWINDOWANDRECT *v24; // r12
  __int64 v25; // r15
  unsigned __int64 *v26; // r14
  struct tagTHREADINFO *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // [rsp+30h] [rbp-48h]
  struct tagBWL *v30; // [rsp+38h] [rbp-40h]
  unsigned int v32; // [rsp+90h] [rbp+18h]
  struct tagTHREADINFO *v33; // [rsp+98h] [rbp+20h]

  v6 = 20;
  if ( PsGetCurrentProcess(a1, a2, a3, a4) == gpepCSRSS )
    v6 = 16404;
  v32 = v6;
  DesktopWindowFromDesktop(a1);
  v7 = IsShellWndManagementBehaviorEnabled(a1, 32);
  result = BuildHwndList(v8, v7 != 0 ? 66 : 2, 0LL);
  v30 = result;
  v11 = result;
  if ( result )
  {
    v12 = (unsigned __int64 *)((char *)result + 32);
    v13 = 0;
    v14 = *((_QWORD *)result + 4);
    v15 = (_QWORD *)((char *)result + 32);
    if ( v14 != 1 )
    {
      v16 = (_QWORD *)((char *)result + 32);
      do
      {
        LOBYTE(v10) = 1;
        if ( HMValidateHandleNoSecure(v14, v10) )
        {
          ++v13;
          *v16++ = *v15;
        }
        v14 = *++v15;
      }
      while ( *v15 != 1LL );
      if ( v13 )
      {
        if ( *(_DWORD *)a2 )
        {
          v17 = v13;
          v29 = v13;
          v19 = (struct tagWINDOWANDRECT *)Win32AllocPool(24LL * v13, 2004054869LL);
          if ( v19 )
          {
            if ( v13 > 0 )
            {
              v20 = 0LL;
              do
              {
                if ( *v12 )
                {
                  LOBYTE(v18) = 1;
                  v21 = 0;
                  v22 = *(struct tagTHREADINFO **)(HMValidateHandleNoSecure(*v12, v18) + 16);
                  v33 = v22;
                  if ( v20 < v17 )
                  {
                    v24 = v19;
                    v25 = v17 - v20;
                    v26 = v12;
                    v27 = v22;
                    do
                    {
                      if ( *v26 )
                      {
                        LOBYTE(v23) = 1;
                        v28 = HMValidateHandleNoSecure(*v26, v23);
                        if ( *(struct tagTHREADINFO **)(v28 + 16) == v27 )
                        {
                          ++v21;
                          *(_QWORD *)v24 = *v26;
                          *(_OWORD *)((char *)v24 + 8) = *(_OWORD *)(*(_QWORD *)(v28 + 40) + 88LL);
                          *v26 = 0LL;
                          v24 = (struct tagWINDOWANDRECT *)((char *)v24 + 24);
                        }
                      }
                      ++v26;
                      --v25;
                    }
                    while ( v25 );
                    v17 = v29;
                    v22 = v33;
                  }
                  PostThreadRecalc(v22, a2, v19, v21, v32);
                }
                ++v20;
                ++v12;
              }
              while ( v20 < v17 );
              v11 = v30;
            }
            Win32FreePool(v19);
          }
        }
      }
    }
    return (struct tagBWL *)FreeHwndList(v11);
  }
  return result;
}
