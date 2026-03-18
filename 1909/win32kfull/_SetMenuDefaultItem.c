/*
 * XREFs of _SetMenuDefaultItem @ 0x1C012E394
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     NtUserSetMenuDefaultItem @ 0x1C010D950 (NtUserSetMenuDefaultItem.c)
 *     xxxSetSysMenu @ 0x1C012C660 (xxxSetSysMenu.c)
 *     ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C012E358 (-_SetCloseDefault@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNLookUpItem @ 0x1C004A90C (MNLookUpItem.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall SetMenuDefaultItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 *v8; // rdi
  __int64 v9; // rdx
  bool v10; // zf
  __int64 *v11; // rcx
  int v12; // eax
  int v13; // eax
  _QWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v15, 0LL);
  v7 = 0;
  v16 = 0LL;
  if ( a2 == -1 )
  {
    v8 = 0LL;
  }
  else
  {
    v17 = *(_QWORD *)v15[0];
    v8 = MNLookUpItem(a1, a2, a3, &v17);
    v16 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v15, v17);
    if ( !v8 )
      goto LABEL_15;
    v10 = v16 ? v16 == a1 : *(_QWORD *)v15[0] == a1;
    if ( !v10 || (*(_DWORD *)*v8 & 0x800) != 0 )
      goto LABEL_15;
  }
  v11 = *(__int64 **)(a1 + 88);
  v9 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 44LL);
  if ( (_DWORD)v9 )
  {
    v6 = (unsigned int)v9;
    do
    {
      v9 = *v11;
      v12 = *(_DWORD *)(*v11 + 4);
      if ( (v12 & 0x1000) != 0 && v11 != v8 )
      {
        *(_DWORD *)(v9 + 4) = v12 & 0xFFFFEFFF;
        *(_DWORD *)(*v11 + 84) = 0x7FFFFFFF;
        *(_DWORD *)(*v11 + 88) = 0;
      }
      v11 += 12;
      --v6;
    }
    while ( v6 );
  }
  if ( a2 != -1 )
  {
    v13 = *(_DWORD *)(*v8 + 4);
    if ( (v13 & 0x1000) == 0 )
    {
      *(_DWORD *)(*v8 + 4) = v13 | 0x1000;
      *(_DWORD *)(*v8 + 84) = 0x7FFFFFFF;
      *(_DWORD *)(*v8 + 88) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 40LL) |= 0x400u;
    }
  }
  v7 = 1;
LABEL_15:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v15, v9, v6);
  return v7;
}
