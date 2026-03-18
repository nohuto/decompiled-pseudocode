/*
 * XREFs of ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C0036A70
 * Callers:
 *     DestroyClass @ 0x1C0038CB0 (DestroyClass.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C00FE1D4 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00E108C (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

char __fastcall IsClassAtomRegistered(struct tagPROCESSINFO *a1, __int16 a2)
{
  char v4; // di
  _QWORD *v5; // rax
  __int64 v6; // rbx
  __int64 i; // rbx
  _QWORD v9[2]; // [rsp+20h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v9, *((_QWORD *)a1 + 43));
  v4 = 1;
  while ( 1 )
  {
    v5 = (_QWORD *)v9[0];
    if ( !*(_QWORD *)v9[0] )
      break;
    if ( **(_WORD **)(*(_QWORD *)v9[0] + 8LL) == a2 || *(_WORD *)(*(_QWORD *)(*(_QWORD *)v9[0] + 8LL) + 2LL) == a2 )
      goto LABEL_26;
    v6 = **(_QWORD **)v9[0];
    if ( v6 != *(_QWORD *)v9[0] )
    {
      if ( v9[0] != gSmartObjNullRef && !--*(_DWORD *)(v9[0] + 8LL) )
      {
        if ( *(_BYTE *)(v9[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v9[0]);
      }
      if ( v6 )
      {
        v9[0] = *(_QWORD *)(v6 + 128);
        ++*(_DWORD *)(v9[0] + 8LL);
      }
      else
      {
        v9[0] = gSmartObjNullRef;
      }
    }
  }
  for ( i = *((_QWORD *)a1 + 44); ; i = **(_QWORD **)v9[0] )
  {
    if ( i != *v5 )
    {
      if ( v9[0] != gSmartObjNullRef && !--*(_DWORD *)(v9[0] + 8LL) )
      {
        if ( *(_BYTE *)(v9[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v9[0]);
      }
      if ( i )
      {
        v9[0] = *(_QWORD *)(i + 128);
        ++*(_DWORD *)(v9[0] + 8LL);
      }
      else
      {
        v9[0] = gSmartObjNullRef;
      }
    }
    if ( !*(_QWORD *)v9[0] )
      break;
    if ( **(_WORD **)(*(_QWORD *)v9[0] + 8LL) == a2 || *(_WORD *)(*(_QWORD *)(*(_QWORD *)v9[0] + 8LL) + 2LL) == a2 )
      goto LABEL_26;
    v5 = (_QWORD *)v9[0];
  }
  v4 = 0;
LABEL_26:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v9);
  return v4;
}
