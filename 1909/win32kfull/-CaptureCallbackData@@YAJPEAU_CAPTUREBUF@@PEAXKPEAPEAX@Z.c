/*
 * XREFs of ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0053454
 * Callers:
 *     SfnINSTRINGNULL @ 0x1C0050770 (SfnINSTRINGNULL.c)
 *     ClientLoadLibrary @ 0x1C00529C0 (ClientLoadLibrary.c)
 *     SfnINLPCREATESTRUCT @ 0x1C0052C00 (SfnINLPCREATESTRUCT.c)
 *     SfnINDEVICECHANGE @ 0x1C0053C20 (SfnINDEVICECHANGE.c)
 *     xxxClientAddFontResourceW @ 0x1C0055478 (xxxClientAddFontResourceW.c)
 *     SfnPOWERBROADCAST @ 0x1C0055C30 (SfnPOWERBROADCAST.c)
 *     xxxClientLoadImage @ 0x1C00567C4 (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x1C0056C30 (xxxClientLoadMenu.c)
 *     SfnCOPYDATA @ 0x1C00570A0 (SfnCOPYDATA.c)
 *     xxxClientExpandStringW @ 0x1C005AC40 (xxxClientExpandStringW.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0094764 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINSTRING @ 0x1C0103970 (SfnINSTRING.c)
 *     xxxClientExtTextOutW @ 0x1C0158550 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0158874 (xxxClientGetTextExtentPointW.c)
 *     ClientEventCallback @ 0x1C02149B4 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0214D80 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C02156C0 (SfnIMECONTROL.c)
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
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall CaptureCallbackData(struct _CAPTUREBUF *a1, char *a2, unsigned int a3, void **a4)
{
  char *v7; // rdi
  char *v9; // rdx
  char *v10; // rcx

  if ( !a2 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( a3 > *((_DWORD *)a1 + 1) )
    return 2147483653LL;
  v7 = (char *)*((_QWORD *)a1 + 2);
  if ( !*((_QWORD *)a1 + 4) )
    goto LABEL_4;
  v9 = (char *)*((_QWORD *)a1 + 2);
  if ( a2 > v7 )
    v9 = a2;
  v10 = &v7[a3];
  if ( &a2[a3] < v10 )
    v10 = &a2[a3];
  if ( v9 >= v10 )
  {
LABEL_4:
    *((_QWORD *)a1 + 2) = &v7[(a3 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
    memmove(v7, a2, a3);
    if ( *((_QWORD *)a1 + 4) )
    {
      *a4 = v7;
    }
    else
    {
      *a4 = (void *)(v7 - (char *)a1);
      *(_DWORD *)((char *)a1 + 4 * (*((_DWORD *)a1 + 2))++ + *((unsigned int *)a1 + 6)) = (_DWORD)a4 - (_DWORD)a1;
    }
    return 0LL;
  }
  return 3221225496LL;
}
