/*
 * XREFs of _ServerFixupMenuDC @ 0x1C00E6B94
 * Callers:
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C00E5EB0 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnINLPUAHDRAWMENU @ 0x1C00E62A0 (SfnINLPUAHDRAWMENU.c)
 *     SfnINLPUAHINITMENU @ 0x1C00E6580 (SfnINLPUAHINITMENU.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1C00E6860 (SfnINLPUAHDRAWMENUITEM.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C02189A0 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _WindowFromDC @ 0x1C00E3ECC (_WindowFromDC.c)
 *     GreGetTextAlign @ 0x1C010AB68 (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C0128AB8 (GreSetTextAlign.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C0128B34 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     MNGetpItemFromIndex @ 0x1C012A5A4 (MNGetpItemFromIndex.c)
 *     GreSelectFont @ 0x1C012B530 (GreSelectFont.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C012DCDC (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 */

__int64 __fastcall ServerFixupMenuDC(HDC a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 DCEx; // rsi
  unsigned int CurrentProcessId; // ebx
  struct tagWND *v11; // rax
  __int64 v12; // rdx
  __int64 TextAlign; // r8
  struct tagWND *v14; // rbx
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  _DWORD **v18; // rax
  bool v19; // zf
  _QWORD v20[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+30h] [rbp-28h]

  DCEx = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) != (CurrentProcessId & 0xFFFFFFFC) && a1 )
  {
    SmartObjStackRefBase<tagMENU>::Init(v20, 0LL);
    v21 = 0LL;
    v11 = WindowFromDC(a1);
    v14 = v11;
    if ( v11 )
    {
      DCEx = _GetDCEx(v11, 0LL, 65539LL);
      GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 4752LL));
      DPIMETRICS = GetDPIMETRICS(v14);
      GreSelectFont(DCEx, *(_QWORD *)DPIMETRICS);
      v16 = ValidateHmenu(a2);
      v21 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v20, v16);
      if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v20) )
      {
        TextAlign = (unsigned int)GreGetTextAlign(a1);
        if ( a4 )
        {
          v12 = *(_QWORD *)v20[0];
          if ( *(_QWORD *)(*(_QWORD *)v20[0] + 88LL) )
          {
            v17 = v21;
            if ( !v21 )
              v17 = *(_QWORD *)v20[0];
            v18 = (_DWORD **)MNGetpItemFromIndex(v17, a3, TextAlign);
            if ( !v18 )
              goto LABEL_16;
            v19 = (**v18 & 0x2000) == 0;
            goto LABEL_14;
          }
        }
        if ( *(_QWORD *)(*(_QWORD *)v20[0] + 88LL) )
        {
          v19 = (***(_DWORD ***)(*(_QWORD *)v20[0] + 88LL) & 0x2000) == 0;
LABEL_14:
          if ( !v19 )
            GreSetTextAlign(a1);
        }
      }
    }
LABEL_16:
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20, v12, TextAlign);
  }
  return DCEx;
}
