/*
 * XREFs of ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00534F4
 * Callers:
 *     SfnINSTRINGNULL @ 0x1C0050770 (SfnINSTRINGNULL.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C00518F0 (SfnGETDBCSTEXTLENGTHS.c)
 *     ClientLoadLibrary @ 0x1C00529C0 (ClientLoadLibrary.c)
 *     SfnINLPCREATESTRUCT @ 0x1C0052C00 (SfnINLPCREATESTRUCT.c)
 *     SfnINDEVICECHANGE @ 0x1C0053C20 (SfnINDEVICECHANGE.c)
 *     xxxClientAddFontResourceW @ 0x1C0055478 (xxxClientAddFontResourceW.c)
 *     SfnPOWERBROADCAST @ 0x1C0055C30 (SfnPOWERBROADCAST.c)
 *     xxxClientLoadImage @ 0x1C00567C4 (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x1C0056C30 (xxxClientLoadMenu.c)
 *     SfnCOPYDATA @ 0x1C00570A0 (SfnCOPYDATA.c)
 *     xxxClientLoadStringW @ 0x1C0057480 (xxxClientLoadStringW.c)
 *     xxxClientExpandStringW @ 0x1C005AC40 (xxxClientExpandStringW.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0094764 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINSTRING @ 0x1C0103970 (SfnINSTRING.c)
 *     ClientGetListboxString @ 0x1C0156A2C (ClientGetListboxString.c)
 *     xxxClientExtTextOutW @ 0x1C0158550 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0158874 (xxxClientGetTextExtentPointW.c)
 *     ClientEventCallback @ 0x1C02149B4 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0214D80 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C02156C0 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C0216290 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C02168B0 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C0217510 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C0217980 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0217DE0 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C0218320 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C021A160 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C021B900 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C021BDC0 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C021CAD0 (SfnTOUCHHITTESTING.c)
 *     xxxClientFindMnemChar @ 0x1C021E7C4 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C021EE84 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C021F2E8 (xxxClientPSMTextOut.c)
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
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
