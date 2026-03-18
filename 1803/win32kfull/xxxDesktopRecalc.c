/*
 * XREFs of xxxDesktopRecalc @ 0x1C00F2340
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 *     xxxDesktopsRecalc @ 0x1C00F22DC (xxxDesktopsRecalc.c)
 * Callees:
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0021D3C (IsShellWndManagementBehaviorEnabled.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     ?PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z @ 0x1C00F2518 (-PostThreadRecalc@@YAHPEAUtagTHREADINFO@@PEAUtagMONITORRECTS@@PEAUtagWINDOWANDRECT@@HK@Z.c)
 *     DesktopWindowFromDesktop @ 0x1C00F2610 (DesktopWindowFromDesktop.c)
 */

struct tagBWL *__fastcall xxxDesktopRecalc(__int64 a1, struct tagMONITORRECTS *a2)
{
  int v4; // edi
  int v5; // eax
  _QWORD *v6; // r9
  struct tagBWL *result; // rax
  __int64 v8; // rdx
  struct tagBWL *v9; // r15
  unsigned __int64 *v10; // rdi
  int v11; // esi
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rbx
  _QWORD *v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rdx
  struct tagWINDOWANDRECT *v17; // rbp
  __int64 v18; // rsi
  int v19; // r13d
  struct tagTHREADINFO *v20; // rax
  __int64 v21; // rdx
  struct tagWINDOWANDRECT *v22; // r12
  __int64 v23; // r15
  unsigned __int64 *v24; // r14
  struct tagTHREADINFO *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // [rsp+30h] [rbp-48h]
  struct tagBWL *v28; // [rsp+38h] [rbp-40h]
  unsigned int v30; // [rsp+90h] [rbp+18h]
  struct tagTHREADINFO *v31; // [rsp+98h] [rbp+20h]

  v4 = 20;
  if ( PsGetCurrentProcess(a1, a2) == gpepCSRSS )
    v4 = 16404;
  v30 = v4;
  DesktopWindowFromDesktop(a1);
  v5 = IsShellWndManagementBehaviorEnabled(a1, 32);
  result = BuildHwndList(v6, v5 != 0 ? 98 : 34, 0LL);
  v28 = result;
  v9 = result;
  if ( result )
  {
    v10 = (unsigned __int64 *)((char *)result + 32);
    v11 = 0;
    v12 = *((_QWORD *)result + 4);
    v13 = (_QWORD *)((char *)result + 32);
    if ( v12 != 1 )
    {
      v14 = (_QWORD *)((char *)result + 32);
      do
      {
        LOBYTE(v8) = 1;
        if ( HMValidateHandleNoSecure(v12, v8) )
        {
          ++v11;
          *v14++ = *v13;
        }
        v12 = *++v13;
      }
      while ( *v13 != 1LL );
      if ( v11 )
      {
        if ( *(_DWORD *)a2 )
        {
          v15 = v11;
          v27 = v11;
          v17 = (struct tagWINDOWANDRECT *)Win32AllocPool(24LL * v11, 2004054869LL);
          if ( v17 )
          {
            if ( v11 > 0 )
            {
              v18 = 0LL;
              do
              {
                if ( *v10 )
                {
                  LOBYTE(v16) = 1;
                  v19 = 0;
                  v20 = *(struct tagTHREADINFO **)(HMValidateHandleNoSecure(*v10, v16) + 16);
                  v31 = v20;
                  if ( v18 < v15 )
                  {
                    v22 = v17;
                    v23 = v15 - v18;
                    v24 = v10;
                    v25 = v20;
                    do
                    {
                      if ( *v24 )
                      {
                        LOBYTE(v21) = 1;
                        v26 = HMValidateHandleNoSecure(*v24, v21);
                        if ( *(struct tagTHREADINFO **)(v26 + 16) == v25 )
                        {
                          ++v19;
                          *(_QWORD *)v22 = *v24;
                          *(_OWORD *)((char *)v22 + 8) = *(_OWORD *)(*(_QWORD *)(v26 + 40) + 88LL);
                          *v24 = 0LL;
                          v22 = (struct tagWINDOWANDRECT *)((char *)v22 + 24);
                        }
                      }
                      ++v24;
                      --v23;
                    }
                    while ( v23 );
                    v15 = v27;
                    v20 = v31;
                  }
                  PostThreadRecalc(v20, a2, v17, v19, v30);
                }
                ++v18;
                ++v10;
              }
              while ( v18 < v15 );
              v9 = v28;
            }
            Win32FreePool(v17);
          }
        }
      }
    }
    return (struct tagBWL *)FreeHwndList(v9);
  }
  return result;
}
