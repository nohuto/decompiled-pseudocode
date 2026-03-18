/*
 * XREFs of MenuRecalc @ 0x1C02402C0
 * Callers:
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01DA188 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

_QWORD *MenuRecalc()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  unsigned int v3; // edi
  __int64 *v4; // rsi
  _BYTE *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+30h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v9, 0LL);
  v10 = 0LL;
  v3 = 0;
  v4 = (__int64 *)gpKernelHandleTable;
  v5 = (_BYTE *)(gSharedInfo[1] + 24LL);
  do
  {
    if ( *v5 == 2 )
    {
      v6 = *v4;
      v10 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v9, v6);
      v1 = 0LL;
      *(_DWORD *)(*(_QWORD *)v9[0] + 64LL) = 0;
      for ( *(_DWORD *)(*(_QWORD *)v9[0] + 68LL) = 0;
            (unsigned int)v1 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9[0] + 40LL) + 44LL);
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9[0] + 88LL) + v0) + 104LL) = -1 )
      {
        v7 = (int)v1;
        v1 = (unsigned int)(v1 + 1);
        v0 = 96 * v7;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9[0] + 88LL) + v0) + 84LL) = 0x7FFFFFFF;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9[0] + 88LL) + v0) + 88LL) = 0;
      }
    }
    ++v3;
    v5 += 32;
    v4 += 3;
  }
  while ( v3 <= giheLast );
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v9, v0, v1, v2);
}
