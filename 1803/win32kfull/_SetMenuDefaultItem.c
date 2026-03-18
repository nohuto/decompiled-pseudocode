/*
 * XREFs of _SetMenuDefaultItem @ 0x1C00C2978
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxSetSysMenu @ 0x1C00C2450 (xxxSetSysMenu.c)
 *     ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00C28A0 (-_SetCloseDefault@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     NtUserSetMenuDefaultItem @ 0x1C010C090 (NtUserSetMenuDefaultItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     MNLookUpItem @ 0x1C0039D7C (MNLookUpItem.c)
 */

__int64 __fastcall SetMenuDefaultItem(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v6; // ebx
  __int64 *v7; // rdi
  __int64 v8; // rdx
  bool v9; // zf
  __int64 *v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  _QWORD v15[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v15, 0LL);
  v6 = 0;
  v16 = 0LL;
  if ( a2 == -1 )
  {
    v7 = 0LL;
  }
  else
  {
    v17 = *(_QWORD *)v15[0];
    v7 = MNLookUpItem(a1, a2, a3, &v17);
    v16 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v15, v17);
    if ( !v7 )
      goto LABEL_15;
    v9 = v16 ? v16 == a1 : *(_QWORD *)v15[0] == a1;
    if ( !v9 || (*(_DWORD *)*v7 & 0x800) != 0 )
      goto LABEL_15;
  }
  v10 = *(__int64 **)(a1 + 88);
  v8 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 44LL);
  if ( (_DWORD)v8 )
  {
    v11 = (unsigned int)v8;
    do
    {
      v8 = *v10;
      v12 = *(_DWORD *)(*v10 + 4);
      if ( (v12 & 0x1000) != 0 && v10 != v7 )
      {
        *(_DWORD *)(v8 + 4) = v12 & 0xFFFFEFFF;
        *(_DWORD *)(*v10 + 84) = 0x7FFFFFFF;
        *(_DWORD *)(*v10 + 88) = 0;
      }
      v10 += 12;
      --v11;
    }
    while ( v11 );
  }
  if ( a2 != -1 )
  {
    v13 = *(_DWORD *)(*v7 + 4);
    if ( (v13 & 0x1000) == 0 )
    {
      *(_DWORD *)(*v7 + 4) = v13 | 0x1000;
      *(_DWORD *)(*v7 + 84) = 0x7FFFFFFF;
      *(_DWORD *)(*v7 + 88) = 0;
      *(_DWORD *)(*(_QWORD *)(a1 + 40) + 40LL) |= 0x400u;
    }
  }
  v6 = 1;
LABEL_15:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v15, v8);
  return v6;
}
