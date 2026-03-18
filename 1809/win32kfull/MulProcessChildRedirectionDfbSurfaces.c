/*
 * XREFs of MulProcessChildRedirectionDfbSurfaces @ 0x1C028A300
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0251304 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall MulProcessChildRedirectionDfbSurfaces(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned int v5; // ebx
  _QWORD *v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rax
  _BYTE v10[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  SURFREF::SURFREF((SURFREF *)v10);
  LOBYTE(v2) = 5;
  v3 = HmgShareLock(a1, v2);
  v11 = v3;
  v4 = 0LL;
  v5 = 1;
  v6 = *(_QWORD **)(v3 + 24);
  v7 = *v6;
  if ( *(_DWORD *)(*v6 + 16LL) )
  {
    while ( 1 )
    {
      v8 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v6[1] + 8 * v4));
      if ( (*(_DWORD *)(v8 + 116) & 1) != 0 && !pProcessDfbSurfacesInternal(v8, 1LL) )
        break;
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= *(_DWORD *)(v7 + 16) )
        goto LABEL_7;
    }
    v5 = 0;
LABEL_7:
    v3 = v11;
  }
  if ( v3 )
    DEC_SHARE_REF_CNT(v3);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v10);
  return v5;
}
