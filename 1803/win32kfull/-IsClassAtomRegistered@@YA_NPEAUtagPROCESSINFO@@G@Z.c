/*
 * XREFs of ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C00DBD94
 * Callers:
 *     DestroyClass @ 0x1C0030804 (DestroyClass.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C00FD164 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0030C48 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

char __fastcall IsClassAtomRegistered(struct tagPROCESSINFO *a1, __int16 a2)
{
  __int64 v4; // rdx
  char v5; // di
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int64 i; // rbx
  _QWORD v10[2]; // [rsp+20h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v10, *((_QWORD *)a1 + 43));
  v5 = 1;
  while ( 1 )
  {
    v6 = (_QWORD *)v10[0];
    if ( !*(_QWORD *)v10[0] )
      break;
    if ( **(_WORD **)(*(_QWORD *)v10[0] + 8LL) == a2 || *(_WORD *)(*(_QWORD *)(*(_QWORD *)v10[0] + 8LL) + 2LL) == a2 )
      goto LABEL_26;
    v7 = **(_QWORD **)v10[0];
    if ( v7 != *(_QWORD *)v10[0] )
    {
      if ( v10[0] != gSmartObjNullRef && !--*(_DWORD *)(v10[0] + 8LL) )
      {
        if ( *(_BYTE *)(v10[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v10[0]);
      }
      if ( v7 )
      {
        v10[0] = *(_QWORD *)(v7 + 128);
        ++*(_DWORD *)(v10[0] + 8LL);
      }
      else
      {
        v10[0] = gSmartObjNullRef;
      }
    }
  }
  for ( i = *((_QWORD *)a1 + 44); ; i = **(_QWORD **)v10[0] )
  {
    if ( i != *v6 )
    {
      if ( v10[0] != gSmartObjNullRef && !--*(_DWORD *)(v10[0] + 8LL) )
      {
        if ( *(_BYTE *)(v10[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v10[0]);
      }
      if ( i )
      {
        v10[0] = *(_QWORD *)(i + 128);
        ++*(_DWORD *)(v10[0] + 8LL);
      }
      else
      {
        v10[0] = gSmartObjNullRef;
      }
    }
    if ( !*(_QWORD *)v10[0] )
      break;
    if ( **(_WORD **)(*(_QWORD *)v10[0] + 8LL) == a2 || *(_WORD *)(*(_QWORD *)(*(_QWORD *)v10[0] + 8LL) + 2LL) == a2 )
      goto LABEL_26;
    v6 = (_QWORD *)v10[0];
  }
  v5 = 0;
LABEL_26:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v10, v4);
  return v5;
}
