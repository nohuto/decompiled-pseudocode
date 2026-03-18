/*
 * XREFs of ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0020B54
 * Callers:
 *     SfnINLPCREATESTRUCT @ 0x1C00201D0 (SfnINLPCREATESTRUCT.c)
 *     SfnINSTRINGNULL @ 0x1C0023830 (SfnINSTRINGNULL.c)
 *     xxxClientAddFontResourceW @ 0x1C004F294 (xxxClientAddFontResourceW.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C005202C (fnHkINLPCBTCREATESTRUCT.c)
 *     xxxClientExpandStringW @ 0x1C0052778 (xxxClientExpandStringW.c)
 *     xxxClientLoadImage @ 0x1C006BC38 (xxxClientLoadImage.c)
 *     xxxClientLoadMenu @ 0x1C006C1CC (xxxClientLoadMenu.c)
 *     ClientLoadLibrary @ 0x1C00D8938 (ClientLoadLibrary.c)
 *     SfnINDEVICECHANGE @ 0x1C00EE530 (SfnINDEVICECHANGE.c)
 *     SfnPOWERBROADCAST @ 0x1C00F7D00 (SfnPOWERBROADCAST.c)
 *     SfnCOPYDATA @ 0x1C00FA200 (SfnCOPYDATA.c)
 *     SfnINSTRING @ 0x1C00FC540 (SfnINSTRING.c)
 *     xxxClientExtTextOutW @ 0x1C0132C8C (xxxClientExtTextOutW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0132F54 (xxxClientGetTextExtentPointW.c)
 *     ClientEventCallback @ 0x1C01D8828 (ClientEventCallback.c)
 *     SfnCOPYGLOBALDATA @ 0x1C01D8B90 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C01D9400 (SfnIMECONTROL.c)
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
 *     memmove @ 0x1C013D380 (memmove.c)
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
