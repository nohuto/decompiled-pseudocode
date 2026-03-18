/*
 * XREFs of ?MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z @ 0x1C011C9D0
 * Callers:
 *     NtUserMapPointsByVisualIdentifier @ 0x1C0118DF0 (NtUserMapPointsByVisualIdentifier.c)
 * Callees:
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?GetTransformFromVisualIdentifier@@YAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1C011C7C0 (-GetTransformFromVisualIdentifier@@YAJAEBU_LUID@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?InverseTransformPoint@@YA?AUVisualPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1C011C814 (-InverseTransformPoint@@YA-AUVisualPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?TransformPoint@@YA?AUVisualPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1C011CAE0 (-TransformPoint@@YA-AUVisualPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall MapPointsByVisualIdentifierInternal(
        struct _LUID *a1,
        struct _LUID *a2,
        int a3,
        struct VisualPoint *a4,
        struct VisualPoint *a5)
{
  int TransformFromVisualIdentifier; // ebx
  __int64 v10; // r8
  struct VisualPoint *v11; // r9
  float *v12; // rcx
  __int64 *v13; // rcx
  __int64 v15; // [rsp+28h] [rbp-51h]
  __int64 v16; // [rsp+28h] [rbp-51h]
  _BYTE v17[64]; // [rsp+38h] [rbp-41h] BYREF
  float v18[16]; // [rsp+78h] [rbp-1h] BYREF

  TransformFromVisualIdentifier = 0;
  memset(v17, 0, sizeof(v17));
  if ( a1 )
    TransformFromVisualIdentifier = GetTransformFromVisualIdentifier(a1, (struct tagINPUT_TRANSFORM *)v17);
  memset(v18, 0, sizeof(v18));
  if ( TransformFromVisualIdentifier >= 0 )
  {
    if ( a2 )
      TransformFromVisualIdentifier = GetTransformFromVisualIdentifier(a2, (struct tagINPUT_TRANSFORM *)v18);
    if ( TransformFromVisualIdentifier >= 0 )
    {
      v10 = 0LL;
      if ( a3 )
      {
        v11 = a5;
        do
        {
          v12 = (float *)((char *)v11 + 8 * v10);
          *(_QWORD *)v12 = *((_QWORD *)a4 + v10);
          if ( a1 )
          {
            v15 = TransformPoint(v12, v17, v10, v11);
            *(_QWORD *)v12 = v15;
          }
          if ( a2 )
          {
            v16 = InverseTransformPoint(v12, v18);
            *v13 = v16;
          }
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (_DWORD)v10 != a3 );
      }
    }
  }
  return (unsigned int)TransformFromVisualIdentifier;
}
