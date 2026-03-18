/*
 * XREFs of TranslateBridgeResources @ 0x1C00B1F20
 * Callers:
 *     <none>
 * Callees:
 *     CmMemIoResourceUpdateType @ 0x1C005E598 (CmMemIoResourceUpdateType.c)
 *     FindTranslationRange @ 0x1C00B1D08 (FindTranslationRange.c)
 */

__int64 __fastcall TranslateBridgeResources(
        __int64 a1,
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor)
{
  ULONGLONG v10; // rax
  __int64 result; // rax
  unsigned int v12; // ebx
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v13; // r9
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v10 = RtlCmDecodeMemIoResource(a2, 0LL);
  result = FindTranslationRange(a2->u.Generic.Start.QuadPart, v10, a1, a3, a2->Type, &v14);
  v12 = 0;
  if ( (int)result >= 0 )
  {
    v13 = Descriptor;
    *Descriptor = *a2;
    if ( a3 )
    {
      if ( a3 == 1 )
        CmMemIoResourceUpdateType(
          v13,
          *(_BYTE *)(v14 + 1),
          a2->u.Generic.Start.QuadPart + *(_QWORD *)(v14 + 16) - *(_QWORD *)(v14 + 8));
      else
        return (unsigned int)-1073741811;
    }
    else
    {
      CmMemIoResourceUpdateType(
        v13,
        *(_BYTE *)v14,
        a2->u.Generic.Start.QuadPart + *(_QWORD *)(v14 + 8) - *(_QWORD *)(v14 + 16));
      return 288;
    }
    return v12;
  }
  return result;
}
