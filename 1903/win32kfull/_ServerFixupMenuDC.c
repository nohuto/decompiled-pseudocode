/*
 * XREFs of _ServerFixupMenuDC @ 0x1C010C914
 * Callers:
 *     SfnINOUTLPUAHMEASUREMENUITEM @ 0x1C010BC30 (SfnINOUTLPUAHMEASUREMENUITEM.c)
 *     SfnINLPUAHDRAWMENU @ 0x1C010C020 (SfnINLPUAHDRAWMENU.c)
 *     SfnINLPUAHINITMENU @ 0x1C010C300 (SfnINLPUAHINITMENU.c)
 *     SfnINLPUAHDRAWMENUITEM @ 0x1C010C5E0 (SfnINLPUAHDRAWMENUITEM.c)
 *     SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C0218EE0 (SfnINLPUAHNCPAINTMENUPOPUP.c)
 * Callees:
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C001F998 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x1C0021DE0 (MNGetpItemFromIndex.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     GreSetTextAlign @ 0x1C00F9CEC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00FBDFC (GreGetTextAlign.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00FBE48 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _WindowFromDC @ 0x1C010992C (_WindowFromDC.c)
 */

__int64 __fastcall ServerFixupMenuDC(HDC a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 DCEx; // rsi
  unsigned int CurrentProcessId; // ebx
  struct tagWND *v11; // rax
  __int64 v12; // rdx
  __int64 TextAlign; // r8
  __int64 v14; // r9
  struct tagWND *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *DPIMETRICS; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  _DWORD **v22; // rax
  bool v23; // zf
  _QWORD v24[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v25; // [rsp+30h] [rbp-28h]

  DCEx = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) != (CurrentProcessId & 0xFFFFFFFC) && a1 )
  {
    SmartObjStackRefBase<tagMENU>::Init(v24, 0LL);
    v25 = 0LL;
    v11 = WindowFromDC(a1);
    v15 = v11;
    if ( v11 )
    {
      DCEx = _GetDCEx(v11, 0LL, 65539LL);
      GreSelectBrush(DCEx, *(_QWORD *)(gpsi + 4752LL));
      DPIMETRICS = (__int64 *)GetDPIMETRICS(v15, v16, v17, v18);
      GreSelectFont(DCEx, *DPIMETRICS);
      v20 = ValidateHmenu(a2);
      v25 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v24, v20);
      if ( SmartObjStackRef<tagMENU>::operator bool((__int64)v24) )
      {
        TextAlign = (unsigned int)GreGetTextAlign(a1);
        if ( a4 )
        {
          v12 = *(_QWORD *)v24[0];
          if ( *(_QWORD *)(*(_QWORD *)v24[0] + 88LL) )
          {
            v21 = v25;
            if ( !v25 )
              v21 = *(_QWORD *)v24[0];
            v22 = (_DWORD **)MNGetpItemFromIndex(v21, a3);
            if ( !v22 )
              goto LABEL_16;
            v23 = (**v22 & 0x2000) == 0;
            goto LABEL_14;
          }
        }
        if ( *(_QWORD *)(*(_QWORD *)v24[0] + 88LL) )
        {
          v23 = (***(_DWORD ***)(*(_QWORD *)v24[0] + 88LL) & 0x2000) == 0;
LABEL_14:
          if ( !v23 )
            GreSetTextAlign(a1, TextAlign | 0x100);
        }
      }
    }
LABEL_16:
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v24, v12, TextAlign, v14);
  }
  return DCEx;
}
