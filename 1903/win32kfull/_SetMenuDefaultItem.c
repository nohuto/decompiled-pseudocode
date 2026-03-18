/*
 * XREFs of _SetMenuDefaultItem @ 0x1C008F994
 * Callers:
 *     xxxSetSysMenu @ 0x1C001FC60 (xxxSetSysMenu.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C008F958 (-_SetCloseDefault@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     NtUserSetMenuDefaultItem @ 0x1C0132E50 (NtUserSetMenuDefaultItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNLookUpItem @ 0x1C00A9B2C (MNLookUpItem.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall SetMenuDefaultItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r9
  bool v11; // zf
  __int64 *v12; // rcx
  int v13; // eax
  int v14; // eax
  _QWORD v16[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]
  __int64 v18; // [rsp+68h] [rbp+20h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v16, 0LL);
  v7 = 0;
  v17 = 0LL;
  if ( a2 == -1 )
  {
    v8 = 0LL;
  }
  else
  {
    v18 = *(_QWORD *)v16[0];
    v8 = MNLookUpItem(a1, a2, a3, &v18);
    v17 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v16, v18);
    if ( !v8 )
      goto LABEL_15;
    v11 = v17 ? v17 == a1 : *(_QWORD *)v16[0] == a1;
    if ( !v11 || (**(_DWORD **)v8 & 0x800) != 0 )
      goto LABEL_15;
  }
  v10 = 4096LL;
  v12 = *(__int64 **)(a1 + 88);
  v9 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 44LL);
  if ( (_DWORD)v9 )
  {
    v6 = (unsigned int)v9;
    do
    {
      v9 = *v12;
      v13 = *(_DWORD *)(*v12 + 4);
      if ( (v13 & 0x1000) != 0 && v12 != (__int64 *)v8 )
      {
        *(_DWORD *)(v9 + 4) = v13 & 0xFFFFEFFF;
        *(_DWORD *)(*v12 + 84) = 0x7FFFFFFF;
        *(_DWORD *)(*v12 + 88) = 0;
      }
      v12 += 12;
      --v6;
    }
    while ( v6 );
  }
  if ( a2 != -1 )
  {
    v14 = *(_DWORD *)(*(_QWORD *)v8 + 4LL);
    if ( (v14 & 0x1000) == 0 )
    {
      *(_DWORD *)(*(_QWORD *)v8 + 4LL) = v14 | 0x1000;
      *(_DWORD *)(*(_QWORD *)v8 + 84LL) = 0x7FFFFFFF;
      *(_DWORD *)(*(_QWORD *)v8 + 88LL) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 40LL) |= 0x400u;
    }
  }
  v7 = 1;
LABEL_15:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v16, v9, v6, v10);
  return v7;
}
