/*
 * XREFs of ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C001A674
 * Callers:
 *     SfnINLPCREATESTRUCT @ 0x1C0019E00 (SfnINLPCREATESTRUCT.c)
 *     SfnINSTRINGNULL @ 0x1C0068130 (SfnINSTRINGNULL.c)
 *     xxxClientLoadMenu @ 0x1C00B3DE8 (xxxClientLoadMenu.c)
 *     ClientLoadLibrary @ 0x1C00B622C (ClientLoadLibrary.c)
 *     xxxClientLoadImage @ 0x1C00B7340 (xxxClientLoadImage.c)
 *     xxxClientAddFontResourceW @ 0x1C00C3414 (xxxClientAddFontResourceW.c)
 *     xxxClientExpandStringW @ 0x1C00DAF0C (xxxClientExpandStringW.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0107828 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINDEVICECHANGE @ 0x1C0109F00 (SfnINDEVICECHANGE.c)
 *     SfnPOWERBROADCAST @ 0x1C010EBF0 (SfnPOWERBROADCAST.c)
 *     SfnCOPYDATA @ 0x1C01191C0 (SfnCOPYDATA.c)
 *     SfnINSTRING @ 0x1C011BCC0 (SfnINSTRING.c)
 *     xxxClientExtTextOutW @ 0x1C0151824 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0151B08 (xxxClientGetTextExtentPointW.c)
 *     ClientEventCallback @ 0x1C01FD9BC (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C01FDD60 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C01FE660 (SfnIMECONTROL.c)
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
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall CaptureCallbackData(struct _CAPTUREBUF *a1, unsigned __int64 a2, unsigned int a3, void **a4)
{
  __int64 v5; // rax
  const void *v6; // r10
  char *v8; // rdi
  unsigned __int64 v10; // r8

  v5 = a3;
  v6 = (const void *)a2;
  if ( !a2 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( a3 > *((_DWORD *)a1 + 1) )
    return 2147483653LL;
  v8 = (char *)*((_QWORD *)a1 + 2);
  if ( !*((_QWORD *)a1 + 4) )
    goto LABEL_4;
  v10 = *((_QWORD *)a1 + 2);
  if ( a2 > (unsigned __int64)v8 )
    v10 = a2;
  if ( a2 + v5 >= (unsigned __int64)&v8[v5] )
    a2 = *((_QWORD *)a1 + 2);
  if ( v10 >= (unsigned int)v5 + a2 )
  {
LABEL_4:
    *((_QWORD *)a1 + 2) = &v8[((unsigned int)v5 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
    memmove(v8, v6, (unsigned int)v5);
    if ( *((_QWORD *)a1 + 4) )
    {
      *a4 = v8;
    }
    else
    {
      *a4 = (void *)(v8 - (char *)a1);
      *(_DWORD *)((char *)a1 + 4 * (*((_DWORD *)a1 + 2))++ + *((unsigned int *)a1 + 6)) = (_DWORD)a4 - (_DWORD)a1;
    }
    return 0LL;
  }
  return 3221225496LL;
}
