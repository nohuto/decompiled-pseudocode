/*
 * XREFs of ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00B25F4
 * Callers:
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C0076C54 (fnHkINLPCBTCREATESTRUCT.c)
 *     SfnINSTRINGNULL @ 0x1C00AF910 (SfnINSTRINGNULL.c)
 *     ClientLoadLibrary @ 0x1C00B1B60 (ClientLoadLibrary.c)
 *     SfnINLPCREATESTRUCT @ 0x1C00B1DA0 (SfnINLPCREATESTRUCT.c)
 *     SfnINDEVICECHANGE @ 0x1C00B2DC0 (SfnINDEVICECHANGE.c)
 *     xxxClientAddFontResourceW @ 0x1C00B4708 (xxxClientAddFontResourceW.c)
 *     SfnPOWERBROADCAST @ 0x1C00B4E80 (SfnPOWERBROADCAST.c)
 *     xxxClientLoadImage @ 0x1C00B5A14 (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x1C00B5E80 (xxxClientLoadMenu.c)
 *     SfnCOPYDATA @ 0x1C00B62F0 (SfnCOPYDATA.c)
 *     xxxClientExpandStringW @ 0x1C00E331C (xxxClientExpandStringW.c)
 *     SfnINSTRING @ 0x1C01288C0 (SfnINSTRING.c)
 *     xxxClientExtTextOutW @ 0x1C0157790 (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0157AB4 (xxxClientGetTextExtentPointW.c)
 *     ClientEventCallback @ 0x1C0214EF4 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C02152C0 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C0215C00 (SfnIMECONTROL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C0217A50 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C0217EC0 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0218320 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C0218860 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C021A6A0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1C021BE40 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C021C300 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C021D010 (SfnTOUCHHITTESTING.c)
 *     xxxClientFindMnemChar @ 0x1C021ED04 (xxxClientFindMnemChar.c)
 *     xxxClientLpkDrawTextEx @ 0x1C021F3C4 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C021F828 (xxxClientPSMTextOut.c)
 * Callees:
 *     memmove @ 0x1C0166500 (memmove.c)
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
