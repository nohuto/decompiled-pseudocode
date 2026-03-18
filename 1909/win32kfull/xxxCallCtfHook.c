/*
 * XREFs of xxxCallCtfHook @ 0x1C004AEF8
 * Callers:
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     fnHkINLPMSG @ 0x1C0047160 (fnHkINLPMSG.c)
 *     fnHkINDWORD @ 0x1C004BF20 (fnHkINDWORD.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C00FAEA4 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C015A020 (fnHkINLPCBTACTIVATESTRUCT.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall xxxCallCtfHook(int a1, int a2, __int64 a3, __int128 *a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rbx
  unsigned int v9; // r14d
  __int16 v10; // r12
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  __int64 v15; // r8
  int v18; // [rsp+40h] [rbp-78h] BYREF
  __int64 v19[4]; // [rsp+48h] [rbp-70h] BYREF

  v4 = 0;
  v5 = a1;
  v9 = (unsigned __int16)a2 | ((unsigned __int16)a1 << 16);
  v18 = 0;
  v10 = 0;
  if ( gpsi )
  {
    if ( *(_QWORD *)(gpsi + 856LL) )
    {
      if ( gptiCurrent != gptiRit && (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000000D) == 0 )
      {
        if ( *(_QWORD *)(gptiCurrent + 448LL) )
        {
          if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x400) == 0
            || (memset(v19, 0, sizeof(v19)),
                v19[0] = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent),
                LODWORD(v19[3]) = a2,
                v19[2] = a3,
                v19[1] = (__int64)a4,
                !(unsigned int)xxxCallHook(0, v5, (__int64)v19, 9)) )
          {
            v11 = v5 - 2;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( !v12 )
                return (unsigned int)fnHkINLPMSG(v9, a3, a4, 0LL, *(_QWORD *)(gpsi + 856LL), 0, &v18);
              v13 = v12 - 2;
              if ( v13 )
              {
                v14 = v13 - 2;
                if ( v14 )
                {
                  if ( v14 != 3 || a2 == 5 )
                    return v4;
                  goto LABEL_14;
                }
                return (unsigned int)fnHkINLPMOUSEHOOKSTRUCTEX(
                                       v9,
                                       a3,
                                       (_DWORD)a4,
                                       0,
                                       *(_QWORD *)(gpsi + 856LL),
                                       (__int64)&v18);
              }
              if ( a2 == 5 )
                return (unsigned int)fnHkINLPCBTACTIVATESTRUCT(v9, a3, (_DWORD)a4, 0, *(_QWORD *)(gpsi + 856LL));
            }
LABEL_14:
            v15 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 432);
            if ( v15 )
              v10 = InternalMapVirtualKeyEx((unsigned int)a3, 0LL, *(_QWORD *)(*(_QWORD *)(v15 + 48) + 32LL));
            if ( a3 == 231 && !(_BYTE)v10 && (v10 & 0x8000) == 0 )
              LODWORD(a3) = (*(unsigned __int16 *)(gptiCurrent + 874LL) << 16) | 0xE7;
            return (unsigned int)fnHkINDWORD(v9, a3, (_DWORD)a4, 0, *(_QWORD *)(gpsi + 856LL), (__int64)&v18);
          }
        }
      }
    }
  }
  return 0LL;
}
