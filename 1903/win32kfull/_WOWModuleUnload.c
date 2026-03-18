/*
 * XREFs of _WOWModuleUnload @ 0x1C0214680
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     DestroyClass @ 0x1C0097F80 (DestroyClass.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0106C8C (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     ?PseudoDestroyClassWindows@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C02144C0 (-PseudoDestroyClassWindows@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 */

__int64 __fastcall WOWModuleUnload(__int64 a1, __int64 a2)
{
  __int16 v2; // r15
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rsi
  __int64 v4; // r14
  struct _CALLPROCDATA ***v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _CALLPROCDATA **v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD v14[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-10h] BYREF

  v2 = a1;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1, a2);
  v4 = 2LL;
  v5 = (struct _CALLPROCDATA ***)((char *)CurrentProcessWin32Process + 344);
  do
  {
    while ( *v5 )
    {
      SmartObjStackRefBase<tagCLS>::Init(v14, 0LL);
      v9 = *v5;
      if ( HIWORD(*((_DWORD *)(*v5)[1] + 16)) == v2 )
      {
        if ( !*((_DWORD *)v9 + 18) )
        {
          DestroyClass(CurrentProcessWin32Process, v5);
          goto LABEL_27;
        }
        SmartObjStackRefBase<tagCLS>::Init(v15, (__int64)*v5);
        PseudoDestroyClassWindows(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 448LL) + 8LL) + 24LL), v15);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v15, v10, v11, v12);
        *((_WORD *)(*v5)[1] + 3) |= 4u;
      }
      else
      {
        if ( v9 != *(struct _CALLPROCDATA ***)v14[0] )
        {
          if ( v14[0] != gSmartObjNullRef && !--*(_DWORD *)(v14[0] + 8LL) )
          {
            if ( *(_BYTE *)(v14[0] + 12LL) )
              Win32FreeToPagedLookasideList(gpStackRefLookAside, v14[0]);
          }
          if ( v9 )
          {
            v14[0] = v9[16];
            ++*(_DWORD *)(v14[0] + 8LL);
          }
          else
          {
            v14[0] = gSmartObjNullRef;
          }
        }
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v14[0] + 8LL) + 6LL) & 8) != 0 )
        {
          v6 = *(_QWORD *)v14[0];
          if ( v2 == *(_WORD *)(*(int *)(*(_QWORD *)(*(_QWORD *)v14[0] + 8LL) + 12LL)
                              + *(_QWORD *)(*(_QWORD *)v14[0] + 8LL)
                              + 94LL) )
          {
            v8 = 0LL;
            v6 = 868LL;
            v7 = 0LL;
            while ( !*((_QWORD *)&WPP_MAIN_CB.SecurityDescriptor + v7)
                 || *(_WORD *)(*v5)[1] != *(_WORD *)(v6 + gpsi)
                 || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v14[0] + 8LL) + 6LL) & 1) != 0 )
            {
              v8 = (unsigned int)(v8 + 1);
              ++v7;
              v6 += 2LL;
              if ( v6 >= 918 )
                goto LABEL_23;
            }
            *((_QWORD *)(*v5)[1] + 4) = *((_QWORD *)&WPP_MAIN_CB.SecurityDescriptor + v7);
LABEL_23:
            if ( (_DWORD)v8 == 25 && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v14[0] + 8LL) + 6LL) & 1) == 0 )
            {
              v6 = gpsi;
              *((_QWORD *)(*v5)[1] + 4) = *(_QWORD *)(gpsi + 616LL);
            }
          }
        }
      }
      v5 = (struct _CALLPROCDATA ***)*v5;
LABEL_27:
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v14, v6, v7, v8);
    }
    v5 = (struct _CALLPROCDATA ***)((char *)CurrentProcessWin32Process + 352);
    --v4;
  }
  while ( v4 );
  return 1LL;
}
