/*
 * XREFs of ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C0095D38
 * Callers:
 *     DestroyClass @ 0x1C0097F80 (DestroyClass.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C0123AD4 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0106C8C (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

char __fastcall IsClassAtomRegistered(struct tagPROCESSINFO *a1, __int16 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // di
  _QWORD *v8; // rax
  __int64 v9; // rbx
  __int64 i; // rbx
  _QWORD v12[2]; // [rsp+20h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v12, *((_QWORD *)a1 + 43));
  v7 = 1;
  while ( 1 )
  {
    v8 = (_QWORD *)v12[0];
    if ( !*(_QWORD *)v12[0] )
      break;
    if ( **(_WORD **)(*(_QWORD *)v12[0] + 8LL) == a2 || *(_WORD *)(*(_QWORD *)(*(_QWORD *)v12[0] + 8LL) + 2LL) == a2 )
      goto LABEL_26;
    v9 = **(_QWORD **)v12[0];
    if ( v9 != *(_QWORD *)v12[0] )
    {
      if ( v12[0] != gSmartObjNullRef && !--*(_DWORD *)(v12[0] + 8LL) )
      {
        if ( *(_BYTE *)(v12[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v12[0]);
      }
      if ( v9 )
      {
        v12[0] = *(_QWORD *)(v9 + 128);
        ++*(_DWORD *)(v12[0] + 8LL);
      }
      else
      {
        v12[0] = gSmartObjNullRef;
      }
    }
  }
  for ( i = *((_QWORD *)a1 + 44); ; i = **(_QWORD **)v12[0] )
  {
    if ( i != *v8 )
    {
      if ( v12[0] != gSmartObjNullRef && !--*(_DWORD *)(v12[0] + 8LL) )
      {
        if ( *(_BYTE *)(v12[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v12[0]);
      }
      if ( i )
      {
        v12[0] = *(_QWORD *)(i + 128);
        ++*(_DWORD *)(v12[0] + 8LL);
      }
      else
      {
        v12[0] = gSmartObjNullRef;
      }
    }
    if ( !*(_QWORD *)v12[0] )
      break;
    if ( **(_WORD **)(*(_QWORD *)v12[0] + 8LL) == a2 || *(_WORD *)(*(_QWORD *)(*(_QWORD *)v12[0] + 8LL) + 2LL) == a2 )
      goto LABEL_26;
    v8 = (_QWORD *)v12[0];
  }
  v7 = 0;
LABEL_26:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v12, v4, v5, v6);
  return v7;
}
