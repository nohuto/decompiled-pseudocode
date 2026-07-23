/*
 * XREFs of CmpFreeSubordinatePost @ 0x140696240
 * Callers:
 *     CmpPostNotify @ 0x1405DD29C (CmpPostNotify.c)
 *     CmNotifyRunDown @ 0x1405FA17C (CmNotifyRunDown.c)
 *     CmpPostApc @ 0x140695DB0 (CmpPostApc.c)
 *     CmpPostApcRunDown @ 0x1408021F0 (CmpPostApcRunDown.c)
 * Callees:
 *     CmpFreePostBlock @ 0x1406961EC (CmpFreePostBlock.c)
 */

void __fastcall CmpFreeSubordinatePost(__int64 a1)
{
  _QWORD **v1; // rcx
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rdx

  v1 = (_QWORD **)(a1 + 32);
  v2 = *v1;
  if ( *v1 != v1 )
  {
    v3 = *v2;
    v4 = v2 - 4;
    if ( *(_QWORD **)(*v2 + 8LL) != v2
      || (v5 = (_QWORD *)v2[1], (_QWORD *)*v5 != v2)
      || (*v5 = v3, *(_QWORD *)(v3 + 8) = v5, v6 = v4[2], *(_QWORD **)(v6 + 8) != v4 + 2)
      || (v7 = (_QWORD *)v4[3], (_QWORD *)*v7 != v4 + 2) )
    {
      __fastfail(3u);
    }
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    CmpFreePostBlock(v4);
  }
}
