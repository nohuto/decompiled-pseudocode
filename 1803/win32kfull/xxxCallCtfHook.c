/*
 * XREFs of xxxCallCtfHook @ 0x1C001C1F4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 * Callees:
 *     fnHkINDWORD @ 0x1C001E4B0 (fnHkINDWORD.c)
 *     fnHkINLPMSG @ 0x1C00439D0 (fnHkINLPMSG.c)
 *     fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C00F6CB4 (fnHkINLPMOUSEHOOKSTRUCTEX.c)
 *     fnHkINLPCBTACTIVATESTRUCT @ 0x1C0130A44 (fnHkINLPCBTACTIVATESTRUCT.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall xxxCallCtfHook(int a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // edi
  int v9; // ebp
  int v10; // ebx
  int v11; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // [rsp+40h] [rbp-68h] BYREF
  __int64 v17[4]; // [rsp+48h] [rbp-60h] BYREF

  v4 = a1;
  v5 = 0;
  v9 = (unsigned __int16)a2 | ((unsigned __int16)a1 << 16);
  v16 = 0;
  if ( gpsi )
  {
    if ( *(_QWORD *)(gpsi + 856LL) )
    {
      if ( gptiCurrent != gptiRit && (*(_DWORD *)(gptiCurrent + 480LL) & 0x1000000D) == 0 )
      {
        if ( *(_QWORD *)(gptiCurrent + 448LL) )
        {
          if ( ((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x400) == 0
            || (memset(v17, 0, sizeof(v17)),
                v17[0] = (unsigned int)PsGetThreadId((PETHREAD)*gptiCurrent),
                LODWORD(v17[3]) = a2,
                v17[2] = a3,
                v17[1] = a4,
                !(unsigned int)xxxCallHook(0, v4, (__int64)v17, 9)) )
          {
            v10 = v4 - 2;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( !v11 )
                return (unsigned int)fnHkINLPMSG(v9, a3, a4, 0, *(_QWORD *)(gpsi + 856LL), 0, (__int64)&v16);
              v14 = v11 - 2;
              if ( v14 )
              {
                v15 = v14 - 2;
                if ( !v15 )
                  return (unsigned int)fnHkINLPMOUSEHOOKSTRUCTEX(
                                         v9,
                                         a3,
                                         a4,
                                         0,
                                         *(_QWORD *)(gpsi + 856LL),
                                         (__int64)&v16);
                if ( v15 != 3 || a2 == 5 )
                  return v5;
              }
              else if ( a2 == 5 )
              {
                return (unsigned int)fnHkINLPCBTACTIVATESTRUCT(v9, a3, a4, 0, *(_QWORD *)(gpsi + 856LL));
              }
            }
            return (unsigned int)fnHkINDWORD(v9, a3, a4, 0, *(_QWORD *)(gpsi + 856LL), (__int64)&v16);
          }
        }
      }
    }
  }
  return 0LL;
}
