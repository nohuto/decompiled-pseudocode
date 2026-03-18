/*
 * XREFs of XDCOBJ_vCleanupColorTransformWrap @ 0x1C00FACA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C02512C4 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C027818C (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 */

__int64 __fastcall XDCOBJ_vCleanupColorTransformWrap(struct XDCOBJ *a1, int a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rsi
  _BYTE v8[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  result = *(_QWORD *)a1;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 2088LL);
  while ( v5 )
  {
    COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v8, *(void **)v5);
    v6 = v9;
    v7 = v5;
    if ( v9 )
    {
      COLORTRANSFORMOBJ::bDelete((COLORTRANSFORMOBJ *)v8, a1, a2);
      v6 = v9;
    }
    v5 = *(_QWORD *)(*(_QWORD *)a1 + 2088LL);
    if ( v5 == v7 )
    {
      v5 = *(_QWORD *)(v5 + 8);
      *(_QWORD *)(*(_QWORD *)a1 + 2088LL) = v5;
      v6 = v9;
    }
    if ( v6 )
      DEC_SHARE_REF_CNT(v6);
    result = UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v8);
  }
  return result;
}
