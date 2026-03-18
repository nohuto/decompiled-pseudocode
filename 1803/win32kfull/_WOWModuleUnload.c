/*
 * XREFs of _WOWModuleUnload @ 0x1C01D8320
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     DestroyClass @ 0x1C0030804 (DestroyClass.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0030C48 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ?PseudoDestroyClassWindows@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C01D8178 (-PseudoDestroyClassWindows@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 */

__int64 __fastcall WOWModuleUnload(__int64 a1)
{
  __int16 v1; // r15
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rsi
  __int64 v3; // r14
  struct _CALLPROCDATA ***v4; // rbx
  __int64 v5; // rdx
  struct _CALLPROCDATA **v6; // rdi
  __int64 v7; // rdx
  int v8; // r9d
  __int64 v9; // r8
  _QWORD v11[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-10h] BYREF

  v1 = a1;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  v3 = 2LL;
  v4 = (struct _CALLPROCDATA ***)((char *)CurrentProcessWin32Process + 344);
  do
  {
    while ( *v4 )
    {
      SmartObjStackRefBase<tagCLS>::Init(v11, 0LL);
      v6 = *v4;
      if ( HIWORD(*((_DWORD *)(*v4)[1] + 16)) == v1 )
      {
        if ( !*((_DWORD *)v6 + 18) )
        {
          DestroyClass(CurrentProcessWin32Process, v4);
          goto LABEL_27;
        }
        SmartObjStackRefBase<tagCLS>::Init(v12, (__int64)*v4);
        PseudoDestroyClassWindows(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL), v12);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v12, v7);
        *((_WORD *)(*v4)[1] + 3) |= 4u;
      }
      else
      {
        if ( v6 != *(struct _CALLPROCDATA ***)v11[0] )
        {
          if ( v11[0] != gSmartObjNullRef && !--*(_DWORD *)(v11[0] + 8LL) )
          {
            if ( *(_BYTE *)(v11[0] + 12LL) )
              Win32FreeToPagedLookasideList(gpStackRefLookAside, v11[0]);
          }
          if ( v6 )
          {
            v11[0] = v6[16];
            ++*(_DWORD *)(v11[0] + 8LL);
          }
          else
          {
            v11[0] = gSmartObjNullRef;
          }
        }
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v11[0] + 8LL) + 6LL) & 8) != 0 )
        {
          v5 = *(_QWORD *)v11[0];
          if ( v1 == *(_WORD *)(*(int *)(*(_QWORD *)(*(_QWORD *)v11[0] + 8LL) + 12LL)
                              + *(_QWORD *)(*(_QWORD *)v11[0] + 8LL)
                              + 94LL) )
          {
            v8 = 0;
            v5 = 868LL;
            v9 = 0LL;
            while ( !gpfnwp[v9]
                 || *(_WORD *)(*v4)[1] != *(_WORD *)(v5 + gpsi)
                 || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v11[0] + 8LL) + 6LL) & 1) != 0 )
            {
              ++v8;
              ++v9;
              v5 += 2LL;
              if ( v5 >= 918 )
                goto LABEL_23;
            }
            *((_QWORD *)(*v4)[1] + 4) = gpfnwp[v9];
LABEL_23:
            if ( v8 == 25 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v11[0] + 8LL) + 6LL) & 1) == 0 )
            {
              v5 = gpsi;
              *((_QWORD *)(*v4)[1] + 4) = *(_QWORD *)(gpsi + 616LL);
            }
          }
        }
      }
      v4 = (struct _CALLPROCDATA ***)*v4;
LABEL_27:
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v11, v5);
    }
    v4 = (struct _CALLPROCDATA ***)((char *)CurrentProcessWin32Process + 352);
    --v3;
  }
  while ( v3 );
  return 1LL;
}
