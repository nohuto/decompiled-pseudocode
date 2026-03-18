/*
 * XREFs of ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C0038270
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0038440 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C002AEA0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     IntersectWithParents @ 0x1C002B4F4 (IntersectWithParents.c)
 *     LogicalToPhysicalInPlaceRgn @ 0x1C00FC95C (LogicalToPhysicalInPlaceRgn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall ValidateParents(struct tagWND *a1, int a2)
{
  __int64 v2; // rax
  struct tagWND *v4; // r9
  int v5; // r15d
  int v6; // ebp
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v10; // r8
  int v11; // ebx
  HRGN v12; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v13; // [rsp+38h] [rbp-40h] BYREF
  __int128 v14; // [rsp+48h] [rbp-30h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v4 = a1;
  v5 = 0;
  while ( (*(_BYTE *)(v2 + 31) & 0x40) != 0 )
  {
    v4 = (struct tagWND *)*((_QWORD *)v4 + 10);
    v2 = *((_QWORD *)v4 + 5);
  }
  v6 = 0;
  v7 = *((_QWORD *)a1 + 10);
  if ( *(char *)(*((_QWORD *)v4 + 5) + 18LL) < 0 )
    v6 = a2;
  while ( 1 )
  {
    if ( !v7 )
      return 1LL;
    v8 = *(_QWORD *)(v7 + 40);
    if ( (*(_BYTE *)(v8 + 31) & 2) != 0 )
      return 1LL;
    if ( *(_QWORD *)(v8 + 136) )
      break;
LABEL_10:
    v7 = *(_QWORD *)(v7 + 80);
  }
  if ( !v6 )
  {
    if ( !v5 )
    {
      v5 = 1;
      v14 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
      if ( !(unsigned int)IntersectWithParents((__int64)a1, &v14) )
        return 1LL;
      SetRectRgnIndirect(ghrgnInv1, &v14);
      v10 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL);
      if ( v10 )
      {
        if ( !(unsigned int)GreCombineRgn(ghrgnInv1, ghrgnInv1, v10, 1LL) )
          return 1LL;
      }
    }
    v13 = *(struct tagRECT *)(*(_QWORD *)(v7 + 40) + 88LL);
    if ( !(unsigned int)IntersectWithParents(v7, &v13) )
      return 1LL;
    v12 = (HRGN)ghrgnInv1;
    v11 = LogicalToPhysicalInPlaceRgn(a1, &v12);
    InternalInvalidate2((struct tagWND *)v7, v12, v12, &v13, 0x8048u);
    if ( v11 )
      GreDeleteObject(v12);
    goto LABEL_10;
  }
  return 0LL;
}
