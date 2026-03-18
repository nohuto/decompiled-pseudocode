/*
 * XREFs of ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x1801F4B4C
 * Callers:
 *     ?GetBufferedOutputTransformed@CInteractionContextWrapper@@UEAAI_K0AEBVCMILMatrix@@PEAUInteractionOutput@@@Z @ 0x1801F3B00 (-GetBufferedOutputTransformed@CInteractionContextWrapper@@UEAAI_K0AEBVCMILMatrix@@PEAUInteractio.c)
 *     ?GetTransformedOutput@CInteractionContextWrapper@@UEAAJAEBVCMILMatrix@@PEAUInteractionOutput@@@Z @ 0x1801F3DD0 (-GetTransformedOutput@CInteractionContextWrapper@@UEAAJAEBVCMILMatrix@@PEAUInteractionOutput@@@Z.c)
 * Callees:
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x180016DAC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@AEBUtagRECT@@1K_NPEAU2@@Z @ 0x180221908 (-TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@AEBUtagRECT@@1K.c)
 */

__int64 __fastcall CInteractionContextWrapper::TransformOutput(
        CInteractionContextWrapper *this,
        const struct CMILMatrix *a2,
        const struct InteractionOutput *a3,
        struct InteractionOutput *a4)
{
  __int64 v7; // rcx
  signed int v9; // ebx
  signed int LastError; // eax
  LONG v11; // xmm1_4
  LONG top; // xmm1_4
  struct tagRECT v14; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v15; // [rsp+50h] [rbp-20h] BYREF

  *(_QWORD *)&v14.left = 0LL;
  *(_QWORD *)&v14.right = 0LL;
  v7 = *((_QWORD *)this + 31);
  *(_QWORD *)&v15.left = 0LL;
  *(_QWORD *)&v15.right = 0LL;
  v9 = 0;
  if ( (unsigned int)GetPointerDeviceRects(v7, &v14, &v15) )
    goto LABEL_5;
  LastError = GetLastError();
  v9 = LastError;
  if ( LastError > 0 )
    v9 = (unsigned __int16)LastError | 0x80070000;
  if ( v9 >= 0 )
  {
LABEL_5:
    CInteractionContextTransformHelper::TransformOutput(
      (CInteractionContextWrapper *)((char *)this + 336),
      a3,
      &v14,
      &v15,
      *((_DWORD *)this + 56),
      *((_BYTE *)this + 328),
      a4);
    v11 = *((_DWORD *)a4 + 11);
    v14.left = *((_DWORD *)a4 + 10);
    v14.top = v11;
    CMILMatrix::Transform(a2, (const struct MilPoint2F *)&v14, (struct MilPoint2F *)&v15, 1);
    top = v15.top;
    *((_DWORD *)a4 + 10) = v15.left;
    *((_DWORD *)a4 + 11) = top;
    *((_DWORD *)a4 + 1) = *((_DWORD *)a3 + 1);
    *(_DWORD *)a4 = *(_DWORD *)a3;
    *((_DWORD *)a4 + 5) = *((_DWORD *)a3 + 5);
  }
  return (unsigned int)v9;
}
