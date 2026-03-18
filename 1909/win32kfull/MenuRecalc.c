/*
 * XREFs of MenuRecalc @ 0x1C023FCA0
 * Callers:
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01DA008 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

_QWORD *MenuRecalc()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  unsigned int v2; // edi
  __int64 *v3; // rsi
  _BYTE *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v8, 0LL);
  v9 = 0LL;
  v2 = 0;
  v3 = (__int64 *)gpKernelHandleTable;
  v4 = (_BYTE *)(gSharedInfo[1] + 24LL);
  do
  {
    if ( *v4 == 2 )
    {
      v5 = *v3;
      v9 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v8, v5);
      v1 = 0LL;
      *(_DWORD *)(*(_QWORD *)v8[0] + 64LL) = 0;
      for ( *(_DWORD *)(*(_QWORD *)v8[0] + 68LL) = 0;
            (unsigned int)v1 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8[0] + 40LL) + 44LL);
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8[0] + 88LL) + v0) + 104LL) = -1 )
      {
        v6 = (int)v1;
        v1 = (unsigned int)(v1 + 1);
        v0 = 96 * v6;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8[0] + 88LL) + v0) + 84LL) = 0x7FFFFFFF;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8[0] + 88LL) + v0) + 88LL) = 0;
      }
    }
    ++v2;
    v4 += 32;
    v3 += 3;
  }
  while ( v2 <= giheLast );
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v8, v0, v1);
}
