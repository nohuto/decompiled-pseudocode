/*
 * XREFs of xxxCallCtfHook @ 0x1C00AA118
 * Callers:
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     fnHkINLPMSG @ 0x1C00A6380 (fnHkINLPMSG.c)
 *     fnHkINDWORD @ 0x1C00AB0F4 (fnHkINDWORD.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C0120634 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C0159070 (fnHkINLPCBTACTIVATESTRUCT.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall xxxCallCtfHook(int a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rbx
  __int64 v7; // rbp
  unsigned int v9; // r14d
  __int16 v10; // r12
  __int64 v11; // rdx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  __int64 v16; // r8
  int v19; // [rsp+40h] [rbp-78h] BYREF
  __int64 v20[4]; // [rsp+48h] [rbp-70h] BYREF

  v4 = 0;
  v5 = a1;
  v7 = a3;
  v9 = (unsigned __int16)a2 | ((unsigned __int16)a1 << 16);
  v19 = 0;
  v10 = 0;
  if ( gpsi )
  {
    if ( *(_QWORD *)(gpsi + 856LL) )
    {
      if ( gptiCurrent != gptiRit && (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000000D) == 0 )
      {
        if ( *(_QWORD *)(gptiCurrent + 448LL) )
        {
          v11 = (unsigned int)(*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL));
          if ( ((*(_WORD *)(gptiCurrent + 672LL) | *(_WORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x400) == 0
            || (memset(v20, 0, sizeof(v20)),
                v20[0] = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent),
                LODWORD(v20[3]) = a2,
                v20[2] = v7,
                v20[1] = a4,
                !(unsigned int)xxxCallHook(0, v5, (__int64)v20, 9)) )
          {
            v12 = v5 - 2;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( !v13 )
                return (unsigned int)fnHkINLPMSG(v9, v7, a4, 0LL, *(_QWORD *)(gpsi + 856LL), 0, &v19);
              v14 = v13 - 2;
              if ( v14 )
              {
                v15 = v14 - 2;
                if ( v15 )
                {
                  if ( v15 != 3 || a2 == 5 )
                    return v4;
                  goto LABEL_14;
                }
                return (unsigned int)fnHkINLPMOUSEHOOKSTRUCTEX(v9, v7, a4, 0, *(_QWORD *)(gpsi + 856LL), (__int64)&v19);
              }
              if ( a2 == 5 )
                return (unsigned int)fnHkINLPCBTACTIVATESTRUCT(v9, v7, a4, 0, *(_QWORD *)(gpsi + 856LL));
            }
LABEL_14:
            v16 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, a3, a4) + 432);
            if ( v16 )
              v10 = InternalMapVirtualKeyEx((unsigned int)v7, 0LL, *(_QWORD *)(*(_QWORD *)(v16 + 48) + 32LL));
            if ( v7 == 231 && !(_BYTE)v10 && (v10 & 0x8000) == 0 )
              LODWORD(v7) = (*(unsigned __int16 *)(gptiCurrent + 874LL) << 16) | 0xE7;
            return (unsigned int)fnHkINDWORD(v9, v7, a4, 0, *(_QWORD *)(gpsi + 856LL), (__int64)&v19);
          }
        }
      }
    }
  }
  return 0LL;
}
