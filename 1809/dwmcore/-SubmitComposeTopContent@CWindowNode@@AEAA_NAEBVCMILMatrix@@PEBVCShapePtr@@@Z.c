/*
 * XREFs of ?SubmitComposeTopContent@CWindowNode@@AEAA_NAEBVCMILMatrix@@PEBVCShapePtr@@@Z @ 0x1801BA0E0
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18002EF10 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CWindowNode::SubmitComposeTopContent(
        CWindowNode *this,
        const struct CMILMatrix *a2,
        const struct CShapePtr *a3)
{
  char v3; // bl
  __int64 v7; // r14
  unsigned int v8; // esi
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx

  v3 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 64LL);
  if ( *(_DWORD *)(v9 + 80) )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 56) + 8LL * v8);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 264LL))(v10) )
        break;
      if ( ++v8 >= *(_DWORD *)(v9 + 80) )
        goto LABEL_6;
    }
    v7 = *(_QWORD *)(*(_QWORD *)(v9 + 56) + 8LL * v8);
  }
LABEL_6:
  if ( !*((_BYTE *)this + 955) )
  {
    v11 = *((_QWORD *)this + 95);
    if ( v11 )
    {
      if ( *(_QWORD *)a3 && v7 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, const struct CMILMatrix *))(*(_QWORD *)v7 + 192LL))(
                v7,
                v11,
                *(_QWORD *)a3,
                a2);
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xDDEu);
        }
        else
        {
          v3 = 1;
          *((_BYTE *)this + 955) = 1;
        }
      }
    }
  }
  return v3;
}
