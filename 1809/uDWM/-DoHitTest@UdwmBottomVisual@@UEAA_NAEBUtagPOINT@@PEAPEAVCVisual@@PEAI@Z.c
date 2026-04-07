/*
 * XREFs of ?DoHitTest@UdwmBottomVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x180004440
 * Callers:
 *     <none>
 * Callees:
 *     ?MovePrevious@VisualCollectionIterator@@QEAA_NXZ @ 0x1800045F4 (-MovePrevious@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z @ 0x180004638 (-TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall UdwmBottomVisual::DoHitTest(
        UdwmBottomVisual *this,
        const struct tagPOINT *a2,
        struct CVisual **a3,
        unsigned int *a4)
{
  CVisual *v8; // rsi
  struct CVisual *v9; // rax
  unsigned int v10; // ecx
  bool result; // al
  LONG y; // ecx
  char *v13; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+38h] [rbp-8h]
  __int16 v15; // [rsp+3Ch] [rbp-4h]
  unsigned int v16; // [rsp+70h] [rbp+30h] BYREF
  struct CVisual *v17; // [rsp+80h] [rbp+40h] BYREF
  struct tagPOINT v18; // [rsp+88h] [rbp+48h] BYREF

  v17 = 0LL;
  v16 = 0;
  v14 = -1;
  v15 = 0;
  v13 = (char *)this + 32;
  while ( VisualCollectionIterator::MovePrevious((VisualCollectionIterator *)&v13) )
  {
    v8 = *(CVisual **)(*((_QWORD *)v13 + 2) + 8LL * v14);
    if ( CVisual::TransformFromParent(v8, a2, &v18) )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CVisual *, struct tagPOINT *, struct CVisual **, unsigned int *))(*(_QWORD *)v8 + 136LL))(
             v8,
             &v18,
             &v17,
             &v16) )
      {
        break;
      }
    }
  }
  v9 = v17;
  if ( v17 || a2->x < 0 || a2->x >= *((_DWORD *)this + 30) || (y = a2->y, y < 0) || y >= *((_DWORD *)this + 31) )
  {
    v10 = v16;
  }
  else
  {
    v10 = *((_DWORD *)this + 48);
    v9 = this;
  }
  *a3 = v9;
  result = v9 != 0LL;
  *a4 = v10;
  return result;
}
