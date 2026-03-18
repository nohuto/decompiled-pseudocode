/*
 * XREFs of _ServerFixupMenuDC @ 0x1C01060C4
 * Callers:
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C0105400 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnINLPUAHDRAWMENU @ 0x1C01057F0 (SfnINLPUAHDRAWMENU.c)
 *     SfnINLPUAHINITMENU @ 0x1C0105AC0 (SfnINLPUAHINITMENU.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1C0105D90 (SfnINLPUAHDRAWMENUITEM.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C02017D0 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     GreSelectFont @ 0x1C0056790 (GreSelectFont.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00A707C (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreGetTextAlign @ 0x1C00A70F4 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C00A72C0 (GreSetTextAlign.c)
 *     MNGetpItemFromIndex @ 0x1C00AB734 (MNGetpItemFromIndex.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00AC318 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _WindowFromDC @ 0x1C00FF34C (_WindowFromDC.c)
 */

HDC __fastcall ServerFixupMenuDC(HDC a1, __int64 a2, unsigned int a3, int a4)
{
  HDC DCEx; // rsi
  unsigned int CurrentProcessId; // ebx
  struct tagWND *v11; // rax
  __int64 v12; // rdx
  struct tagWND *v13; // rbx
  __int64 v14; // rax
  int TextAlign; // r8d
  __int64 v16; // rcx
  _DWORD **v17; // rax
  bool v18; // zf
  _QWORD v19[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+30h] [rbp-28h]

  DCEx = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) != (CurrentProcessId & 0xFFFFFFFC) && a1 )
  {
    SmartObjStackRefBase<tagMENU>::Init(v19, 0LL);
    v20 = 0LL;
    v11 = WindowFromDC(a1);
    v13 = v11;
    if ( v11 )
    {
      DCEx = (HDC)_GetDCEx(v11, 0LL, 65539LL);
      GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 4752LL));
      GetDPIMETRICS(v13);
      GreSelectFont(DCEx);
      v14 = ValidateHmenu(a2);
      v20 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v19, v14);
      if ( SmartObjStackRef<tagMENU>::operator bool((__int64)v19) )
      {
        TextAlign = GreGetTextAlign(a1);
        if ( a4 )
        {
          v12 = *(_QWORD *)v19[0];
          if ( *(_QWORD *)(*(_QWORD *)v19[0] + 88LL) )
          {
            v16 = v20;
            if ( !v20 )
              v16 = *(_QWORD *)v19[0];
            v17 = (_DWORD **)MNGetpItemFromIndex(v16, a3);
            if ( !v17 )
              goto LABEL_16;
            v18 = (**v17 & 0x2000) == 0;
            goto LABEL_14;
          }
        }
        if ( *(_QWORD *)(*(_QWORD *)v19[0] + 88LL) )
        {
          v18 = (***(_DWORD ***)(*(_QWORD *)v19[0] + 88LL) & 0x2000) == 0;
LABEL_14:
          if ( !v18 )
            GreSetTextAlign(a1, TextAlign | 0x100);
        }
      }
    }
LABEL_16:
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19, v12);
  }
  return DCEx;
}
