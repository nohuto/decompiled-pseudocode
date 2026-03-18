/*
 * XREFs of XDCOBJ_vCleanupColorTransformWrap @ 0x1C0102B70
 * Callers:
 *     <none>
 * Callees:
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C028E228 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 */

__int64 __fastcall XDCOBJ_vCleanupColorTransformWrap(struct XDCOBJ *a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // ebp
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  result = *(_QWORD *)a1;
  v3 = a2;
  v5 = *(_QWORD **)(*(_QWORD *)a1 + 2064LL);
  while ( v5 )
  {
    LOBYTE(a2) = 14;
    result = HmgShareLockCheck(*v5, a2);
    v7 = result;
    v6 = v5;
    if ( result )
    {
      COLORTRANSFORMOBJ::bDelete((COLORTRANSFORMOBJ *)&v7, a1, v3);
      result = v7;
    }
    v5 = *(_QWORD **)(*(_QWORD *)a1 + 2064LL);
    if ( v5 == v6 )
    {
      v5 = (_QWORD *)v5[1];
      *(_QWORD *)(*(_QWORD *)a1 + 2064LL) = v5;
    }
    if ( result )
      result = DEC_SHARE_REF_CNT(result);
  }
  return result;
}
