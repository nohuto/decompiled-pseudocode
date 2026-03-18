/*
 * XREFs of ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C001A718
 * Callers:
 *     xxxClientCallDevCallbackCapture @ 0x1C00070E8 (xxxClientCallDevCallbackCapture.c)
 *     SfnINLPCREATESTRUCT @ 0x1C0019E00 (SfnINLPCREATESTRUCT.c)
 *     SfnINSTRINGNULL @ 0x1C0068130 (SfnINSTRINGNULL.c)
 *     SfnOUTSTRING @ 0x1C00AF100 (SfnOUTSTRING.c)
 *     xxxClientLoadMenu @ 0x1C00B3DE8 (xxxClientLoadMenu.c)
 *     ClientLoadLibrary @ 0x1C00B622C (ClientLoadLibrary.c)
 *     xxxClientLoadImage @ 0x1C00B7340 (xxxClientLoadImage.c)
 *     xxxClientLoadStringW @ 0x1C00BEB60 (xxxClientLoadStringW.c)
 *     xxxClientAddFontResourceW @ 0x1C00C3414 (xxxClientAddFontResourceW.c)
 *     xxxClientExpandStringW @ 0x1C00DAF0C (xxxClientExpandStringW.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C01022C0 (SfnGETDBCSTEXTLENGTHS.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0107828 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINDEVICECHANGE @ 0x1C0109F00 (SfnINDEVICECHANGE.c)
 *     SfnPOWERBROADCAST @ 0x1C010EBF0 (SfnPOWERBROADCAST.c)
 *     SfnCOPYDATA @ 0x1C01191C0 (SfnCOPYDATA.c)
 *     SfnINSTRING @ 0x1C011BCC0 (SfnINSTRING.c)
 *     ClientGetListboxString @ 0x1C014F55C (ClientGetListboxString.c)
 *     xxxClientExtTextOutW @ 0x1C0151824 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0151B08 (xxxClientGetTextExtentPointW.c)
 *     ClientEventCallback @ 0x1C01FD9BC (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C01FDD60 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C01FE660 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C01FF1F0 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C01FF7E0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C0200420 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C0200850 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0200C70 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C0201180 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C0202F80 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C0204280 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C0204710 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C0205800 (SfnTOUCHHITTESTING.c)
 *     xxxClientFindMnemChar @ 0x1C02073A0 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0207A40 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0207E64 (xxxClientPSMTextOut.c)
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
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
