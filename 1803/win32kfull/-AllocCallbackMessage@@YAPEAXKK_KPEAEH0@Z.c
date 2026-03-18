/*
 * XREFs of ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C0020A2C
 * Callers:
 *     xxxClientCallDevCallbackCapture @ 0x1C0006FC8 (xxxClientCallDevCallbackCapture.c)
 *     SfnOUTSTRING @ 0x1C001FAA0 (SfnOUTSTRING.c)
 *     SfnINLPCREATESTRUCT @ 0x1C00201D0 (SfnINLPCREATESTRUCT.c)
 *     SfnINSTRINGNULL @ 0x1C0023830 (SfnINSTRINGNULL.c)
 *     xxxClientAddFontResourceW @ 0x1C004F294 (xxxClientAddFontResourceW.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C005202C (fnHkINLPCBTCREATESTRUCT.c)
 *     xxxClientExpandStringW @ 0x1C0052778 (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x1C0052BB4 (xxxClientLoadStringW.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0052F70 (SfnGETDBCSTEXTLENGTHS.c)
 *     xxxClientLoadImage @ 0x1C006BC38 (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x1C006C1CC (xxxClientLoadMenu.c)
 *     ClientLoadLibrary @ 0x1C00D8938 (ClientLoadLibrary.c)
 *     SfnINDEVICECHANGE @ 0x1C00EE530 (SfnINDEVICECHANGE.c)
 *     SfnPOWERBROADCAST @ 0x1C00F7D00 (SfnPOWERBROADCAST.c)
 *     SfnCOPYDATA @ 0x1C00FA200 (SfnCOPYDATA.c)
 *     SfnINSTRING @ 0x1C00FC540 (SfnINSTRING.c)
 *     ClientGetListboxString @ 0x1C012CAF8 (ClientGetListboxString.c)
 *     xxxClientExtTextOutW @ 0x1C0132C8C (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0132F54 (xxxClientGetTextExtentPointW.c)
 *     ClientEventCallback @ 0x1C01D8828 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C01D8B90 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C01D9400 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C01D9F10 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C01DA4C0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C01DB050 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C01DB440 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C01DB820 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C01DBCF0 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C01DD930 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C01DEB00 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C01DEF50 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C01DFF40 (SfnTOUCHHITTESTING.c)
 *     xxxClientFindMnemChar @ 0x1C01E1818 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C01E1E54 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C01E2234 (xxxClientPSMTextOut.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

unsigned __int8 *__fastcall AllocCallbackMessage(
        int a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 *a4,
        int a5,
        size_t Size)
{
  unsigned __int8 *v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rdi
  ULONG_PTR v9; // rdx
  bool v10; // zf
  int v11; // eax
  unsigned __int8 *result; // rax
  __int64 v13; // rax
  _QWORD *v14; // rsi
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+18h] BYREF

  v6 = a4;
  if ( a2 )
  {
    v7 = (a1 + 7) & 0xFFFFFFF8;
    v8 = v7 + 8 * a2;
    v9 = (a3 + 7LL * a2) & 0xFFFFFFFFFFFFFFF8uLL;
    RegionSize = v9;
    if ( v9 > 0x800 )
    {
      v13 = Win32AllocPoolWithQuotaZInit((unsigned int)v8, 1667461973LL);
      v6 = (unsigned __int8 *)v13;
      if ( v13 )
      {
        v14 = (_QWORD *)(v13 + 32);
        *(_QWORD *)(v13 + 32) = 0LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v13 + 32), 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
        {
          *((_QWORD *)v6 + 2) = *v14;
          goto LABEL_11;
        }
        Win32FreePool(v6);
      }
    }
    else
    {
      if ( v8 + v9 <= Size )
      {
        memset(a4, 0, Size);
        goto LABEL_5;
      }
      v6 = (unsigned __int8 *)Win32AllocPoolWithQuotaZInit((unsigned int)(v9 + v8), 1667461973LL);
      if ( v6 )
      {
LABEL_5:
        *((_QWORD *)v6 + 4) = 0LL;
        v10 = a5 == 0;
        *((_QWORD *)v6 + 2) = &v6[v8];
        if ( !v10 )
        {
          *(_DWORD *)v6 = v8 + RegionSize;
LABEL_7:
          v11 = RegionSize;
          *((_DWORD *)v6 + 2) = 0;
          *((_DWORD *)v6 + 1) = v11;
          result = v6;
          *((_DWORD *)v6 + 6) = v7;
          return result;
        }
LABEL_11:
        *(_DWORD *)v6 = v8;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
